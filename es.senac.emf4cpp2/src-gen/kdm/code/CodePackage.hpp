#ifndef EMF_CPP_KDM_CODE_PACKAGE_HPP
#define EMF_CPP_KDM_CODE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace code
{


class CodePackage : public ::ecore::EPackage
{
public:
    static CodePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractCodeElement();
 	e4c::tag_t getTag_CodeItem();
 	e4c::tag_t getTag_ComputationalObject();
 	e4c::tag_t getTag_ControlElement();
 	e4c::tag_t getTag_MethodUnit();
 	e4c::tag_t getTag_Module();
 	e4c::tag_t getTag_CodeAssembly();
 	e4c::tag_t getTag_CallableUnit();
 	e4c::tag_t getTag_Datatype();
 	e4c::tag_t getTag_TemplateUnit();
 	e4c::tag_t getTag_TemplateParameter();
 	e4c::tag_t getTag_AbstractCodeRelationship();
 	e4c::tag_t getTag_InstanceOf();
 	e4c::tag_t getTag_CompilationUnit();
 	e4c::tag_t getTag_CodeModel();
 	e4c::tag_t getTag_DerivedType();
 	e4c::tag_t getTag_ArrayType();
 	e4c::tag_t getTag_PrimitiveType();
 	e4c::tag_t getTag_BooleanType();
 	e4c::tag_t getTag_CharType();
 	e4c::tag_t getTag_ClassUnit();
 	e4c::tag_t getTag_CompositeType();
 	e4c::tag_t getTag_RecordType();
 	e4c::tag_t getTag_EnumeratedType();
 	e4c::tag_t getTag_Extends();
 	e4c::tag_t getTag_ScaledType();
 	e4c::tag_t getTag_FloatType();
 	e4c::tag_t getTag_HasType();
 	e4c::tag_t getTag_ImplementationOf();
 	e4c::tag_t getTag_Implements();
 	e4c::tag_t getTag_IntegerType();
 	e4c::tag_t getTag_InterfaceUnit();
 	e4c::tag_t getTag_PointerType();
 	e4c::tag_t getTag_DefinedType();
 	e4c::tag_t getTag_TypeUnit();
 	e4c::tag_t getTag_RangeType();
 	e4c::tag_t getTag_Signature();
 	e4c::tag_t getTag_DataElement();
 	e4c::tag_t getTag_StringType();
 	e4c::tag_t getTag_ChoiceType();
 	e4c::tag_t getTag_NamespaceUnit();
 	e4c::tag_t getTag_VisibleIn();
 	e4c::tag_t getTag_CommentUnit();
 	e4c::tag_t getTag_SharedUnit();
 	e4c::tag_t getTag_DecimalType();
 	e4c::tag_t getTag_DateType();
 	e4c::tag_t getTag_TimeType();
 	e4c::tag_t getTag_MethodKind();
 	e4c::tag_t getTag_VoidType();
 	e4c::tag_t getTag_ValueElement();
 	e4c::tag_t getTag_Value();
 	e4c::tag_t getTag_ValueList();
 	e4c::tag_t getTag_StorableUnit();
 	e4c::tag_t getTag_MemberUnit();
 	e4c::tag_t getTag_ParameterUnit();
 	e4c::tag_t getTag_ItemUnit();
 	e4c::tag_t getTag_IndexUnit();
 	e4c::tag_t getTag_SynonymType();
 	e4c::tag_t getTag_SequenceType();
 	e4c::tag_t getTag_BagType();
 	e4c::tag_t getTag_SetType();
 	e4c::tag_t getTag_CodeElement();
 	e4c::tag_t getTag_CodeRelationship();
 	e4c::tag_t getTag_ParameterKind();
 	e4c::tag_t getTag_ExportKind();
 	e4c::tag_t getTag_LanguageUnit();
 	e4c::tag_t getTag_OrdinalType();
 	e4c::tag_t getTag_BitstringType();
 	e4c::tag_t getTag_OctetType();
 	e4c::tag_t getTag_OctetstringType();
 	e4c::tag_t getTag_BitType();
 	e4c::tag_t getTag_StorableKind();
 	e4c::tag_t getTag_CallableKind();
 	e4c::tag_t getTag_Imports();
 	e4c::tag_t getTag_Package();
 	e4c::tag_t getTag_ParameterTo();
 	e4c::tag_t getTag_TemplateType();
 	e4c::tag_t getTag_PreprocessorDirective();
 	e4c::tag_t getTag_MacroDirective();
 	e4c::tag_t getTag_MacroUnit();
 	e4c::tag_t getTag_ConditionalDirective();
 	e4c::tag_t getTag_IncludeDirective();
 	e4c::tag_t getTag_MacroKind();
 	e4c::tag_t getTag_VariantTo();
 	e4c::tag_t getTag_Expands();
 	e4c::tag_t getTag_Redefines();
 	e4c::tag_t getTag_GeneratedFrom();
 	e4c::tag_t getTag_Includes();
 	e4c::tag_t getTag_HasValue();
 
 	// Structural features
 	e4c::tag_t getTag_AbstractCodeElement__source();
 	e4c::tag_t getTag_AbstractCodeElement__comment();
 	e4c::tag_t getTag_AbstractCodeElement__codeRelation();
 	e4c::tag_t getTag_ControlElement__type();
 	e4c::tag_t getTag_ControlElement__entryFlow();
 	e4c::tag_t getTag_ControlElement__codeElement();
 	e4c::tag_t getTag_MethodUnit__kind();
 	e4c::tag_t getTag_MethodUnit__export();
 	e4c::tag_t getTag_Module__codeElement();
 	e4c::tag_t getTag_CallableUnit__kind();
 	e4c::tag_t getTag_TemplateUnit__codeElement();
 	e4c::tag_t getTag_InstanceOf__to();
 	e4c::tag_t getTag_InstanceOf__from();
 	e4c::tag_t getTag_CodeModel__codeElement();
 	e4c::tag_t getTag_DerivedType__itemUnit();
 	e4c::tag_t getTag_ArrayType__size();
 	e4c::tag_t getTag_ArrayType__indexUnit();
 	e4c::tag_t getTag_ClassUnit__isAbstract();
 	e4c::tag_t getTag_ClassUnit__codeElement();
 	e4c::tag_t getTag_CompositeType__itemUnit();
 	e4c::tag_t getTag_EnumeratedType__value();
 	e4c::tag_t getTag_Extends__to();
 	e4c::tag_t getTag_Extends__from();
 	e4c::tag_t getTag_HasType__to();
 	e4c::tag_t getTag_HasType__from();
 	e4c::tag_t getTag_ImplementationOf__to();
 	e4c::tag_t getTag_ImplementationOf__from();
 	e4c::tag_t getTag_Implements__to();
 	e4c::tag_t getTag_Implements__from();
 	e4c::tag_t getTag_InterfaceUnit__codeElement();
 	e4c::tag_t getTag_DefinedType__type();
 	e4c::tag_t getTag_DefinedType__codeElement();
 	e4c::tag_t getTag_RangeType__lower();
 	e4c::tag_t getTag_RangeType__upper();
 	e4c::tag_t getTag_Signature__parameterUnit();
 	e4c::tag_t getTag_DataElement__type();
 	e4c::tag_t getTag_DataElement__ext();
 	e4c::tag_t getTag_DataElement__size();
 	e4c::tag_t getTag_DataElement__codeElement();
 	e4c::tag_t getTag_NamespaceUnit__groupedCode();
 	e4c::tag_t getTag_VisibleIn__to();
 	e4c::tag_t getTag_VisibleIn__from();
 	e4c::tag_t getTag_CommentUnit__text();
 	e4c::tag_t getTag_ValueList__valueElement();
 	e4c::tag_t getTag_StorableUnit__kind();
 	e4c::tag_t getTag_MemberUnit__export();
 	e4c::tag_t getTag_ParameterUnit__kind();
 	e4c::tag_t getTag_ParameterUnit__pos();
 	e4c::tag_t getTag_SequenceType__size();
 	e4c::tag_t getTag_BagType__size();
 	e4c::tag_t getTag_SetType__size();
 	e4c::tag_t getTag_CodeRelationship__to();
 	e4c::tag_t getTag_CodeRelationship__from();
 	e4c::tag_t getTag_Imports__to();
 	e4c::tag_t getTag_Imports__from();
 	e4c::tag_t getTag_ParameterTo__to();
 	e4c::tag_t getTag_ParameterTo__from();
 	e4c::tag_t getTag_PreprocessorDirective__codeElement();
 	e4c::tag_t getTag_MacroUnit__kind();
 	e4c::tag_t getTag_VariantTo__to();
 	e4c::tag_t getTag_VariantTo__from();
 	e4c::tag_t getTag_Expands__to();
 	e4c::tag_t getTag_Expands__from();
 	e4c::tag_t getTag_Redefines__to();
 	e4c::tag_t getTag_Redefines__from();
 	e4c::tag_t getTag_GeneratedFrom__to();
 	e4c::tag_t getTag_GeneratedFrom__from();
 	e4c::tag_t getTag_Includes__to();
 	e4c::tag_t getTag_Includes__from();
 	e4c::tag_t getTag_HasValue__to();
 	e4c::tag_t getTag_HasValue__from();

protected:
    CodePackage();
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PACKAGE_HPP
