#ifndef EMF_CPP_KDM_CODE_PACKAGE_HPP
#define EMF_CPP_KDM_CODE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace code
{


class CodePackage : public ::ecore::EPackage
{
public:
    static const CodePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractCodeElement() const;
 	e4c::tag_t getTag_CodeItem() const;
 	e4c::tag_t getTag_ComputationalObject() const;
 	e4c::tag_t getTag_ControlElement() const;
 	e4c::tag_t getTag_MethodUnit() const;
 	e4c::tag_t getTag_Module() const;
 	e4c::tag_t getTag_CodeAssembly() const;
 	e4c::tag_t getTag_CallableUnit() const;
 	e4c::tag_t getTag_Datatype() const;
 	e4c::tag_t getTag_TemplateUnit() const;
 	e4c::tag_t getTag_TemplateParameter() const;
 	e4c::tag_t getTag_AbstractCodeRelationship() const;
 	e4c::tag_t getTag_InstanceOf() const;
 	e4c::tag_t getTag_CompilationUnit() const;
 	e4c::tag_t getTag_CodeModel() const;
 	e4c::tag_t getTag_DerivedType() const;
 	e4c::tag_t getTag_ArrayType() const;
 	e4c::tag_t getTag_PrimitiveType() const;
 	e4c::tag_t getTag_BooleanType() const;
 	e4c::tag_t getTag_CharType() const;
 	e4c::tag_t getTag_ClassUnit() const;
 	e4c::tag_t getTag_CompositeType() const;
 	e4c::tag_t getTag_RecordType() const;
 	e4c::tag_t getTag_EnumeratedType() const;
 	e4c::tag_t getTag_Extends() const;
 	e4c::tag_t getTag_ScaledType() const;
 	e4c::tag_t getTag_FloatType() const;
 	e4c::tag_t getTag_HasType() const;
 	e4c::tag_t getTag_ImplementationOf() const;
 	e4c::tag_t getTag_Implements() const;
 	e4c::tag_t getTag_IntegerType() const;
 	e4c::tag_t getTag_InterfaceUnit() const;
 	e4c::tag_t getTag_PointerType() const;
 	e4c::tag_t getTag_DefinedType() const;
 	e4c::tag_t getTag_TypeUnit() const;
 	e4c::tag_t getTag_RangeType() const;
 	e4c::tag_t getTag_Signature() const;
 	e4c::tag_t getTag_DataElement() const;
 	e4c::tag_t getTag_StringType() const;
 	e4c::tag_t getTag_ChoiceType() const;
 	e4c::tag_t getTag_NamespaceUnit() const;
 	e4c::tag_t getTag_VisibleIn() const;
 	e4c::tag_t getTag_CommentUnit() const;
 	e4c::tag_t getTag_SharedUnit() const;
 	e4c::tag_t getTag_DecimalType() const;
 	e4c::tag_t getTag_DateType() const;
 	e4c::tag_t getTag_TimeType() const;
 	e4c::tag_t getTag_MethodKind() const;
 	e4c::tag_t getTag_VoidType() const;
 	e4c::tag_t getTag_ValueElement() const;
 	e4c::tag_t getTag_Value() const;
 	e4c::tag_t getTag_ValueList() const;
 	e4c::tag_t getTag_StorableUnit() const;
 	e4c::tag_t getTag_MemberUnit() const;
 	e4c::tag_t getTag_ParameterUnit() const;
 	e4c::tag_t getTag_ItemUnit() const;
 	e4c::tag_t getTag_IndexUnit() const;
 	e4c::tag_t getTag_SynonymType() const;
 	e4c::tag_t getTag_SequenceType() const;
 	e4c::tag_t getTag_BagType() const;
 	e4c::tag_t getTag_SetType() const;
 	e4c::tag_t getTag_CodeElement() const;
 	e4c::tag_t getTag_CodeRelationship() const;
 	e4c::tag_t getTag_ParameterKind() const;
 	e4c::tag_t getTag_ExportKind() const;
 	e4c::tag_t getTag_LanguageUnit() const;
 	e4c::tag_t getTag_OrdinalType() const;
 	e4c::tag_t getTag_BitstringType() const;
 	e4c::tag_t getTag_OctetType() const;
 	e4c::tag_t getTag_OctetstringType() const;
 	e4c::tag_t getTag_BitType() const;
 	e4c::tag_t getTag_StorableKind() const;
 	e4c::tag_t getTag_CallableKind() const;
 	e4c::tag_t getTag_Imports() const;
 	e4c::tag_t getTag_Package() const;
 	e4c::tag_t getTag_ParameterTo() const;
 	e4c::tag_t getTag_TemplateType() const;
 	e4c::tag_t getTag_PreprocessorDirective() const;
 	e4c::tag_t getTag_MacroDirective() const;
 	e4c::tag_t getTag_MacroUnit() const;
 	e4c::tag_t getTag_ConditionalDirective() const;
 	e4c::tag_t getTag_IncludeDirective() const;
 	e4c::tag_t getTag_MacroKind() const;
 	e4c::tag_t getTag_VariantTo() const;
 	e4c::tag_t getTag_Expands() const;
 	e4c::tag_t getTag_Redefines() const;
 	e4c::tag_t getTag_GeneratedFrom() const;
 	e4c::tag_t getTag_Includes() const;
 	e4c::tag_t getTag_HasValue() const;
 
 	// Structural features
 	e4c::tag_t getTag_AbstractCodeElement__source() const;
 	e4c::tag_t getTag_AbstractCodeElement__comment() const;
 	e4c::tag_t getTag_AbstractCodeElement__codeRelation() const;
 	e4c::tag_t getTag_ControlElement__type() const;
 	e4c::tag_t getTag_ControlElement__entryFlow() const;
 	e4c::tag_t getTag_ControlElement__codeElement() const;
 	e4c::tag_t getTag_MethodUnit__kind() const;
 	e4c::tag_t getTag_MethodUnit__export() const;
 	e4c::tag_t getTag_Module__codeElement() const;
 	e4c::tag_t getTag_CallableUnit__kind() const;
 	e4c::tag_t getTag_TemplateUnit__codeElement() const;
 	e4c::tag_t getTag_InstanceOf__to() const;
 	e4c::tag_t getTag_InstanceOf__from() const;
 	e4c::tag_t getTag_CodeModel__codeElement() const;
 	e4c::tag_t getTag_DerivedType__itemUnit() const;
 	e4c::tag_t getTag_ArrayType__size() const;
 	e4c::tag_t getTag_ArrayType__indexUnit() const;
 	e4c::tag_t getTag_ClassUnit__isAbstract() const;
 	e4c::tag_t getTag_ClassUnit__codeElement() const;
 	e4c::tag_t getTag_CompositeType__itemUnit() const;
 	e4c::tag_t getTag_EnumeratedType__value() const;
 	e4c::tag_t getTag_Extends__to() const;
 	e4c::tag_t getTag_Extends__from() const;
 	e4c::tag_t getTag_HasType__to() const;
 	e4c::tag_t getTag_HasType__from() const;
 	e4c::tag_t getTag_ImplementationOf__to() const;
 	e4c::tag_t getTag_ImplementationOf__from() const;
 	e4c::tag_t getTag_Implements__to() const;
 	e4c::tag_t getTag_Implements__from() const;
 	e4c::tag_t getTag_InterfaceUnit__codeElement() const;
 	e4c::tag_t getTag_DefinedType__type() const;
 	e4c::tag_t getTag_DefinedType__codeElement() const;
 	e4c::tag_t getTag_RangeType__lower() const;
 	e4c::tag_t getTag_RangeType__upper() const;
 	e4c::tag_t getTag_Signature__parameterUnit() const;
 	e4c::tag_t getTag_DataElement__type() const;
 	e4c::tag_t getTag_DataElement__ext() const;
 	e4c::tag_t getTag_DataElement__size() const;
 	e4c::tag_t getTag_DataElement__codeElement() const;
 	e4c::tag_t getTag_NamespaceUnit__groupedCode() const;
 	e4c::tag_t getTag_VisibleIn__to() const;
 	e4c::tag_t getTag_VisibleIn__from() const;
 	e4c::tag_t getTag_CommentUnit__text() const;
 	e4c::tag_t getTag_ValueList__valueElement() const;
 	e4c::tag_t getTag_StorableUnit__kind() const;
 	e4c::tag_t getTag_MemberUnit__export() const;
 	e4c::tag_t getTag_ParameterUnit__kind() const;
 	e4c::tag_t getTag_ParameterUnit__pos() const;
 	e4c::tag_t getTag_SequenceType__size() const;
 	e4c::tag_t getTag_BagType__size() const;
 	e4c::tag_t getTag_SetType__size() const;
 	e4c::tag_t getTag_CodeRelationship__to() const;
 	e4c::tag_t getTag_CodeRelationship__from() const;
 	e4c::tag_t getTag_Imports__to() const;
 	e4c::tag_t getTag_Imports__from() const;
 	e4c::tag_t getTag_ParameterTo__to() const;
 	e4c::tag_t getTag_ParameterTo__from() const;
 	e4c::tag_t getTag_PreprocessorDirective__codeElement() const;
 	e4c::tag_t getTag_MacroUnit__kind() const;
 	e4c::tag_t getTag_VariantTo__to() const;
 	e4c::tag_t getTag_VariantTo__from() const;
 	e4c::tag_t getTag_Expands__to() const;
 	e4c::tag_t getTag_Expands__from() const;
 	e4c::tag_t getTag_Redefines__to() const;
 	e4c::tag_t getTag_Redefines__from() const;
 	e4c::tag_t getTag_GeneratedFrom__to() const;
 	e4c::tag_t getTag_GeneratedFrom__from() const;
 	e4c::tag_t getTag_Includes__to() const;
 	e4c::tag_t getTag_Includes__from() const;
 	e4c::tag_t getTag_HasValue__to() const;
 	e4c::tag_t getTag_HasValue__from() const;

protected:
    CodePackage();
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PACKAGE_HPP
