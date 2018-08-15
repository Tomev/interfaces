cmake_minimum_required(VERSION 3.11)
project(interfaces C CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(interfaces SHARED   i_countable.h i_weightable.h i_function.h i_singleArgumentFunction.h i_clusterable.h
                                i_clusteringAlgorithm.h i_cluster.h)