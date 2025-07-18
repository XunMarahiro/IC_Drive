cmake_minimum_required(VERSION 4.1)
PROJECT(Drive)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})
file(GLOB_RECURSE INCLUDES "lib/*.h" )
file(GLOB_RECURSE SOURCES  "lib/*.c"  )

add_executable(Drive drive.c ${SOURCES} ${INCLUDES})

