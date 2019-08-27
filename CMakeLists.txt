cmake_minimum_required(VERSION 2.8)

# Define project name
project(DATA_STRUCTRE)

# using C++11 and NEON
set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++11 -pthread")

aux_source_directory(. DIR_SRCS)

# Declare the executable target built from your sources
add_executable(DATA_STRUCTRE ${DIR_SRCS})