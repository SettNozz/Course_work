cmake_minimum_required(VERSION 3.6)
project(course_work)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Train.cpp Train.h Passenger_train.cpp Passenger_train.h Freight_train.cpp Freight_train.h Main_job.cpp Main_job.h New_stack.cpp New_stack.h)
add_executable(course_work ${SOURCE_FILES})