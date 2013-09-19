#ifndef EMF_CPP_IDLMM_FACTORY_HPP
#define EMF_CPP_IDLMM_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <idlmm/fwd.hpp>

namespace idlmm
{


class IdlmmFactory : public ::ecore::EFactory
{
public:

    static const IdlmmFactory_ptr _instance();

    InterfaceDef_ptr createInterfaceDef() const;
    ModuleDef_ptr createModuleDef() const;
    OperationDef_ptr createOperationDef() const;
    AttributeDef_ptr createAttributeDef() const;
    ConstantDef_ptr createConstantDef() const;
    ParameterDef_ptr createParameterDef() const;
    PrimitiveDef_ptr createPrimitiveDef() const;
    ExceptionDef_ptr createExceptionDef() const;
    Field_ptr createField() const;
    FixedDef_ptr createFixedDef() const;
    WstringDef_ptr createWstringDef() const;
    StringDef_ptr createStringDef() const;
    AliasDef_ptr createAliasDef() const;
    ArrayDef_ptr createArrayDef() const;
    SequenceDef_ptr createSequenceDef() const;
    UnionField_ptr createUnionField() const;
    UnionDef_ptr createUnionDef() const;
    EnumDef_ptr createEnumDef() const;
    StructDef_ptr createStructDef() const;
    TranslationUnit_ptr createTranslationUnit() const;
    Include_ptr createInclude() const;
    BinaryExpression_ptr createBinaryExpression() const;
    UnaryExpression_ptr createUnaryExpression() const;
    ConstantDefRef_ptr createConstantDefRef() const;
    ValueExpression_ptr createValueExpression() const;
    ForwardDef_ptr createForwardDef() const;
    EnumMember_ptr createEnumMember() const;

protected:

    IdlmmFactory();
};

} // idlmm


#endif // EMF_CPP_IDLMM_FACTORY_HPP
