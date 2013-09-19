


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-xpand3-declaration SHARED
	xpand3/declaration/DeclarationPackage.cpp
	xpand3/declaration/DeclarationFactory.cpp
	xpand3/declaration/AbstractDeclaration.cpp
	xpand3/declaration/AbstractNamedDeclaration.cpp
	xpand3/declaration/Definition.cpp
	xpand3/declaration/Extension.cpp
	xpand3/declaration/AbstractAspect.cpp
	xpand3/declaration/ExtensionAspect.cpp
	xpand3/declaration/DefinitionAspect.cpp
	xpand3/declaration/Check.cpp
	xpand3/declaration/CreateExtension.cpp
	xpand3/declaration/JavaExtension.cpp
	)
	
target_link_libraries(e4c-xpand3-declaration e4c)

