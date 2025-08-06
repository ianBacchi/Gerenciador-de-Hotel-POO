# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Hotel3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Hotel3_autogen.dir\\ParseCache.txt"
  "Hotel3_autogen"
  )
endif()
