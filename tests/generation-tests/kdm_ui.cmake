


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-ui SHARED
	kdm/ui/UiPackage.cpp
	kdm/ui/UiFactory.cpp
	kdm/ui/AbstractUIElement.cpp
	kdm/ui/UIResource.cpp
	kdm/ui/UIDisplay.cpp
	kdm/ui/Screen.cpp
	kdm/ui/Report.cpp
	kdm/ui/UIModel.cpp
	kdm/ui/AbstractUIRelationship.cpp
	kdm/ui/UILayout.cpp
	kdm/ui/UIField.cpp
	kdm/ui/DisplaysImage.cpp
	kdm/ui/Displays.cpp
	kdm/ui/UIFlow.cpp
	kdm/ui/UIElement.cpp
	kdm/ui/UIRelationship.cpp
	kdm/ui/UIAction.cpp
	kdm/ui/UIEvent.cpp
	kdm/ui/ReadsUI.cpp
	kdm/ui/WritesUI.cpp
	kdm/ui/ManagesUI.cpp
	)
	
target_link_libraries(e4c-kdm-ui e4c)

