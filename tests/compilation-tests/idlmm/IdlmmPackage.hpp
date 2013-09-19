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
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // idlmm


#endif // EMF_CPP_IDLMM_PACKAGE_HPP
