cmake_minimum_required ( VERSION 2.8.5 )

project ( SimpleJSON )

include_directories (${CMAKE_CURRENT_SOURCE_DIR}/simple_json)

add_executable ( test_json test.cpp simple_json/json.cpp )
add_executable ( test_parser test_parser.cpp simple_json/json.cpp )
