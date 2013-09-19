


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-event SHARED
	kdm/event/EventPackage.cpp
	kdm/event/EventFactory.cpp
	kdm/event/EventModel.cpp
	kdm/event/AbstractEventElement.cpp
	kdm/event/Event.cpp
	kdm/event/AbstractEventRelationship.cpp
	kdm/event/EventRelationship.cpp
	kdm/event/EventResource.cpp
	kdm/event/State.cpp
	kdm/event/Transition.cpp
	kdm/event/OnEntry.cpp
	kdm/event/OnExit.cpp
	kdm/event/EventAction.cpp
	kdm/event/ReadsState.cpp
	kdm/event/ProducesEvent.cpp
	kdm/event/ConsumesEvent.cpp
	kdm/event/NextState.cpp
	kdm/event/InitialState.cpp
	kdm/event/EventElement.cpp
	kdm/event/HasState.cpp
	)
	
target_link_libraries(e4c-kdm-event e4c)

