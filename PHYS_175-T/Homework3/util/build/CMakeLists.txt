cmake_minimum_required(VERSION 3.15.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s-td=c++17")

project(Homework3)

add_library(xrange SHARED ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/xrange.h)
add_library(y1 SHARED ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/y1.h)
add_library(y2 SHARED ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/y2.h) 

target_include_directories( xrange PUBLIC ${CMAKE_SOURCE_DIR}/${PROJECT_NAME} )
target_include_directories( y1 PUBLIC ${CMAKE_SOURCE_DIR}/${PROJECT_NAME} )
target_include_directories( y2 PUBLIC ${CMAKE_SOURCE_DIR}/${PROJECT_NAME} )

add_executable (runhw3 ${CMAKE_SOURCE_DIR}/util/HW3.cxx)
