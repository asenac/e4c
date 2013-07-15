


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-action SHARED
	kdm/action/ActionPackage.cpp
	kdm/action/ActionElement.cpp
	kdm/action/AbstractActionRelationship.cpp
	kdm/action/ControlFlow.cpp
	kdm/action/Calls.cpp
	kdm/action/Creates.cpp
	kdm/action/Reads.cpp
	kdm/action/Writes.cpp
	kdm/action/CompliesTo.cpp
	kdm/action/Flow.cpp
	kdm/action/TrueFlow.cpp
	kdm/action/FalseFlow.cpp
	kdm/action/GuardedFlow.cpp
	kdm/action/UsesType.cpp
	kdm/action/Addresses.cpp
	kdm/action/ActionRelationship.cpp
	kdm/action/Throws.cpp
	kdm/action/Dispatches.cpp
	kdm/action/EntryFlow.cpp
	kdm/action/BlockUnit.cpp
	kdm/action/ExceptionUnit.cpp
	kdm/action/TryUnit.cpp
	kdm/action/FinallyUnit.cpp
	kdm/action/CatchUnit.cpp
	kdm/action/ExitFlow.cpp
	kdm/action/ExceptionFlow.cpp
	)

