#include "CodeFactory.hpp"
#include "CodePackage.hpp"
#include "include.hpp"

using namespace kdm::code;

CodeFactory::CodeFactory()
{
	m_ePackage = CodePackage::_instance();
	// std::bind(&CodeFactory::createControlElement, this);
	// m_ePackage->getTag_ControlElement();
	// std::bind(&CodeFactory::createMethodUnit, this);
	// m_ePackage->getTag_MethodUnit();
	// std::bind(&CodeFactory::createModule, this);
	// m_ePackage->getTag_Module();
	// std::bind(&CodeFactory::createCodeAssembly, this);
	// m_ePackage->getTag_CodeAssembly();
	// std::bind(&CodeFactory::createCallableUnit, this);
	// m_ePackage->getTag_CallableUnit();
	// std::bind(&CodeFactory::createTemplateUnit, this);
	// m_ePackage->getTag_TemplateUnit();
	// std::bind(&CodeFactory::createTemplateParameter, this);
	// m_ePackage->getTag_TemplateParameter();
	// std::bind(&CodeFactory::createInstanceOf, this);
	// m_ePackage->getTag_InstanceOf();
	// std::bind(&CodeFactory::createCompilationUnit, this);
	// m_ePackage->getTag_CompilationUnit();
	// std::bind(&CodeFactory::createCodeModel, this);
	// m_ePackage->getTag_CodeModel();
	// std::bind(&CodeFactory::createDerivedType, this);
	// m_ePackage->getTag_DerivedType();
	// std::bind(&CodeFactory::createArrayType, this);
	// m_ePackage->getTag_ArrayType();
	// std::bind(&CodeFactory::createPrimitiveType, this);
	// m_ePackage->getTag_PrimitiveType();
	// std::bind(&CodeFactory::createBooleanType, this);
	// m_ePackage->getTag_BooleanType();
	// std::bind(&CodeFactory::createCharType, this);
	// m_ePackage->getTag_CharType();
	// std::bind(&CodeFactory::createClassUnit, this);
	// m_ePackage->getTag_ClassUnit();
	// std::bind(&CodeFactory::createCompositeType, this);
	// m_ePackage->getTag_CompositeType();
	// std::bind(&CodeFactory::createRecordType, this);
	// m_ePackage->getTag_RecordType();
	// std::bind(&CodeFactory::createEnumeratedType, this);
	// m_ePackage->getTag_EnumeratedType();
	// std::bind(&CodeFactory::createExtends, this);
	// m_ePackage->getTag_Extends();
	// std::bind(&CodeFactory::createScaledType, this);
	// m_ePackage->getTag_ScaledType();
	// std::bind(&CodeFactory::createFloatType, this);
	// m_ePackage->getTag_FloatType();
	// std::bind(&CodeFactory::createHasType, this);
	// m_ePackage->getTag_HasType();
	// std::bind(&CodeFactory::createImplementationOf, this);
	// m_ePackage->getTag_ImplementationOf();
	// std::bind(&CodeFactory::createImplements, this);
	// m_ePackage->getTag_Implements();
	// std::bind(&CodeFactory::createIntegerType, this);
	// m_ePackage->getTag_IntegerType();
	// std::bind(&CodeFactory::createInterfaceUnit, this);
	// m_ePackage->getTag_InterfaceUnit();
	// std::bind(&CodeFactory::createPointerType, this);
	// m_ePackage->getTag_PointerType();
	// std::bind(&CodeFactory::createTypeUnit, this);
	// m_ePackage->getTag_TypeUnit();
	// std::bind(&CodeFactory::createRangeType, this);
	// m_ePackage->getTag_RangeType();
	// std::bind(&CodeFactory::createSignature, this);
	// m_ePackage->getTag_Signature();
	// std::bind(&CodeFactory::createDataElement, this);
	// m_ePackage->getTag_DataElement();
	// std::bind(&CodeFactory::createStringType, this);
	// m_ePackage->getTag_StringType();
	// std::bind(&CodeFactory::createChoiceType, this);
	// m_ePackage->getTag_ChoiceType();
	// std::bind(&CodeFactory::createNamespaceUnit, this);
	// m_ePackage->getTag_NamespaceUnit();
	// std::bind(&CodeFactory::createVisibleIn, this);
	// m_ePackage->getTag_VisibleIn();
	// std::bind(&CodeFactory::createCommentUnit, this);
	// m_ePackage->getTag_CommentUnit();
	// std::bind(&CodeFactory::createSharedUnit, this);
	// m_ePackage->getTag_SharedUnit();
	// std::bind(&CodeFactory::createDecimalType, this);
	// m_ePackage->getTag_DecimalType();
	// std::bind(&CodeFactory::createDateType, this);
	// m_ePackage->getTag_DateType();
	// std::bind(&CodeFactory::createTimeType, this);
	// m_ePackage->getTag_TimeType();
	// std::bind(&CodeFactory::createVoidType, this);
	// m_ePackage->getTag_VoidType();
	// std::bind(&CodeFactory::createValue, this);
	// m_ePackage->getTag_Value();
	// std::bind(&CodeFactory::createValueList, this);
	// m_ePackage->getTag_ValueList();
	// std::bind(&CodeFactory::createStorableUnit, this);
	// m_ePackage->getTag_StorableUnit();
	// std::bind(&CodeFactory::createMemberUnit, this);
	// m_ePackage->getTag_MemberUnit();
	// std::bind(&CodeFactory::createParameterUnit, this);
	// m_ePackage->getTag_ParameterUnit();
	// std::bind(&CodeFactory::createItemUnit, this);
	// m_ePackage->getTag_ItemUnit();
	// std::bind(&CodeFactory::createIndexUnit, this);
	// m_ePackage->getTag_IndexUnit();
	// std::bind(&CodeFactory::createSynonymType, this);
	// m_ePackage->getTag_SynonymType();
	// std::bind(&CodeFactory::createSequenceType, this);
	// m_ePackage->getTag_SequenceType();
	// std::bind(&CodeFactory::createBagType, this);
	// m_ePackage->getTag_BagType();
	// std::bind(&CodeFactory::createSetType, this);
	// m_ePackage->getTag_SetType();
	// std::bind(&CodeFactory::createCodeElement, this);
	// m_ePackage->getTag_CodeElement();
	// std::bind(&CodeFactory::createCodeRelationship, this);
	// m_ePackage->getTag_CodeRelationship();
	// std::bind(&CodeFactory::createLanguageUnit, this);
	// m_ePackage->getTag_LanguageUnit();
	// std::bind(&CodeFactory::createOrdinalType, this);
	// m_ePackage->getTag_OrdinalType();
	// std::bind(&CodeFactory::createBitstringType, this);
	// m_ePackage->getTag_BitstringType();
	// std::bind(&CodeFactory::createOctetType, this);
	// m_ePackage->getTag_OctetType();
	// std::bind(&CodeFactory::createOctetstringType, this);
	// m_ePackage->getTag_OctetstringType();
	// std::bind(&CodeFactory::createBitType, this);
	// m_ePackage->getTag_BitType();
	// std::bind(&CodeFactory::createImports, this);
	// m_ePackage->getTag_Imports();
	// std::bind(&CodeFactory::createPackage, this);
	// m_ePackage->getTag_Package();
	// std::bind(&CodeFactory::createParameterTo, this);
	// m_ePackage->getTag_ParameterTo();
	// std::bind(&CodeFactory::createTemplateType, this);
	// m_ePackage->getTag_TemplateType();
	// std::bind(&CodeFactory::createPreprocessorDirective, this);
	// m_ePackage->getTag_PreprocessorDirective();
	// std::bind(&CodeFactory::createMacroDirective, this);
	// m_ePackage->getTag_MacroDirective();
	// std::bind(&CodeFactory::createMacroUnit, this);
	// m_ePackage->getTag_MacroUnit();
	// std::bind(&CodeFactory::createConditionalDirective, this);
	// m_ePackage->getTag_ConditionalDirective();
	// std::bind(&CodeFactory::createIncludeDirective, this);
	// m_ePackage->getTag_IncludeDirective();
	// std::bind(&CodeFactory::createVariantTo, this);
	// m_ePackage->getTag_VariantTo();
	// std::bind(&CodeFactory::createExpands, this);
	// m_ePackage->getTag_Expands();
	// std::bind(&CodeFactory::createRedefines, this);
	// m_ePackage->getTag_Redefines();
	// std::bind(&CodeFactory::createGeneratedFrom, this);
	// m_ePackage->getTag_GeneratedFrom();
	// std::bind(&CodeFactory::createIncludes, this);
	// m_ePackage->getTag_Includes();
	// std::bind(&CodeFactory::createHasValue, this);
	// m_ePackage->getTag_HasValue();
}

const CodeFactory_ptr CodeFactory::_instance()
{
	static CodeFactory __instance;
	return &__instance;
}

ControlElement_ptr CodeFactory::createControlElement() const
{
	return new ControlElement();
}

MethodUnit_ptr CodeFactory::createMethodUnit() const
{
	return new MethodUnit();
}

Module_ptr CodeFactory::createModule() const
{
	return new Module();
}

CodeAssembly_ptr CodeFactory::createCodeAssembly() const
{
	return new CodeAssembly();
}

CallableUnit_ptr CodeFactory::createCallableUnit() const
{
	return new CallableUnit();
}

TemplateUnit_ptr CodeFactory::createTemplateUnit() const
{
	return new TemplateUnit();
}

TemplateParameter_ptr CodeFactory::createTemplateParameter() const
{
	return new TemplateParameter();
}

InstanceOf_ptr CodeFactory::createInstanceOf() const
{
	return new InstanceOf();
}

CompilationUnit_ptr CodeFactory::createCompilationUnit() const
{
	return new CompilationUnit();
}

CodeModel_ptr CodeFactory::createCodeModel() const
{
	return new CodeModel();
}

DerivedType_ptr CodeFactory::createDerivedType() const
{
	return new DerivedType();
}

ArrayType_ptr CodeFactory::createArrayType() const
{
	return new ArrayType();
}

PrimitiveType_ptr CodeFactory::createPrimitiveType() const
{
	return new PrimitiveType();
}

BooleanType_ptr CodeFactory::createBooleanType() const
{
	return new BooleanType();
}

CharType_ptr CodeFactory::createCharType() const
{
	return new CharType();
}

ClassUnit_ptr CodeFactory::createClassUnit() const
{
	return new ClassUnit();
}

CompositeType_ptr CodeFactory::createCompositeType() const
{
	return new CompositeType();
}

RecordType_ptr CodeFactory::createRecordType() const
{
	return new RecordType();
}

EnumeratedType_ptr CodeFactory::createEnumeratedType() const
{
	return new EnumeratedType();
}

Extends_ptr CodeFactory::createExtends() const
{
	return new Extends();
}

ScaledType_ptr CodeFactory::createScaledType() const
{
	return new ScaledType();
}

FloatType_ptr CodeFactory::createFloatType() const
{
	return new FloatType();
}

HasType_ptr CodeFactory::createHasType() const
{
	return new HasType();
}

ImplementationOf_ptr CodeFactory::createImplementationOf() const
{
	return new ImplementationOf();
}

Implements_ptr CodeFactory::createImplements() const
{
	return new Implements();
}

IntegerType_ptr CodeFactory::createIntegerType() const
{
	return new IntegerType();
}

InterfaceUnit_ptr CodeFactory::createInterfaceUnit() const
{
	return new InterfaceUnit();
}

PointerType_ptr CodeFactory::createPointerType() const
{
	return new PointerType();
}

TypeUnit_ptr CodeFactory::createTypeUnit() const
{
	return new TypeUnit();
}

RangeType_ptr CodeFactory::createRangeType() const
{
	return new RangeType();
}

Signature_ptr CodeFactory::createSignature() const
{
	return new Signature();
}

DataElement_ptr CodeFactory::createDataElement() const
{
	return new DataElement();
}

StringType_ptr CodeFactory::createStringType() const
{
	return new StringType();
}

ChoiceType_ptr CodeFactory::createChoiceType() const
{
	return new ChoiceType();
}

NamespaceUnit_ptr CodeFactory::createNamespaceUnit() const
{
	return new NamespaceUnit();
}

VisibleIn_ptr CodeFactory::createVisibleIn() const
{
	return new VisibleIn();
}

CommentUnit_ptr CodeFactory::createCommentUnit() const
{
	return new CommentUnit();
}

SharedUnit_ptr CodeFactory::createSharedUnit() const
{
	return new SharedUnit();
}

DecimalType_ptr CodeFactory::createDecimalType() const
{
	return new DecimalType();
}

DateType_ptr CodeFactory::createDateType() const
{
	return new DateType();
}

TimeType_ptr CodeFactory::createTimeType() const
{
	return new TimeType();
}

VoidType_ptr CodeFactory::createVoidType() const
{
	return new VoidType();
}

Value_ptr CodeFactory::createValue() const
{
	return new Value();
}

ValueList_ptr CodeFactory::createValueList() const
{
	return new ValueList();
}

StorableUnit_ptr CodeFactory::createStorableUnit() const
{
	return new StorableUnit();
}

MemberUnit_ptr CodeFactory::createMemberUnit() const
{
	return new MemberUnit();
}

ParameterUnit_ptr CodeFactory::createParameterUnit() const
{
	return new ParameterUnit();
}

ItemUnit_ptr CodeFactory::createItemUnit() const
{
	return new ItemUnit();
}

IndexUnit_ptr CodeFactory::createIndexUnit() const
{
	return new IndexUnit();
}

SynonymType_ptr CodeFactory::createSynonymType() const
{
	return new SynonymType();
}

SequenceType_ptr CodeFactory::createSequenceType() const
{
	return new SequenceType();
}

BagType_ptr CodeFactory::createBagType() const
{
	return new BagType();
}

SetType_ptr CodeFactory::createSetType() const
{
	return new SetType();
}

CodeElement_ptr CodeFactory::createCodeElement() const
{
	return new CodeElement();
}

CodeRelationship_ptr CodeFactory::createCodeRelationship() const
{
	return new CodeRelationship();
}

LanguageUnit_ptr CodeFactory::createLanguageUnit() const
{
	return new LanguageUnit();
}

OrdinalType_ptr CodeFactory::createOrdinalType() const
{
	return new OrdinalType();
}

BitstringType_ptr CodeFactory::createBitstringType() const
{
	return new BitstringType();
}

OctetType_ptr CodeFactory::createOctetType() const
{
	return new OctetType();
}

OctetstringType_ptr CodeFactory::createOctetstringType() const
{
	return new OctetstringType();
}

BitType_ptr CodeFactory::createBitType() const
{
	return new BitType();
}

Imports_ptr CodeFactory::createImports() const
{
	return new Imports();
}

Package_ptr CodeFactory::createPackage() const
{
	return new Package();
}

ParameterTo_ptr CodeFactory::createParameterTo() const
{
	return new ParameterTo();
}

TemplateType_ptr CodeFactory::createTemplateType() const
{
	return new TemplateType();
}

PreprocessorDirective_ptr CodeFactory::createPreprocessorDirective() const
{
	return new PreprocessorDirective();
}

MacroDirective_ptr CodeFactory::createMacroDirective() const
{
	return new MacroDirective();
}

MacroUnit_ptr CodeFactory::createMacroUnit() const
{
	return new MacroUnit();
}

ConditionalDirective_ptr CodeFactory::createConditionalDirective() const
{
	return new ConditionalDirective();
}

IncludeDirective_ptr CodeFactory::createIncludeDirective() const
{
	return new IncludeDirective();
}

VariantTo_ptr CodeFactory::createVariantTo() const
{
	return new VariantTo();
}

Expands_ptr CodeFactory::createExpands() const
{
	return new Expands();
}

Redefines_ptr CodeFactory::createRedefines() const
{
	return new Redefines();
}

GeneratedFrom_ptr CodeFactory::createGeneratedFrom() const
{
	return new GeneratedFrom();
}

Includes_ptr CodeFactory::createIncludes() const
{
	return new Includes();
}

HasValue_ptr CodeFactory::createHasValue() const
{
	return new HasValue();
}

