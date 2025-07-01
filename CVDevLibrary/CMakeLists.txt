cmake_minimum_required(VERSION 3.5)

project(CVDevLibrary LANGUAGES CXX)

if( NOT CMAKE_BUILD_TYPE )
    set(CMAKE_BUILD_TYPE Release)
endif()

if( NOT WIN32 )
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
    set(CMAKE_CXX_FLAGS "-Wall -Wextra")
endif()

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(OpenCV CONFIG REQUIRED)

file(GLOB CPP_FILES *.cpp)
file(GLOB HPP_FILES *.hpp)

add_library(${PROJECT_NAME} SHARED
    ${CPP_FILES}
    ${HPP_FILES}
    MainWindow.ui

    resources/resources.qrc
    node_editor_v3_integration/NewNodeEditorWidget.cpp                      #+add
    node_editor_v3_integration/example_models/NumberSourceDataModel.cpp     #+add
    node_editor_v3_integration/example_models/NumberDisplayDataModel.cpp    #+add

    node_editor_v3_integration/example_models/AdditionModel.hpp             #+add
    node_editor_v3_integration/NewNodeEditorWidget.h                        #+add
    node_editor_v3_integration/example_models/NumberSourceDataModel.hpp     #+add
    node_editor_v3_integration/example_models/NumberDisplayDataModel.hpp    #+add

)

add_definitions(-DQT_DEPRECATED_WARNINGS -DNODE_EDITOR_SHARED -DCVDEV_LIBRARY)

include_directories(
    ${NodeEditor_INCLUDE_DIRS}
    ${QtPropertyBrowserLibrary_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/node_editor_v3_integration                 #+add
    ${CMAKE_CURRENT_SOURCE_DIR}/node_editor_v3_integration/example_models  #+add
)

# Required on Unix OS family to be able to be linked into shared libraries.
set_target_properties(${PROJECT_NAME}
                      PROPERTIES POSITION_INDEPENDENT_CODE ON
                      RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/CVDev/)

target_link_libraries(${PROJECT_NAME}
    # NodeEditor    #Cancel V2
    QtNodes         #+add new 'target' which created by CMakeLists.txt inside external/nodeeditor_v3
                    #Check target name by go to external/nodeeditor_v3/CMakeLists.txt
                    #Find add_library(QtNodes
                    #${CPP_SOURCE_FILES}
                    #${HPP_HEADER_FILES}
                    #${RESOURCES})
                    # So target name is QtNodes
    QtPropertyBrowserLibrary
    ${OpenCV_LIBS}
    )

set(${PROJECT_NAME}_INCLUDE_DIRS
    ${PROJECT_SOURCE_DIR}
    ${NodeEditor_INCLUDE_DIRS}
    ${QtPropertyBrowserLibrary_INCLUDE_DIRS}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
