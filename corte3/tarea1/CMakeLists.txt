cmake_minimum_required(VERSION 3.16)
project(tarea1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(underground_system
        leetcode/underground_system/underground_system.cpp
)

add_executable(atm_machine
        leetcode/atm_machine/atm_machine.cpp
)

add_executable(auction_system
        leetcode/auction_system/auction_system.cpp
)

add_executable(meetup
        exercism/meetup/meetup.cpp
)
target_include_directories(meetup PRIVATE exercism/meetup)

add_executable(clock_exe
        exercism/clock/clock.cpp
)
target_include_directories(clock_exe PRIVATE exercism/clock)