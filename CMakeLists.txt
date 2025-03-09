CMAKE_MINIMUM_REQUIRED(VERSION 2.8...3.13)

IF(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
ENDIF()

PROJECT(CppToolsDemo)

INCLUDE( ${CMAKE_SOURCE_DIR}/3rdParty/CppTools/submodule.cmake )

SET(CMAKE_CXX_STANDARD 17)

ADD_EXECUTABLE( demo ${CMAKE_SOURCE_DIR}/src/main.cpp )
# Rename namespace by macro
TARGET_COMPILE_DEFINITIONS(demo PRIVATE SKS_NAMESPACE=MY_NAMESPACE )
TARGET_LINK_LIBRARIES( demo ${SYS_LIBS} )
STRIP_TARGET( demo )

