#include "IdlmmPackage.hpp"
#include "IdlmmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace idlmm;

IdlmmPackage::IdlmmPackage()
{
	m_eFactoryInstance = IdlmmFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	m_ModelElement = ecoreFactory->createEClass();
	m_ModelElement->setName("ModelElement");
	addEClassifiers(m_ModelElement);
	m_Container = ecoreFactory->createEClass();
	m_Container->setName("Container");
	addEClassifiers(m_Container);
	m_Contained = ecoreFactory->createEClass();
	m_Contained->setName("Contained");
	addEClassifiers(m_Contained);
	m_InterfaceDef = ecoreFactory->createEClass();
	m_InterfaceDef->setName("InterfaceDef");
	addEClassifiers(m_InterfaceDef);
	m_ModuleDef = ecoreFactory->createEClass();
	m_ModuleDef->setName("ModuleDef");
	addEClassifiers(m_ModuleDef);
	m_IDLType = ecoreFactory->createEClass();
	m_IDLType->setName("IDLType");
	addEClassifiers(m_IDLType);
	m_OperationDef = ecoreFactory->createEClass();
	m_OperationDef->setName("OperationDef");
	addEClassifiers(m_OperationDef);
	m_AttributeDef = ecoreFactory->createEClass();
	m_AttributeDef->setName("AttributeDef");
	addEClassifiers(m_AttributeDef);
	m_ConstantDef = ecoreFactory->createEClass();
	m_ConstantDef->setName("ConstantDef");
	addEClassifiers(m_ConstantDef);
	m_Typed = ecoreFactory->createEClass();
	m_Typed->setName("Typed");
	addEClassifiers(m_Typed);
	m_ParameterDef = ecoreFactory->createEClass();
	m_ParameterDef->setName("ParameterDef");
	addEClassifiers(m_ParameterDef);
	m_ParameterMode = ecoreFactory->createEEnum();
	m_ParameterMode->setName("ParameterMode");
	addEClassifiers(m_ParameterMode);
	m_PrimitiveDef = ecoreFactory->createEClass();
	m_PrimitiveDef->setName("PrimitiveDef");
	addEClassifiers(m_PrimitiveDef);
	m_PrimitiveKind = ecoreFactory->createEEnum();
	m_PrimitiveKind->setName("PrimitiveKind");
	addEClassifiers(m_PrimitiveKind);
	m_ExceptionDef = ecoreFactory->createEClass();
	m_ExceptionDef->setName("ExceptionDef");
	addEClassifiers(m_ExceptionDef);
	m_EAny = ecoreFactory->createEDataType();
	m_EAny->setName("EAny");
	addEClassifiers(m_EAny);
	m_ETypeCode = ecoreFactory->createEDataType();
	m_ETypeCode->setName("ETypeCode");
	addEClassifiers(m_ETypeCode);
	m_Field = ecoreFactory->createEClass();
	m_Field->setName("Field");
	addEClassifiers(m_Field);
	m_FixedDef = ecoreFactory->createEClass();
	m_FixedDef->setName("FixedDef");
	addEClassifiers(m_FixedDef);
	m_WstringDef = ecoreFactory->createEClass();
	m_WstringDef->setName("WstringDef");
	addEClassifiers(m_WstringDef);
	m_StringDef = ecoreFactory->createEClass();
	m_StringDef->setName("StringDef");
	addEClassifiers(m_StringDef);
	m_AliasDef = ecoreFactory->createEClass();
	m_AliasDef->setName("AliasDef");
	addEClassifiers(m_AliasDef);
	m_ArrayDef = ecoreFactory->createEClass();
	m_ArrayDef->setName("ArrayDef");
	addEClassifiers(m_ArrayDef);
	m_SequenceDef = ecoreFactory->createEClass();
	m_SequenceDef->setName("SequenceDef");
	addEClassifiers(m_SequenceDef);
	m_UnionField = ecoreFactory->createEClass();
	m_UnionField->setName("UnionField");
	addEClassifiers(m_UnionField);
	m_TypedefDef = ecoreFactory->createEClass();
	m_TypedefDef->setName("TypedefDef");
	addEClassifiers(m_TypedefDef);
	m_UnionDef = ecoreFactory->createEClass();
	m_UnionDef->setName("UnionDef");
	addEClassifiers(m_UnionDef);
	m_EnumDef = ecoreFactory->createEClass();
	m_EnumDef->setName("EnumDef");
	addEClassifiers(m_EnumDef);
	m_StructDef = ecoreFactory->createEClass();
	m_StructDef->setName("StructDef");
	addEClassifiers(m_StructDef);
	m_TranslationUnit = ecoreFactory->createEClass();
	m_TranslationUnit->setName("TranslationUnit");
	addEClassifiers(m_TranslationUnit);
	m_Include = ecoreFactory->createEClass();
	m_Include->setName("Include");
	addEClassifiers(m_Include);
	m_Expression = ecoreFactory->createEClass();
	m_Expression->setName("Expression");
	addEClassifiers(m_Expression);
	m_BinaryExpression = ecoreFactory->createEClass();
	m_BinaryExpression->setName("BinaryExpression");
	addEClassifiers(m_BinaryExpression);
	m_UnaryExpression = ecoreFactory->createEClass();
	m_UnaryExpression->setName("UnaryExpression");
	addEClassifiers(m_UnaryExpression);
	m_LiteralExpression = ecoreFactory->createEClass();
	m_LiteralExpression->setName("LiteralExpression");
	addEClassifiers(m_LiteralExpression);
	m_ConstantDefRef = ecoreFactory->createEClass();
	m_ConstantDefRef->setName("ConstantDefRef");
	addEClassifiers(m_ConstantDefRef);
	m_ValueExpression = ecoreFactory->createEClass();
	m_ValueExpression->setName("ValueExpression");
	addEClassifiers(m_ValueExpression);
	m_ForwardDef = ecoreFactory->createEClass();
	m_ForwardDef->setName("ForwardDef");
	addEClassifiers(m_ForwardDef);
	m_EnumMember = ecoreFactory->createEClass();
	m_EnumMember->setName("EnumMember");
	addEClassifiers(m_EnumMember);
	m_Constant = ecoreFactory->createEClass();
	m_Constant->setName("Constant");
	addEClassifiers(m_Constant);
	m_NamedElement = ecoreFactory->createEClass();
	m_NamedElement->setName("NamedElement");
	addEClassifiers(m_NamedElement);
	
	
    m_ParameterMode->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PARAM_IN");
        el->setValue(static_cast< ::ecore::EInt >(ParameterMode::PARAM_IN));
        el->setLiteral("PARAM_IN");
        m_ParameterMode->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PARAM_OUT");
        el->setValue(static_cast< ::ecore::EInt >(ParameterMode::PARAM_OUT));
        el->setLiteral("PARAM_OUT");
        m_ParameterMode->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PARAM_INOUT");
        el->setValue(static_cast< ::ecore::EInt >(ParameterMode::PARAM_INOUT));
        el->setLiteral("PARAM_INOUT");
        m_ParameterMode->addELiterals(el);
    }
    m_PrimitiveKind->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_NULL");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_NULL));
        el->setLiteral("PK_NULL");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_VOID");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_VOID));
        el->setLiteral("PK_VOID");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_SHORT");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_SHORT));
        el->setLiteral("PK_SHORT");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_LONG");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_LONG));
        el->setLiteral("PK_LONG");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_USHORT");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_USHORT));
        el->setLiteral("PK_USHORT");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_ULONG");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_ULONG));
        el->setLiteral("PK_ULONG");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_FLOAT");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_FLOAT));
        el->setLiteral("PK_FLOAT");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_DOUBLE");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_DOUBLE));
        el->setLiteral("PK_DOUBLE");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_BOOLEAN");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_BOOLEAN));
        el->setLiteral("PK_BOOLEAN");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_CHAR");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_CHAR));
        el->setLiteral("PK_CHAR");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_OCTET");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_OCTET));
        el->setLiteral("PK_OCTET");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_ANY");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_ANY));
        el->setLiteral("PK_ANY");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_LONGDOUBLE");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_LONGDOUBLE));
        el->setLiteral("PK_LONGDOUBLE");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_WSTRING");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_WSTRING));
        el->setLiteral("PK_WSTRING");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_TYPECODE");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_TYPECODE));
        el->setLiteral("PK_TYPECODE");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_WCHAR");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_WCHAR));
        el->setLiteral("PK_WCHAR");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_PRINCIPAL");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_PRINCIPAL));
        el->setLiteral("PK_PRINCIPAL");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_STRING");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_STRING));
        el->setLiteral("PK_STRING");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_ULONGLONG");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_ULONGLONG));
        el->setLiteral("PK_ULONGLONG");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_OBJREF");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_OBJREF));
        el->setLiteral("PK_OBJREF");
        m_PrimitiveKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("PK_LONGLONG");
        el->setValue(static_cast< ::ecore::EInt >(PrimitiveKind::PK_LONGLONG));
        el->setLiteral("PK_LONGLONG");
        m_PrimitiveKind->addELiterals(el);
    }
	
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("contains");
        m_Container->addEStructuralFeatures(ef);
        m_Container->addEAllStructuralFeatures(ef);
        m_Container->addEReferences(ef);
        m_Container->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("repositoryId");
        m_Contained->addEStructuralFeatures(ef);
        m_Contained->addEAllStructuralFeatures(ef);
        m_Contained->addEAttributes(ef);
        m_Contained->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("version");
        m_Contained->addEStructuralFeatures(ef);
        m_Contained->addEAllStructuralFeatures(ef);
        m_Contained->addEAttributes(ef);
        m_Contained->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("absoluteName");
        m_Contained->addEStructuralFeatures(ef);
        m_Contained->addEAllStructuralFeatures(ef);
        m_Contained->addEAttributes(ef);
        m_Contained->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("definedIn");
        m_Contained->addEStructuralFeatures(ef);
        m_Contained->addEAllStructuralFeatures(ef);
        m_Contained->addEReferences(ef);
        m_Contained->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("isAbstract");
        m_InterfaceDef->addEStructuralFeatures(ef);
        m_InterfaceDef->addEAllStructuralFeatures(ef);
        m_InterfaceDef->addEAttributes(ef);
        m_InterfaceDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("isCustom");
        m_InterfaceDef->addEStructuralFeatures(ef);
        m_InterfaceDef->addEAllStructuralFeatures(ef);
        m_InterfaceDef->addEAttributes(ef);
        m_InterfaceDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("isTruncatable");
        m_InterfaceDef->addEStructuralFeatures(ef);
        m_InterfaceDef->addEAllStructuralFeatures(ef);
        m_InterfaceDef->addEAttributes(ef);
        m_InterfaceDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("derivesFrom");
        m_InterfaceDef->addEStructuralFeatures(ef);
        m_InterfaceDef->addEAllStructuralFeatures(ef);
        m_InterfaceDef->addEReferences(ef);
        m_InterfaceDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("forward");
        m_InterfaceDef->addEStructuralFeatures(ef);
        m_InterfaceDef->addEAllStructuralFeatures(ef);
        m_InterfaceDef->addEReferences(ef);
        m_InterfaceDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("prefix");
        m_ModuleDef->addEStructuralFeatures(ef);
        m_ModuleDef->addEAllStructuralFeatures(ef);
        m_ModuleDef->addEAttributes(ef);
        m_ModuleDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("typeCode");
        m_IDLType->addEStructuralFeatures(ef);
        m_IDLType->addEAllStructuralFeatures(ef);
        m_IDLType->addEAttributes(ef);
        m_IDLType->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("parameters");
        m_OperationDef->addEStructuralFeatures(ef);
        m_OperationDef->addEAllStructuralFeatures(ef);
        m_OperationDef->addEReferences(ef);
        m_OperationDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("isOneway");
        m_OperationDef->addEStructuralFeatures(ef);
        m_OperationDef->addEAllStructuralFeatures(ef);
        m_OperationDef->addEAttributes(ef);
        m_OperationDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("contexts");
        m_OperationDef->addEStructuralFeatures(ef);
        m_OperationDef->addEAllStructuralFeatures(ef);
        m_OperationDef->addEAttributes(ef);
        m_OperationDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("canRaise");
        m_OperationDef->addEStructuralFeatures(ef);
        m_OperationDef->addEAllStructuralFeatures(ef);
        m_OperationDef->addEReferences(ef);
        m_OperationDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("getRaises");
        m_AttributeDef->addEStructuralFeatures(ef);
        m_AttributeDef->addEAllStructuralFeatures(ef);
        m_AttributeDef->addEReferences(ef);
        m_AttributeDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("setRaises");
        m_AttributeDef->addEStructuralFeatures(ef);
        m_AttributeDef->addEAllStructuralFeatures(ef);
        m_AttributeDef->addEReferences(ef);
        m_AttributeDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("isReadonly");
        m_AttributeDef->addEStructuralFeatures(ef);
        m_AttributeDef->addEAllStructuralFeatures(ef);
        m_AttributeDef->addEAttributes(ef);
        m_AttributeDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("constValue");
        m_ConstantDef->addEStructuralFeatures(ef);
        m_ConstantDef->addEAllStructuralFeatures(ef);
        m_ConstantDef->addEReferences(ef);
        m_ConstantDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("containedType");
        m_Typed->addEStructuralFeatures(ef);
        m_Typed->addEAllStructuralFeatures(ef);
        m_Typed->addEReferences(ef);
        m_Typed->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("sharedType");
        m_Typed->addEStructuralFeatures(ef);
        m_Typed->addEAllStructuralFeatures(ef);
        m_Typed->addEReferences(ef);
        m_Typed->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("identifier");
        m_ParameterDef->addEStructuralFeatures(ef);
        m_ParameterDef->addEAllStructuralFeatures(ef);
        m_ParameterDef->addEAttributes(ef);
        m_ParameterDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("direction");
        m_ParameterDef->addEStructuralFeatures(ef);
        m_ParameterDef->addEAllStructuralFeatures(ef);
        m_ParameterDef->addEAttributes(ef);
        m_ParameterDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("kind");
        m_PrimitiveDef->addEStructuralFeatures(ef);
        m_PrimitiveDef->addEAllStructuralFeatures(ef);
        m_PrimitiveDef->addEAttributes(ef);
        m_PrimitiveDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("typeCode");
        m_ExceptionDef->addEStructuralFeatures(ef);
        m_ExceptionDef->addEAllStructuralFeatures(ef);
        m_ExceptionDef->addEAttributes(ef);
        m_ExceptionDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("members");
        m_ExceptionDef->addEStructuralFeatures(ef);
        m_ExceptionDef->addEAllStructuralFeatures(ef);
        m_ExceptionDef->addEReferences(ef);
        m_ExceptionDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("identifier");
        m_Field->addEStructuralFeatures(ef);
        m_Field->addEAllStructuralFeatures(ef);
        m_Field->addEAttributes(ef);
        m_Field->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("digits");
        m_FixedDef->addEStructuralFeatures(ef);
        m_FixedDef->addEAllStructuralFeatures(ef);
        m_FixedDef->addEReferences(ef);
        m_FixedDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("scale");
        m_FixedDef->addEStructuralFeatures(ef);
        m_FixedDef->addEAllStructuralFeatures(ef);
        m_FixedDef->addEReferences(ef);
        m_FixedDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("bound");
        m_WstringDef->addEStructuralFeatures(ef);
        m_WstringDef->addEAllStructuralFeatures(ef);
        m_WstringDef->addEReferences(ef);
        m_WstringDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("bound");
        m_StringDef->addEStructuralFeatures(ef);
        m_StringDef->addEAllStructuralFeatures(ef);
        m_StringDef->addEReferences(ef);
        m_StringDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("name");
        m_ArrayDef->addEStructuralFeatures(ef);
        m_ArrayDef->addEAllStructuralFeatures(ef);
        m_ArrayDef->addEAttributes(ef);
        m_ArrayDef->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("bounds");
        m_ArrayDef->addEStructuralFeatures(ef);
        m_ArrayDef->addEAllStructuralFeatures(ef);
        m_ArrayDef->addEReferences(ef);
        m_ArrayDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("bound");
        m_SequenceDef->addEStructuralFeatures(ef);
        m_SequenceDef->addEAllStructuralFeatures(ef);
        m_SequenceDef->addEReferences(ef);
        m_SequenceDef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("identifier");
        m_UnionField->addEStructuralFeatures(ef);
        m_UnionField->addEAllStructuralFeatures(ef);
        m_UnionField->addEAttributes(ef);
        m_UnionField->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("label");
        m_UnionField->addEStructuralFeatures(ef);
        m_UnionField->addEAllStructuralFeatures(ef);
        m_UnionField->addEReferences(ef);
        m_UnionField->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("unionMembers");
        m_UnionDef->addEStructuralFeatures(ef);
        m_UnionDef->addEAllStructuralFeatures(ef);
        m_UnionDef->addEReferences(ef);
        m_UnionDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("containedDiscrim");
        m_UnionDef->addEStructuralFeatures(ef);
        m_UnionDef->addEAllStructuralFeatures(ef);
        m_UnionDef->addEReferences(ef);
        m_UnionDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("sharedDiscrim");
        m_UnionDef->addEStructuralFeatures(ef);
        m_UnionDef->addEAllStructuralFeatures(ef);
        m_UnionDef->addEReferences(ef);
        m_UnionDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("members");
        m_EnumDef->addEStructuralFeatures(ef);
        m_EnumDef->addEAllStructuralFeatures(ef);
        m_EnumDef->addEReferences(ef);
        m_EnumDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("members");
        m_StructDef->addEStructuralFeatures(ef);
        m_StructDef->addEAllStructuralFeatures(ef);
        m_StructDef->addEReferences(ef);
        m_StructDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("contains");
        m_TranslationUnit->addEStructuralFeatures(ef);
        m_TranslationUnit->addEAllStructuralFeatures(ef);
        m_TranslationUnit->addEReferences(ef);
        m_TranslationUnit->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("identifier");
        m_TranslationUnit->addEStructuralFeatures(ef);
        m_TranslationUnit->addEAllStructuralFeatures(ef);
        m_TranslationUnit->addEAttributes(ef);
        m_TranslationUnit->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("includes");
        m_TranslationUnit->addEStructuralFeatures(ef);
        m_TranslationUnit->addEAllStructuralFeatures(ef);
        m_TranslationUnit->addEReferences(ef);
        m_TranslationUnit->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("importURI");
        m_Include->addEStructuralFeatures(ef);
        m_Include->addEAllStructuralFeatures(ef);
        m_Include->addEAttributes(ef);
        m_Include->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("translationUnit");
        m_Include->addEStructuralFeatures(ef);
        m_Include->addEAllStructuralFeatures(ef);
        m_Include->addEReferences(ef);
        m_Include->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("left");
        m_BinaryExpression->addEStructuralFeatures(ef);
        m_BinaryExpression->addEAllStructuralFeatures(ef);
        m_BinaryExpression->addEReferences(ef);
        m_BinaryExpression->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("right");
        m_BinaryExpression->addEStructuralFeatures(ef);
        m_BinaryExpression->addEAllStructuralFeatures(ef);
        m_BinaryExpression->addEReferences(ef);
        m_BinaryExpression->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("operator");
        m_BinaryExpression->addEStructuralFeatures(ef);
        m_BinaryExpression->addEAllStructuralFeatures(ef);
        m_BinaryExpression->addEAttributes(ef);
        m_BinaryExpression->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("expression");
        m_UnaryExpression->addEStructuralFeatures(ef);
        m_UnaryExpression->addEAllStructuralFeatures(ef);
        m_UnaryExpression->addEReferences(ef);
        m_UnaryExpression->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("operator");
        m_UnaryExpression->addEStructuralFeatures(ef);
        m_UnaryExpression->addEAllStructuralFeatures(ef);
        m_UnaryExpression->addEAttributes(ef);
        m_UnaryExpression->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("constant");
        m_ConstantDefRef->addEStructuralFeatures(ef);
        m_ConstantDefRef->addEAllStructuralFeatures(ef);
        m_ConstantDefRef->addEReferences(ef);
        m_ConstantDefRef->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("value");
        m_ValueExpression->addEStructuralFeatures(ef);
        m_ValueExpression->addEAllStructuralFeatures(ef);
        m_ValueExpression->addEAttributes(ef);
        m_ValueExpression->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("definition");
        m_ForwardDef->addEStructuralFeatures(ef);
        m_ForwardDef->addEAllStructuralFeatures(ef);
        m_ForwardDef->addEReferences(ef);
        m_ForwardDef->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("enum");
        m_EnumMember->addEStructuralFeatures(ef);
        m_EnumMember->addEAllStructuralFeatures(ef);
        m_EnumMember->addEReferences(ef);
        m_EnumMember->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("identifier");
        m_NamedElement->addEStructuralFeatures(ef);
        m_NamedElement->addEAllStructuralFeatures(ef);
        m_NamedElement->addEAttributes(ef);
        m_NamedElement->addEAllAttributes(ef);
    }
	
	m_Container->addESuperTypes(m_Contained);
	m_Container->addAllEAllOperations(m_Contained->getEOperations());
	m_Container->addAllEAllReferences(m_Contained->getEReferences());
	m_Container->addAllEAllAttributes(m_Contained->getEAttributes());
	m_Container->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_Contained->addESuperTypes(m_NamedElement);
	m_Contained->addAllEAllOperations(m_NamedElement->getEOperations());
	m_Contained->addAllEAllReferences(m_NamedElement->getEReferences());
	m_Contained->addAllEAllAttributes(m_NamedElement->getEAttributes());
	m_Contained->addAllEAllStructuralFeatures(m_NamedElement->getEStructuralFeatures());
	m_InterfaceDef->addESuperTypes(m_Container);
	m_InterfaceDef->addAllEAllOperations(m_Container->getEOperations());
	m_InterfaceDef->addAllEAllReferences(m_Container->getEReferences());
	m_InterfaceDef->addAllEAllAttributes(m_Container->getEAttributes());
	m_InterfaceDef->addAllEAllStructuralFeatures(m_Container->getEStructuralFeatures());
	m_InterfaceDef->addESuperTypes(m_TypedefDef);
	m_InterfaceDef->addAllEAllOperations(m_TypedefDef->getEOperations());
	m_InterfaceDef->addAllEAllReferences(m_TypedefDef->getEReferences());
	m_InterfaceDef->addAllEAllAttributes(m_TypedefDef->getEAttributes());
	m_InterfaceDef->addAllEAllStructuralFeatures(m_TypedefDef->getEStructuralFeatures());
	m_ModuleDef->addESuperTypes(m_Container);
	m_ModuleDef->addAllEAllOperations(m_Container->getEOperations());
	m_ModuleDef->addAllEAllReferences(m_Container->getEReferences());
	m_ModuleDef->addAllEAllAttributes(m_Container->getEAttributes());
	m_ModuleDef->addAllEAllStructuralFeatures(m_Container->getEStructuralFeatures());
	m_IDLType->addESuperTypes(m_ModelElement);
	m_IDLType->addAllEAllOperations(m_ModelElement->getEOperations());
	m_IDLType->addAllEAllReferences(m_ModelElement->getEReferences());
	m_IDLType->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_IDLType->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_OperationDef->addESuperTypes(m_Contained);
	m_OperationDef->addAllEAllOperations(m_Contained->getEOperations());
	m_OperationDef->addAllEAllReferences(m_Contained->getEReferences());
	m_OperationDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_OperationDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_OperationDef->addESuperTypes(m_Typed);
	m_OperationDef->addAllEAllOperations(m_Typed->getEOperations());
	m_OperationDef->addAllEAllReferences(m_Typed->getEReferences());
	m_OperationDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_OperationDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_AttributeDef->addESuperTypes(m_Contained);
	m_AttributeDef->addAllEAllOperations(m_Contained->getEOperations());
	m_AttributeDef->addAllEAllReferences(m_Contained->getEReferences());
	m_AttributeDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_AttributeDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_AttributeDef->addESuperTypes(m_Typed);
	m_AttributeDef->addAllEAllOperations(m_Typed->getEOperations());
	m_AttributeDef->addAllEAllReferences(m_Typed->getEReferences());
	m_AttributeDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_AttributeDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_ConstantDef->addESuperTypes(m_Contained);
	m_ConstantDef->addAllEAllOperations(m_Contained->getEOperations());
	m_ConstantDef->addAllEAllReferences(m_Contained->getEReferences());
	m_ConstantDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_ConstantDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_ConstantDef->addESuperTypes(m_Typed);
	m_ConstantDef->addAllEAllOperations(m_Typed->getEOperations());
	m_ConstantDef->addAllEAllReferences(m_Typed->getEReferences());
	m_ConstantDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_ConstantDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_ConstantDef->addESuperTypes(m_Constant);
	m_ConstantDef->addAllEAllOperations(m_Constant->getEOperations());
	m_ConstantDef->addAllEAllReferences(m_Constant->getEReferences());
	m_ConstantDef->addAllEAllAttributes(m_Constant->getEAttributes());
	m_ConstantDef->addAllEAllStructuralFeatures(m_Constant->getEStructuralFeatures());
	m_Typed->addESuperTypes(m_ModelElement);
	m_Typed->addAllEAllOperations(m_ModelElement->getEOperations());
	m_Typed->addAllEAllReferences(m_ModelElement->getEReferences());
	m_Typed->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_Typed->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_ParameterDef->addESuperTypes(m_Typed);
	m_ParameterDef->addAllEAllOperations(m_Typed->getEOperations());
	m_ParameterDef->addAllEAllReferences(m_Typed->getEReferences());
	m_ParameterDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_ParameterDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_PrimitiveDef->addESuperTypes(m_IDLType);
	m_PrimitiveDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_PrimitiveDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_PrimitiveDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_PrimitiveDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_ExceptionDef->addESuperTypes(m_Contained);
	m_ExceptionDef->addAllEAllOperations(m_Contained->getEOperations());
	m_ExceptionDef->addAllEAllReferences(m_Contained->getEReferences());
	m_ExceptionDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_ExceptionDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_Field->addESuperTypes(m_Typed);
	m_Field->addAllEAllOperations(m_Typed->getEOperations());
	m_Field->addAllEAllReferences(m_Typed->getEReferences());
	m_Field->addAllEAllAttributes(m_Typed->getEAttributes());
	m_Field->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_FixedDef->addESuperTypes(m_IDLType);
	m_FixedDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_FixedDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_FixedDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_FixedDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_WstringDef->addESuperTypes(m_IDLType);
	m_WstringDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_WstringDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_WstringDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_WstringDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_StringDef->addESuperTypes(m_IDLType);
	m_StringDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_StringDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_StringDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_StringDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_AliasDef->addESuperTypes(m_Typed);
	m_AliasDef->addAllEAllOperations(m_Typed->getEOperations());
	m_AliasDef->addAllEAllReferences(m_Typed->getEReferences());
	m_AliasDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_AliasDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_AliasDef->addESuperTypes(m_TypedefDef);
	m_AliasDef->addAllEAllOperations(m_TypedefDef->getEOperations());
	m_AliasDef->addAllEAllReferences(m_TypedefDef->getEReferences());
	m_AliasDef->addAllEAllAttributes(m_TypedefDef->getEAttributes());
	m_AliasDef->addAllEAllStructuralFeatures(m_TypedefDef->getEStructuralFeatures());
	m_ArrayDef->addESuperTypes(m_Typed);
	m_ArrayDef->addAllEAllOperations(m_Typed->getEOperations());
	m_ArrayDef->addAllEAllReferences(m_Typed->getEReferences());
	m_ArrayDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_ArrayDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_ArrayDef->addESuperTypes(m_IDLType);
	m_ArrayDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_ArrayDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_ArrayDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_ArrayDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_SequenceDef->addESuperTypes(m_Typed);
	m_SequenceDef->addAllEAllOperations(m_Typed->getEOperations());
	m_SequenceDef->addAllEAllReferences(m_Typed->getEReferences());
	m_SequenceDef->addAllEAllAttributes(m_Typed->getEAttributes());
	m_SequenceDef->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_SequenceDef->addESuperTypes(m_IDLType);
	m_SequenceDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_SequenceDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_SequenceDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_SequenceDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_UnionField->addESuperTypes(m_Typed);
	m_UnionField->addAllEAllOperations(m_Typed->getEOperations());
	m_UnionField->addAllEAllReferences(m_Typed->getEReferences());
	m_UnionField->addAllEAllAttributes(m_Typed->getEAttributes());
	m_UnionField->addAllEAllStructuralFeatures(m_Typed->getEStructuralFeatures());
	m_TypedefDef->addESuperTypes(m_IDLType);
	m_TypedefDef->addAllEAllOperations(m_IDLType->getEOperations());
	m_TypedefDef->addAllEAllReferences(m_IDLType->getEReferences());
	m_TypedefDef->addAllEAllAttributes(m_IDLType->getEAttributes());
	m_TypedefDef->addAllEAllStructuralFeatures(m_IDLType->getEStructuralFeatures());
	m_TypedefDef->addESuperTypes(m_Contained);
	m_TypedefDef->addAllEAllOperations(m_Contained->getEOperations());
	m_TypedefDef->addAllEAllReferences(m_Contained->getEReferences());
	m_TypedefDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_TypedefDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_UnionDef->addESuperTypes(m_TypedefDef);
	m_UnionDef->addAllEAllOperations(m_TypedefDef->getEOperations());
	m_UnionDef->addAllEAllReferences(m_TypedefDef->getEReferences());
	m_UnionDef->addAllEAllAttributes(m_TypedefDef->getEAttributes());
	m_UnionDef->addAllEAllStructuralFeatures(m_TypedefDef->getEStructuralFeatures());
	m_EnumDef->addESuperTypes(m_TypedefDef);
	m_EnumDef->addAllEAllOperations(m_TypedefDef->getEOperations());
	m_EnumDef->addAllEAllReferences(m_TypedefDef->getEReferences());
	m_EnumDef->addAllEAllAttributes(m_TypedefDef->getEAttributes());
	m_EnumDef->addAllEAllStructuralFeatures(m_TypedefDef->getEStructuralFeatures());
	m_StructDef->addESuperTypes(m_TypedefDef);
	m_StructDef->addAllEAllOperations(m_TypedefDef->getEOperations());
	m_StructDef->addAllEAllReferences(m_TypedefDef->getEReferences());
	m_StructDef->addAllEAllAttributes(m_TypedefDef->getEAttributes());
	m_StructDef->addAllEAllStructuralFeatures(m_TypedefDef->getEStructuralFeatures());
	m_TranslationUnit->addESuperTypes(m_ModelElement);
	m_TranslationUnit->addAllEAllOperations(m_ModelElement->getEOperations());
	m_TranslationUnit->addAllEAllReferences(m_ModelElement->getEReferences());
	m_TranslationUnit->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_TranslationUnit->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_Include->addESuperTypes(m_ModelElement);
	m_Include->addAllEAllOperations(m_ModelElement->getEOperations());
	m_Include->addAllEAllReferences(m_ModelElement->getEReferences());
	m_Include->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_Include->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_Expression->addESuperTypes(m_ModelElement);
	m_Expression->addAllEAllOperations(m_ModelElement->getEOperations());
	m_Expression->addAllEAllReferences(m_ModelElement->getEReferences());
	m_Expression->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_Expression->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_BinaryExpression->addESuperTypes(m_Expression);
	m_BinaryExpression->addAllEAllOperations(m_Expression->getEOperations());
	m_BinaryExpression->addAllEAllReferences(m_Expression->getEReferences());
	m_BinaryExpression->addAllEAllAttributes(m_Expression->getEAttributes());
	m_BinaryExpression->addAllEAllStructuralFeatures(m_Expression->getEStructuralFeatures());
	m_UnaryExpression->addESuperTypes(m_Expression);
	m_UnaryExpression->addAllEAllOperations(m_Expression->getEOperations());
	m_UnaryExpression->addAllEAllReferences(m_Expression->getEReferences());
	m_UnaryExpression->addAllEAllAttributes(m_Expression->getEAttributes());
	m_UnaryExpression->addAllEAllStructuralFeatures(m_Expression->getEStructuralFeatures());
	m_LiteralExpression->addESuperTypes(m_Expression);
	m_LiteralExpression->addAllEAllOperations(m_Expression->getEOperations());
	m_LiteralExpression->addAllEAllReferences(m_Expression->getEReferences());
	m_LiteralExpression->addAllEAllAttributes(m_Expression->getEAttributes());
	m_LiteralExpression->addAllEAllStructuralFeatures(m_Expression->getEStructuralFeatures());
	m_ConstantDefRef->addESuperTypes(m_LiteralExpression);
	m_ConstantDefRef->addAllEAllOperations(m_LiteralExpression->getEOperations());
	m_ConstantDefRef->addAllEAllReferences(m_LiteralExpression->getEReferences());
	m_ConstantDefRef->addAllEAllAttributes(m_LiteralExpression->getEAttributes());
	m_ConstantDefRef->addAllEAllStructuralFeatures(m_LiteralExpression->getEStructuralFeatures());
	m_ValueExpression->addESuperTypes(m_LiteralExpression);
	m_ValueExpression->addAllEAllOperations(m_LiteralExpression->getEOperations());
	m_ValueExpression->addAllEAllReferences(m_LiteralExpression->getEReferences());
	m_ValueExpression->addAllEAllAttributes(m_LiteralExpression->getEAttributes());
	m_ValueExpression->addAllEAllStructuralFeatures(m_LiteralExpression->getEStructuralFeatures());
	m_ForwardDef->addESuperTypes(m_Contained);
	m_ForwardDef->addAllEAllOperations(m_Contained->getEOperations());
	m_ForwardDef->addAllEAllReferences(m_Contained->getEReferences());
	m_ForwardDef->addAllEAllAttributes(m_Contained->getEAttributes());
	m_ForwardDef->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_EnumMember->addESuperTypes(m_Constant);
	m_EnumMember->addAllEAllOperations(m_Constant->getEOperations());
	m_EnumMember->addAllEAllReferences(m_Constant->getEReferences());
	m_EnumMember->addAllEAllAttributes(m_Constant->getEAttributes());
	m_EnumMember->addAllEAllStructuralFeatures(m_Constant->getEStructuralFeatures());
	m_Constant->addESuperTypes(m_Contained);
	m_Constant->addAllEAllOperations(m_Contained->getEOperations());
	m_Constant->addAllEAllReferences(m_Contained->getEReferences());
	m_Constant->addAllEAllAttributes(m_Contained->getEAttributes());
	m_Constant->addAllEAllStructuralFeatures(m_Contained->getEStructuralFeatures());
	m_NamedElement->addESuperTypes(m_ModelElement);
	m_NamedElement->addAllEAllOperations(m_ModelElement->getEOperations());
	m_NamedElement->addAllEAllReferences(m_ModelElement->getEReferences());
	m_NamedElement->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_NamedElement->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	
}

const IdlmmPackage_ptr IdlmmPackage::_instance()
{
	static IdlmmPackage __instance;
	return &__instance;
}

ecore::EClass_ptr IdlmmPackage::getModelElement() const
{
	return m_ModelElement;
}
  	
e4c::tag_t IdlmmPackage::getTag_ModelElement() const
{
	return e4c::tag< ModelElement >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getContainer() const
{
	return m_Container;
}
  	
e4c::tag_t IdlmmPackage::getTag_Container() const
{
	return e4c::tag< Container >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getContained() const
{
	return m_Contained;
}
  	
e4c::tag_t IdlmmPackage::getTag_Contained() const
{
	return e4c::tag< Contained >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getInterfaceDef() const
{
	return m_InterfaceDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_InterfaceDef() const
{
	return e4c::tag< InterfaceDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getModuleDef() const
{
	return m_ModuleDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ModuleDef() const
{
	return e4c::tag< ModuleDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getIDLType() const
{
	return m_IDLType;
}
  	
e4c::tag_t IdlmmPackage::getTag_IDLType() const
{
	return e4c::tag< IDLType >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getOperationDef() const
{
	return m_OperationDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_OperationDef() const
{
	return e4c::tag< OperationDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getAttributeDef() const
{
	return m_AttributeDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_AttributeDef() const
{
	return e4c::tag< AttributeDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getConstantDef() const
{
	return m_ConstantDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ConstantDef() const
{
	return e4c::tag< ConstantDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getTyped() const
{
	return m_Typed;
}
  	
e4c::tag_t IdlmmPackage::getTag_Typed() const
{
	return e4c::tag< Typed >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getParameterDef() const
{
	return m_ParameterDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ParameterDef() const
{
	return e4c::tag< ParameterDef >::get();
}
 
ecore::EEnum_ptr IdlmmPackage::getParameterMode() const
{
	return m_ParameterMode;
}
  	
e4c::tag_t IdlmmPackage::getTag_ParameterMode() const
{
	return e4c::tag< ParameterMode >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getPrimitiveDef() const
{
	return m_PrimitiveDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_PrimitiveDef() const
{
	return e4c::tag< PrimitiveDef >::get();
}
 
ecore::EEnum_ptr IdlmmPackage::getPrimitiveKind() const
{
	return m_PrimitiveKind;
}
  	
e4c::tag_t IdlmmPackage::getTag_PrimitiveKind() const
{
	return e4c::tag< PrimitiveKind >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getExceptionDef() const
{
	return m_ExceptionDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ExceptionDef() const
{
	return e4c::tag< ExceptionDef >::get();
}
 
ecore::EDataType_ptr IdlmmPackage::getEAny() const
{
	return m_EAny;
}
  	
e4c::tag_t IdlmmPackage::getTag_EAny() const
{
	return e4c::tag< EAny >::get();
}
 
ecore::EDataType_ptr IdlmmPackage::getETypeCode() const
{
	return m_ETypeCode;
}
  	
e4c::tag_t IdlmmPackage::getTag_ETypeCode() const
{
	return e4c::tag< ETypeCode >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getField() const
{
	return m_Field;
}
  	
e4c::tag_t IdlmmPackage::getTag_Field() const
{
	return e4c::tag< Field >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getFixedDef() const
{
	return m_FixedDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_FixedDef() const
{
	return e4c::tag< FixedDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getWstringDef() const
{
	return m_WstringDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_WstringDef() const
{
	return e4c::tag< WstringDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getStringDef() const
{
	return m_StringDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_StringDef() const
{
	return e4c::tag< StringDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getAliasDef() const
{
	return m_AliasDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_AliasDef() const
{
	return e4c::tag< AliasDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getArrayDef() const
{
	return m_ArrayDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ArrayDef() const
{
	return e4c::tag< ArrayDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getSequenceDef() const
{
	return m_SequenceDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_SequenceDef() const
{
	return e4c::tag< SequenceDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getUnionField() const
{
	return m_UnionField;
}
  	
e4c::tag_t IdlmmPackage::getTag_UnionField() const
{
	return e4c::tag< UnionField >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getTypedefDef() const
{
	return m_TypedefDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_TypedefDef() const
{
	return e4c::tag< TypedefDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getUnionDef() const
{
	return m_UnionDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_UnionDef() const
{
	return e4c::tag< UnionDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getEnumDef() const
{
	return m_EnumDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_EnumDef() const
{
	return e4c::tag< EnumDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getStructDef() const
{
	return m_StructDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_StructDef() const
{
	return e4c::tag< StructDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getTranslationUnit() const
{
	return m_TranslationUnit;
}
  	
e4c::tag_t IdlmmPackage::getTag_TranslationUnit() const
{
	return e4c::tag< TranslationUnit >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getInclude() const
{
	return m_Include;
}
  	
e4c::tag_t IdlmmPackage::getTag_Include() const
{
	return e4c::tag< Include >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getExpression() const
{
	return m_Expression;
}
  	
e4c::tag_t IdlmmPackage::getTag_Expression() const
{
	return e4c::tag< Expression >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getBinaryExpression() const
{
	return m_BinaryExpression;
}
  	
e4c::tag_t IdlmmPackage::getTag_BinaryExpression() const
{
	return e4c::tag< BinaryExpression >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getUnaryExpression() const
{
	return m_UnaryExpression;
}
  	
e4c::tag_t IdlmmPackage::getTag_UnaryExpression() const
{
	return e4c::tag< UnaryExpression >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getLiteralExpression() const
{
	return m_LiteralExpression;
}
  	
e4c::tag_t IdlmmPackage::getTag_LiteralExpression() const
{
	return e4c::tag< LiteralExpression >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getConstantDefRef() const
{
	return m_ConstantDefRef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ConstantDefRef() const
{
	return e4c::tag< ConstantDefRef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getValueExpression() const
{
	return m_ValueExpression;
}
  	
e4c::tag_t IdlmmPackage::getTag_ValueExpression() const
{
	return e4c::tag< ValueExpression >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getForwardDef() const
{
	return m_ForwardDef;
}
  	
e4c::tag_t IdlmmPackage::getTag_ForwardDef() const
{
	return e4c::tag< ForwardDef >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getEnumMember() const
{
	return m_EnumMember;
}
  	
e4c::tag_t IdlmmPackage::getTag_EnumMember() const
{
	return e4c::tag< EnumMember >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getConstant() const
{
	return m_Constant;
}
  	
e4c::tag_t IdlmmPackage::getTag_Constant() const
{
	return e4c::tag< Constant >::get();
}
 
ecore::EClass_ptr IdlmmPackage::getNamedElement() const
{
	return m_NamedElement;
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
