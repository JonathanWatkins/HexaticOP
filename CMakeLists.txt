PROJECT(test NONE)

# - Main CMake script for HexaticOP
#
# - Require lastest generatation of CMake
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

# - Use the intel icl compiler
IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	MESSAGE(STATUS ${CMAKE_SYSTEM_NAME}=LINUX)
	set(CMAKE_CXX_COMPILER "mpicc")
##################  Add this for openmp ############################
#  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -openmp" )
####################################################################
	#set(CMAKE_CXX_COMPILER "gcc")
	
ELSE(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
		MESSAGE(STATUS ${CMAKE_SYSTEM_NAME}=NOTLINUX)
	set(CMAKE_CXX_COMPILER "icl")

#	 set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Zi /O2 " )
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ")	
	add_definitions(-D__WINDOWS__)
	add_definitions(-DTRILIBRARY)
	add_definitions(-DANSI_DECLARATORS)

ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

PROJECT(HexaticOP CXX)
   
add_library(HexaticOPlib HexaticOP.h HexaticOP.cpp Coord.h Coord.cpp Input.h Input.cpp Output.h Output.cpp Application_Wrapper.h Application_Wrapper.cpp StopWatch.h StopWatch.cpp)

add_executable(HexaticOP main.cpp)

# - Link meshworks to the meshworks library
IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
target_link_libraries(HexaticOP HexaticOPlib)
ELSE(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
target_link_libraries(HexaticOP HexaticOPlib)
ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

# - Install meshworks to the bin subdirectory of CMAKE_INSTALL_PREFIX
install(TARGETS HexaticOP DESTINATION bin)
