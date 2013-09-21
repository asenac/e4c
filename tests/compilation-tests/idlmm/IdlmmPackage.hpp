#ifndef EMF_CPP_IDLMM_PACKAGE_HPP
#define EMF_CPP_IDLMM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <idlmm/fwd.hpp>

namespace idlmm
{


class IdlmmPackage : public ::ecore::EPackage
{
public:
    static const IdlmmPackage_ptr _instance();

 	::ecore::EClass_ptr getModelElement() const;
 	::ecore::EClass_ptr getContainer() const;
 	::ecore::EClass_ptr getContained() const;
 	::ecore::EClass_ptr getInterfaceDef() const;
 	::ecore::EClass_ptr getModuleDef() const;
 	::ecore::EClass_ptr getIDLType() const;
 	::ecore::EClass_ptr getOperationDef() const;
 	::ecore::EClass_ptr getAttributeDef() const;
 	::ecore::EClass_ptr getConstantDef() const;
 	::ecore::EClass_ptr getTyped() const;
 	::ecore::EClass_ptr getParameterDef() const;
 	::ecore::EEnum_ptr getParameterMode() const;
 	::ecore::EClass_ptr getPrimitiveDef() const;
 	::ecore::EEnum_ptr getPrimitiveKind() const;
 	::ecore::EClass_ptr getExceptionDef() const;
 	::ecore::EDataType_ptr getEAny() const;
 	::ecore::EDataType_ptr getETypeCode() const;
 	::ecore::EClass_ptr getField() const;
 	::ecore::EClass_ptr getFixedDef() const;
 	::ecore::EClass_ptr getWstringDef() const;
 	::ecore::EClass_ptr getStringDef() const;
 	::ecore::EClass_ptr getAliasDef() const;
 	::ecore::EClass_ptr getArrayDef() const;
 	::ecore::EClass_ptr getSequenceDef() const;
 	::ecore::EClass_ptr getUnionField() const;
 	::ecore::EClass_ptr getTypedefDef() const;
 	::ecore::EClass_ptr getUnionDef() const;
 	::ecore::EClass_ptr getEnumDef() const;
 	::ecore::EClass_ptr getStructDef() const;
 	::ecore::EClass_ptr getTranslationUnit() const;
 	::ecore::EClass_ptr getInclude() const;
 	::ecore::EClass_ptr getExpression() const;
 	::ecore::EClass_ptr getBinaryExpression() const;
 	::ecore::EClass_ptr getUnaryExpression() const;
 	::ecore::EClass_ptr getLiteralExpression() const;
 	::ecore::EClass_ptr getConstantDefRef() const;
 	::ecore::EClass_ptr getValueExpression() const;
 	::ecore::EClass_ptr getForwardDef() const;
 	::ecore::EClass_ptr getEnumMember() const;
 	::ecore::EClass_ptr getConstant() const;
 	::ecore::EClass_ptr getNamedElement() const;
 
 	e4c::tag_t getTag_ModelElement() const;
 	e4c::tag_t getTag_Container() const;
 	e4c::tag_t getTag_Contained() const;
 	e4c::tag_t getTag_InterfaceDef() const;
 	e4c::tag_t getTag_ModuleDef() const;
 	e4c::tag_t getTag_IDLType() const;
 	e4c::tag_t getTag_OperationDef() const;
 	e4c::tag_t getTag_AttributeDef() const;
 	e4c::tag_t getTag_ConstantDef() const;
 	e4c::tag_t getTag_Typed() const;
 	e4c::tag_t getTag_ParameterDef() const;
 	e4c::tag_t getTag_ParameterMode() const;
 	e4c::tag_t getTag_PrimitiveDef() const;
 	e4c::tag_t getTag_PrimitiveKind() const;
 	e4c::tag_t getTag_ExceptionDef() const;
 	e4c::tag_t getTag_EAny() const;
 	e4c::tag_t getTag_ETypeCode() const;
 	e4c::tag_t getTag_Field() const;
 	e4c::tag_t getTag_FixedDef() const;
 	e4c::tag_t getTag_WstringDef() const;
 	e4c::tag_t getTag_StringDef() const;
 	e4c::tag_t getTag_AliasDef() const;
 	e4c::tag_t getTag_ArrayDef() const;
 	e4c::tag_t getTag_SequenceDef() const;
 	e4c::tag_t getTag_UnionField() const;
 	e4c::tag_t getTag_TypedefDef() const;
 	e4c::tag_t getTag_UnionDef() const;
 	e4c::tag_t getTag_EnumDef() const;
 	e4c::tag_t getTag_StructDef() const;
 	e4c::tag_t getTag_TranslationUnit() const;
 	e4c::tag_t getTag_Include() const;
 	e4c::tag_t getTag_Expression() const;
 	e4c::tag_t getTag_BinaryExpression() const;
 	e4c::tag_t getTag_UnaryExpression() const;
 	e4c::tag_t getTag_LiteralExpression() const;
 	e4c::tag_t getTag_ConstantDefRef() const;
 	e4c::tag_t getTag_ValueExpression() const;
 	e4c::tag_t getTag_ForwardDef() const;
 	e4c::tag_t getTag_EnumMember() const;
 	e4c::tag_t getTag_Constant() const;
 	e4c::tag_t getTag_NamedElement() const;
 
 	e4c::tag_t getTag_Container__contains() const;
 	e4c::tag_t getTag_Contained__repositoryId() const;
 	e4c::tag_t getTag_Contained__version() const;
 	e4c::tag_t getTag_Contained__absoluteName() const;
 	e4c::tag_t getTag_Contained__definedIn() const;
 	e4c::tag_t getTag_InterfaceDef__isAbstract() const;
 	e4c::tag_t getTag_InterfaceDef__isCustom() const;
 	e4c::tag_t getTag_InterfaceDef__isTruncatable() const;
 	e4c::tag_t getTag_InterfaceDef__derivesFrom() const;
 	e4c::tag_t getTag_InterfaceDef__forward() const;
 	e4c::tag_t getTag_ModuleDef__prefix() const;
 	e4c::tag_t getTag_IDLType__typeCode() const;
 	e4c::tag_t getTag_OperationDef__parameters() const;
 	e4c::tag_t getTag_OperationDef__isOneway() const;
 	e4c::tag_t getTag_OperationDef__contexts() const;
 	e4c::tag_t getTag_OperationDef__canRaise() const;
 	e4c::tag_t getTag_AttributeDef__getRaises() const;
 	e4c::tag_t getTag_AttributeDef__setRaises() const;
 	e4c::tag_t getTag_AttributeDef__isReadonly() const;
 	e4c::tag_t getTag_ConstantDef__constValue() const;
 	e4c::tag_t getTag_Typed__containedType() const;
 	e4c::tag_t getTag_Typed__sharedType() const;
 	e4c::tag_t getTag_ParameterDef__identifier() const;
 	e4c::tag_t getTag_ParameterDef__direction() const;
 	e4c::tag_t getTag_PrimitiveDef__kind() const;
 	e4c::tag_t getTag_ExceptionDef__typeCode() const;
 	e4c::tag_t getTag_ExceptionDef__members() const;
 	e4c::tag_t getTag_Field__identifier() const;
 	e4c::tag_t getTag_FixedDef__digits() const;
 	e4c::tag_t getTag_FixedDef__scale() const;
 	e4c::tag_t getTag_WstringDef__bound() const;
 	e4c::tag_t getTag_StringDef__bound() const;
 	e4c::tag_t getTag_ArrayDef__name() const;
 	e4c::tag_t getTag_ArrayDef__bounds() const;
 	e4c::tag_t getTag_SequenceDef__bound() const;
 	e4c::tag_t getTag_UnionField__identifier() const;
 	e4c::tag_t getTag_UnionField__label() const;
 	e4c::tag_t getTag_UnionDef__unionMembers() const;
 	e4c::tag_t getTag_UnionDef__containedDiscrim() const;
 	e4c::tag_t getTag_UnionDef__sharedDiscrim() const;
 	e4c::tag_t getTag_EnumDef__members() const;
 	e4c::tag_t getTag_StructDef__members() const;
 	e4c::tag_t getTag_TranslationUnit__contains() const;
 	e4c::tag_t getTag_TranslationUnit__identifier() const;
 	e4c::tag_t getTag_TranslationUnit__includes() const;
 	e4c::tag_t getTag_Include__importURI() const;
 	e4c::tag_t getTag_Include__translationUnit() const;
 	e4c::tag_t getTag_BinaryExpression__left() const;
 	e4c::tag_t getTag_BinaryExpression__right() const;
 	e4c::tag_t getTag_BinaryExpression__operator() const;
 	e4c::tag_t getTag_UnaryExpression__expression() const;
 	e4c::tag_t getTag_UnaryExpression__operator() const;
 	e4c::tag_t getTag_ConstantDefRef__constant() const;
 	e4c::tag_t getTag_ValueExpression__value() const;
 	e4c::tag_t getTag_ForwardDef__definition() const;
 	e4c::tag_t getTag_EnumMember__enum() const;
 	e4c::tag_t getTag_NamedElement__identifier() const;

protected:
    IdlmmPackage();
    
 	::ecore::EClass_ptr m_ModelElement;
 	::ecore::EClass_ptr m_Container;
 	::ecore::EClass_ptr m_Contained;
 	::ecore::EClass_ptr m_InterfaceDef;
 	::ecore::EClass_ptr m_ModuleDef;
 	::ecore::EClass_ptr m_IDLType;
 	::ecore::EClass_ptr m_OperationDef;
 	::ecore::EClass_ptr m_AttributeDef;
 	::ecore::EClass_ptr m_ConstantDef;
 	::ecore::EClass_ptr m_Typed;
 	::ecore::EClass_ptr m_ParameterDef;
 	::ecore::EEnum_ptr m_ParameterMode;
 	::ecore::EClass_ptr m_PrimitiveDef;
 	::ecore::EEnum_ptr m_PrimitiveKind;
 	::ecore::EClass_ptr m_ExceptionDef;
 	::ecore::EDataType_ptr m_EAny;
 	::ecore::EDataType_ptr m_ETypeCode;
 	::ecore::EClass_ptr m_Field;
 	::ecore::EClass_ptr m_FixedDef;
 	::ecore::EClass_ptr m_WstringDef;
 	::ecore::EClass_ptr m_StringDef;
 	::ecore::EClass_ptr m_AliasDef;
 	::ecore::EClass_ptr m_ArrayDef;
 	::ecore::EClass_ptr m_SequenceDef;
 	::ecore::EClass_ptr m_UnionField;
 	::ecore::EClass_ptr m_TypedefDef;
 	::ecore::EClass_ptr m_UnionDef;
 	::ecore::EClass_ptr m_EnumDef;
 	::ecore::EClass_ptr m_StructDef;
 	::ecore::EClass_ptr m_TranslationUnit;
 	::ecore::EClass_ptr m_Include;
 	::ecore::EClass_ptr m_Expression;
 	::ecore::EClass_ptr m_BinaryExpression;
 	::ecore::EClass_ptr m_UnaryExpression;
 	::ecore::EClass_ptr m_LiteralExpression;
 	::ecore::EClass_ptr m_ConstantDefRef;
 	::ecore::EClass_ptr m_ValueExpression;
 	::ecore::EClass_ptr m_ForwardDef;
 	::ecore::EClass_ptr m_EnumMember;
 	::ecore::EClass_ptr m_Constant;
 	::ecore::EClass_ptr m_NamedElement;
};

} // idlmm


#endif // EMF_CPP_IDLMM_PACKAGE_HPP
