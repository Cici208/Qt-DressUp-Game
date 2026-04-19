# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MiracleDressGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MiracleDressGame_autogen.dir\\ParseCache.txt"
  "MiracleDressGame_autogen"
  )
endif()
