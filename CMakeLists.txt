cmake_minimum_required(VERSION 3.13)
project(lab5_UtPod)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab5_UtPod UtPodDriver.cpp UtPod.h Song.h Song.cpp UtPod.cpp)