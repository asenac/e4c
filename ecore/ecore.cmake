


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-ecore SHARED
	ecore/EcorePackage.cpp
	ecore/EAttribute.cpp
	ecore/EAnnotation.cpp
	ecore/EClass.cpp
	ecore/EClassifier.cpp
	ecore/EDataType.cpp
	ecore/EEnum.cpp
	ecore/EEnumLiteral.cpp
	ecore/EFactory.cpp
	ecore/EModelElement.cpp
	ecore/ENamedElement.cpp
	ecore/EObject.cpp
	ecore/EOperation.cpp
	ecore/EPackage.cpp
	ecore/EParameter.cpp
	ecore/EReference.cpp
	ecore/EStructuralFeature.cpp
	ecore/ETypedElement.cpp
	ecore/EStringToStringMapEntry.cpp
	ecore/EGenericType.cpp
	ecore/ETypeParameter.cpp
	)
	
target_link_libraries(e4c-ecore e4c)

