#include "IdlmmPackage.hpp"
#include "IdlmmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace idlmm;

IdlmmPackage::IdlmmPackage()
{
	m_eFactoryInstance = IdlmmFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	// ParameterMode
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(ParameterMode);
	    ee->setEPackage(this);
	    ee->setName("ParameterMode");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PARAM_IN");
	        el->setValue(ParameterMode::PARAM_IN);
	        el->setLiteral("PARAM_IN");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PARAM_OUT");
	        el->setValue(ParameterMode::PARAM_OUT);
	        el->setLiteral("PARAM_OUT");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PARAM_INOUT");
	        el->setValue(ParameterMode::PARAM_INOUT);
	        el->setLiteral("PARAM_INOUT");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// PrimitiveKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(PrimitiveKind);
	    ee->setEPackage(this);
	    ee->setName("PrimitiveKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_NULL");
	        el->setValue(PrimitiveKind::PK_NULL);
	        el->setLiteral("PK_NULL");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_VOID");
	        el->setValue(PrimitiveKind::PK_VOID);
	        el->setLiteral("PK_VOID");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_SHORT");
	        el->setValue(PrimitiveKind::PK_SHORT);
	        el->setLiteral("PK_SHORT");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_LONG");
	        el->setValue(PrimitiveKind::PK_LONG);
	        el->setLiteral("PK_LONG");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_USHORT");
	        el->setValue(PrimitiveKind::PK_USHORT);
	        el->setLiteral("PK_USHORT");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_ULONG");
	        el->setValue(PrimitiveKind::PK_ULONG);
	        el->setLiteral("PK_ULONG");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_FLOAT");
	        el->setValue(PrimitiveKind::PK_FLOAT);
	        el->setLiteral("PK_FLOAT");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_DOUBLE");
	        el->setValue(PrimitiveKind::PK_DOUBLE);
	        el->setLiteral("PK_DOUBLE");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_BOOLEAN");
	        el->setValue(PrimitiveKind::PK_BOOLEAN);
	        el->setLiteral("PK_BOOLEAN");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_CHAR");
	        el->setValue(PrimitiveKind::PK_CHAR);
	        el->setLiteral("PK_CHAR");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_OCTET");
	        el->setValue(PrimitiveKind::PK_OCTET);
	        el->setLiteral("PK_OCTET");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_ANY");
	        el->setValue(PrimitiveKind::PK_ANY);
	        el->setLiteral("PK_ANY");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_LONGDOUBLE");
	        el->setValue(PrimitiveKind::PK_LONGDOUBLE);
	        el->setLiteral("PK_LONGDOUBLE");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_WSTRING");
	        el->setValue(PrimitiveKind::PK_WSTRING);
	        el->setLiteral("PK_WSTRING");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_TYPECODE");
	        el->setValue(PrimitiveKind::PK_TYPECODE);
	        el->setLiteral("PK_TYPECODE");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_WCHAR");
	        el->setValue(PrimitiveKind::PK_WCHAR);
	        el->setLiteral("PK_WCHAR");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_PRINCIPAL");
	        el->setValue(PrimitiveKind::PK_PRINCIPAL);
	        el->setLiteral("PK_PRINCIPAL");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_STRING");
	        el->setValue(PrimitiveKind::PK_STRING);
	        el->setLiteral("PK_STRING");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_ULONGLONG");
	        el->setValue(PrimitiveKind::PK_ULONGLONG);
	        el->setLiteral("PK_ULONGLONG");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_OBJREF");
	        el->setValue(PrimitiveKind::PK_OBJREF);
	        el->setLiteral("PK_OBJREF");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("PK_LONGLONG");
	        el->setValue(PrimitiveKind::PK_LONGLONG);
	        el->setLiteral("PK_LONGLONG");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
}

const IdlmmPackage_ptr IdlmmPackage::_instance()
{
	static IdlmmPackage __instance;
	return &__instance;
}

e4c::tag_t IdlmmPackage::getTag_ModelElement() const
{
	return e4c::tag< ModelElement >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Container() const
{
	return e4c::tag< Container >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Contained() const
{
	return e4c::tag< Contained >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_InterfaceDef() const
{
	return e4c::tag< InterfaceDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ModuleDef() const
{
	return e4c::tag< ModuleDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_IDLType() const
{
	return e4c::tag< IDLType >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_OperationDef() const
{
	return e4c::tag< OperationDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_AttributeDef() const
{
	return e4c::tag< AttributeDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ConstantDef() const
{
	return e4c::tag< ConstantDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Typed() const
{
	return e4c::tag< Typed >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ParameterDef() const
{
	return e4c::tag< ParameterDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ParameterMode() const
{
	return e4c::tag< ParameterMode >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_PrimitiveDef() const
{
	return e4c::tag< PrimitiveDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_PrimitiveKind() const
{
	return e4c::tag< PrimitiveKind >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ExceptionDef() const
{
	return e4c::tag< ExceptionDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_EAny() const
{
	return e4c::tag< EAny >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ETypeCode() const
{
	return e4c::tag< ETypeCode >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Field() const
{
	return e4c::tag< Field >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_FixedDef() const
{
	return e4c::tag< FixedDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_WstringDef() const
{
	return e4c::tag< WstringDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_StringDef() const
{
	return e4c::tag< StringDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_AliasDef() const
{
	return e4c::tag< AliasDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ArrayDef() const
{
	return e4c::tag< ArrayDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_SequenceDef() const
{
	return e4c::tag< SequenceDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_UnionField() const
{
	return e4c::tag< UnionField >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_TypedefDef() const
{
	return e4c::tag< TypedefDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_UnionDef() const
{
	return e4c::tag< UnionDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_EnumDef() const
{
	return e4c::tag< EnumDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_StructDef() const
{
	return e4c::tag< StructDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_TranslationUnit() const
{
	return e4c::tag< TranslationUnit >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Include() const
{
	return e4c::tag< Include >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Expression() const
{
	return e4c::tag< Expression >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_BinaryExpression() const
{
	return e4c::tag< BinaryExpression >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_UnaryExpression() const
{
	return e4c::tag< UnaryExpression >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_LiteralExpression() const
{
	return e4c::tag< LiteralExpression >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ConstantDefRef() const
{
	return e4c::tag< ConstantDefRef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ValueExpression() const
{
	return e4c::tag< ValueExpression >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_ForwardDef() const
{
	return e4c::tag< ForwardDef >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_EnumMember() const
{
	return e4c::tag< EnumMember >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Constant() const
{
	return e4c::tag< Constant >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_NamedElement() const
{
	return e4c::tag< NamedElement >::get();
}
 
e4c::tag_t IdlmmPackage::getTag_Container__contains() const
{
	return e4c::tag< Container__contains_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Contained__repositoryId() const
{
	return e4c::tag< Contained__repositoryId_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Contained__version() const
{
	return e4c::tag< Contained__version_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Contained__absoluteName() const
{
	return e4c::tag< Contained__absoluteName_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Contained__definedIn() const
{
	return e4c::tag< Contained__definedIn_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isAbstract() const
{
	return e4c::tag< InterfaceDef__isAbstract_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isCustom() const
{
	return e4c::tag< InterfaceDef__isCustom_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isTruncatable() const
{
	return e4c::tag< InterfaceDef__isTruncatable_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__derivesFrom() const
{
	return e4c::tag< InterfaceDef__derivesFrom_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__forward() const
{
	return e4c::tag< InterfaceDef__forward_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ModuleDef__prefix() const
{
	return e4c::tag< ModuleDef__prefix_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_IDLType__typeCode() const
{
	return e4c::tag< IDLType__typeCode_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__parameters() const
{
	return e4c::tag< OperationDef__parameters_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__isOneway() const
{
	return e4c::tag< OperationDef__isOneway_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__contexts() const
{
	return e4c::tag< OperationDef__contexts_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__canRaise() const
{
	return e4c::tag< OperationDef__canRaise_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__getRaises() const
{
	return e4c::tag< AttributeDef__getRaises_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__setRaises() const
{
	return e4c::tag< AttributeDef__setRaises_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__isReadonly() const
{
	return e4c::tag< AttributeDef__isReadonly_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ConstantDef__constValue() const
{
	return e4c::tag< ConstantDef__constValue_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Typed__containedType() const
{
	return e4c::tag< Typed__containedType_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Typed__sharedType() const
{
	return e4c::tag< Typed__sharedType_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ParameterDef__identifier() const
{
	return e4c::tag< ParameterDef__identifier_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ParameterDef__direction() const
{
	return e4c::tag< ParameterDef__direction_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_PrimitiveDef__kind() const
{
	return e4c::tag< PrimitiveDef__kind_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ExceptionDef__typeCode() const
{
	return e4c::tag< ExceptionDef__typeCode_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ExceptionDef__members() const
{
	return e4c::tag< ExceptionDef__members_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Field__identifier() const
{
	return e4c::tag< Field__identifier_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_FixedDef__digits() const
{
	return e4c::tag< FixedDef__digits_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_FixedDef__scale() const
{
	return e4c::tag< FixedDef__scale_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_WstringDef__bound() const
{
	return e4c::tag< WstringDef__bound_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_StringDef__bound() const
{
	return e4c::tag< StringDef__bound_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ArrayDef__name() const
{
	return e4c::tag< ArrayDef__name_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ArrayDef__bounds() const
{
	return e4c::tag< ArrayDef__bounds_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_SequenceDef__bound() const
{
	return e4c::tag< SequenceDef__bound_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnionField__identifier() const
{
	return e4c::tag< UnionField__identifier_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnionField__label() const
{
	return e4c::tag< UnionField__label_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__unionMembers() const
{
	return e4c::tag< UnionDef__unionMembers_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__containedDiscrim() const
{
	return e4c::tag< UnionDef__containedDiscrim_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__sharedDiscrim() const
{
	return e4c::tag< UnionDef__sharedDiscrim_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_EnumDef__members() const
{
	return e4c::tag< EnumDef__members_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_StructDef__members() const
{
	return e4c::tag< StructDef__members_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__contains() const
{
	return e4c::tag< TranslationUnit__contains_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__identifier() const
{
	return e4c::tag< TranslationUnit__identifier_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__includes() const
{
	return e4c::tag< TranslationUnit__includes_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Include__importURI() const
{
	return e4c::tag< Include__importURI_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_Include__translationUnit() const
{
	return e4c::tag< Include__translationUnit_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__left() const
{
	return e4c::tag< BinaryExpression__left_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__right() const
{
	return e4c::tag< BinaryExpression__right_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__operator() const
{
	return e4c::tag< BinaryExpression__operator_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnaryExpression__expression() const
{
	return e4c::tag< UnaryExpression__expression_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_UnaryExpression__operator() const
{
	return e4c::tag< UnaryExpression__operator_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ConstantDefRef__constant() const
{
	return e4c::tag< ConstantDefRef__constant_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ValueExpression__value() const
{
	return e4c::tag< ValueExpression__value_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_ForwardDef__definition() const
{
	return e4c::tag< ForwardDef__definition_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_EnumMember__enum() const
{
	return e4c::tag< EnumMember__enum_tag >::get();
}

e4c::tag_t IdlmmPackage::getTag_NamedElement__identifier() const
{
	return e4c::tag< NamedElement__identifier_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_idlmm()
{
	return ::idlmm::IdlmmPackage::_instance();
}
