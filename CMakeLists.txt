# CMakeList.txt : CMake project for DataVisualization, include source and define
# project specific logic here.
#

# Add source to this project's executable.

set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")

cmake_minimum_required (VERSION 3.8)
project ("DataVisualization")

add_executable (DataVisualization ${SOURCES})

target_link_libraries(DataVisualization ${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml-audio.lib)
target_link_libraries(DataVisualization ${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml-graphics.lib)
target_link_libraries(DataVisualization ${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml-network.lib)
target_link_libraries(DataVisualization ${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml-system.lib)
target_link_libraries(DataVisualization ${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml-window.lib)

set(FILES_TO_COPY
	${CMAKE_CURRENT_SOURCE_DIR}/bin/openal32.dll
    ${CMAKE_CURRENT_SOURCE_DIR}/bin/sfml-audio-2.dll
    ${CMAKE_CURRENT_SOURCE_DIR}/bin/sfml-graphics-2.dll
    ${CMAKE_CURRENT_SOURCE_DIR}/bin/sfml-network-2.dll
    ${CMAKE_CURRENT_SOURCE_DIR}/bin/sfml-system-2.dll
    ${CMAKE_CURRENT_SOURCE_DIR}/bin/sfml-window-2.dll
)

foreach(file ${FILES_TO_COPY}) 
    add_custom_command(TARGET DataVisualization POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${file}  
        $<TARGET_FILE_DIR:DataVisualization>  
    )
endforeach()

add_custom_command(TARGET DataVisualization POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory 
        ${CMAKE_CURRENT_SOURCE_DIR}/Media
        $<TARGET_FILE_DIR:DataVisualization>/Media  
    )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DataVisualization PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
