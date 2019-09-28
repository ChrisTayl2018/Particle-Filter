cmake_minimum_required(VERSION 2.8)
project(particlefilter)


# Build the particle filter project and solution.
# Use C++11
set(SRCS src/main.cpp src/particlefilter.cpp)

set_source_files_properties(${SRCS} PROPERTIES COMPILE_FLAGS -std=c++0x)

# Create the executable
add_executable(particlefilter ${SRCS})

# Use C++11
#if [ ! -f ./src/particle_filter_sol.cpp]; then
#	echo "No solution file."
#else
#	echo "Solution file exists"
#fi

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/particle_filter_sol.cpp")
        set(SRCS src/main.cpp src/particle_filter_sol.cpp)
        set_source_files_properties(${SRCS} PROPERTIES COMPILE_FLAGS -std=c++0x)

        # Create the executable
        add_executable(particlefilter_solution ${SRCS})
endif()








