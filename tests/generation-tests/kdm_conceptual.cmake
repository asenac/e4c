


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-conceptual SHARED
	kdm/conceptual/ConceptualPackage.cpp
	kdm/conceptual/ConceptualFactory.cpp
	kdm/conceptual/ConceptualModel.cpp
	kdm/conceptual/AbstractConceptualElement.cpp
	kdm/conceptual/TermUnit.cpp
	kdm/conceptual/ConceptualContainer.cpp
	kdm/conceptual/FactUnit.cpp
	kdm/conceptual/AbstractConceptualRelationship.cpp
	kdm/conceptual/ConceptualRelationship.cpp
	kdm/conceptual/BehaviorUnit.cpp
	kdm/conceptual/RuleUnit.cpp
	kdm/conceptual/ScenarioUnit.cpp
	kdm/conceptual/ConceptualFlow.cpp
	kdm/conceptual/ConceptualElement.cpp
	kdm/conceptual/ConceptualRole.cpp
	)
	
target_link_libraries(e4c-kdm-conceptual e4c)

