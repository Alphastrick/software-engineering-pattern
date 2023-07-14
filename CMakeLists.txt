cmake_minimum_required(VERSION  2.8)
project(software-engineering-patterns)

# architectural patterns

# behavioral patterns
add_executable (memento pattern/behavioral/memento/src/main.cpp)

# concurrency patterns

# creational patterns
add_executable (abstract_factory pattern/creational/abstract_factory/src/main.cpp)

# structural patterns
add_executable (decorator pattern/structural/decorator/src/main.cpp)
add_executable (flyweight pattern/structural/flyweight/src/main.cpp)
