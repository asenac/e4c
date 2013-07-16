


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-company SHARED
	company/CompanyPackage.cpp
	company/Employee.cpp
	company/Department.cpp
	company/Company.cpp
	)
	
target_link_libraries(e4c-company e4c)

