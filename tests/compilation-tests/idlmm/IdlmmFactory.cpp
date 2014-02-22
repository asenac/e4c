#include "IdlmmFactory.hpp"
#include "IdlmmPackage.hpp"
#include "include.hpp"

using namespace idlmm;

IdlmmFactory::IdlmmFactory()
{
    // m_ePackage = IdlmmPackage::_instance();
    // std::bind(&IdlmmFactory::createInterfaceDef, this);
    // m_ePackage->getTag_InterfaceDef();
    // std::bind(&IdlmmFactory::createModuleDef, this);
    // m_ePackage->getTag_ModuleDef();
    // std::bind(&IdlmmFactory::createOperationDef, this);
    // m_ePackage->getTag_OperationDef();
    // std::bind(&IdlmmFactory::createAttributeDef, this);
    // m_ePackage->getTag_AttributeDef();
    // std::bind(&IdlmmFactory::createConstantDef, this);
    // m_ePackage->getTag_ConstantDef();
    // std::bind(&IdlmmFactory::createParameterDef, this);
    // m_ePackage->getTag_ParameterDef();
    // std::bind(&IdlmmFactory::createPrimitiveDef, this);
    // m_ePackage->getTag_PrimitiveDef();
    // std::bind(&IdlmmFactory::createExceptionDef, this);
    // m_ePackage->getTag_ExceptionDef();
    // std::bind(&IdlmmFactory::createField, this);
    // m_ePackage->getTag_Field();
    // std::bind(&IdlmmFactory::createFixedDef, this);
    // m_ePackage->getTag_FixedDef();
    // std::bind(&IdlmmFactory::createWstringDef, this);
    // m_ePackage->getTag_WstringDef();
    // std::bind(&IdlmmFactory::createStringDef, this);
    // m_ePackage->getTag_StringDef();
    // std::bind(&IdlmmFactory::createAliasDef, this);
    // m_ePackage->getTag_AliasDef();
    // std::bind(&IdlmmFactory::createArrayDef, this);
    // m_ePackage->getTag_ArrayDef();
    // std::bind(&IdlmmFactory::createSequenceDef, this);
    // m_ePackage->getTag_SequenceDef();
    // std::bind(&IdlmmFactory::createUnionField, this);
    // m_ePackage->getTag_UnionField();
    // std::bind(&IdlmmFactory::createUnionDef, this);
    // m_ePackage->getTag_UnionDef();
    // std::bind(&IdlmmFactory::createEnumDef, this);
    // m_ePackage->getTag_EnumDef();
    // std::bind(&IdlmmFactory::createStructDef, this);
    // m_ePackage->getTag_StructDef();
    // std::bind(&IdlmmFactory::createTranslationUnit, this);
    // m_ePackage->getTag_TranslationUnit();
    // std::bind(&IdlmmFactory::createInclude, this);
    // m_ePackage->getTag_Include();
    // std::bind(&IdlmmFactory::createBinaryExpression, this);
    // m_ePackage->getTag_BinaryExpression();
    // std::bind(&IdlmmFactory::createUnaryExpression, this);
    // m_ePackage->getTag_UnaryExpression();
    // std::bind(&IdlmmFactory::createConstantDefRef, this);
    // m_ePackage->getTag_ConstantDefRef();
    // std::bind(&IdlmmFactory::createValueExpression, this);
    // m_ePackage->getTag_ValueExpression();
    // std::bind(&IdlmmFactory::createForwardDef, this);
    // m_ePackage->getTag_ForwardDef();
    // std::bind(&IdlmmFactory::createEnumMember, this);
    // m_ePackage->getTag_EnumMember();
}

const IdlmmFactory_ptr IdlmmFactory::_instance()
{
    static IdlmmFactory __instance;
    return &__instance;
}

InterfaceDef_ptr IdlmmFactory::createInterfaceDef() const
{
    return new InterfaceDef();
}

ModuleDef_ptr IdlmmFactory::createModuleDef() const
{
    return new ModuleDef();
}

OperationDef_ptr IdlmmFactory::createOperationDef() const
{
    return new OperationDef();
}

AttributeDef_ptr IdlmmFactory::createAttributeDef() const
{
    return new AttributeDef();
}

ConstantDef_ptr IdlmmFactory::createConstantDef() const
{
    return new ConstantDef();
}

ParameterDef_ptr IdlmmFactory::createParameterDef() const
{
    return new ParameterDef();
}

PrimitiveDef_ptr IdlmmFactory::createPrimitiveDef() const
{
    return new PrimitiveDef();
}

ExceptionDef_ptr IdlmmFactory::createExceptionDef() const
{
    return new ExceptionDef();
}

Field_ptr IdlmmFactory::createField() const
{
    return new Field();
}

FixedDef_ptr IdlmmFactory::createFixedDef() const
{
    return new FixedDef();
}

WstringDef_ptr IdlmmFactory::createWstringDef() const
{
    return new WstringDef();
}

StringDef_ptr IdlmmFactory::createStringDef() const
{
    return new StringDef();
}

AliasDef_ptr IdlmmFactory::createAliasDef() const
{
    return new AliasDef();
}

ArrayDef_ptr IdlmmFactory::createArrayDef() const
{
    return new ArrayDef();
}

SequenceDef_ptr IdlmmFactory::createSequenceDef() const
{
    return new SequenceDef();
}

UnionField_ptr IdlmmFactory::createUnionField() const
{
    return new UnionField();
}

UnionDef_ptr IdlmmFactory::createUnionDef() const
{
    return new UnionDef();
}

EnumDef_ptr IdlmmFactory::createEnumDef() const
{
    return new EnumDef();
}

StructDef_ptr IdlmmFactory::createStructDef() const
{
    return new StructDef();
}

TranslationUnit_ptr IdlmmFactory::createTranslationUnit() const
{
    return new TranslationUnit();
}

Include_ptr IdlmmFactory::createInclude() const
{
    return new Include();
}

BinaryExpression_ptr IdlmmFactory::createBinaryExpression() const
{
    return new BinaryExpression();
}

UnaryExpression_ptr IdlmmFactory::createUnaryExpression() const
{
    return new UnaryExpression();
}

ConstantDefRef_ptr IdlmmFactory::createConstantDefRef() const
{
    return new ConstantDefRef();
}

ValueExpression_ptr IdlmmFactory::createValueExpression() const
{
    return new ValueExpression();
}

ForwardDef_ptr IdlmmFactory::createForwardDef() const
{
    return new ForwardDef();
}

EnumMember_ptr IdlmmFactory::createEnumMember() const
{
    return new EnumMember();
}

