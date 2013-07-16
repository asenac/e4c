


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-C SHARED
	C/CPackage.cpp
	C/CDataType.cpp
	C/CIntegral.cpp
	C/CFloating.cpp
	C/CBitField.cpp
	C/CVoid.cpp
	C/CEnumeration.cpp
	C/CInt.cpp
	C/CChar.cpp
	C/CDouble.cpp
	C/CFloat.cpp
	C/CLongDouble.cpp
	C/CUnsignedInt.cpp
	C/CLong.cpp
	C/CLongLong.cpp
	C/CShort.cpp
	C/CSignedChar.cpp
	C/CUnsignedChar.cpp
	C/CWChar.cpp
	C/UnsignedLong.cpp
	C/UnsignedLongLong.cpp
	C/UnsignedShort.cpp
	C/CClassifier.cpp
	C/Derived.cpp
	C/CStructureContents.cpp
	C/CStructured.cpp
	C/CStruct.cpp
	C/CUnion.cpp
	C/CSourceText.cpp
	C/CTypedElement.cpp
	C/CStructuralFeature.cpp
	C/CField.cpp
	C/CParameter.cpp
	C/BehavioralFeature.cpp
	C/CFunction.cpp
	)
	
target_link_libraries(e4c-C e4c)

