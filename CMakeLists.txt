cmake_minimum_required(VERSION 3.16)
project(opencpn_keepmark_plugin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(opencpn_keepmark_plugin SHARED
    plugin.cpp
)

target_include_directories(opencpn_keepmark_plugin PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Set this to your OpenCPN source/plugin API include path
# Example:
# target_include_directories(opencpn_keepmark_plugin PRIVATE /path/to/OpenCPN/include)

# Link against wxWidgets/OpenCPN as needed in your environment.
# Example:
# find_package(wxWidgets REQUIRED COMPONENTS base core)
# include(${wxWidgets_USE_FILE})
# target_link_libraries(opencpn_keepmark_plugin PRIVATE ${wxWidgets_LIBRARIES})

