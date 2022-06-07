cmake_minimum_required(VERSION 3.22)
project(SortingMachine)

set(CMAKE_CXX_STANDARD 23)

add_executable(SortingMachine main.cpp Sort/SortInterface.h Sort/QuickSort.cpp Sort/QuickSort.h Sort/BubbleSort.cpp Sort/BubbleSort.h Sort/InsertionSort.cpp Sort/InsertionSort.h SortFactory/SortFactoryInterface.h SortFactory/AlgorithmModeFactory.cpp SortFactory/AlgorithmModeFactory.h SortFactory/ComparisionModeFactory.cpp SortFactory/ComparisionModeFactory.h)
