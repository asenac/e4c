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
    m_PrimitiveKind->setSerializable(true);
    m_EAny->setSerializable(true);
    m_ETypeCode->setSerializable(true);
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
        m_Container__contains = ecoreFactory->createEReference();
        m_Container__contains->setName("contains");
        m_Container->addEStructuralFeatures(m_Container__contains);
        m_Container->addEAllStructuralFeatures(m_Container__contains);
        m_Container->addEReferences(m_Container__contains);
        m_Container->addEAllReferences(m_Container__contains);
    }
    {
        m_Contained__repositoryId = ecoreFactory->createEAttribute();
        m_Contained__repositoryId->setName("repositoryId");
        m_Contained->addEStructuralFeatures(m_Contained__repositoryId);
        m_Contained->addEAllStructuralFeatures(m_Contained__repositoryId);
        m_Contained->addEAttributes(m_Contained__repositoryId);
        m_Contained->addEAllAttributes(m_Contained__repositoryId);
    }
    {
        m_Contained__version = ecoreFactory->createEAttribute();
        m_Contained__version->setName("version");
        m_Contained->addEStructuralFeatures(m_Contained__version);
        m_Contained->addEAllStructuralFeatures(m_Contained__version);
        m_Contained->addEAttributes(m_Contained__version);
        m_Contained->addEAllAttributes(m_Contained__version);
    }
    {
        m_Contained__absoluteName = ecoreFactory->createEAttribute();
        m_Contained__absoluteName->setName("absoluteName");
        m_Contained->addEStructuralFeatures(m_Contained__absoluteName);
        m_Contained->addEAllStructuralFeatures(m_Contained__absoluteName);
        m_Contained->addEAttributes(m_Contained__absoluteName);
        m_Contained->addEAllAttributes(m_Contained__absoluteName);
    }
    {
        m_Contained__definedIn = ecoreFactory->createEReference();
        m_Contained__definedIn->setName("definedIn");
        m_Contained->addEStructuralFeatures(m_Contained__definedIn);
        m_Contained->addEAllStructuralFeatures(m_Contained__definedIn);
        m_Contained->addEReferences(m_Contained__definedIn);
        m_Contained->addEAllReferences(m_Contained__definedIn);
    }
    {
        m_InterfaceDef__isAbstract = ecoreFactory->createEAttribute();
        m_InterfaceDef__isAbstract->setName("isAbstract");
        m_InterfaceDef->addEStructuralFeatures(m_InterfaceDef__isAbstract);
        m_InterfaceDef->addEAllStructuralFeatures(m_InterfaceDef__isAbstract);
        m_InterfaceDef->addEAttributes(m_InterfaceDef__isAbstract);
        m_InterfaceDef->addEAllAttributes(m_InterfaceDef__isAbstract);
    }
    {
        m_InterfaceDef__isCustom = ecoreFactory->createEAttribute();
        m_InterfaceDef__isCustom->setName("isCustom");
        m_InterfaceDef->addEStructuralFeatures(m_InterfaceDef__isCustom);
        m_InterfaceDef->addEAllStructuralFeatures(m_InterfaceDef__isCustom);
        m_InterfaceDef->addEAttributes(m_InterfaceDef__isCustom);
        m_InterfaceDef->addEAllAttributes(m_InterfaceDef__isCustom);
    }
    {
        m_InterfaceDef__isTruncatable = ecoreFactory->createEAttribute();
        m_InterfaceDef__isTruncatable->setName("isTruncatable");
        m_InterfaceDef->addEStructuralFeatures(m_InterfaceDef__isTruncatable);
        m_InterfaceDef->addEAllStructuralFeatures(m_InterfaceDef__isTruncatable);
        m_InterfaceDef->addEAttributes(m_InterfaceDef__isTruncatable);
        m_InterfaceDef->addEAllAttributes(m_InterfaceDef__isTruncatable);
    }
    {
        m_InterfaceDef__derivesFrom = ecoreFactory->createEReference();
        m_InterfaceDef__derivesFrom->setName("derivesFrom");
        m_InterfaceDef->addEStructuralFeatures(m_InterfaceDef__derivesFrom);
        m_InterfaceDef->addEAllStructuralFeatures(m_InterfaceDef__derivesFrom);
        m_InterfaceDef->addEReferences(m_InterfaceDef__derivesFrom);
        m_InterfaceDef->addEAllReferences(m_InterfaceDef__derivesFrom);
    }
    {
        m_InterfaceDef__forward = ecoreFactory->createEReference();
        m_InterfaceDef__forward->setName("forward");
        m_InterfaceDef->addEStructuralFeatures(m_InterfaceDef__forward);
        m_InterfaceDef->addEAllStructuralFeatures(m_InterfaceDef__forward);
        m_InterfaceDef->addEReferences(m_InterfaceDef__forward);
        m_InterfaceDef->addEAllReferences(m_InterfaceDef__forward);
    }
    {
        m_ModuleDef__prefix = ecoreFactory->createEAttribute();
        m_ModuleDef__prefix->setName("prefix");
        m_ModuleDef->addEStructuralFeatures(m_ModuleDef__prefix);
        m_ModuleDef->addEAllStructuralFeatures(m_ModuleDef__prefix);
        m_ModuleDef->addEAttributes(m_ModuleDef__prefix);
        m_ModuleDef->addEAllAttributes(m_ModuleDef__prefix);
    }
    {
        m_IDLType__typeCode = ecoreFactory->createEAttribute();
        m_IDLType__typeCode->setName("typeCode");
        m_IDLType->addEStructuralFeatures(m_IDLType__typeCode);
        m_IDLType->addEAllStructuralFeatures(m_IDLType__typeCode);
        m_IDLType->addEAttributes(m_IDLType__typeCode);
        m_IDLType->addEAllAttributes(m_IDLType__typeCode);
    }
    {
        m_OperationDef__parameters = ecoreFactory->createEReference();
        m_OperationDef__parameters->setName("parameters");
        m_OperationDef->addEStructuralFeatures(m_OperationDef__parameters);
        m_OperationDef->addEAllStructuralFeatures(m_OperationDef__parameters);
        m_OperationDef->addEReferences(m_OperationDef__parameters);
        m_OperationDef->addEAllReferences(m_OperationDef__parameters);
    }
    {
        m_OperationDef__isOneway = ecoreFactory->createEAttribute();
        m_OperationDef__isOneway->setName("isOneway");
        m_OperationDef->addEStructuralFeatures(m_OperationDef__isOneway);
        m_OperationDef->addEAllStructuralFeatures(m_OperationDef__isOneway);
        m_OperationDef->addEAttributes(m_OperationDef__isOneway);
        m_OperationDef->addEAllAttributes(m_OperationDef__isOneway);
    }
    {
        m_OperationDef__contexts = ecoreFactory->createEAttribute();
        m_OperationDef__contexts->setName("contexts");
        m_OperationDef->addEStructuralFeatures(m_OperationDef__contexts);
        m_OperationDef->addEAllStructuralFeatures(m_OperationDef__contexts);
        m_OperationDef->addEAttributes(m_OperationDef__contexts);
        m_OperationDef->addEAllAttributes(m_OperationDef__contexts);
    }
    {
        m_OperationDef__canRaise = ecoreFactory->createEReference();
        m_OperationDef__canRaise->setName("canRaise");
        m_OperationDef->addEStructuralFeatures(m_OperationDef__canRaise);
        m_OperationDef->addEAllStructuralFeatures(m_OperationDef__canRaise);
        m_OperationDef->addEReferences(m_OperationDef__canRaise);
        m_OperationDef->addEAllReferences(m_OperationDef__canRaise);
    }
    {
        m_AttributeDef__getRaises = ecoreFactory->createEReference();
        m_AttributeDef__getRaises->setName("getRaises");
        m_AttributeDef->addEStructuralFeatures(m_AttributeDef__getRaises);
        m_AttributeDef->addEAllStructuralFeatures(m_AttributeDef__getRaises);
        m_AttributeDef->addEReferences(m_AttributeDef__getRaises);
        m_AttributeDef->addEAllReferences(m_AttributeDef__getRaises);
    }
    {
        m_AttributeDef__setRaises = ecoreFactory->createEReference();
        m_AttributeDef__setRaises->setName("setRaises");
        m_AttributeDef->addEStructuralFeatures(m_AttributeDef__setRaises);
        m_AttributeDef->addEAllStructuralFeatures(m_AttributeDef__setRaises);
        m_AttributeDef->addEReferences(m_AttributeDef__setRaises);
        m_AttributeDef->addEAllReferences(m_AttributeDef__setRaises);
    }
    {
        m_AttributeDef__isReadonly = ecoreFactory->createEAttribute();
        m_AttributeDef__isReadonly->setName("isReadonly");
        m_AttributeDef->addEStructuralFeatures(m_AttributeDef__isReadonly);
        m_AttributeDef->addEAllStructuralFeatures(m_AttributeDef__isReadonly);
        m_AttributeDef->addEAttributes(m_AttributeDef__isReadonly);
        m_AttributeDef->addEAllAttributes(m_AttributeDef__isReadonly);
    }
    {
        m_ConstantDef__constValue = ecoreFactory->createEReference();
        m_ConstantDef__constValue->setName("constValue");
        m_ConstantDef->addEStructuralFeatures(m_ConstantDef__constValue);
        m_ConstantDef->addEAllStructuralFeatures(m_ConstantDef__constValue);
        m_ConstantDef->addEReferences(m_ConstantDef__constValue);
        m_ConstantDef->addEAllReferences(m_ConstantDef__constValue);
    }
    {
        m_Typed__containedType = ecoreFactory->createEReference();
        m_Typed__containedType->setName("containedType");
        m_Typed->addEStructuralFeatures(m_Typed__containedType);
        m_Typed->addEAllStructuralFeatures(m_Typed__containedType);
        m_Typed->addEReferences(m_Typed__containedType);
        m_Typed->addEAllReferences(m_Typed__containedType);
    }
    {
        m_Typed__sharedType = ecoreFactory->createEReference();
        m_Typed__sharedType->setName("sharedType");
        m_Typed->addEStructuralFeatures(m_Typed__sharedType);
        m_Typed->addEAllStructuralFeatures(m_Typed__sharedType);
        m_Typed->addEReferences(m_Typed__sharedType);
        m_Typed->addEAllReferences(m_Typed__sharedType);
    }
    {
        m_ParameterDef__identifier = ecoreFactory->createEAttribute();
        m_ParameterDef__identifier->setName("identifier");
        m_ParameterDef->addEStructuralFeatures(m_ParameterDef__identifier);
        m_ParameterDef->addEAllStructuralFeatures(m_ParameterDef__identifier);
        m_ParameterDef->addEAttributes(m_ParameterDef__identifier);
        m_ParameterDef->addEAllAttributes(m_ParameterDef__identifier);
    }
    {
        m_ParameterDef__direction = ecoreFactory->createEAttribute();
        m_ParameterDef__direction->setName("direction");
        m_ParameterDef->addEStructuralFeatures(m_ParameterDef__direction);
        m_ParameterDef->addEAllStructuralFeatures(m_ParameterDef__direction);
        m_ParameterDef->addEAttributes(m_ParameterDef__direction);
        m_ParameterDef->addEAllAttributes(m_ParameterDef__direction);
    }
    {
        m_PrimitiveDef__kind = ecoreFactory->createEAttribute();
        m_PrimitiveDef__kind->setName("kind");
        m_PrimitiveDef->addEStructuralFeatures(m_PrimitiveDef__kind);
        m_PrimitiveDef->addEAllStructuralFeatures(m_PrimitiveDef__kind);
        m_PrimitiveDef->addEAttributes(m_PrimitiveDef__kind);
        m_PrimitiveDef->addEAllAttributes(m_PrimitiveDef__kind);
    }
    {
        m_ExceptionDef__typeCode = ecoreFactory->createEAttribute();
        m_ExceptionDef__typeCode->setName("typeCode");
        m_ExceptionDef->addEStructuralFeatures(m_ExceptionDef__typeCode);
        m_ExceptionDef->addEAllStructuralFeatures(m_ExceptionDef__typeCode);
        m_ExceptionDef->addEAttributes(m_ExceptionDef__typeCode);
        m_ExceptionDef->addEAllAttributes(m_ExceptionDef__typeCode);
    }
    {
        m_ExceptionDef__members = ecoreFactory->createEReference();
        m_ExceptionDef__members->setName("members");
        m_ExceptionDef->addEStructuralFeatures(m_ExceptionDef__members);
        m_ExceptionDef->addEAllStructuralFeatures(m_ExceptionDef__members);
        m_ExceptionDef->addEReferences(m_ExceptionDef__members);
        m_ExceptionDef->addEAllReferences(m_ExceptionDef__members);
    }
    {
        m_Field__identifier = ecoreFactory->createEAttribute();
        m_Field__identifier->setName("identifier");
        m_Field->addEStructuralFeatures(m_Field__identifier);
        m_Field->addEAllStructuralFeatures(m_Field__identifier);
        m_Field->addEAttributes(m_Field__identifier);
        m_Field->addEAllAttributes(m_Field__identifier);
    }
    {
        m_FixedDef__digits = ecoreFactory->createEReference();
        m_FixedDef__digits->setName("digits");
        m_FixedDef->addEStructuralFeatures(m_FixedDef__digits);
        m_FixedDef->addEAllStructuralFeatures(m_FixedDef__digits);
        m_FixedDef->addEReferences(m_FixedDef__digits);
        m_FixedDef->addEAllReferences(m_FixedDef__digits);
    }
    {
        m_FixedDef__scale = ecoreFactory->createEReference();
        m_FixedDef__scale->setName("scale");
        m_FixedDef->addEStructuralFeatures(m_FixedDef__scale);
        m_FixedDef->addEAllStructuralFeatures(m_FixedDef__scale);
        m_FixedDef->addEReferences(m_FixedDef__scale);
        m_FixedDef->addEAllReferences(m_FixedDef__scale);
    }
    {
        m_WstringDef__bound = ecoreFactory->createEReference();
        m_WstringDef__bound->setName("bound");
        m_WstringDef->addEStructuralFeatures(m_WstringDef__bound);
        m_WstringDef->addEAllStructuralFeatures(m_WstringDef__bound);
        m_WstringDef->addEReferences(m_WstringDef__bound);
        m_WstringDef->addEAllReferences(m_WstringDef__bound);
    }
    {
        m_StringDef__bound = ecoreFactory->createEReference();
        m_StringDef__bound->setName("bound");
        m_StringDef->addEStructuralFeatures(m_StringDef__bound);
        m_StringDef->addEAllStructuralFeatures(m_StringDef__bound);
        m_StringDef->addEReferences(m_StringDef__bound);
        m_StringDef->addEAllReferences(m_StringDef__bound);
    }
    {
        m_ArrayDef__name = ecoreFactory->createEAttribute();
        m_ArrayDef__name->setName("name");
        m_ArrayDef->addEStructuralFeatures(m_ArrayDef__name);
        m_ArrayDef->addEAllStructuralFeatures(m_ArrayDef__name);
        m_ArrayDef->addEAttributes(m_ArrayDef__name);
        m_ArrayDef->addEAllAttributes(m_ArrayDef__name);
    }
    {
        m_ArrayDef__bounds = ecoreFactory->createEReference();
        m_ArrayDef__bounds->setName("bounds");
        m_ArrayDef->addEStructuralFeatures(m_ArrayDef__bounds);
        m_ArrayDef->addEAllStructuralFeatures(m_ArrayDef__bounds);
        m_ArrayDef->addEReferences(m_ArrayDef__bounds);
        m_ArrayDef->addEAllReferences(m_ArrayDef__bounds);
    }
    {
        m_SequenceDef__bound = ecoreFactory->createEReference();
        m_SequenceDef__bound->setName("bound");
        m_SequenceDef->addEStructuralFeatures(m_SequenceDef__bound);
        m_SequenceDef->addEAllStructuralFeatures(m_SequenceDef__bound);
        m_SequenceDef->addEReferences(m_SequenceDef__bound);
        m_SequenceDef->addEAllReferences(m_SequenceDef__bound);
    }
    {
        m_UnionField__identifier = ecoreFactory->createEAttribute();
        m_UnionField__identifier->setName("identifier");
        m_UnionField->addEStructuralFeatures(m_UnionField__identifier);
        m_UnionField->addEAllStructuralFeatures(m_UnionField__identifier);
        m_UnionField->addEAttributes(m_UnionField__identifier);
        m_UnionField->addEAllAttributes(m_UnionField__identifier);
    }
    {
        m_UnionField__label = ecoreFactory->createEReference();
        m_UnionField__label->setName("label");
        m_UnionField->addEStructuralFeatures(m_UnionField__label);
        m_UnionField->addEAllStructuralFeatures(m_UnionField__label);
        m_UnionField->addEReferences(m_UnionField__label);
        m_UnionField->addEAllReferences(m_UnionField__label);
    }
    {
        m_UnionDef__unionMembers = ecoreFactory->createEReference();
        m_UnionDef__unionMembers->setName("unionMembers");
        m_UnionDef->addEStructuralFeatures(m_UnionDef__unionMembers);
        m_UnionDef->addEAllStructuralFeatures(m_UnionDef__unionMembers);
        m_UnionDef->addEReferences(m_UnionDef__unionMembers);
        m_UnionDef->addEAllReferences(m_UnionDef__unionMembers);
    }
    {
        m_UnionDef__containedDiscrim = ecoreFactory->createEReference();
        m_UnionDef__containedDiscrim->setName("containedDiscrim");
        m_UnionDef->addEStructuralFeatures(m_UnionDef__containedDiscrim);
        m_UnionDef->addEAllStructuralFeatures(m_UnionDef__containedDiscrim);
        m_UnionDef->addEReferences(m_UnionDef__containedDiscrim);
        m_UnionDef->addEAllReferences(m_UnionDef__containedDiscrim);
    }
    {
        m_UnionDef__sharedDiscrim = ecoreFactory->createEReference();
        m_UnionDef__sharedDiscrim->setName("sharedDiscrim");
        m_UnionDef->addEStructuralFeatures(m_UnionDef__sharedDiscrim);
        m_UnionDef->addEAllStructuralFeatures(m_UnionDef__sharedDiscrim);
        m_UnionDef->addEReferences(m_UnionDef__sharedDiscrim);
        m_UnionDef->addEAllReferences(m_UnionDef__sharedDiscrim);
    }
    {
        m_EnumDef__members = ecoreFactory->createEReference();
        m_EnumDef__members->setName("members");
        m_EnumDef->addEStructuralFeatures(m_EnumDef__members);
        m_EnumDef->addEAllStructuralFeatures(m_EnumDef__members);
        m_EnumDef->addEReferences(m_EnumDef__members);
        m_EnumDef->addEAllReferences(m_EnumDef__members);
    }
    {
        m_StructDef__members = ecoreFactory->createEReference();
        m_StructDef__members->setName("members");
        m_StructDef->addEStructuralFeatures(m_StructDef__members);
        m_StructDef->addEAllStructuralFeatures(m_StructDef__members);
        m_StructDef->addEReferences(m_StructDef__members);
        m_StructDef->addEAllReferences(m_StructDef__members);
    }
    {
        m_TranslationUnit__contains = ecoreFactory->createEReference();
        m_TranslationUnit__contains->setName("contains");
        m_TranslationUnit->addEStructuralFeatures(m_TranslationUnit__contains);
        m_TranslationUnit->addEAllStructuralFeatures(m_TranslationUnit__contains);
        m_TranslationUnit->addEReferences(m_TranslationUnit__contains);
        m_TranslationUnit->addEAllReferences(m_TranslationUnit__contains);
    }
    {
        m_TranslationUnit__identifier = ecoreFactory->createEAttribute();
        m_TranslationUnit__identifier->setName("identifier");
        m_TranslationUnit->addEStructuralFeatures(m_TranslationUnit__identifier);
        m_TranslationUnit->addEAllStructuralFeatures(m_TranslationUnit__identifier);
        m_TranslationUnit->addEAttributes(m_TranslationUnit__identifier);
        m_TranslationUnit->addEAllAttributes(m_TranslationUnit__identifier);
    }
    {
        m_TranslationUnit__includes = ecoreFactory->createEReference();
        m_TranslationUnit__includes->setName("includes");
        m_TranslationUnit->addEStructuralFeatures(m_TranslationUnit__includes);
        m_TranslationUnit->addEAllStructuralFeatures(m_TranslationUnit__includes);
        m_TranslationUnit->addEReferences(m_TranslationUnit__includes);
        m_TranslationUnit->addEAllReferences(m_TranslationUnit__includes);
    }
    {
        m_Include__importURI = ecoreFactory->createEAttribute();
        m_Include__importURI->setName("importURI");
        m_Include->addEStructuralFeatures(m_Include__importURI);
        m_Include->addEAllStructuralFeatures(m_Include__importURI);
        m_Include->addEAttributes(m_Include__importURI);
        m_Include->addEAllAttributes(m_Include__importURI);
    }
    {
        m_Include__translationUnit = ecoreFactory->createEReference();
        m_Include__translationUnit->setName("translationUnit");
        m_Include->addEStructuralFeatures(m_Include__translationUnit);
        m_Include->addEAllStructuralFeatures(m_Include__translationUnit);
        m_Include->addEReferences(m_Include__translationUnit);
        m_Include->addEAllReferences(m_Include__translationUnit);
    }
    {
        m_BinaryExpression__left = ecoreFactory->createEReference();
        m_BinaryExpression__left->setName("left");
        m_BinaryExpression->addEStructuralFeatures(m_BinaryExpression__left);
        m_BinaryExpression->addEAllStructuralFeatures(m_BinaryExpression__left);
        m_BinaryExpression->addEReferences(m_BinaryExpression__left);
        m_BinaryExpression->addEAllReferences(m_BinaryExpression__left);
    }
    {
        m_BinaryExpression__right = ecoreFactory->createEReference();
        m_BinaryExpression__right->setName("right");
        m_BinaryExpression->addEStructuralFeatures(m_BinaryExpression__right);
        m_BinaryExpression->addEAllStructuralFeatures(m_BinaryExpression__right);
        m_BinaryExpression->addEReferences(m_BinaryExpression__right);
        m_BinaryExpression->addEAllReferences(m_BinaryExpression__right);
    }
    {
        m_BinaryExpression__operator = ecoreFactory->createEAttribute();
        m_BinaryExpression__operator->setName("operator");
        m_BinaryExpression->addEStructuralFeatures(m_BinaryExpression__operator);
        m_BinaryExpression->addEAllStructuralFeatures(m_BinaryExpression__operator);
        m_BinaryExpression->addEAttributes(m_BinaryExpression__operator);
        m_BinaryExpression->addEAllAttributes(m_BinaryExpression__operator);
    }
    {
        m_UnaryExpression__expression = ecoreFactory->createEReference();
        m_UnaryExpression__expression->setName("expression");
        m_UnaryExpression->addEStructuralFeatures(m_UnaryExpression__expression);
        m_UnaryExpression->addEAllStructuralFeatures(m_UnaryExpression__expression);
        m_UnaryExpression->addEReferences(m_UnaryExpression__expression);
        m_UnaryExpression->addEAllReferences(m_UnaryExpression__expression);
    }
    {
        m_UnaryExpression__operator = ecoreFactory->createEAttribute();
        m_UnaryExpression__operator->setName("operator");
        m_UnaryExpression->addEStructuralFeatures(m_UnaryExpression__operator);
        m_UnaryExpression->addEAllStructuralFeatures(m_UnaryExpression__operator);
        m_UnaryExpression->addEAttributes(m_UnaryExpression__operator);
        m_UnaryExpression->addEAllAttributes(m_UnaryExpression__operator);
    }
    {
        m_ConstantDefRef__constant = ecoreFactory->createEReference();
        m_ConstantDefRef__constant->setName("constant");
        m_ConstantDefRef->addEStructuralFeatures(m_ConstantDefRef__constant);
        m_ConstantDefRef->addEAllStructuralFeatures(m_ConstantDefRef__constant);
        m_ConstantDefRef->addEReferences(m_ConstantDefRef__constant);
        m_ConstantDefRef->addEAllReferences(m_ConstantDefRef__constant);
    }
    {
        m_ValueExpression__value = ecoreFactory->createEAttribute();
        m_ValueExpression__value->setName("value");
        m_ValueExpression->addEStructuralFeatures(m_ValueExpression__value);
        m_ValueExpression->addEAllStructuralFeatures(m_ValueExpression__value);
        m_ValueExpression->addEAttributes(m_ValueExpression__value);
        m_ValueExpression->addEAllAttributes(m_ValueExpression__value);
    }
    {
        m_ForwardDef__definition = ecoreFactory->createEReference();
        m_ForwardDef__definition->setName("definition");
        m_ForwardDef->addEStructuralFeatures(m_ForwardDef__definition);
        m_ForwardDef->addEAllStructuralFeatures(m_ForwardDef__definition);
        m_ForwardDef->addEReferences(m_ForwardDef__definition);
        m_ForwardDef->addEAllReferences(m_ForwardDef__definition);
    }
    {
        m_EnumMember__enum = ecoreFactory->createEReference();
        m_EnumMember__enum->setName("enum");
        m_EnumMember->addEStructuralFeatures(m_EnumMember__enum);
        m_EnumMember->addEAllStructuralFeatures(m_EnumMember__enum);
        m_EnumMember->addEReferences(m_EnumMember__enum);
        m_EnumMember->addEAllReferences(m_EnumMember__enum);
    }
    {
        m_NamedElement__identifier = ecoreFactory->createEAttribute();
        m_NamedElement__identifier->setName("identifier");
        m_NamedElement->addEStructuralFeatures(m_NamedElement__identifier);
        m_NamedElement->addEAllStructuralFeatures(m_NamedElement__identifier);
        m_NamedElement->addEAttributes(m_NamedElement__identifier);
        m_NamedElement->addEAllAttributes(m_NamedElement__identifier);
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


    m_Container->addFeatureAccesors(m_Container__contains,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Container_ptr >(o)->getContains());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::Container_ptr eo = dynamic_cast< idlmm::Container_ptr >(o);
            eo->clearContains();
            eo->addAllContains(e4c::select< idlmm::Contained >(val));
        });
    m_Contained->addFeatureAccesors(m_Contained__repositoryId,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Contained_ptr >(o)->getRepositoryId());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::Contained::repositoryId_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::Contained_ptr >(o)->setRepositoryId(val);
        });
    m_Contained->addFeatureAccesors(m_Contained__version,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Contained_ptr >(o)->getVersion());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::Contained::version_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::Contained_ptr >(o)->setVersion(val);
        });
    m_Contained->addFeatureAccesors(m_Contained__absoluteName,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Contained_ptr >(o)->getAbsoluteName());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::Contained::absoluteName_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::Contained_ptr >(o)->setAbsoluteName(val);
        });
    m_Contained->addFeatureAccesors(m_Contained__definedIn,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Contained_ptr >(o)->getDefinedIn());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Container_ptr val = dynamic_cast< idlmm::Container_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::Contained_ptr >(o)->setDefinedIn(val);
        });
    m_InterfaceDef->addFeatureAccesors(m_InterfaceDef__isAbstract,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::InterfaceDef_ptr >(o)->getIsAbstract());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::InterfaceDef::isAbstract_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::InterfaceDef_ptr >(o)->setIsAbstract(val);
        });
    m_InterfaceDef->addFeatureAccesors(m_InterfaceDef__isCustom,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::InterfaceDef_ptr >(o)->getIsCustom());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::InterfaceDef::isCustom_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::InterfaceDef_ptr >(o)->setIsCustom(val);
        });
    m_InterfaceDef->addFeatureAccesors(m_InterfaceDef__isTruncatable,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::InterfaceDef_ptr >(o)->getIsTruncatable());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::InterfaceDef::isTruncatable_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::InterfaceDef_ptr >(o)->setIsTruncatable(val);
        });
    m_InterfaceDef->addFeatureAccesors(m_InterfaceDef__derivesFrom,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::InterfaceDef_ptr >(o)->getDerivesFrom());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::InterfaceDef_ptr eo = dynamic_cast< idlmm::InterfaceDef_ptr >(o);
            eo->clearDerivesFrom();
            eo->addAllDerivesFrom(e4c::select< idlmm::InterfaceDef >(val));
        });
    m_InterfaceDef->addFeatureAccesors(m_InterfaceDef__forward,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::InterfaceDef_ptr >(o)->getForward());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::ForwardDef_ptr val = dynamic_cast< idlmm::ForwardDef_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::InterfaceDef_ptr >(o)->setForward(val);
        });
    m_ModuleDef->addFeatureAccesors(m_ModuleDef__prefix,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ModuleDef_ptr >(o)->getPrefix());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ModuleDef::prefix_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ModuleDef_ptr >(o)->setPrefix(val);
        });
    m_IDLType->addFeatureAccesors(m_IDLType__typeCode,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::IDLType_ptr >(o)->getTypeCode());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::IDLType::typeCode_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::IDLType_ptr >(o)->setTypeCode(val);
        });
    m_OperationDef->addFeatureAccesors(m_OperationDef__parameters,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::OperationDef_ptr >(o)->getParameters());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::OperationDef_ptr eo = dynamic_cast< idlmm::OperationDef_ptr >(o);
            eo->clearParameters();
            eo->addAllParameters(e4c::select< idlmm::ParameterDef >(val));
        });
    m_OperationDef->addFeatureAccesors(m_OperationDef__isOneway,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::OperationDef_ptr >(o)->getIsOneway());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::OperationDef::isOneway_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::OperationDef_ptr >(o)->setIsOneway(val);
        });
    m_OperationDef->addFeatureAccesors(m_OperationDef__contexts,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::OperationDef_ptr >(o)->getContexts());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::OperationDef::contexts_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::OperationDef_ptr >(o)->setContexts(val);
        });
    m_OperationDef->addFeatureAccesors(m_OperationDef__canRaise,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::OperationDef_ptr >(o)->getCanRaise());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::OperationDef_ptr eo = dynamic_cast< idlmm::OperationDef_ptr >(o);
            eo->clearCanRaise();
            eo->addAllCanRaise(e4c::select< idlmm::ExceptionDef >(val));
        });
    m_AttributeDef->addFeatureAccesors(m_AttributeDef__getRaises,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::AttributeDef_ptr >(o)->getGetRaises());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::AttributeDef_ptr eo = dynamic_cast< idlmm::AttributeDef_ptr >(o);
            eo->clearGetRaises();
            eo->addAllGetRaises(e4c::select< idlmm::ExceptionDef >(val));
        });
    m_AttributeDef->addFeatureAccesors(m_AttributeDef__setRaises,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::AttributeDef_ptr >(o)->getSetRaises());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::AttributeDef_ptr eo = dynamic_cast< idlmm::AttributeDef_ptr >(o);
            eo->clearSetRaises();
            eo->addAllSetRaises(e4c::select< idlmm::ExceptionDef >(val));
        });
    m_AttributeDef->addFeatureAccesors(m_AttributeDef__isReadonly,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::AttributeDef_ptr >(o)->getIsReadonly());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::AttributeDef::isReadonly_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::AttributeDef_ptr >(o)->setIsReadonly(val);
        });
    m_ConstantDef->addFeatureAccesors(m_ConstantDef__constValue,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ConstantDef_ptr >(o)->getConstValue());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::ConstantDef_ptr >(o)->setConstValue(val);
        });
    m_Typed->addFeatureAccesors(m_Typed__containedType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Typed_ptr >(o)->getContainedType());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::IDLType_ptr val = dynamic_cast< idlmm::IDLType_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::Typed_ptr >(o)->setContainedType(val);
        });
    m_Typed->addFeatureAccesors(m_Typed__sharedType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Typed_ptr >(o)->getSharedType());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::TypedefDef_ptr val = dynamic_cast< idlmm::TypedefDef_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::Typed_ptr >(o)->setSharedType(val);
        });
    m_ParameterDef->addFeatureAccesors(m_ParameterDef__identifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ParameterDef_ptr >(o)->getIdentifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ParameterDef::identifier_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ParameterDef_ptr >(o)->setIdentifier(val);
        });
    m_ParameterDef->addFeatureAccesors(m_ParameterDef__direction,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ParameterDef_ptr >(o)->getDirection());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ParameterDef::direction_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ParameterDef_ptr >(o)->setDirection(val);
        });
    m_PrimitiveDef->addFeatureAccesors(m_PrimitiveDef__kind,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::PrimitiveDef_ptr >(o)->getKind());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::PrimitiveDef::kind_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::PrimitiveDef_ptr >(o)->setKind(val);
        });
    m_ExceptionDef->addFeatureAccesors(m_ExceptionDef__typeCode,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ExceptionDef_ptr >(o)->getTypeCode());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ExceptionDef::typeCode_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ExceptionDef_ptr >(o)->setTypeCode(val);
        });
    m_ExceptionDef->addFeatureAccesors(m_ExceptionDef__members,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ExceptionDef_ptr >(o)->getMembers());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::ExceptionDef_ptr eo = dynamic_cast< idlmm::ExceptionDef_ptr >(o);
            eo->clearMembers();
            eo->addAllMembers(e4c::select< idlmm::Field >(val));
        });
    m_Field->addFeatureAccesors(m_Field__identifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Field_ptr >(o)->getIdentifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::Field::identifier_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::Field_ptr >(o)->setIdentifier(val);
        });
    m_FixedDef->addFeatureAccesors(m_FixedDef__digits,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::FixedDef_ptr >(o)->getDigits());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::FixedDef_ptr >(o)->setDigits(val);
        });
    m_FixedDef->addFeatureAccesors(m_FixedDef__scale,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::FixedDef_ptr >(o)->getScale());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::FixedDef_ptr >(o)->setScale(val);
        });
    m_WstringDef->addFeatureAccesors(m_WstringDef__bound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::WstringDef_ptr >(o)->getBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::WstringDef_ptr >(o)->setBound(val);
        });
    m_StringDef->addFeatureAccesors(m_StringDef__bound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::StringDef_ptr >(o)->getBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::StringDef_ptr >(o)->setBound(val);
        });
    m_ArrayDef->addFeatureAccesors(m_ArrayDef__name,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ArrayDef_ptr >(o)->getName());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ArrayDef::name_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ArrayDef_ptr >(o)->setName(val);
        });
    m_ArrayDef->addFeatureAccesors(m_ArrayDef__bounds,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ArrayDef_ptr >(o)->getBounds());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::ArrayDef_ptr eo = dynamic_cast< idlmm::ArrayDef_ptr >(o);
            eo->clearBounds();
            eo->addAllBounds(e4c::select< idlmm::Expression >(val));
        });
    m_SequenceDef->addFeatureAccesors(m_SequenceDef__bound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::SequenceDef_ptr >(o)->getBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::SequenceDef_ptr >(o)->setBound(val);
        });
    m_UnionField->addFeatureAccesors(m_UnionField__identifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnionField_ptr >(o)->getIdentifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::UnionField::identifier_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::UnionField_ptr >(o)->setIdentifier(val);
        });
    m_UnionField->addFeatureAccesors(m_UnionField__label,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnionField_ptr >(o)->getLabel());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::UnionField_ptr eo = dynamic_cast< idlmm::UnionField_ptr >(o);
            eo->clearLabel();
            eo->addAllLabel(e4c::select< idlmm::Expression >(val));
        });
    m_UnionDef->addFeatureAccesors(m_UnionDef__unionMembers,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnionDef_ptr >(o)->getUnionMembers());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::UnionDef_ptr eo = dynamic_cast< idlmm::UnionDef_ptr >(o);
            eo->clearUnionMembers();
            eo->addAllUnionMembers(e4c::select< idlmm::UnionField >(val));
        });
    m_UnionDef->addFeatureAccesors(m_UnionDef__containedDiscrim,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnionDef_ptr >(o)->getContainedDiscrim());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::IDLType_ptr val = dynamic_cast< idlmm::IDLType_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::UnionDef_ptr >(o)->setContainedDiscrim(val);
        });
    m_UnionDef->addFeatureAccesors(m_UnionDef__sharedDiscrim,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnionDef_ptr >(o)->getSharedDiscrim());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::TypedefDef_ptr val = dynamic_cast< idlmm::TypedefDef_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::UnionDef_ptr >(o)->setSharedDiscrim(val);
        });
    m_EnumDef->addFeatureAccesors(m_EnumDef__members,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::EnumDef_ptr >(o)->getMembers());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::EnumDef_ptr eo = dynamic_cast< idlmm::EnumDef_ptr >(o);
            eo->clearMembers();
            eo->addAllMembers(e4c::select< idlmm::EnumMember >(val));
        });
    m_StructDef->addFeatureAccesors(m_StructDef__members,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::StructDef_ptr >(o)->getMembers());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::StructDef_ptr eo = dynamic_cast< idlmm::StructDef_ptr >(o);
            eo->clearMembers();
            eo->addAllMembers(e4c::select< idlmm::Field >(val));
        });
    m_TranslationUnit->addFeatureAccesors(m_TranslationUnit__contains,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::TranslationUnit_ptr >(o)->getContains());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::TranslationUnit_ptr eo = dynamic_cast< idlmm::TranslationUnit_ptr >(o);
            eo->clearContains();
            eo->addAllContains(e4c::select< idlmm::Contained >(val));
        });
    m_TranslationUnit->addFeatureAccesors(m_TranslationUnit__identifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::TranslationUnit_ptr >(o)->getIdentifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::TranslationUnit::identifier_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::TranslationUnit_ptr >(o)->setIdentifier(val);
        });
    m_TranslationUnit->addFeatureAccesors(m_TranslationUnit__includes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::TranslationUnit_ptr >(o)->getIncludes());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            idlmm::TranslationUnit_ptr eo = dynamic_cast< idlmm::TranslationUnit_ptr >(o);
            eo->clearIncludes();
            eo->addAllIncludes(e4c::select< idlmm::Include >(val));
        });
    m_Include->addFeatureAccesors(m_Include__importURI,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Include_ptr >(o)->getImportURI());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::Include::importURI_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::Include_ptr >(o)->setImportURI(val);
        });
    m_Include->addFeatureAccesors(m_Include__translationUnit,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::Include_ptr >(o)->getTranslationUnit());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::TranslationUnit_ptr val = dynamic_cast< idlmm::TranslationUnit_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::Include_ptr >(o)->setTranslationUnit(val);
        });
    m_BinaryExpression->addFeatureAccesors(m_BinaryExpression__left,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::BinaryExpression_ptr >(o)->getLeft());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::BinaryExpression_ptr >(o)->setLeft(val);
        });
    m_BinaryExpression->addFeatureAccesors(m_BinaryExpression__right,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::BinaryExpression_ptr >(o)->getRight());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::BinaryExpression_ptr >(o)->setRight(val);
        });
    m_BinaryExpression->addFeatureAccesors(m_BinaryExpression__operator,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::BinaryExpression_ptr >(o)->getOperator());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::BinaryExpression::operator_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::BinaryExpression_ptr >(o)->setOperator(val);
        });
    m_UnaryExpression->addFeatureAccesors(m_UnaryExpression__expression,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnaryExpression_ptr >(o)->getExpression());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Expression_ptr val = dynamic_cast< idlmm::Expression_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::UnaryExpression_ptr >(o)->setExpression(val);
        });
    m_UnaryExpression->addFeatureAccesors(m_UnaryExpression__operator,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::UnaryExpression_ptr >(o)->getOperator());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::UnaryExpression::operator_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::UnaryExpression_ptr >(o)->setOperator(val);
        });
    m_ConstantDefRef->addFeatureAccesors(m_ConstantDefRef__constant,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ConstantDefRef_ptr >(o)->getConstant());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::Constant_ptr val = dynamic_cast< idlmm::Constant_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::ConstantDefRef_ptr >(o)->setConstant(val);
        });
    m_ValueExpression->addFeatureAccesors(m_ValueExpression__value,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ValueExpression_ptr >(o)->getValue());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::ValueExpression::value_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::ValueExpression_ptr >(o)->setValue(val);
        });
    m_ForwardDef->addFeatureAccesors(m_ForwardDef__definition,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::ForwardDef_ptr >(o)->getDefinition());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::InterfaceDef_ptr val = dynamic_cast< idlmm::InterfaceDef_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::ForwardDef_ptr >(o)->setDefinition(val);
        });
    m_EnumMember->addFeatureAccesors(m_EnumMember__enum,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::EnumMember_ptr >(o)->getEnum());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            idlmm::EnumDef_ptr val = dynamic_cast< idlmm::EnumDef_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< idlmm::EnumMember_ptr >(o)->setEnum(val);
        });
    m_NamedElement->addFeatureAccesors(m_NamedElement__identifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< idlmm::NamedElement_ptr >(o)->getIdentifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef idlmm::NamedElement::identifier_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< idlmm::NamedElement_ptr >(o)->setIdentifier(val);
        });

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

ecore::EReference_ptr IdlmmPackage::getContainer__contains() const
{
    return m_Container__contains;
}

e4c::tag_t IdlmmPackage::getTag_Contained__repositoryId() const
{
    return e4c::tag< Contained__repositoryId_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getContained__repositoryId() const
{
    return m_Contained__repositoryId;
}

e4c::tag_t IdlmmPackage::getTag_Contained__version() const
{
    return e4c::tag< Contained__version_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getContained__version() const
{
    return m_Contained__version;
}

e4c::tag_t IdlmmPackage::getTag_Contained__absoluteName() const
{
    return e4c::tag< Contained__absoluteName_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getContained__absoluteName() const
{
    return m_Contained__absoluteName;
}

e4c::tag_t IdlmmPackage::getTag_Contained__definedIn() const
{
    return e4c::tag< Contained__definedIn_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getContained__definedIn() const
{
    return m_Contained__definedIn;
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isAbstract() const
{
    return e4c::tag< InterfaceDef__isAbstract_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isAbstract() const
{
    return m_InterfaceDef__isAbstract;
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isCustom() const
{
    return e4c::tag< InterfaceDef__isCustom_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isCustom() const
{
    return m_InterfaceDef__isCustom;
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__isTruncatable() const
{
    return e4c::tag< InterfaceDef__isTruncatable_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isTruncatable() const
{
    return m_InterfaceDef__isTruncatable;
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__derivesFrom() const
{
    return e4c::tag< InterfaceDef__derivesFrom_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getInterfaceDef__derivesFrom() const
{
    return m_InterfaceDef__derivesFrom;
}

e4c::tag_t IdlmmPackage::getTag_InterfaceDef__forward() const
{
    return e4c::tag< InterfaceDef__forward_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getInterfaceDef__forward() const
{
    return m_InterfaceDef__forward;
}

e4c::tag_t IdlmmPackage::getTag_ModuleDef__prefix() const
{
    return e4c::tag< ModuleDef__prefix_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getModuleDef__prefix() const
{
    return m_ModuleDef__prefix;
}

e4c::tag_t IdlmmPackage::getTag_IDLType__typeCode() const
{
    return e4c::tag< IDLType__typeCode_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getIDLType__typeCode() const
{
    return m_IDLType__typeCode;
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__parameters() const
{
    return e4c::tag< OperationDef__parameters_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getOperationDef__parameters() const
{
    return m_OperationDef__parameters;
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__isOneway() const
{
    return e4c::tag< OperationDef__isOneway_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getOperationDef__isOneway() const
{
    return m_OperationDef__isOneway;
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__contexts() const
{
    return e4c::tag< OperationDef__contexts_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getOperationDef__contexts() const
{
    return m_OperationDef__contexts;
}

e4c::tag_t IdlmmPackage::getTag_OperationDef__canRaise() const
{
    return e4c::tag< OperationDef__canRaise_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getOperationDef__canRaise() const
{
    return m_OperationDef__canRaise;
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__getRaises() const
{
    return e4c::tag< AttributeDef__getRaises_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getAttributeDef__getRaises() const
{
    return m_AttributeDef__getRaises;
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__setRaises() const
{
    return e4c::tag< AttributeDef__setRaises_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getAttributeDef__setRaises() const
{
    return m_AttributeDef__setRaises;
}

e4c::tag_t IdlmmPackage::getTag_AttributeDef__isReadonly() const
{
    return e4c::tag< AttributeDef__isReadonly_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getAttributeDef__isReadonly() const
{
    return m_AttributeDef__isReadonly;
}

e4c::tag_t IdlmmPackage::getTag_ConstantDef__constValue() const
{
    return e4c::tag< ConstantDef__constValue_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getConstantDef__constValue() const
{
    return m_ConstantDef__constValue;
}

e4c::tag_t IdlmmPackage::getTag_Typed__containedType() const
{
    return e4c::tag< Typed__containedType_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getTyped__containedType() const
{
    return m_Typed__containedType;
}

e4c::tag_t IdlmmPackage::getTag_Typed__sharedType() const
{
    return e4c::tag< Typed__sharedType_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getTyped__sharedType() const
{
    return m_Typed__sharedType;
}

e4c::tag_t IdlmmPackage::getTag_ParameterDef__identifier() const
{
    return e4c::tag< ParameterDef__identifier_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getParameterDef__identifier() const
{
    return m_ParameterDef__identifier;
}

e4c::tag_t IdlmmPackage::getTag_ParameterDef__direction() const
{
    return e4c::tag< ParameterDef__direction_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getParameterDef__direction() const
{
    return m_ParameterDef__direction;
}

e4c::tag_t IdlmmPackage::getTag_PrimitiveDef__kind() const
{
    return e4c::tag< PrimitiveDef__kind_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getPrimitiveDef__kind() const
{
    return m_PrimitiveDef__kind;
}

e4c::tag_t IdlmmPackage::getTag_ExceptionDef__typeCode() const
{
    return e4c::tag< ExceptionDef__typeCode_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getExceptionDef__typeCode() const
{
    return m_ExceptionDef__typeCode;
}

e4c::tag_t IdlmmPackage::getTag_ExceptionDef__members() const
{
    return e4c::tag< ExceptionDef__members_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getExceptionDef__members() const
{
    return m_ExceptionDef__members;
}

e4c::tag_t IdlmmPackage::getTag_Field__identifier() const
{
    return e4c::tag< Field__identifier_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getField__identifier() const
{
    return m_Field__identifier;
}

e4c::tag_t IdlmmPackage::getTag_FixedDef__digits() const
{
    return e4c::tag< FixedDef__digits_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getFixedDef__digits() const
{
    return m_FixedDef__digits;
}

e4c::tag_t IdlmmPackage::getTag_FixedDef__scale() const
{
    return e4c::tag< FixedDef__scale_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getFixedDef__scale() const
{
    return m_FixedDef__scale;
}

e4c::tag_t IdlmmPackage::getTag_WstringDef__bound() const
{
    return e4c::tag< WstringDef__bound_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getWstringDef__bound() const
{
    return m_WstringDef__bound;
}

e4c::tag_t IdlmmPackage::getTag_StringDef__bound() const
{
    return e4c::tag< StringDef__bound_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getStringDef__bound() const
{
    return m_StringDef__bound;
}

e4c::tag_t IdlmmPackage::getTag_ArrayDef__name() const
{
    return e4c::tag< ArrayDef__name_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getArrayDef__name() const
{
    return m_ArrayDef__name;
}

e4c::tag_t IdlmmPackage::getTag_ArrayDef__bounds() const
{
    return e4c::tag< ArrayDef__bounds_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getArrayDef__bounds() const
{
    return m_ArrayDef__bounds;
}

e4c::tag_t IdlmmPackage::getTag_SequenceDef__bound() const
{
    return e4c::tag< SequenceDef__bound_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getSequenceDef__bound() const
{
    return m_SequenceDef__bound;
}

e4c::tag_t IdlmmPackage::getTag_UnionField__identifier() const
{
    return e4c::tag< UnionField__identifier_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getUnionField__identifier() const
{
    return m_UnionField__identifier;
}

e4c::tag_t IdlmmPackage::getTag_UnionField__label() const
{
    return e4c::tag< UnionField__label_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getUnionField__label() const
{
    return m_UnionField__label;
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__unionMembers() const
{
    return e4c::tag< UnionDef__unionMembers_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getUnionDef__unionMembers() const
{
    return m_UnionDef__unionMembers;
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__containedDiscrim() const
{
    return e4c::tag< UnionDef__containedDiscrim_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getUnionDef__containedDiscrim() const
{
    return m_UnionDef__containedDiscrim;
}

e4c::tag_t IdlmmPackage::getTag_UnionDef__sharedDiscrim() const
{
    return e4c::tag< UnionDef__sharedDiscrim_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getUnionDef__sharedDiscrim() const
{
    return m_UnionDef__sharedDiscrim;
}

e4c::tag_t IdlmmPackage::getTag_EnumDef__members() const
{
    return e4c::tag< EnumDef__members_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getEnumDef__members() const
{
    return m_EnumDef__members;
}

e4c::tag_t IdlmmPackage::getTag_StructDef__members() const
{
    return e4c::tag< StructDef__members_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getStructDef__members() const
{
    return m_StructDef__members;
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__contains() const
{
    return e4c::tag< TranslationUnit__contains_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getTranslationUnit__contains() const
{
    return m_TranslationUnit__contains;
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__identifier() const
{
    return e4c::tag< TranslationUnit__identifier_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getTranslationUnit__identifier() const
{
    return m_TranslationUnit__identifier;
}

e4c::tag_t IdlmmPackage::getTag_TranslationUnit__includes() const
{
    return e4c::tag< TranslationUnit__includes_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getTranslationUnit__includes() const
{
    return m_TranslationUnit__includes;
}

e4c::tag_t IdlmmPackage::getTag_Include__importURI() const
{
    return e4c::tag< Include__importURI_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getInclude__importURI() const
{
    return m_Include__importURI;
}

e4c::tag_t IdlmmPackage::getTag_Include__translationUnit() const
{
    return e4c::tag< Include__translationUnit_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getInclude__translationUnit() const
{
    return m_Include__translationUnit;
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__left() const
{
    return e4c::tag< BinaryExpression__left_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getBinaryExpression__left() const
{
    return m_BinaryExpression__left;
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__right() const
{
    return e4c::tag< BinaryExpression__right_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getBinaryExpression__right() const
{
    return m_BinaryExpression__right;
}

e4c::tag_t IdlmmPackage::getTag_BinaryExpression__operator() const
{
    return e4c::tag< BinaryExpression__operator_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getBinaryExpression__operator() const
{
    return m_BinaryExpression__operator;
}

e4c::tag_t IdlmmPackage::getTag_UnaryExpression__expression() const
{
    return e4c::tag< UnaryExpression__expression_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getUnaryExpression__expression() const
{
    return m_UnaryExpression__expression;
}

e4c::tag_t IdlmmPackage::getTag_UnaryExpression__operator() const
{
    return e4c::tag< UnaryExpression__operator_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getUnaryExpression__operator() const
{
    return m_UnaryExpression__operator;
}

e4c::tag_t IdlmmPackage::getTag_ConstantDefRef__constant() const
{
    return e4c::tag< ConstantDefRef__constant_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getConstantDefRef__constant() const
{
    return m_ConstantDefRef__constant;
}

e4c::tag_t IdlmmPackage::getTag_ValueExpression__value() const
{
    return e4c::tag< ValueExpression__value_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getValueExpression__value() const
{
    return m_ValueExpression__value;
}

e4c::tag_t IdlmmPackage::getTag_ForwardDef__definition() const
{
    return e4c::tag< ForwardDef__definition_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getForwardDef__definition() const
{
    return m_ForwardDef__definition;
}

e4c::tag_t IdlmmPackage::getTag_EnumMember__enum() const
{
    return e4c::tag< EnumMember__enum_tag >::get();
}

ecore::EReference_ptr IdlmmPackage::getEnumMember__enum() const
{
    return m_EnumMember__enum;
}

e4c::tag_t IdlmmPackage::getTag_NamedElement__identifier() const
{
    return e4c::tag< NamedElement__identifier_tag >::get();
}

ecore::EAttribute_ptr IdlmmPackage::getNamedElement__identifier() const
{
    return m_NamedElement__identifier;
}


extern "C" ::ecore::EPackage_ptr e4c_idlmm()
{
    return ::idlmm::IdlmmPackage::_instance();
}
