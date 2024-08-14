cmake_minimum_required(VERSION 3.28)
project(CPPCollections)

set(CMAKE_CXX_STANDARD 17)

add_library(CPPCollections STATIC Source/List.cpp
            Source/List.h
            Source/Dictionary.cpp
            Source/Dictionary.h
            Source/ObjectMap.cpp
            Source/ObjectMap.h
            Source/SnapshotArray.cpp
            Source/SnapshotArray.h)
