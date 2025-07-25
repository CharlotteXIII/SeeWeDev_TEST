cmake_minimum_required(VERSION 3.8)

cmake_policy(SET CMP0072 NEW) # new in 3.11. The NEW behavior for this policy is to set OpenGL_GL_PREFERENCE to GLVND.
cmake_policy(SET CMP0068 NEW) # new in 3.9. The NEW behavior of this policy is to ignore the RPATH settings for install_name on macOS.


project(NodeEditor LANGUAGES CXX) # <<changed>>

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
set(OpenGL_GL_PREFERENCE LEGACY)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

get_directory_property(_has_parent PARENT_DIRECTORY)
if(_has_parent)
  set(is_root_project OFF)
else()
  set(is_root_project ON)
endif()

set(QT_NODES_DEVELOPER_DEFAULTS "${is_root_project}" CACHE BOOL "Turns on default settings for development of QtNodes")

option(BUILD_TESTING "Build tests" "${QT_NODES_DEVELOPER_DEFAULTS}")
option(BUILD_EXAMPLES "Build Examples" "${QT_NODES_DEVELOPER_DEFAULTS}")
option(BUILD_DOCS "Build Documentation" "${QT_NODES_DEVELOPER_DEFAULTS}")
option(BUILD_SHARED_LIBS "Build as shared library" ON)
option(BUILD_DEBUG_POSTFIX_D "Append d suffix to debug libraries" OFF)
option(QT_NODES_FORCE_TEST_COLOR "Force colorized unit test output" OFF)
option(USE_QT6 "Build with Qt6 (Enabled by default)" ON)

enable_testing()

if(QT_NODES_DEVELOPER_DEFAULTS)
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
endif()

if(BUILD_DEBUG_POSTFIX_D)
  set(CMAKE_DEBUG_POSTFIX "d")
  set(CMAKE_RELEASE_POSTFIX "")
  set(CMAKE_RELWITHDEBINFO_POSTFIX "rd")
  set(CMAKE_MINSIZEREL_POSTFIX "s")
endif()

add_subdirectory(external)

if(USE_QT6)
  find_package(QT NAMES Qt6 REQUIRED COMPONENTS Widgets)
else()
  find_package(QT NAMES Qt5 REQUIRED COMPONENTS Widgets)
endif()

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Gui OpenGL)
message(STATUS "QT_VERSION: ${QT_VERSION}, QT_DIR: ${QT_DIR}")

if (${QT_VERSION} VERSION_LESS 5.11.0)
  message(FATAL_ERROR "Requires qt version >= 5.11.0, Your current version is ${QT_VERSION}")
endif()

if (${QT_VERSION_MAJOR} EQUAL 6)
  qt_add_resources(RESOURCES ./resources/resources.qrc)
else()
  qt5_add_resources(RESOURCES ./resources/resources.qrc)
endif()

# Unfortunately, as we have a split include/src, AUTOMOC doesn't work.
# We'll have to manually specify some files
set(CMAKE_AUTOMOC ON)

set(CPP_SOURCE_FILES
  src/AbstractGraphModel.cpp
  src/AbstractNodeGeometry.cpp
  src/BasicGraphicsScene.cpp
  src/ConnectionGraphicsObject.cpp
  src/ConnectionState.cpp
  src/ConnectionStyle.cpp
  src/DataFlowGraphModel.cpp
  src/DataFlowGraphicsScene.cpp
  src/DefaultConnectionPainter.cpp
  src/DefaultHorizontalNodeGeometry.cpp
  src/DefaultNodePainter.cpp
  src/DefaultVerticalNodeGeometry.cpp
  src/Definitions.cpp
  src/GraphicsView.cpp
  src/GraphicsViewStyle.cpp
  src/NodeConnectionInteraction.cpp
  src/NodeDelegateModel.cpp
  src/NodeDelegateModelRegistry.cpp
  src/NodeGraphicsObject.cpp
  src/NodeState.cpp
  src/NodeStyle.cpp
  src/StyleCollection.cpp
  src/UndoCommands.cpp
  src/locateNode.cpp
)

set(HPP_HEADER_FILES
  include/nodes/internal/AbstractConnectionPainter.hpp
  include/nodes/internal/AbstractGraphModel.hpp
  include/nodes/internal/AbstractNodeGeometry.hpp
  include/nodes/internal/AbstractNodePainter.hpp
  include/nodes/internal/BasicGraphicsScene.hpp
  include/nodes/internal/Compiler.hpp
  include/nodes/internal/ConnectionGraphicsObject.hpp
  include/nodes/internal/ConnectionIdHash.hpp
  include/nodes/internal/ConnectionIdUtils.hpp
  include/nodes/internal/ConnectionState.hpp
  include/nodes/internal/ConnectionStyle.hpp
  include/nodes/internal/DataFlowGraphicsScene.hpp
  include/nodes/internal/DataFlowGraphModel.hpp
  include/nodes/internal/Definitions.hpp
  include/nodes/internal/Export.hpp
  include/nodes/internal/GraphicsView.hpp
  include/nodes/internal/GraphicsViewStyle.hpp
  include/nodes/internal/locateNode.hpp
  include/nodes/internal/NodeData.hpp
  include/nodes/internal/NodeDelegateModel.hpp
  include/nodes/internal/NodeDelegateModelRegistry.hpp
  include/nodes/internal/NodeGraphicsObject.hpp
  include/nodes/internal/NodeState.hpp
  include/nodes/internal/NodeStyle.hpp
  include/nodes/internal/OperatingSystem.hpp
  include/nodes/internal/QStringStdHash.hpp
  include/nodes/internal/QUuidStdHash.hpp
  include/nodes/internal/Serializable.hpp
  include/nodes/internal/Style.hpp
  include/nodes/internal/StyleCollection.hpp
  include/nodes/internal/DefaultConnectionPainter.hpp
  include/nodes/internal/DefaultHorizontalNodeGeometry.hpp
  include/nodes/internal/DefaultNodePainter.hpp
  include/nodes/internal/DefaultVerticalNodeGeometry.hpp
  include/nodes/internal/NodeConnectionInteraction.hpp
  include/nodes/internal/UndoCommands.hpp
)

# If we want to give the option to build a static library,
# set BUILD_SHARED_LIBS option to OFF

add_library(${PROJECT_NAME} SHARED     # <<changed>>
  ${CPP_SOURCE_FILES}
  ${HPP_HEADER_FILES}
  ${RESOURCES}
)

# add_library(QtNodes::QtNodes ALIAS QtNodes) # <<changed to comment>>


target_include_directories(NodeEditor  # <<changed QtNodes -> ์NodeEditor>>
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/nodes/internal> <<changed QtNodes -> node>> path
)

target_link_libraries(NodeEditor       # <<changed QtNodes -> NodeEditor>>
  PUBLIC
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::OpenGL
)

target_compile_definitions(NodeEditor  # <<changed QtNodes -> NodeEditor>>
  PUBLIC
    $<IF:$<BOOL:${BUILD_SHARED_LIBS}>, NODE_EDITOR_SHARED, NODE_EDITOR_STATIC>
  PRIVATE
    NODE_EDITOR_EXPORTS
    #NODE_DEBUG_DRAWING
    QT_NO_KEYWORDS
)


target_compile_options(NodeEditor    # <<changed QtNodes -> NodeEditor>>
  PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/W4 /wd4127 /EHsc /utf-8>
    $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra>
    $<$<CXX_COMPILER_ID:AppleClang>:-Wall -Wextra -Werror>
)
if(NOT "${CMAKE_CXX_SIMULATE_ID}" STREQUAL "MSVC")
  # Clang-Cl on MSVC identifies as "Clang" but behaves more like MSVC:
  target_compile_options(NodeEditor  # <<changed QtNodes -> NodeEditor>>
    PRIVATE
      $<$<CXX_COMPILER_ID:Clang>:-Wall -Wextra>
  )
endif()

if(QT_NODES_DEVELOPER_DEFAULTS)
  target_compile_features(NodeEditor PUBLIC cxx_std_14)              # <<changed QtNodes -> NodeEditor>>
  set_target_properties(NodeEditor PROPERTIES CXX_EXTENSIONS OFF)    # <<changed QtNodes -> NodeEditor>>
endif()


set_target_properties(NodeEditor     # <<changed QtNodes -> NodeEditor>>
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

######
# Moc
##

file(GLOB_RECURSE HEADERS_TO_MOC include/nodes/internal/*.hpp)    # <<changed QtNodes -> nodes>>

if (${QT_VERSION_MAJOR} EQUAL 6)
  qt_wrap_cpp(nodeeditorv3_moc
      ${HEADERS_TO_MOC}
      TARGET NodeEditor            # <<changed QtNodes -> NodeEditor>>
    OPTIONS --no-notes # Don't display a note for the headers which don't produce a moc_*.cpp
  )
else()
  qt5_wrap_cpp(nodeeditorv3_moc
  ${HEADERS_TO_MOC}
  TARGET NodeEditor                # <<changed QtNodes -> NodeEditor>>
  OPTIONS --no-notes # Don't display a note for the headers which don't produce a moc_*.cpp
  )
endif()

target_sources(NodeEditor PRIVATE ${nodeeditorv3_moc})    # <<changed QtNodes -> NodeEditor>>

# Deleted Installation, Automated Tests and Example
