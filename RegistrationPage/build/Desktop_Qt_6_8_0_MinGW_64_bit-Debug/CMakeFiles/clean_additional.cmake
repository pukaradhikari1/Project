# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RegistrationPage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RegistrationPage_autogen.dir\\ParseCache.txt"
  "RegistrationPage_autogen"
  )
endif()
