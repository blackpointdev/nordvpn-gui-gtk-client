cmake_minimum_required(VERSION 3.10)

# set the project name
project(nordvpn-gui-gtk-client VERSION 0.1)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add project headers
include_directories(include)

# Set output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add gtkmm-4.0
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)
 
# Add directories for linker for GTKMM
link_directories(${GTKMM_LIBRARY_DIRS})

# Add directories with header files for GTKMM
include_directories(${GTKMM_INCLUDE_DIRS} )

# Build executable
add_executable(app src/main.cc src/helloworld.cc)
target_link_libraries(app ${GTKMM_LIBRARIES})
