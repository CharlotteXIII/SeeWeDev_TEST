# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CVDev/CMakeFiles/CVDev_autogen.dir/AutogenUsed.txt"
  "CVDev/CMakeFiles/CVDev_autogen.dir/ParseCache.txt"
  "CVDev/CVDev_autogen"
  "CVDevLibrary/CMakeFiles/CVDevLibrary_autogen.dir/AutogenUsed.txt"
  "CVDevLibrary/CMakeFiles/CVDevLibrary_autogen.dir/ParseCache.txt"
  "CVDevLibrary/CVDevLibrary_autogen"
  "Plugins/BasicNodes/BasicNodes_autogen"
  "Plugins/BasicNodes/CMakeFiles/BasicNodes_autogen.dir/AutogenUsed.txt"
  "Plugins/BasicNodes/CMakeFiles/BasicNodes_autogen.dir/ParseCache.txt"
  "Plugins/DNNNodes/CMakeFiles/DNNNodes_autogen.dir/AutogenUsed.txt"
  "Plugins/DNNNodes/CMakeFiles/DNNNodes_autogen.dir/ParseCache.txt"
  "Plugins/DNNNodes/DNNNodes_autogen"
  "QtPropertyBrowserLibrary/CMakeFiles/QtPropertyBrowserLibrary_autogen.dir/AutogenUsed.txt"
  "QtPropertyBrowserLibrary/CMakeFiles/QtPropertyBrowserLibrary_autogen.dir/ParseCache.txt"
  "QtPropertyBrowserLibrary/QtPropertyBrowserLibrary_autogen"
  "nodeeditor_v3/CMakeFiles/QtNodes_autogen.dir/AutogenUsed.txt"
  "nodeeditor_v3/CMakeFiles/QtNodes_autogen.dir/ParseCache.txt"
  "nodeeditor_v3/QtNodes_autogen"
  )
endif()
