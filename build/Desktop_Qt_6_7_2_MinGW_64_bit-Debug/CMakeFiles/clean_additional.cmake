# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QuantumSandbox_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QuantumSandbox_autogen.dir\\ParseCache.txt"
  "QuantumSandbox_autogen"
  )
endif()
