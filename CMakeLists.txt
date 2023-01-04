cmake_minimum_required(VERSION 3.0)

project(Projet-C-)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include ${CMAKE_SOURCE_DIR})
link_directories(/usr/local/lib)
find_package(Boost COMPONENTS system filesystem REQUIRED)

# C++ library
add_library (Perso SHARED Personnage.cpp)
add_library (Mage SHARED Magicien.cpp)
add_library (Combattant SHARED Combattant.cpp)

# Construction of the programs
add_executable (main main.cpp)
target_link_libraries (main Perso Mage Combattant)

# Unitary Test
##enable_testing()
# Register the test binary target
##add_executable (testJDR testJDR.cpp)
# Tell the test binary that it depends on all those libraries
##target_link_libraries (testShapes Shapes boost_unit_test_framework ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY})
# Tell how to test, i.e., how to run the test binaries 
# and collect the results
##add_test (testShapes testShapes)
# Map the checker to ctest
##add_custom_target (check
##  COMMAND ${CMAKE_CTEST_COMMAND} DEPENDS testShapes)

# Doxygen
find_package(Doxygen)
set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_LOCAL_METHODS)
doxygen_add_docs(docs)
