cmake_minimum_required(VERSION 3.5.0)
project(calculator_project VERSION 1.0.0)



add_subdirectory(libCUnit)

add_subdirectory(Board)
add_subdirectory(GameOperations)

add_subdirectory(MainMenu)


add_executable(Tic-Toe
		main.c
	       )


target_link_libraries(Tic-Toe cunit Board GameOperations MainMenu)

