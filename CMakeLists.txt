cmake_minimum_required(VERSION 3.23)
project(NetworkSim)

set(CMAKE_CXX_STANDARD 14)

add_executable(NetworkSim main.cpp Event.cpp Event.h Sensor.cpp Sensor.h Sink.cpp Sink.h Packet.cpp Packet.h TDMA_Scheduler.cpp TDMA_Scheduler.h)
