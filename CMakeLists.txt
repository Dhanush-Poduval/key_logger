cmake_minimum_required(VERSION 3.20)    

project(keylogger)
add_library(
  event
  STATIC
  src/event_logger.c
)
target_include_directories(event PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_executable(
  keylogger
  src/main.c

)

target_link_libraries(
  keylogger
  PRIVATE
  event
)

