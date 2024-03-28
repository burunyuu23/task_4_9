# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src\\CMakeFiles\\task_4_9_v2_autogen.dir\\AutogenUsed.txt"
  "src\\CMakeFiles\\task_4_9_v2_autogen.dir\\ParseCache.txt"
  "src\\task_4_9_v2_autogen"
  )
endif()
