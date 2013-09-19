#ifndef EMF_CPP_KDM_CODE_FACTORY_HPP
#define EMF_CPP_KDM_CODE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace code
{


class CodeFactory : public ::ecore::EFactory
{
public:

    static const CodeFactory_ptr _instance();

    ControlElement_ptr createControlElement() const;
    MethodUnit_ptr createMethodUnit() const;
    Module_ptr createModule() const;
    CodeAssembly_ptr createCodeAssembly() const;
    CallableUnit_ptr createCallableUnit() const;
    TemplateUnit_ptr createTemplateUnit() const;
    TemplateParameter_ptr createTemplateParameter() const;
    InstanceOf_ptr createInstanceOf() const;
    CompilationUnit_ptr createCompilationUnit() const;
    CodeModel_ptr createCodeModel() const;
    DerivedType_ptr createDerivedType() const;
    ArrayType_ptr createArrayType() const;
    PrimitiveType_ptr createPrimitiveType() const;
    BooleanType_ptr createBooleanType() const;
    CharType_ptr createCharType() const;
    ClassUnit_ptr createClassUnit() const;
    CompositeType_ptr createCompositeType() const;
    RecordType_ptr createRecordType() const;
    EnumeratedType_ptr createEnumeratedType() const;
    Extends_ptr createExtends() const;
    ScaledType_ptr createScaledType() const;
    FloatType_ptr createFloatType() const;
    HasType_ptr createHasType() const;
    ImplementationOf_ptr createImplementationOf() const;
    Implements_ptr createImplements() const;
    IntegerType_ptr createIntegerType() const;
    InterfaceUnit_ptr createInterfaceUnit() const;
    PointerType_ptr createPointerType() const;
    TypeUnit_ptr createTypeUnit() const;
    RangeType_ptr createRangeType() const;
    Signature_ptr createSignature() const;
    DataElement_ptr createDataElement() const;
    StringType_ptr createStringType() const;
    ChoiceType_ptr createChoiceType() const;
    NamespaceUnit_ptr createNamespaceUnit() const;
    VisibleIn_ptr createVisibleIn() const;
    CommentUnit_ptr createCommentUnit() const;
    SharedUnit_ptr createSharedUnit() const;
    DecimalType_ptr createDecimalType() const;
    DateType_ptr createDateType() const;
    TimeType_ptr createTimeType() const;
    VoidType_ptr createVoidType() const;
    Value_ptr createValue() const;
    ValueList_ptr createValueList() const;
    StorableUnit_ptr createStorableUnit() const;
    MemberUnit_ptr createMemberUnit() const;
    ParameterUnit_ptr createParameterUnit() const;
    ItemUnit_ptr createItemUnit() const;
    IndexUnit_ptr createIndexUnit() const;
    SynonymType_ptr createSynonymType() const;
    SequenceType_ptr createSequenceType() const;
    BagType_ptr createBagType() const;
    SetType_ptr createSetType() const;
    CodeElement_ptr createCodeElement() const;
    CodeRelationship_ptr createCodeRelationship() const;
    LanguageUnit_ptr createLanguageUnit() const;
    OrdinalType_ptr createOrdinalType() const;
    BitstringType_ptr createBitstringType() const;
    OctetType_ptr createOctetType() const;
    OctetstringType_ptr createOctetstringType() const;
    BitType_ptr createBitType() const;
    Imports_ptr createImports() const;
    Package_ptr createPackage() const;
    ParameterTo_ptr createParameterTo() const;
    TemplateType_ptr createTemplateType() const;
    PreprocessorDirective_ptr createPreprocessorDirective() const;
    MacroDirective_ptr createMacroDirective() const;
    MacroUnit_ptr createMacroUnit() const;
    ConditionalDirective_ptr createConditionalDirective() const;
    IncludeDirective_ptr createIncludeDirective() const;
    VariantTo_ptr createVariantTo() const;
    Expands_ptr createExpands() const;
    Redefines_ptr createRedefines() const;
    GeneratedFrom_ptr createGeneratedFrom() const;
    Includes_ptr createIncludes() const;
    HasValue_ptr createHasValue() const;

protected:

    CodeFactory();
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_FACTORY_HPP
