cmake_minimum_required(VERSION  2.8)
project(design-patterns)

# behavioral patterns
add_executable (memento pattern/behavioral/memento/src/main.cpp)

# structural patterns
add_executable (decorator pattern/structural/decorator/src/main.cpp)
