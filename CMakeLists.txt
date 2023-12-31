cmake_minimum_required(VERSION  2.8)
project(software-engineering-patterns)

# architectural patterns

# behavioral patterns
add_executable (memento pattern/behavioral/memento/src/main.cpp)

# concurrency patterns

# creational patterns
add_executable (abstract_factory pattern/creational/abstract_factory/src/main.cpp)
add_executable (builder pattern/creational/builder/src/main.cpp)
add_executable (factory_method pattern/creational/factory_method/src/main.cpp)
add_executable (prototype pattern/creational/prototype/src/main.cpp)
add_executable (singleton pattern/creational/singleton/src/main.cpp)

# structural patterns
add_executable (decorator pattern/structural/decorator/src/main.cpp)
add_executable (flyweight pattern/structural/flyweight/src/main.cpp)
