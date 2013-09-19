


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-idlmm SHARED
	idlmm/IdlmmPackage.cpp
	idlmm/Container.cpp
	idlmm/Contained.cpp
	idlmm/InterfaceDef.cpp
	idlmm/ModuleDef.cpp
	idlmm/IDLType.cpp
	idlmm/OperationDef.cpp
	idlmm/AttributeDef.cpp
	idlmm/ConstantDef.cpp
	idlmm/Typed.cpp
	idlmm/ParameterDef.cpp
	idlmm/PrimitiveDef.cpp
	idlmm/ExceptionDef.cpp
	idlmm/Field.cpp
	idlmm/FixedDef.cpp
	idlmm/WstringDef.cpp
	idlmm/StringDef.cpp
	idlmm/AliasDef.cpp
	idlmm/ArrayDef.cpp
	idlmm/SequenceDef.cpp
	idlmm/UnionField.cpp
	idlmm/TypedefDef.cpp
	idlmm/UnionDef.cpp
	idlmm/EnumDef.cpp
	idlmm/StructDef.cpp
	idlmm/TranslationUnit.cpp
	idlmm/Include.cpp
	)
	
target_link_libraries(e4c-idlmm e4c)

