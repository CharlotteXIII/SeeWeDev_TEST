cmake_minimum_required(VERSION 3.10)

project(CVDev)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

if( "${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}" )
    message(SEND_ERROR "In-source builds are not allowed.")
endif()

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)

if( WIN32 )
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif()

# NO_add_subdirectory(NodeEditor) #ver2 old
add_subdirectory(QtPropertyBrowserLibrary)
add_subdirectory(CVDevLibrary)

add_subdirectory(CVDev)

# add_subdirectory(Plugins) #Temporary_Close

add_subdirectory(nodeeditor_v3) #add New v3
