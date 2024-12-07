#------------------ toolchain -----------------
#target has no os so need to give it as generic
SET(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR 8051)

#set compiler dep.
SET(CMAKE_C_COMPILER sdcc)
#SET(CMAKE_CXX_COMPILER sdcc)

# here is the target environment is located
SET(CMAKE_FIND_ROOT_PATH $ENV{SDCC_TOOL})

# programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
#------------------ toolchain -----------------