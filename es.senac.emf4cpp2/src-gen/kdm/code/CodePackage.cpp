#include "CodePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::code;

CodePackage::CodePackage()
{
}

CodePackage_ptr CodePackage::_instance()
{
	static CodePackage __instance;
	return &__instance;
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement()
{
	return e4c::tag< AbstractCodeElement >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeItem()
{
	return e4c::tag< CodeItem >::get();
}
 
e4c::tag_t CodePackage::getTag_ComputationalObject()
{
	return e4c::tag< ComputationalObject >::get();
}
 
e4c::tag_t CodePackage::getTag_ControlElement()
{
	return e4c::tag< ControlElement >::get();
}
 
e4c::tag_t CodePackage::getTag_MethodUnit()
{
	return e4c::tag< MethodUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_Module()
{
	return e4c::tag< Module >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeAssembly()
{
	return e4c::tag< CodeAssembly >::get();
}
 
e4c::tag_t CodePackage::getTag_CallableUnit()
{
	return e4c::tag< CallableUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_Datatype()
{
	return e4c::tag< Datatype >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateUnit()
{
	return e4c::tag< TemplateUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateParameter()
{
	return e4c::tag< TemplateParameter >::get();
}
 
e4c::tag_t CodePackage::getTag_AbstractCodeRelationship()
{
	return e4c::tag< AbstractCodeRelationship >::get();
}
 
e4c::tag_t CodePackage::getTag_InstanceOf()
{
	return e4c::tag< InstanceOf >::get();
}
 
e4c::tag_t CodePackage::getTag_CompilationUnit()
{
	return e4c::tag< CompilationUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeModel()
{
	return e4c::tag< CodeModel >::get();
}
 
e4c::tag_t CodePackage::getTag_DerivedType()
{
	return e4c::tag< DerivedType >::get();
}
 
e4c::tag_t CodePackage::getTag_ArrayType()
{
	return e4c::tag< ArrayType >::get();
}
 
e4c::tag_t CodePackage::getTag_PrimitiveType()
{
	return e4c::tag< PrimitiveType >::get();
}
 
e4c::tag_t CodePackage::getTag_BooleanType()
{
	return e4c::tag< BooleanType >::get();
}
 
e4c::tag_t CodePackage::getTag_CharType()
{
	return e4c::tag< CharType >::get();
}
 
e4c::tag_t CodePackage::getTag_ClassUnit()
{
	return e4c::tag< ClassUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_CompositeType()
{
	return e4c::tag< CompositeType >::get();
}
 
e4c::tag_t CodePackage::getTag_RecordType()
{
	return e4c::tag< RecordType >::get();
}
 
e4c::tag_t CodePackage::getTag_EnumeratedType()
{
	return e4c::tag< EnumeratedType >::get();
}
 
e4c::tag_t CodePackage::getTag_Extends()
{
	return e4c::tag< Extends >::get();
}
 
e4c::tag_t CodePackage::getTag_ScaledType()
{
	return e4c::tag< ScaledType >::get();
}
 
e4c::tag_t CodePackage::getTag_FloatType()
{
	return e4c::tag< FloatType >::get();
}
 
e4c::tag_t CodePackage::getTag_HasType()
{
	return e4c::tag< HasType >::get();
}
 
e4c::tag_t CodePackage::getTag_ImplementationOf()
{
	return e4c::tag< ImplementationOf >::get();
}
 
e4c::tag_t CodePackage::getTag_Implements()
{
	return e4c::tag< Implements >::get();
}
 
e4c::tag_t CodePackage::getTag_IntegerType()
{
	return e4c::tag< IntegerType >::get();
}
 
e4c::tag_t CodePackage::getTag_InterfaceUnit()
{
	return e4c::tag< InterfaceUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_PointerType()
{
	return e4c::tag< PointerType >::get();
}
 
e4c::tag_t CodePackage::getTag_DefinedType()
{
	return e4c::tag< DefinedType >::get();
}
 
e4c::tag_t CodePackage::getTag_TypeUnit()
{
	return e4c::tag< TypeUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_RangeType()
{
	return e4c::tag< RangeType >::get();
}
 
e4c::tag_t CodePackage::getTag_Signature()
{
	return e4c::tag< Signature >::get();
}
 
e4c::tag_t CodePackage::getTag_DataElement()
{
	return e4c::tag< DataElement >::get();
}
 
e4c::tag_t CodePackage::getTag_StringType()
{
	return e4c::tag< StringType >::get();
}
 
e4c::tag_t CodePackage::getTag_ChoiceType()
{
	return e4c::tag< ChoiceType >::get();
}
 
e4c::tag_t CodePackage::getTag_NamespaceUnit()
{
	return e4c::tag< NamespaceUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_VisibleIn()
{
	return e4c::tag< VisibleIn >::get();
}
 
e4c::tag_t CodePackage::getTag_CommentUnit()
{
	return e4c::tag< CommentUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_SharedUnit()
{
	return e4c::tag< SharedUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_DecimalType()
{
	return e4c::tag< DecimalType >::get();
}
 
e4c::tag_t CodePackage::getTag_DateType()
{
	return e4c::tag< DateType >::get();
}
 
e4c::tag_t CodePackage::getTag_TimeType()
{
	return e4c::tag< TimeType >::get();
}
 
e4c::tag_t CodePackage::getTag_MethodKind()
{
	return e4c::tag< MethodKind >::get();
}
 
e4c::tag_t CodePackage::getTag_VoidType()
{
	return e4c::tag< VoidType >::get();
}
 
e4c::tag_t CodePackage::getTag_ValueElement()
{
	return e4c::tag< ValueElement >::get();
}
 
e4c::tag_t CodePackage::getTag_Value()
{
	return e4c::tag< Value >::get();
}
 
e4c::tag_t CodePackage::getTag_ValueList()
{
	return e4c::tag< ValueList >::get();
}
 
e4c::tag_t CodePackage::getTag_StorableUnit()
{
	return e4c::tag< StorableUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_MemberUnit()
{
	return e4c::tag< MemberUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterUnit()
{
	return e4c::tag< ParameterUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ItemUnit()
{
	return e4c::tag< ItemUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_IndexUnit()
{
	return e4c::tag< IndexUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_SynonymType()
{
	return e4c::tag< SynonymType >::get();
}
 
e4c::tag_t CodePackage::getTag_SequenceType()
{
	return e4c::tag< SequenceType >::get();
}
 
e4c::tag_t CodePackage::getTag_BagType()
{
	return e4c::tag< BagType >::get();
}
 
e4c::tag_t CodePackage::getTag_SetType()
{
	return e4c::tag< SetType >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeElement()
{
	return e4c::tag< CodeElement >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeRelationship()
{
	return e4c::tag< CodeRelationship >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterKind()
{
	return e4c::tag< ParameterKind >::get();
}
 
e4c::tag_t CodePackage::getTag_ExportKind()
{
	return e4c::tag< ExportKind >::get();
}
 
e4c::tag_t CodePackage::getTag_LanguageUnit()
{
	return e4c::tag< LanguageUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_OrdinalType()
{
	return e4c::tag< OrdinalType >::get();
}
 
e4c::tag_t CodePackage::getTag_BitstringType()
{
	return e4c::tag< BitstringType >::get();
}
 
e4c::tag_t CodePackage::getTag_OctetType()
{
	return e4c::tag< OctetType >::get();
}
 
e4c::tag_t CodePackage::getTag_OctetstringType()
{
	return e4c::tag< OctetstringType >::get();
}
 
e4c::tag_t CodePackage::getTag_BitType()
{
	return e4c::tag< BitType >::get();
}
 
e4c::tag_t CodePackage::getTag_StorableKind()
{
	return e4c::tag< StorableKind >::get();
}
 
e4c::tag_t CodePackage::getTag_CallableKind()
{
	return e4c::tag< CallableKind >::get();
}
 
e4c::tag_t CodePackage::getTag_Imports()
{
	return e4c::tag< Imports >::get();
}
 
e4c::tag_t CodePackage::getTag_Package()
{
	return e4c::tag< Package >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterTo()
{
	return e4c::tag< ParameterTo >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateType()
{
	return e4c::tag< TemplateType >::get();
}
 
e4c::tag_t CodePackage::getTag_PreprocessorDirective()
{
	return e4c::tag< PreprocessorDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroDirective()
{
	return e4c::tag< MacroDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroUnit()
{
	return e4c::tag< MacroUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ConditionalDirective()
{
	return e4c::tag< ConditionalDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_IncludeDirective()
{
	return e4c::tag< IncludeDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroKind()
{
	return e4c::tag< MacroKind >::get();
}
 
e4c::tag_t CodePackage::getTag_VariantTo()
{
	return e4c::tag< VariantTo >::get();
}
 
e4c::tag_t CodePackage::getTag_Expands()
{
	return e4c::tag< Expands >::get();
}
 
e4c::tag_t CodePackage::getTag_Redefines()
{
	return e4c::tag< Redefines >::get();
}
 
e4c::tag_t CodePackage::getTag_GeneratedFrom()
{
	return e4c::tag< GeneratedFrom >::get();
}
 
e4c::tag_t CodePackage::getTag_Includes()
{
	return e4c::tag< Includes >::get();
}
 
e4c::tag_t CodePackage::getTag_HasValue()
{
	return e4c::tag< HasValue >::get();
}
 
e4c::tag_t CodePackage::getTag_AbstractCodeElement__source()
{
	return e4c::tag< AbstractCodeElement__source_tag >::get();
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__comment()
{
	return e4c::tag< AbstractCodeElement__comment_tag >::get();
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__codeRelation()
{
	return e4c::tag< AbstractCodeElement__codeRelation_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__type()
{
	return e4c::tag< ControlElement__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__entryFlow()
{
	return e4c::tag< ControlElement__entryFlow_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__codeElement()
{
	return e4c::tag< ControlElement__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_MethodUnit__kind()
{
	return e4c::tag< MethodUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_MethodUnit__export()
{
	return e4c::tag< MethodUnit__export_tag >::get();
}

e4c::tag_t CodePackage::getTag_Module__codeElement()
{
	return e4c::tag< Module__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_CallableUnit__kind()
{
	return e4c::tag< CallableUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_TemplateUnit__codeElement()
{
	return e4c::tag< TemplateUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_InstanceOf__to()
{
	return e4c::tag< InstanceOf__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_InstanceOf__from()
{
	return e4c::tag< InstanceOf__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeModel__codeElement()
{
	return e4c::tag< CodeModel__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_DerivedType__itemUnit()
{
	return e4c::tag< DerivedType__itemUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_ArrayType__size()
{
	return e4c::tag< ArrayType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_ArrayType__indexUnit()
{
	return e4c::tag< ArrayType__indexUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_ClassUnit__isAbstract()
{
	return e4c::tag< ClassUnit__isAbstract_tag >::get();
}

e4c::tag_t CodePackage::getTag_ClassUnit__codeElement()
{
	return e4c::tag< ClassUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_CompositeType__itemUnit()
{
	return e4c::tag< CompositeType__itemUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_EnumeratedType__value()
{
	return e4c::tag< EnumeratedType__value_tag >::get();
}

e4c::tag_t CodePackage::getTag_Extends__to()
{
	return e4c::tag< Extends__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Extends__from()
{
	return e4c::tag< Extends__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasType__to()
{
	return e4c::tag< HasType__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasType__from()
{
	return e4c::tag< HasType__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_ImplementationOf__to()
{
	return e4c::tag< ImplementationOf__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_ImplementationOf__from()
{
	return e4c::tag< ImplementationOf__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Implements__to()
{
	return e4c::tag< Implements__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Implements__from()
{
	return e4c::tag< Implements__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_InterfaceUnit__codeElement()
{
	return e4c::tag< InterfaceUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_DefinedType__type()
{
	return e4c::tag< DefinedType__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_DefinedType__codeElement()
{
	return e4c::tag< DefinedType__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_RangeType__lower()
{
	return e4c::tag< RangeType__lower_tag >::get();
}

e4c::tag_t CodePackage::getTag_RangeType__upper()
{
	return e4c::tag< RangeType__upper_tag >::get();
}

e4c::tag_t CodePackage::getTag_Signature__parameterUnit()
{
	return e4c::tag< Signature__parameterUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__type()
{
	return e4c::tag< DataElement__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__ext()
{
	return e4c::tag< DataElement__ext_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__size()
{
	return e4c::tag< DataElement__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__codeElement()
{
	return e4c::tag< DataElement__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_NamespaceUnit__groupedCode()
{
	return e4c::tag< NamespaceUnit__groupedCode_tag >::get();
}

e4c::tag_t CodePackage::getTag_VisibleIn__to()
{
	return e4c::tag< VisibleIn__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_VisibleIn__from()
{
	return e4c::tag< VisibleIn__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_CommentUnit__text()
{
	return e4c::tag< CommentUnit__text_tag >::get();
}

e4c::tag_t CodePackage::getTag_ValueList__valueElement()
{
	return e4c::tag< ValueList__valueElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_StorableUnit__kind()
{
	return e4c::tag< StorableUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_MemberUnit__export()
{
	return e4c::tag< MemberUnit__export_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterUnit__kind()
{
	return e4c::tag< ParameterUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterUnit__pos()
{
	return e4c::tag< ParameterUnit__pos_tag >::get();
}

e4c::tag_t CodePackage::getTag_SequenceType__size()
{
	return e4c::tag< SequenceType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_BagType__size()
{
	return e4c::tag< BagType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_SetType__size()
{
	return e4c::tag< SetType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeRelationship__to()
{
	return e4c::tag< CodeRelationship__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeRelationship__from()
{
	return e4c::tag< CodeRelationship__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Imports__to()
{
	return e4c::tag< Imports__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Imports__from()
{
	return e4c::tag< Imports__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterTo__to()
{
	return e4c::tag< ParameterTo__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterTo__from()
{
	return e4c::tag< ParameterTo__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_PreprocessorDirective__codeElement()
{
	return e4c::tag< PreprocessorDirective__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_MacroUnit__kind()
{
	return e4c::tag< MacroUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_VariantTo__to()
{
	return e4c::tag< VariantTo__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_VariantTo__from()
{
	return e4c::tag< VariantTo__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Expands__to()
{
	return e4c::tag< Expands__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Expands__from()
{
	return e4c::tag< Expands__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Redefines__to()
{
	return e4c::tag< Redefines__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Redefines__from()
{
	return e4c::tag< Redefines__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__to()
{
	return e4c::tag< GeneratedFrom__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__from()
{
	return e4c::tag< GeneratedFrom__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Includes__to()
{
	return e4c::tag< Includes__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Includes__from()
{
	return e4c::tag< Includes__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasValue__to()
{
	return e4c::tag< HasValue__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasValue__from()
{
	return e4c::tag< HasValue__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_code()
{
	return ::kdm::code::CodePackage::_instance();
}
