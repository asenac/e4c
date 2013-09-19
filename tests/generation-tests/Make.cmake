


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-Make SHARED
	Make/MakePackage.cpp
	Make/MakeFactory.cpp
	Make/Makefile.cpp
	Make/Element.cpp
	Make/Rule.cpp
	Make/Macro.cpp
	Make/ShellLine.cpp
	Make/Comment.cpp
	Make/Dependency.cpp
	Make/RuleDep.cpp
	Make/FileDep.cpp
	)
	
target_link_libraries(e4c-Make e4c)

