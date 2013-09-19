


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-widgetsmm SHARED
	widgetsmm/WidgetsmmPackage.cpp
	widgetsmm/WidgetsmmFactory.cpp
	widgetsmm/Widget.cpp
	widgetsmm/ComboBox.cpp
	widgetsmm/Window.cpp
	widgetsmm/Property.cpp
	)
	
target_link_libraries(e4c-widgetsmm e4c)

