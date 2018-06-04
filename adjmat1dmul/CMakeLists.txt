# Author : Matthieu Heitz
# Date : 04/06/2018

cmake_minimum_required(VERSION 2.8)
project(adjmat1dmul)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c99")
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")


set(INCLUDE_DIRS
#    /home/matthieu/Programs/anaconda3/lib/python3.6/site-packages/torch/lib/include/
	/home/matthieu/These/MetricLearning/OTMetricLearning/my_virtualenv/lib/python3.5/site-packages/torch/lib/include
)

include_directories(${INCLUDE_DIRS})


set(LIB_SOURCE_FILES
    src/my_lib.c
)

set(EXEC_SOURCE_FILES
	src/test.cpp
)

set(ADDITIONAL_LINKER_FLAG
#	/home/matthieu/Programs/anaconda3/lib/python3.6/site-packages/torch/lib
#	/home/matthieu/Programs/anaconda3/lib
	/home/matthieu/These/MetricLearning/OTMetricLearning/my_virtualenv/lib/python3.5/site-packages/torch/lib
)

# Build targets

## Library
#add_library(adjmatmul SHARED ${LIB_SOURCE_FILES})

## Executable
#add_executable(adjmatmul1d ${EXEC_SOURCE_FILES})
#target_link_libraries(adjmatmul1d adjmatmul ${ADDITIONAL_LINKER_FLAG})


add_executable(adjmatmul1d ${LIB_SOURCE_FILES})
