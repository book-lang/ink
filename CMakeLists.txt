cmake_minimum_required(VERSION 3.25.2)

project (la
	VERSION 0.1
	DESCRIPTION "the la programming language")

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

add_executable(la la.c)
