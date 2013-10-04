#include "CodePackage.hpp"
#include "CodeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::code;

CodePackage::CodePackage()
{
	m_eFactoryInstance = CodeFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_AbstractCodeElement = ecoreFactory->createEClass();
	m_AbstractCodeElement->setName("AbstractCodeElement");
	addEClassifiers(m_AbstractCodeElement);
	m_CodeItem = ecoreFactory->createEClass();
	m_CodeItem->setName("CodeItem");
	addEClassifiers(m_CodeItem);
	m_ComputationalObject = ecoreFactory->createEClass();
	m_ComputationalObject->setName("ComputationalObject");
	addEClassifiers(m_ComputationalObject);
	m_ControlElement = ecoreFactory->createEClass();
	m_ControlElement->setName("ControlElement");
	addEClassifiers(m_ControlElement);
	m_MethodUnit = ecoreFactory->createEClass();
	m_MethodUnit->setName("MethodUnit");
	addEClassifiers(m_MethodUnit);
	m_Module = ecoreFactory->createEClass();
	m_Module->setName("Module");
	addEClassifiers(m_Module);
	m_CodeAssembly = ecoreFactory->createEClass();
	m_CodeAssembly->setName("CodeAssembly");
	addEClassifiers(m_CodeAssembly);
	m_CallableUnit = ecoreFactory->createEClass();
	m_CallableUnit->setName("CallableUnit");
	addEClassifiers(m_CallableUnit);
	m_Datatype = ecoreFactory->createEClass();
	m_Datatype->setName("Datatype");
	addEClassifiers(m_Datatype);
	m_TemplateUnit = ecoreFactory->createEClass();
	m_TemplateUnit->setName("TemplateUnit");
	addEClassifiers(m_TemplateUnit);
	m_TemplateParameter = ecoreFactory->createEClass();
	m_TemplateParameter->setName("TemplateParameter");
	addEClassifiers(m_TemplateParameter);
	m_AbstractCodeRelationship = ecoreFactory->createEClass();
	m_AbstractCodeRelationship->setName("AbstractCodeRelationship");
	addEClassifiers(m_AbstractCodeRelationship);
	m_InstanceOf = ecoreFactory->createEClass();
	m_InstanceOf->setName("InstanceOf");
	addEClassifiers(m_InstanceOf);
	m_CompilationUnit = ecoreFactory->createEClass();
	m_CompilationUnit->setName("CompilationUnit");
	addEClassifiers(m_CompilationUnit);
	m_CodeModel = ecoreFactory->createEClass();
	m_CodeModel->setName("CodeModel");
	addEClassifiers(m_CodeModel);
	m_DerivedType = ecoreFactory->createEClass();
	m_DerivedType->setName("DerivedType");
	addEClassifiers(m_DerivedType);
	m_ArrayType = ecoreFactory->createEClass();
	m_ArrayType->setName("ArrayType");
	addEClassifiers(m_ArrayType);
	m_PrimitiveType = ecoreFactory->createEClass();
	m_PrimitiveType->setName("PrimitiveType");
	addEClassifiers(m_PrimitiveType);
	m_BooleanType = ecoreFactory->createEClass();
	m_BooleanType->setName("BooleanType");
	addEClassifiers(m_BooleanType);
	m_CharType = ecoreFactory->createEClass();
	m_CharType->setName("CharType");
	addEClassifiers(m_CharType);
	m_ClassUnit = ecoreFactory->createEClass();
	m_ClassUnit->setName("ClassUnit");
	addEClassifiers(m_ClassUnit);
	m_CompositeType = ecoreFactory->createEClass();
	m_CompositeType->setName("CompositeType");
	addEClassifiers(m_CompositeType);
	m_RecordType = ecoreFactory->createEClass();
	m_RecordType->setName("RecordType");
	addEClassifiers(m_RecordType);
	m_EnumeratedType = ecoreFactory->createEClass();
	m_EnumeratedType->setName("EnumeratedType");
	addEClassifiers(m_EnumeratedType);
	m_Extends = ecoreFactory->createEClass();
	m_Extends->setName("Extends");
	addEClassifiers(m_Extends);
	m_ScaledType = ecoreFactory->createEClass();
	m_ScaledType->setName("ScaledType");
	addEClassifiers(m_ScaledType);
	m_FloatType = ecoreFactory->createEClass();
	m_FloatType->setName("FloatType");
	addEClassifiers(m_FloatType);
	m_HasType = ecoreFactory->createEClass();
	m_HasType->setName("HasType");
	addEClassifiers(m_HasType);
	m_ImplementationOf = ecoreFactory->createEClass();
	m_ImplementationOf->setName("ImplementationOf");
	addEClassifiers(m_ImplementationOf);
	m_Implements = ecoreFactory->createEClass();
	m_Implements->setName("Implements");
	addEClassifiers(m_Implements);
	m_IntegerType = ecoreFactory->createEClass();
	m_IntegerType->setName("IntegerType");
	addEClassifiers(m_IntegerType);
	m_InterfaceUnit = ecoreFactory->createEClass();
	m_InterfaceUnit->setName("InterfaceUnit");
	addEClassifiers(m_InterfaceUnit);
	m_PointerType = ecoreFactory->createEClass();
	m_PointerType->setName("PointerType");
	addEClassifiers(m_PointerType);
	m_DefinedType = ecoreFactory->createEClass();
	m_DefinedType->setName("DefinedType");
	addEClassifiers(m_DefinedType);
	m_TypeUnit = ecoreFactory->createEClass();
	m_TypeUnit->setName("TypeUnit");
	addEClassifiers(m_TypeUnit);
	m_RangeType = ecoreFactory->createEClass();
	m_RangeType->setName("RangeType");
	addEClassifiers(m_RangeType);
	m_Signature = ecoreFactory->createEClass();
	m_Signature->setName("Signature");
	addEClassifiers(m_Signature);
	m_DataElement = ecoreFactory->createEClass();
	m_DataElement->setName("DataElement");
	addEClassifiers(m_DataElement);
	m_StringType = ecoreFactory->createEClass();
	m_StringType->setName("StringType");
	addEClassifiers(m_StringType);
	m_ChoiceType = ecoreFactory->createEClass();
	m_ChoiceType->setName("ChoiceType");
	addEClassifiers(m_ChoiceType);
	m_NamespaceUnit = ecoreFactory->createEClass();
	m_NamespaceUnit->setName("NamespaceUnit");
	addEClassifiers(m_NamespaceUnit);
	m_VisibleIn = ecoreFactory->createEClass();
	m_VisibleIn->setName("VisibleIn");
	addEClassifiers(m_VisibleIn);
	m_CommentUnit = ecoreFactory->createEClass();
	m_CommentUnit->setName("CommentUnit");
	addEClassifiers(m_CommentUnit);
	m_SharedUnit = ecoreFactory->createEClass();
	m_SharedUnit->setName("SharedUnit");
	addEClassifiers(m_SharedUnit);
	m_DecimalType = ecoreFactory->createEClass();
	m_DecimalType->setName("DecimalType");
	addEClassifiers(m_DecimalType);
	m_DateType = ecoreFactory->createEClass();
	m_DateType->setName("DateType");
	addEClassifiers(m_DateType);
	m_TimeType = ecoreFactory->createEClass();
	m_TimeType->setName("TimeType");
	addEClassifiers(m_TimeType);
	m_MethodKind = ecoreFactory->createEEnum();
	m_MethodKind->setName("MethodKind");
	addEClassifiers(m_MethodKind);
	m_VoidType = ecoreFactory->createEClass();
	m_VoidType->setName("VoidType");
	addEClassifiers(m_VoidType);
	m_ValueElement = ecoreFactory->createEClass();
	m_ValueElement->setName("ValueElement");
	addEClassifiers(m_ValueElement);
	m_Value = ecoreFactory->createEClass();
	m_Value->setName("Value");
	addEClassifiers(m_Value);
	m_ValueList = ecoreFactory->createEClass();
	m_ValueList->setName("ValueList");
	addEClassifiers(m_ValueList);
	m_StorableUnit = ecoreFactory->createEClass();
	m_StorableUnit->setName("StorableUnit");
	addEClassifiers(m_StorableUnit);
	m_MemberUnit = ecoreFactory->createEClass();
	m_MemberUnit->setName("MemberUnit");
	addEClassifiers(m_MemberUnit);
	m_ParameterUnit = ecoreFactory->createEClass();
	m_ParameterUnit->setName("ParameterUnit");
	addEClassifiers(m_ParameterUnit);
	m_ItemUnit = ecoreFactory->createEClass();
	m_ItemUnit->setName("ItemUnit");
	addEClassifiers(m_ItemUnit);
	m_IndexUnit = ecoreFactory->createEClass();
	m_IndexUnit->setName("IndexUnit");
	addEClassifiers(m_IndexUnit);
	m_SynonymType = ecoreFactory->createEClass();
	m_SynonymType->setName("SynonymType");
	addEClassifiers(m_SynonymType);
	m_SequenceType = ecoreFactory->createEClass();
	m_SequenceType->setName("SequenceType");
	addEClassifiers(m_SequenceType);
	m_BagType = ecoreFactory->createEClass();
	m_BagType->setName("BagType");
	addEClassifiers(m_BagType);
	m_SetType = ecoreFactory->createEClass();
	m_SetType->setName("SetType");
	addEClassifiers(m_SetType);
	m_CodeElement = ecoreFactory->createEClass();
	m_CodeElement->setName("CodeElement");
	addEClassifiers(m_CodeElement);
	m_CodeRelationship = ecoreFactory->createEClass();
	m_CodeRelationship->setName("CodeRelationship");
	addEClassifiers(m_CodeRelationship);
	m_ParameterKind = ecoreFactory->createEEnum();
	m_ParameterKind->setName("ParameterKind");
	addEClassifiers(m_ParameterKind);
	m_ExportKind = ecoreFactory->createEEnum();
	m_ExportKind->setName("ExportKind");
	addEClassifiers(m_ExportKind);
	m_LanguageUnit = ecoreFactory->createEClass();
	m_LanguageUnit->setName("LanguageUnit");
	addEClassifiers(m_LanguageUnit);
	m_OrdinalType = ecoreFactory->createEClass();
	m_OrdinalType->setName("OrdinalType");
	addEClassifiers(m_OrdinalType);
	m_BitstringType = ecoreFactory->createEClass();
	m_BitstringType->setName("BitstringType");
	addEClassifiers(m_BitstringType);
	m_OctetType = ecoreFactory->createEClass();
	m_OctetType->setName("OctetType");
	addEClassifiers(m_OctetType);
	m_OctetstringType = ecoreFactory->createEClass();
	m_OctetstringType->setName("OctetstringType");
	addEClassifiers(m_OctetstringType);
	m_BitType = ecoreFactory->createEClass();
	m_BitType->setName("BitType");
	addEClassifiers(m_BitType);
	m_StorableKind = ecoreFactory->createEEnum();
	m_StorableKind->setName("StorableKind");
	addEClassifiers(m_StorableKind);
	m_CallableKind = ecoreFactory->createEEnum();
	m_CallableKind->setName("CallableKind");
	addEClassifiers(m_CallableKind);
	m_Imports = ecoreFactory->createEClass();
	m_Imports->setName("Imports");
	addEClassifiers(m_Imports);
	m_Package = ecoreFactory->createEClass();
	m_Package->setName("Package");
	addEClassifiers(m_Package);
	m_ParameterTo = ecoreFactory->createEClass();
	m_ParameterTo->setName("ParameterTo");
	addEClassifiers(m_ParameterTo);
	m_TemplateType = ecoreFactory->createEClass();
	m_TemplateType->setName("TemplateType");
	addEClassifiers(m_TemplateType);
	m_PreprocessorDirective = ecoreFactory->createEClass();
	m_PreprocessorDirective->setName("PreprocessorDirective");
	addEClassifiers(m_PreprocessorDirective);
	m_MacroDirective = ecoreFactory->createEClass();
	m_MacroDirective->setName("MacroDirective");
	addEClassifiers(m_MacroDirective);
	m_MacroUnit = ecoreFactory->createEClass();
	m_MacroUnit->setName("MacroUnit");
	addEClassifiers(m_MacroUnit);
	m_ConditionalDirective = ecoreFactory->createEClass();
	m_ConditionalDirective->setName("ConditionalDirective");
	addEClassifiers(m_ConditionalDirective);
	m_IncludeDirective = ecoreFactory->createEClass();
	m_IncludeDirective->setName("IncludeDirective");
	addEClassifiers(m_IncludeDirective);
	m_MacroKind = ecoreFactory->createEEnum();
	m_MacroKind->setName("MacroKind");
	addEClassifiers(m_MacroKind);
	m_VariantTo = ecoreFactory->createEClass();
	m_VariantTo->setName("VariantTo");
	addEClassifiers(m_VariantTo);
	m_Expands = ecoreFactory->createEClass();
	m_Expands->setName("Expands");
	addEClassifiers(m_Expands);
	m_Redefines = ecoreFactory->createEClass();
	m_Redefines->setName("Redefines");
	addEClassifiers(m_Redefines);
	m_GeneratedFrom = ecoreFactory->createEClass();
	m_GeneratedFrom->setName("GeneratedFrom");
	addEClassifiers(m_GeneratedFrom);
	m_Includes = ecoreFactory->createEClass();
	m_Includes->setName("Includes");
	addEClassifiers(m_Includes);
	m_HasValue = ecoreFactory->createEClass();
	m_HasValue->setName("HasValue");
	addEClassifiers(m_HasValue);

    m_MethodKind->setSerializable(true);
    m_ParameterKind->setSerializable(true);
    m_ExportKind->setSerializable(true);
    m_StorableKind->setSerializable(true);
    m_CallableKind->setSerializable(true);
    m_MacroKind->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("operator");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::operator));
        el->setLiteral("operator");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("destructor");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::destructor));
        el->setLiteral("destructor");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("method");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::method));
        el->setLiteral("method");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("abstract");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::abstract));
        el->setLiteral("abstract");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("virtual");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::virtual));
        el->setLiteral("virtual");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::unknown));
        el->setLiteral("unknown");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("constructor");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::constructor));
        el->setLiteral("constructor");
        m_MethodKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byReference");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byReference));
        el->setLiteral("byReference");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::unknown));
        el->setLiteral("unknown");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("exception");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::exception));
        el->setLiteral("exception");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("return");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::return));
        el->setLiteral("return");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byValue");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byValue));
        el->setLiteral("byValue");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("catchall");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::catchall));
        el->setLiteral("catchall");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byName");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byName));
        el->setLiteral("byName");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("throws");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::throws));
        el->setLiteral("throws");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("variadic");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::variadic));
        el->setLiteral("variadic");
        m_ParameterKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("private");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::private));
        el->setLiteral("private");
        m_ExportKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::unknown));
        el->setLiteral("unknown");
        m_ExportKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("public");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::public));
        el->setLiteral("public");
        m_ExportKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("protected");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::protected));
        el->setLiteral("protected");
        m_ExportKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("final");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::final));
        el->setLiteral("final");
        m_ExportKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("global");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::global));
        el->setLiteral("global");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::external));
        el->setLiteral("external");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("static");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::static));
        el->setLiteral("static");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::unknown));
        el->setLiteral("unknown");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("register");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::register));
        el->setLiteral("register");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("local");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::local));
        el->setLiteral("local");
        m_StorableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::external));
        el->setLiteral("external");
        m_CallableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("regular");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::regular));
        el->setLiteral("regular");
        m_CallableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("stored");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::stored));
        el->setLiteral("stored");
        m_CallableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("operator");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::operator));
        el->setLiteral("operator");
        m_CallableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::unknown));
        el->setLiteral("unknown");
        m_CallableKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::external));
        el->setLiteral("external");
        m_MacroKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::unknown));
        el->setLiteral("unknown");
        m_MacroKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("option");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::option));
        el->setLiteral("option");
        m_MacroKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("undefined");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::undefined));
        el->setLiteral("undefined");
        m_MacroKind->addELiterals(el);
    }
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("regular");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::regular));
        el->setLiteral("regular");
        m_MacroKind->addELiterals(el);
    }
	
    {
        m_AbstractCodeElement__source = ecoreFactory->createEReference();
        m_AbstractCodeElement__source->setName("source");
        m_AbstractCodeElement->addEStructuralFeatures(m_AbstractCodeElement__source);
        m_AbstractCodeElement->addEAllStructuralFeatures(m_AbstractCodeElement__source);
        m_AbstractCodeElement->addEReferences(m_AbstractCodeElement__source);
        m_AbstractCodeElement->addEAllReferences(m_AbstractCodeElement__source);
    }
    {
        m_AbstractCodeElement__comment = ecoreFactory->createEReference();
        m_AbstractCodeElement__comment->setName("comment");
        m_AbstractCodeElement->addEStructuralFeatures(m_AbstractCodeElement__comment);
        m_AbstractCodeElement->addEAllStructuralFeatures(m_AbstractCodeElement__comment);
        m_AbstractCodeElement->addEReferences(m_AbstractCodeElement__comment);
        m_AbstractCodeElement->addEAllReferences(m_AbstractCodeElement__comment);
    }
    {
        m_AbstractCodeElement__codeRelation = ecoreFactory->createEReference();
        m_AbstractCodeElement__codeRelation->setName("codeRelation");
        m_AbstractCodeElement->addEStructuralFeatures(m_AbstractCodeElement__codeRelation);
        m_AbstractCodeElement->addEAllStructuralFeatures(m_AbstractCodeElement__codeRelation);
        m_AbstractCodeElement->addEReferences(m_AbstractCodeElement__codeRelation);
        m_AbstractCodeElement->addEAllReferences(m_AbstractCodeElement__codeRelation);
    }
    {
        m_ControlElement__type = ecoreFactory->createEReference();
        m_ControlElement__type->setName("type");
        m_ControlElement->addEStructuralFeatures(m_ControlElement__type);
        m_ControlElement->addEAllStructuralFeatures(m_ControlElement__type);
        m_ControlElement->addEReferences(m_ControlElement__type);
        m_ControlElement->addEAllReferences(m_ControlElement__type);
    }
    {
        m_ControlElement__entryFlow = ecoreFactory->createEReference();
        m_ControlElement__entryFlow->setName("entryFlow");
        m_ControlElement->addEStructuralFeatures(m_ControlElement__entryFlow);
        m_ControlElement->addEAllStructuralFeatures(m_ControlElement__entryFlow);
        m_ControlElement->addEReferences(m_ControlElement__entryFlow);
        m_ControlElement->addEAllReferences(m_ControlElement__entryFlow);
    }
    {
        m_ControlElement__codeElement = ecoreFactory->createEReference();
        m_ControlElement__codeElement->setName("codeElement");
        m_ControlElement->addEStructuralFeatures(m_ControlElement__codeElement);
        m_ControlElement->addEAllStructuralFeatures(m_ControlElement__codeElement);
        m_ControlElement->addEReferences(m_ControlElement__codeElement);
        m_ControlElement->addEAllReferences(m_ControlElement__codeElement);
    }
    {
        m_MethodUnit__kind = ecoreFactory->createEAttribute();
        m_MethodUnit__kind->setName("kind");
        m_MethodUnit->addEStructuralFeatures(m_MethodUnit__kind);
        m_MethodUnit->addEAllStructuralFeatures(m_MethodUnit__kind);
        m_MethodUnit->addEAttributes(m_MethodUnit__kind);
        m_MethodUnit->addEAllAttributes(m_MethodUnit__kind);
    }
    {
        m_MethodUnit__export = ecoreFactory->createEAttribute();
        m_MethodUnit__export->setName("export");
        m_MethodUnit->addEStructuralFeatures(m_MethodUnit__export);
        m_MethodUnit->addEAllStructuralFeatures(m_MethodUnit__export);
        m_MethodUnit->addEAttributes(m_MethodUnit__export);
        m_MethodUnit->addEAllAttributes(m_MethodUnit__export);
    }
    {
        m_Module__codeElement = ecoreFactory->createEReference();
        m_Module__codeElement->setName("codeElement");
        m_Module->addEStructuralFeatures(m_Module__codeElement);
        m_Module->addEAllStructuralFeatures(m_Module__codeElement);
        m_Module->addEReferences(m_Module__codeElement);
        m_Module->addEAllReferences(m_Module__codeElement);
    }
    {
        m_CallableUnit__kind = ecoreFactory->createEAttribute();
        m_CallableUnit__kind->setName("kind");
        m_CallableUnit->addEStructuralFeatures(m_CallableUnit__kind);
        m_CallableUnit->addEAllStructuralFeatures(m_CallableUnit__kind);
        m_CallableUnit->addEAttributes(m_CallableUnit__kind);
        m_CallableUnit->addEAllAttributes(m_CallableUnit__kind);
    }
    {
        m_TemplateUnit__codeElement = ecoreFactory->createEReference();
        m_TemplateUnit__codeElement->setName("codeElement");
        m_TemplateUnit->addEStructuralFeatures(m_TemplateUnit__codeElement);
        m_TemplateUnit->addEAllStructuralFeatures(m_TemplateUnit__codeElement);
        m_TemplateUnit->addEReferences(m_TemplateUnit__codeElement);
        m_TemplateUnit->addEAllReferences(m_TemplateUnit__codeElement);
    }
    {
        m_InstanceOf__to = ecoreFactory->createEReference();
        m_InstanceOf__to->setName("to");
        m_InstanceOf->addEStructuralFeatures(m_InstanceOf__to);
        m_InstanceOf->addEAllStructuralFeatures(m_InstanceOf__to);
        m_InstanceOf->addEReferences(m_InstanceOf__to);
        m_InstanceOf->addEAllReferences(m_InstanceOf__to);
    }
    {
        m_InstanceOf__from = ecoreFactory->createEReference();
        m_InstanceOf__from->setName("from");
        m_InstanceOf->addEStructuralFeatures(m_InstanceOf__from);
        m_InstanceOf->addEAllStructuralFeatures(m_InstanceOf__from);
        m_InstanceOf->addEReferences(m_InstanceOf__from);
        m_InstanceOf->addEAllReferences(m_InstanceOf__from);
    }
    {
        m_CodeModel__codeElement = ecoreFactory->createEReference();
        m_CodeModel__codeElement->setName("codeElement");
        m_CodeModel->addEStructuralFeatures(m_CodeModel__codeElement);
        m_CodeModel->addEAllStructuralFeatures(m_CodeModel__codeElement);
        m_CodeModel->addEReferences(m_CodeModel__codeElement);
        m_CodeModel->addEAllReferences(m_CodeModel__codeElement);
    }
    {
        m_DerivedType__itemUnit = ecoreFactory->createEReference();
        m_DerivedType__itemUnit->setName("itemUnit");
        m_DerivedType->addEStructuralFeatures(m_DerivedType__itemUnit);
        m_DerivedType->addEAllStructuralFeatures(m_DerivedType__itemUnit);
        m_DerivedType->addEReferences(m_DerivedType__itemUnit);
        m_DerivedType->addEAllReferences(m_DerivedType__itemUnit);
    }
    {
        m_ArrayType__size = ecoreFactory->createEAttribute();
        m_ArrayType__size->setName("size");
        m_ArrayType->addEStructuralFeatures(m_ArrayType__size);
        m_ArrayType->addEAllStructuralFeatures(m_ArrayType__size);
        m_ArrayType->addEAttributes(m_ArrayType__size);
        m_ArrayType->addEAllAttributes(m_ArrayType__size);
    }
    {
        m_ArrayType__indexUnit = ecoreFactory->createEReference();
        m_ArrayType__indexUnit->setName("indexUnit");
        m_ArrayType->addEStructuralFeatures(m_ArrayType__indexUnit);
        m_ArrayType->addEAllStructuralFeatures(m_ArrayType__indexUnit);
        m_ArrayType->addEReferences(m_ArrayType__indexUnit);
        m_ArrayType->addEAllReferences(m_ArrayType__indexUnit);
    }
    {
        m_ClassUnit__isAbstract = ecoreFactory->createEAttribute();
        m_ClassUnit__isAbstract->setName("isAbstract");
        m_ClassUnit->addEStructuralFeatures(m_ClassUnit__isAbstract);
        m_ClassUnit->addEAllStructuralFeatures(m_ClassUnit__isAbstract);
        m_ClassUnit->addEAttributes(m_ClassUnit__isAbstract);
        m_ClassUnit->addEAllAttributes(m_ClassUnit__isAbstract);
    }
    {
        m_ClassUnit__codeElement = ecoreFactory->createEReference();
        m_ClassUnit__codeElement->setName("codeElement");
        m_ClassUnit->addEStructuralFeatures(m_ClassUnit__codeElement);
        m_ClassUnit->addEAllStructuralFeatures(m_ClassUnit__codeElement);
        m_ClassUnit->addEReferences(m_ClassUnit__codeElement);
        m_ClassUnit->addEAllReferences(m_ClassUnit__codeElement);
    }
    {
        m_CompositeType__itemUnit = ecoreFactory->createEReference();
        m_CompositeType__itemUnit->setName("itemUnit");
        m_CompositeType->addEStructuralFeatures(m_CompositeType__itemUnit);
        m_CompositeType->addEAllStructuralFeatures(m_CompositeType__itemUnit);
        m_CompositeType->addEReferences(m_CompositeType__itemUnit);
        m_CompositeType->addEAllReferences(m_CompositeType__itemUnit);
    }
    {
        m_EnumeratedType__value = ecoreFactory->createEReference();
        m_EnumeratedType__value->setName("value");
        m_EnumeratedType->addEStructuralFeatures(m_EnumeratedType__value);
        m_EnumeratedType->addEAllStructuralFeatures(m_EnumeratedType__value);
        m_EnumeratedType->addEReferences(m_EnumeratedType__value);
        m_EnumeratedType->addEAllReferences(m_EnumeratedType__value);
    }
    {
        m_Extends__to = ecoreFactory->createEReference();
        m_Extends__to->setName("to");
        m_Extends->addEStructuralFeatures(m_Extends__to);
        m_Extends->addEAllStructuralFeatures(m_Extends__to);
        m_Extends->addEReferences(m_Extends__to);
        m_Extends->addEAllReferences(m_Extends__to);
    }
    {
        m_Extends__from = ecoreFactory->createEReference();
        m_Extends__from->setName("from");
        m_Extends->addEStructuralFeatures(m_Extends__from);
        m_Extends->addEAllStructuralFeatures(m_Extends__from);
        m_Extends->addEReferences(m_Extends__from);
        m_Extends->addEAllReferences(m_Extends__from);
    }
    {
        m_HasType__to = ecoreFactory->createEReference();
        m_HasType__to->setName("to");
        m_HasType->addEStructuralFeatures(m_HasType__to);
        m_HasType->addEAllStructuralFeatures(m_HasType__to);
        m_HasType->addEReferences(m_HasType__to);
        m_HasType->addEAllReferences(m_HasType__to);
    }
    {
        m_HasType__from = ecoreFactory->createEReference();
        m_HasType__from->setName("from");
        m_HasType->addEStructuralFeatures(m_HasType__from);
        m_HasType->addEAllStructuralFeatures(m_HasType__from);
        m_HasType->addEReferences(m_HasType__from);
        m_HasType->addEAllReferences(m_HasType__from);
    }
    {
        m_ImplementationOf__to = ecoreFactory->createEReference();
        m_ImplementationOf__to->setName("to");
        m_ImplementationOf->addEStructuralFeatures(m_ImplementationOf__to);
        m_ImplementationOf->addEAllStructuralFeatures(m_ImplementationOf__to);
        m_ImplementationOf->addEReferences(m_ImplementationOf__to);
        m_ImplementationOf->addEAllReferences(m_ImplementationOf__to);
    }
    {
        m_ImplementationOf__from = ecoreFactory->createEReference();
        m_ImplementationOf__from->setName("from");
        m_ImplementationOf->addEStructuralFeatures(m_ImplementationOf__from);
        m_ImplementationOf->addEAllStructuralFeatures(m_ImplementationOf__from);
        m_ImplementationOf->addEReferences(m_ImplementationOf__from);
        m_ImplementationOf->addEAllReferences(m_ImplementationOf__from);
    }
    {
        m_Implements__to = ecoreFactory->createEReference();
        m_Implements__to->setName("to");
        m_Implements->addEStructuralFeatures(m_Implements__to);
        m_Implements->addEAllStructuralFeatures(m_Implements__to);
        m_Implements->addEReferences(m_Implements__to);
        m_Implements->addEAllReferences(m_Implements__to);
    }
    {
        m_Implements__from = ecoreFactory->createEReference();
        m_Implements__from->setName("from");
        m_Implements->addEStructuralFeatures(m_Implements__from);
        m_Implements->addEAllStructuralFeatures(m_Implements__from);
        m_Implements->addEReferences(m_Implements__from);
        m_Implements->addEAllReferences(m_Implements__from);
    }
    {
        m_InterfaceUnit__codeElement = ecoreFactory->createEReference();
        m_InterfaceUnit__codeElement->setName("codeElement");
        m_InterfaceUnit->addEStructuralFeatures(m_InterfaceUnit__codeElement);
        m_InterfaceUnit->addEAllStructuralFeatures(m_InterfaceUnit__codeElement);
        m_InterfaceUnit->addEReferences(m_InterfaceUnit__codeElement);
        m_InterfaceUnit->addEAllReferences(m_InterfaceUnit__codeElement);
    }
    {
        m_DefinedType__type = ecoreFactory->createEReference();
        m_DefinedType__type->setName("type");
        m_DefinedType->addEStructuralFeatures(m_DefinedType__type);
        m_DefinedType->addEAllStructuralFeatures(m_DefinedType__type);
        m_DefinedType->addEReferences(m_DefinedType__type);
        m_DefinedType->addEAllReferences(m_DefinedType__type);
    }
    {
        m_DefinedType__codeElement = ecoreFactory->createEReference();
        m_DefinedType__codeElement->setName("codeElement");
        m_DefinedType->addEStructuralFeatures(m_DefinedType__codeElement);
        m_DefinedType->addEAllStructuralFeatures(m_DefinedType__codeElement);
        m_DefinedType->addEReferences(m_DefinedType__codeElement);
        m_DefinedType->addEAllReferences(m_DefinedType__codeElement);
    }
    {
        m_RangeType__lower = ecoreFactory->createEAttribute();
        m_RangeType__lower->setName("lower");
        m_RangeType->addEStructuralFeatures(m_RangeType__lower);
        m_RangeType->addEAllStructuralFeatures(m_RangeType__lower);
        m_RangeType->addEAttributes(m_RangeType__lower);
        m_RangeType->addEAllAttributes(m_RangeType__lower);
    }
    {
        m_RangeType__upper = ecoreFactory->createEAttribute();
        m_RangeType__upper->setName("upper");
        m_RangeType->addEStructuralFeatures(m_RangeType__upper);
        m_RangeType->addEAllStructuralFeatures(m_RangeType__upper);
        m_RangeType->addEAttributes(m_RangeType__upper);
        m_RangeType->addEAllAttributes(m_RangeType__upper);
    }
    {
        m_Signature__parameterUnit = ecoreFactory->createEReference();
        m_Signature__parameterUnit->setName("parameterUnit");
        m_Signature->addEStructuralFeatures(m_Signature__parameterUnit);
        m_Signature->addEAllStructuralFeatures(m_Signature__parameterUnit);
        m_Signature->addEReferences(m_Signature__parameterUnit);
        m_Signature->addEAllReferences(m_Signature__parameterUnit);
    }
    {
        m_DataElement__type = ecoreFactory->createEReference();
        m_DataElement__type->setName("type");
        m_DataElement->addEStructuralFeatures(m_DataElement__type);
        m_DataElement->addEAllStructuralFeatures(m_DataElement__type);
        m_DataElement->addEReferences(m_DataElement__type);
        m_DataElement->addEAllReferences(m_DataElement__type);
    }
    {
        m_DataElement__ext = ecoreFactory->createEAttribute();
        m_DataElement__ext->setName("ext");
        m_DataElement->addEStructuralFeatures(m_DataElement__ext);
        m_DataElement->addEAllStructuralFeatures(m_DataElement__ext);
        m_DataElement->addEAttributes(m_DataElement__ext);
        m_DataElement->addEAllAttributes(m_DataElement__ext);
    }
    {
        m_DataElement__size = ecoreFactory->createEAttribute();
        m_DataElement__size->setName("size");
        m_DataElement->addEStructuralFeatures(m_DataElement__size);
        m_DataElement->addEAllStructuralFeatures(m_DataElement__size);
        m_DataElement->addEAttributes(m_DataElement__size);
        m_DataElement->addEAllAttributes(m_DataElement__size);
    }
    {
        m_DataElement__codeElement = ecoreFactory->createEReference();
        m_DataElement__codeElement->setName("codeElement");
        m_DataElement->addEStructuralFeatures(m_DataElement__codeElement);
        m_DataElement->addEAllStructuralFeatures(m_DataElement__codeElement);
        m_DataElement->addEReferences(m_DataElement__codeElement);
        m_DataElement->addEAllReferences(m_DataElement__codeElement);
    }
    {
        m_NamespaceUnit__groupedCode = ecoreFactory->createEReference();
        m_NamespaceUnit__groupedCode->setName("groupedCode");
        m_NamespaceUnit->addEStructuralFeatures(m_NamespaceUnit__groupedCode);
        m_NamespaceUnit->addEAllStructuralFeatures(m_NamespaceUnit__groupedCode);
        m_NamespaceUnit->addEReferences(m_NamespaceUnit__groupedCode);
        m_NamespaceUnit->addEAllReferences(m_NamespaceUnit__groupedCode);
    }
    {
        m_VisibleIn__to = ecoreFactory->createEReference();
        m_VisibleIn__to->setName("to");
        m_VisibleIn->addEStructuralFeatures(m_VisibleIn__to);
        m_VisibleIn->addEAllStructuralFeatures(m_VisibleIn__to);
        m_VisibleIn->addEReferences(m_VisibleIn__to);
        m_VisibleIn->addEAllReferences(m_VisibleIn__to);
    }
    {
        m_VisibleIn__from = ecoreFactory->createEReference();
        m_VisibleIn__from->setName("from");
        m_VisibleIn->addEStructuralFeatures(m_VisibleIn__from);
        m_VisibleIn->addEAllStructuralFeatures(m_VisibleIn__from);
        m_VisibleIn->addEReferences(m_VisibleIn__from);
        m_VisibleIn->addEAllReferences(m_VisibleIn__from);
    }
    {
        m_CommentUnit__text = ecoreFactory->createEAttribute();
        m_CommentUnit__text->setName("text");
        m_CommentUnit->addEStructuralFeatures(m_CommentUnit__text);
        m_CommentUnit->addEAllStructuralFeatures(m_CommentUnit__text);
        m_CommentUnit->addEAttributes(m_CommentUnit__text);
        m_CommentUnit->addEAllAttributes(m_CommentUnit__text);
    }
    {
        m_ValueList__valueElement = ecoreFactory->createEReference();
        m_ValueList__valueElement->setName("valueElement");
        m_ValueList->addEStructuralFeatures(m_ValueList__valueElement);
        m_ValueList->addEAllStructuralFeatures(m_ValueList__valueElement);
        m_ValueList->addEReferences(m_ValueList__valueElement);
        m_ValueList->addEAllReferences(m_ValueList__valueElement);
    }
    {
        m_StorableUnit__kind = ecoreFactory->createEAttribute();
        m_StorableUnit__kind->setName("kind");
        m_StorableUnit->addEStructuralFeatures(m_StorableUnit__kind);
        m_StorableUnit->addEAllStructuralFeatures(m_StorableUnit__kind);
        m_StorableUnit->addEAttributes(m_StorableUnit__kind);
        m_StorableUnit->addEAllAttributes(m_StorableUnit__kind);
    }
    {
        m_MemberUnit__export = ecoreFactory->createEAttribute();
        m_MemberUnit__export->setName("export");
        m_MemberUnit->addEStructuralFeatures(m_MemberUnit__export);
        m_MemberUnit->addEAllStructuralFeatures(m_MemberUnit__export);
        m_MemberUnit->addEAttributes(m_MemberUnit__export);
        m_MemberUnit->addEAllAttributes(m_MemberUnit__export);
    }
    {
        m_ParameterUnit__kind = ecoreFactory->createEAttribute();
        m_ParameterUnit__kind->setName("kind");
        m_ParameterUnit->addEStructuralFeatures(m_ParameterUnit__kind);
        m_ParameterUnit->addEAllStructuralFeatures(m_ParameterUnit__kind);
        m_ParameterUnit->addEAttributes(m_ParameterUnit__kind);
        m_ParameterUnit->addEAllAttributes(m_ParameterUnit__kind);
    }
    {
        m_ParameterUnit__pos = ecoreFactory->createEAttribute();
        m_ParameterUnit__pos->setName("pos");
        m_ParameterUnit->addEStructuralFeatures(m_ParameterUnit__pos);
        m_ParameterUnit->addEAllStructuralFeatures(m_ParameterUnit__pos);
        m_ParameterUnit->addEAttributes(m_ParameterUnit__pos);
        m_ParameterUnit->addEAllAttributes(m_ParameterUnit__pos);
    }
    {
        m_SequenceType__size = ecoreFactory->createEAttribute();
        m_SequenceType__size->setName("size");
        m_SequenceType->addEStructuralFeatures(m_SequenceType__size);
        m_SequenceType->addEAllStructuralFeatures(m_SequenceType__size);
        m_SequenceType->addEAttributes(m_SequenceType__size);
        m_SequenceType->addEAllAttributes(m_SequenceType__size);
    }
    {
        m_BagType__size = ecoreFactory->createEAttribute();
        m_BagType__size->setName("size");
        m_BagType->addEStructuralFeatures(m_BagType__size);
        m_BagType->addEAllStructuralFeatures(m_BagType__size);
        m_BagType->addEAttributes(m_BagType__size);
        m_BagType->addEAllAttributes(m_BagType__size);
    }
    {
        m_SetType__size = ecoreFactory->createEAttribute();
        m_SetType__size->setName("size");
        m_SetType->addEStructuralFeatures(m_SetType__size);
        m_SetType->addEAllStructuralFeatures(m_SetType__size);
        m_SetType->addEAttributes(m_SetType__size);
        m_SetType->addEAllAttributes(m_SetType__size);
    }
    {
        m_CodeRelationship__to = ecoreFactory->createEReference();
        m_CodeRelationship__to->setName("to");
        m_CodeRelationship->addEStructuralFeatures(m_CodeRelationship__to);
        m_CodeRelationship->addEAllStructuralFeatures(m_CodeRelationship__to);
        m_CodeRelationship->addEReferences(m_CodeRelationship__to);
        m_CodeRelationship->addEAllReferences(m_CodeRelationship__to);
    }
    {
        m_CodeRelationship__from = ecoreFactory->createEReference();
        m_CodeRelationship__from->setName("from");
        m_CodeRelationship->addEStructuralFeatures(m_CodeRelationship__from);
        m_CodeRelationship->addEAllStructuralFeatures(m_CodeRelationship__from);
        m_CodeRelationship->addEReferences(m_CodeRelationship__from);
        m_CodeRelationship->addEAllReferences(m_CodeRelationship__from);
    }
    {
        m_Imports__to = ecoreFactory->createEReference();
        m_Imports__to->setName("to");
        m_Imports->addEStructuralFeatures(m_Imports__to);
        m_Imports->addEAllStructuralFeatures(m_Imports__to);
        m_Imports->addEReferences(m_Imports__to);
        m_Imports->addEAllReferences(m_Imports__to);
    }
    {
        m_Imports__from = ecoreFactory->createEReference();
        m_Imports__from->setName("from");
        m_Imports->addEStructuralFeatures(m_Imports__from);
        m_Imports->addEAllStructuralFeatures(m_Imports__from);
        m_Imports->addEReferences(m_Imports__from);
        m_Imports->addEAllReferences(m_Imports__from);
    }
    {
        m_ParameterTo__to = ecoreFactory->createEReference();
        m_ParameterTo__to->setName("to");
        m_ParameterTo->addEStructuralFeatures(m_ParameterTo__to);
        m_ParameterTo->addEAllStructuralFeatures(m_ParameterTo__to);
        m_ParameterTo->addEReferences(m_ParameterTo__to);
        m_ParameterTo->addEAllReferences(m_ParameterTo__to);
    }
    {
        m_ParameterTo__from = ecoreFactory->createEReference();
        m_ParameterTo__from->setName("from");
        m_ParameterTo->addEStructuralFeatures(m_ParameterTo__from);
        m_ParameterTo->addEAllStructuralFeatures(m_ParameterTo__from);
        m_ParameterTo->addEReferences(m_ParameterTo__from);
        m_ParameterTo->addEAllReferences(m_ParameterTo__from);
    }
    {
        m_PreprocessorDirective__codeElement = ecoreFactory->createEReference();
        m_PreprocessorDirective__codeElement->setName("codeElement");
        m_PreprocessorDirective->addEStructuralFeatures(m_PreprocessorDirective__codeElement);
        m_PreprocessorDirective->addEAllStructuralFeatures(m_PreprocessorDirective__codeElement);
        m_PreprocessorDirective->addEReferences(m_PreprocessorDirective__codeElement);
        m_PreprocessorDirective->addEAllReferences(m_PreprocessorDirective__codeElement);
    }
    {
        m_MacroUnit__kind = ecoreFactory->createEAttribute();
        m_MacroUnit__kind->setName("kind");
        m_MacroUnit->addEStructuralFeatures(m_MacroUnit__kind);
        m_MacroUnit->addEAllStructuralFeatures(m_MacroUnit__kind);
        m_MacroUnit->addEAttributes(m_MacroUnit__kind);
        m_MacroUnit->addEAllAttributes(m_MacroUnit__kind);
    }
    {
        m_VariantTo__to = ecoreFactory->createEReference();
        m_VariantTo__to->setName("to");
        m_VariantTo->addEStructuralFeatures(m_VariantTo__to);
        m_VariantTo->addEAllStructuralFeatures(m_VariantTo__to);
        m_VariantTo->addEReferences(m_VariantTo__to);
        m_VariantTo->addEAllReferences(m_VariantTo__to);
    }
    {
        m_VariantTo__from = ecoreFactory->createEReference();
        m_VariantTo__from->setName("from");
        m_VariantTo->addEStructuralFeatures(m_VariantTo__from);
        m_VariantTo->addEAllStructuralFeatures(m_VariantTo__from);
        m_VariantTo->addEReferences(m_VariantTo__from);
        m_VariantTo->addEAllReferences(m_VariantTo__from);
    }
    {
        m_Expands__to = ecoreFactory->createEReference();
        m_Expands__to->setName("to");
        m_Expands->addEStructuralFeatures(m_Expands__to);
        m_Expands->addEAllStructuralFeatures(m_Expands__to);
        m_Expands->addEReferences(m_Expands__to);
        m_Expands->addEAllReferences(m_Expands__to);
    }
    {
        m_Expands__from = ecoreFactory->createEReference();
        m_Expands__from->setName("from");
        m_Expands->addEStructuralFeatures(m_Expands__from);
        m_Expands->addEAllStructuralFeatures(m_Expands__from);
        m_Expands->addEReferences(m_Expands__from);
        m_Expands->addEAllReferences(m_Expands__from);
    }
    {
        m_Redefines__to = ecoreFactory->createEReference();
        m_Redefines__to->setName("to");
        m_Redefines->addEStructuralFeatures(m_Redefines__to);
        m_Redefines->addEAllStructuralFeatures(m_Redefines__to);
        m_Redefines->addEReferences(m_Redefines__to);
        m_Redefines->addEAllReferences(m_Redefines__to);
    }
    {
        m_Redefines__from = ecoreFactory->createEReference();
        m_Redefines__from->setName("from");
        m_Redefines->addEStructuralFeatures(m_Redefines__from);
        m_Redefines->addEAllStructuralFeatures(m_Redefines__from);
        m_Redefines->addEReferences(m_Redefines__from);
        m_Redefines->addEAllReferences(m_Redefines__from);
    }
    {
        m_GeneratedFrom__to = ecoreFactory->createEReference();
        m_GeneratedFrom__to->setName("to");
        m_GeneratedFrom->addEStructuralFeatures(m_GeneratedFrom__to);
        m_GeneratedFrom->addEAllStructuralFeatures(m_GeneratedFrom__to);
        m_GeneratedFrom->addEReferences(m_GeneratedFrom__to);
        m_GeneratedFrom->addEAllReferences(m_GeneratedFrom__to);
    }
    {
        m_GeneratedFrom__from = ecoreFactory->createEReference();
        m_GeneratedFrom__from->setName("from");
        m_GeneratedFrom->addEStructuralFeatures(m_GeneratedFrom__from);
        m_GeneratedFrom->addEAllStructuralFeatures(m_GeneratedFrom__from);
        m_GeneratedFrom->addEReferences(m_GeneratedFrom__from);
        m_GeneratedFrom->addEAllReferences(m_GeneratedFrom__from);
    }
    {
        m_Includes__to = ecoreFactory->createEReference();
        m_Includes__to->setName("to");
        m_Includes->addEStructuralFeatures(m_Includes__to);
        m_Includes->addEAllStructuralFeatures(m_Includes__to);
        m_Includes->addEReferences(m_Includes__to);
        m_Includes->addEAllReferences(m_Includes__to);
    }
    {
        m_Includes__from = ecoreFactory->createEReference();
        m_Includes__from->setName("from");
        m_Includes->addEStructuralFeatures(m_Includes__from);
        m_Includes->addEAllStructuralFeatures(m_Includes__from);
        m_Includes->addEReferences(m_Includes__from);
        m_Includes->addEAllReferences(m_Includes__from);
    }
    {
        m_HasValue__to = ecoreFactory->createEReference();
        m_HasValue__to->setName("to");
        m_HasValue->addEStructuralFeatures(m_HasValue__to);
        m_HasValue->addEAllStructuralFeatures(m_HasValue__to);
        m_HasValue->addEReferences(m_HasValue__to);
        m_HasValue->addEAllReferences(m_HasValue__to);
    }
    {
        m_HasValue__from = ecoreFactory->createEReference();
        m_HasValue__from->setName("from");
        m_HasValue->addEStructuralFeatures(m_HasValue__from);
        m_HasValue->addEAllStructuralFeatures(m_HasValue__from);
        m_HasValue->addEReferences(m_HasValue__from);
        m_HasValue->addEAllReferences(m_HasValue__from);
    }
	
	m_AbstractCodeElement->addESuperTypes(m_KDMEntity);
	m_AbstractCodeElement->addAllEAllOperations(m_KDMEntity->getEOperations());
	m_AbstractCodeElement->addAllEAllReferences(m_KDMEntity->getEReferences());
	m_AbstractCodeElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
	m_AbstractCodeElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
	m_CodeItem->addESuperTypes(m_AbstractCodeElement);
	m_CodeItem->addAllEAllOperations(m_AbstractCodeElement->getEOperations());
	m_CodeItem->addAllEAllReferences(m_AbstractCodeElement->getEReferences());
	m_CodeItem->addAllEAllAttributes(m_AbstractCodeElement->getEAttributes());
	m_CodeItem->addAllEAllStructuralFeatures(m_AbstractCodeElement->getEStructuralFeatures());
	m_ComputationalObject->addESuperTypes(m_CodeItem);
	m_ComputationalObject->addAllEAllOperations(m_CodeItem->getEOperations());
	m_ComputationalObject->addAllEAllReferences(m_CodeItem->getEReferences());
	m_ComputationalObject->addAllEAllAttributes(m_CodeItem->getEAttributes());
	m_ComputationalObject->addAllEAllStructuralFeatures(m_CodeItem->getEStructuralFeatures());
	m_ControlElement->addESuperTypes(m_ComputationalObject);
	m_ControlElement->addAllEAllOperations(m_ComputationalObject->getEOperations());
	m_ControlElement->addAllEAllReferences(m_ComputationalObject->getEReferences());
	m_ControlElement->addAllEAllAttributes(m_ComputationalObject->getEAttributes());
	m_ControlElement->addAllEAllStructuralFeatures(m_ComputationalObject->getEStructuralFeatures());
	m_MethodUnit->addESuperTypes(m_ControlElement);
	m_MethodUnit->addAllEAllOperations(m_ControlElement->getEOperations());
	m_MethodUnit->addAllEAllReferences(m_ControlElement->getEReferences());
	m_MethodUnit->addAllEAllAttributes(m_ControlElement->getEAttributes());
	m_MethodUnit->addAllEAllStructuralFeatures(m_ControlElement->getEStructuralFeatures());
	m_Module->addESuperTypes(m_CodeItem);
	m_Module->addAllEAllOperations(m_CodeItem->getEOperations());
	m_Module->addAllEAllReferences(m_CodeItem->getEReferences());
	m_Module->addAllEAllAttributes(m_CodeItem->getEAttributes());
	m_Module->addAllEAllStructuralFeatures(m_CodeItem->getEStructuralFeatures());
	m_CodeAssembly->addESuperTypes(m_Module);
	m_CodeAssembly->addAllEAllOperations(m_Module->getEOperations());
	m_CodeAssembly->addAllEAllReferences(m_Module->getEReferences());
	m_CodeAssembly->addAllEAllAttributes(m_Module->getEAttributes());
	m_CodeAssembly->addAllEAllStructuralFeatures(m_Module->getEStructuralFeatures());
	m_CallableUnit->addESuperTypes(m_ControlElement);
	m_CallableUnit->addAllEAllOperations(m_ControlElement->getEOperations());
	m_CallableUnit->addAllEAllReferences(m_ControlElement->getEReferences());
	m_CallableUnit->addAllEAllAttributes(m_ControlElement->getEAttributes());
	m_CallableUnit->addAllEAllStructuralFeatures(m_ControlElement->getEStructuralFeatures());
	m_Datatype->addESuperTypes(m_CodeItem);
	m_Datatype->addAllEAllOperations(m_CodeItem->getEOperations());
	m_Datatype->addAllEAllReferences(m_CodeItem->getEReferences());
	m_Datatype->addAllEAllAttributes(m_CodeItem->getEAttributes());
	m_Datatype->addAllEAllStructuralFeatures(m_CodeItem->getEStructuralFeatures());
	m_TemplateUnit->addESuperTypes(m_Datatype);
	m_TemplateUnit->addAllEAllOperations(m_Datatype->getEOperations());
	m_TemplateUnit->addAllEAllReferences(m_Datatype->getEReferences());
	m_TemplateUnit->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_TemplateUnit->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_TemplateParameter->addESuperTypes(m_Datatype);
	m_TemplateParameter->addAllEAllOperations(m_Datatype->getEOperations());
	m_TemplateParameter->addAllEAllReferences(m_Datatype->getEReferences());
	m_TemplateParameter->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_TemplateParameter->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_AbstractCodeRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractCodeRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractCodeRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractCodeRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractCodeRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_InstanceOf->addESuperTypes(m_AbstractCodeRelationship);
	m_InstanceOf->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_InstanceOf->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_InstanceOf->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_InstanceOf->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_CompilationUnit->addESuperTypes(m_Module);
	m_CompilationUnit->addAllEAllOperations(m_Module->getEOperations());
	m_CompilationUnit->addAllEAllReferences(m_Module->getEReferences());
	m_CompilationUnit->addAllEAllAttributes(m_Module->getEAttributes());
	m_CompilationUnit->addAllEAllStructuralFeatures(m_Module->getEStructuralFeatures());
	m_CodeModel->addESuperTypes(m_KDMModel);
	m_CodeModel->addAllEAllOperations(m_KDMModel->getEOperations());
	m_CodeModel->addAllEAllReferences(m_KDMModel->getEReferences());
	m_CodeModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
	m_CodeModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
	m_DerivedType->addESuperTypes(m_Datatype);
	m_DerivedType->addAllEAllOperations(m_Datatype->getEOperations());
	m_DerivedType->addAllEAllReferences(m_Datatype->getEReferences());
	m_DerivedType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_DerivedType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_ArrayType->addESuperTypes(m_DerivedType);
	m_ArrayType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_ArrayType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_ArrayType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_ArrayType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_PrimitiveType->addESuperTypes(m_Datatype);
	m_PrimitiveType->addAllEAllOperations(m_Datatype->getEOperations());
	m_PrimitiveType->addAllEAllReferences(m_Datatype->getEReferences());
	m_PrimitiveType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_PrimitiveType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_BooleanType->addESuperTypes(m_PrimitiveType);
	m_BooleanType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_BooleanType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_BooleanType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_BooleanType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_CharType->addESuperTypes(m_PrimitiveType);
	m_CharType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_CharType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_CharType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_CharType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_ClassUnit->addESuperTypes(m_Datatype);
	m_ClassUnit->addAllEAllOperations(m_Datatype->getEOperations());
	m_ClassUnit->addAllEAllReferences(m_Datatype->getEReferences());
	m_ClassUnit->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_ClassUnit->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_CompositeType->addESuperTypes(m_Datatype);
	m_CompositeType->addAllEAllOperations(m_Datatype->getEOperations());
	m_CompositeType->addAllEAllReferences(m_Datatype->getEReferences());
	m_CompositeType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_CompositeType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_RecordType->addESuperTypes(m_CompositeType);
	m_RecordType->addAllEAllOperations(m_CompositeType->getEOperations());
	m_RecordType->addAllEAllReferences(m_CompositeType->getEReferences());
	m_RecordType->addAllEAllAttributes(m_CompositeType->getEAttributes());
	m_RecordType->addAllEAllStructuralFeatures(m_CompositeType->getEStructuralFeatures());
	m_EnumeratedType->addESuperTypes(m_Datatype);
	m_EnumeratedType->addAllEAllOperations(m_Datatype->getEOperations());
	m_EnumeratedType->addAllEAllReferences(m_Datatype->getEReferences());
	m_EnumeratedType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_EnumeratedType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_Extends->addESuperTypes(m_AbstractCodeRelationship);
	m_Extends->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Extends->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Extends->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Extends->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_ScaledType->addESuperTypes(m_PrimitiveType);
	m_ScaledType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_ScaledType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_ScaledType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_ScaledType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_FloatType->addESuperTypes(m_PrimitiveType);
	m_FloatType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_FloatType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_FloatType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_FloatType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_HasType->addESuperTypes(m_AbstractCodeRelationship);
	m_HasType->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_HasType->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_HasType->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_HasType->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_ImplementationOf->addESuperTypes(m_AbstractCodeRelationship);
	m_ImplementationOf->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_ImplementationOf->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_ImplementationOf->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_ImplementationOf->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_Implements->addESuperTypes(m_AbstractCodeRelationship);
	m_Implements->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Implements->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Implements->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Implements->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_IntegerType->addESuperTypes(m_PrimitiveType);
	m_IntegerType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_IntegerType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_IntegerType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_IntegerType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_InterfaceUnit->addESuperTypes(m_Datatype);
	m_InterfaceUnit->addAllEAllOperations(m_Datatype->getEOperations());
	m_InterfaceUnit->addAllEAllReferences(m_Datatype->getEReferences());
	m_InterfaceUnit->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_InterfaceUnit->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_PointerType->addESuperTypes(m_DerivedType);
	m_PointerType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_PointerType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_PointerType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_PointerType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_DefinedType->addESuperTypes(m_Datatype);
	m_DefinedType->addAllEAllOperations(m_Datatype->getEOperations());
	m_DefinedType->addAllEAllReferences(m_Datatype->getEReferences());
	m_DefinedType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_DefinedType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_TypeUnit->addESuperTypes(m_DefinedType);
	m_TypeUnit->addAllEAllOperations(m_DefinedType->getEOperations());
	m_TypeUnit->addAllEAllReferences(m_DefinedType->getEReferences());
	m_TypeUnit->addAllEAllAttributes(m_DefinedType->getEAttributes());
	m_TypeUnit->addAllEAllStructuralFeatures(m_DefinedType->getEStructuralFeatures());
	m_RangeType->addESuperTypes(m_DerivedType);
	m_RangeType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_RangeType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_RangeType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_RangeType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_Signature->addESuperTypes(m_Datatype);
	m_Signature->addAllEAllOperations(m_Datatype->getEOperations());
	m_Signature->addAllEAllReferences(m_Datatype->getEReferences());
	m_Signature->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_Signature->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_DataElement->addESuperTypes(m_ComputationalObject);
	m_DataElement->addAllEAllOperations(m_ComputationalObject->getEOperations());
	m_DataElement->addAllEAllReferences(m_ComputationalObject->getEReferences());
	m_DataElement->addAllEAllAttributes(m_ComputationalObject->getEAttributes());
	m_DataElement->addAllEAllStructuralFeatures(m_ComputationalObject->getEStructuralFeatures());
	m_StringType->addESuperTypes(m_PrimitiveType);
	m_StringType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_StringType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_StringType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_StringType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_ChoiceType->addESuperTypes(m_CompositeType);
	m_ChoiceType->addAllEAllOperations(m_CompositeType->getEOperations());
	m_ChoiceType->addAllEAllReferences(m_CompositeType->getEReferences());
	m_ChoiceType->addAllEAllAttributes(m_CompositeType->getEAttributes());
	m_ChoiceType->addAllEAllStructuralFeatures(m_CompositeType->getEStructuralFeatures());
	m_NamespaceUnit->addESuperTypes(m_CodeItem);
	m_NamespaceUnit->addAllEAllOperations(m_CodeItem->getEOperations());
	m_NamespaceUnit->addAllEAllReferences(m_CodeItem->getEReferences());
	m_NamespaceUnit->addAllEAllAttributes(m_CodeItem->getEAttributes());
	m_NamespaceUnit->addAllEAllStructuralFeatures(m_CodeItem->getEStructuralFeatures());
	m_VisibleIn->addESuperTypes(m_AbstractCodeRelationship);
	m_VisibleIn->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_VisibleIn->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_VisibleIn->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_VisibleIn->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_CommentUnit->addESuperTypes(m_ModelElement);
	m_CommentUnit->addAllEAllOperations(m_ModelElement->getEOperations());
	m_CommentUnit->addAllEAllReferences(m_ModelElement->getEReferences());
	m_CommentUnit->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_CommentUnit->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_SharedUnit->addESuperTypes(m_CompilationUnit);
	m_SharedUnit->addAllEAllOperations(m_CompilationUnit->getEOperations());
	m_SharedUnit->addAllEAllReferences(m_CompilationUnit->getEReferences());
	m_SharedUnit->addAllEAllAttributes(m_CompilationUnit->getEAttributes());
	m_SharedUnit->addAllEAllStructuralFeatures(m_CompilationUnit->getEStructuralFeatures());
	m_DecimalType->addESuperTypes(m_PrimitiveType);
	m_DecimalType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_DecimalType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_DecimalType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_DecimalType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_DateType->addESuperTypes(m_PrimitiveType);
	m_DateType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_DateType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_DateType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_DateType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_TimeType->addESuperTypes(m_PrimitiveType);
	m_TimeType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_TimeType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_TimeType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_TimeType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_VoidType->addESuperTypes(m_PrimitiveType);
	m_VoidType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_VoidType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_VoidType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_VoidType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_ValueElement->addESuperTypes(m_DataElement);
	m_ValueElement->addAllEAllOperations(m_DataElement->getEOperations());
	m_ValueElement->addAllEAllReferences(m_DataElement->getEReferences());
	m_ValueElement->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_ValueElement->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_Value->addESuperTypes(m_ValueElement);
	m_Value->addAllEAllOperations(m_ValueElement->getEOperations());
	m_Value->addAllEAllReferences(m_ValueElement->getEReferences());
	m_Value->addAllEAllAttributes(m_ValueElement->getEAttributes());
	m_Value->addAllEAllStructuralFeatures(m_ValueElement->getEStructuralFeatures());
	m_ValueList->addESuperTypes(m_ValueElement);
	m_ValueList->addAllEAllOperations(m_ValueElement->getEOperations());
	m_ValueList->addAllEAllReferences(m_ValueElement->getEReferences());
	m_ValueList->addAllEAllAttributes(m_ValueElement->getEAttributes());
	m_ValueList->addAllEAllStructuralFeatures(m_ValueElement->getEStructuralFeatures());
	m_StorableUnit->addESuperTypes(m_DataElement);
	m_StorableUnit->addAllEAllOperations(m_DataElement->getEOperations());
	m_StorableUnit->addAllEAllReferences(m_DataElement->getEReferences());
	m_StorableUnit->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_StorableUnit->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_MemberUnit->addESuperTypes(m_DataElement);
	m_MemberUnit->addAllEAllOperations(m_DataElement->getEOperations());
	m_MemberUnit->addAllEAllReferences(m_DataElement->getEReferences());
	m_MemberUnit->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_MemberUnit->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_ParameterUnit->addESuperTypes(m_DataElement);
	m_ParameterUnit->addAllEAllOperations(m_DataElement->getEOperations());
	m_ParameterUnit->addAllEAllReferences(m_DataElement->getEReferences());
	m_ParameterUnit->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_ParameterUnit->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_ItemUnit->addESuperTypes(m_DataElement);
	m_ItemUnit->addAllEAllOperations(m_DataElement->getEOperations());
	m_ItemUnit->addAllEAllReferences(m_DataElement->getEReferences());
	m_ItemUnit->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_ItemUnit->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_IndexUnit->addESuperTypes(m_DataElement);
	m_IndexUnit->addAllEAllOperations(m_DataElement->getEOperations());
	m_IndexUnit->addAllEAllReferences(m_DataElement->getEReferences());
	m_IndexUnit->addAllEAllAttributes(m_DataElement->getEAttributes());
	m_IndexUnit->addAllEAllStructuralFeatures(m_DataElement->getEStructuralFeatures());
	m_SynonymType->addESuperTypes(m_DefinedType);
	m_SynonymType->addAllEAllOperations(m_DefinedType->getEOperations());
	m_SynonymType->addAllEAllReferences(m_DefinedType->getEReferences());
	m_SynonymType->addAllEAllAttributes(m_DefinedType->getEAttributes());
	m_SynonymType->addAllEAllStructuralFeatures(m_DefinedType->getEStructuralFeatures());
	m_SequenceType->addESuperTypes(m_DerivedType);
	m_SequenceType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_SequenceType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_SequenceType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_SequenceType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_BagType->addESuperTypes(m_DerivedType);
	m_BagType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_BagType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_BagType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_BagType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_SetType->addESuperTypes(m_DerivedType);
	m_SetType->addAllEAllOperations(m_DerivedType->getEOperations());
	m_SetType->addAllEAllReferences(m_DerivedType->getEReferences());
	m_SetType->addAllEAllAttributes(m_DerivedType->getEAttributes());
	m_SetType->addAllEAllStructuralFeatures(m_DerivedType->getEStructuralFeatures());
	m_CodeElement->addESuperTypes(m_CodeItem);
	m_CodeElement->addAllEAllOperations(m_CodeItem->getEOperations());
	m_CodeElement->addAllEAllReferences(m_CodeItem->getEReferences());
	m_CodeElement->addAllEAllAttributes(m_CodeItem->getEAttributes());
	m_CodeElement->addAllEAllStructuralFeatures(m_CodeItem->getEStructuralFeatures());
	m_CodeRelationship->addESuperTypes(m_AbstractCodeRelationship);
	m_CodeRelationship->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_CodeRelationship->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_CodeRelationship->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_CodeRelationship->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_LanguageUnit->addESuperTypes(m_Module);
	m_LanguageUnit->addAllEAllOperations(m_Module->getEOperations());
	m_LanguageUnit->addAllEAllReferences(m_Module->getEReferences());
	m_LanguageUnit->addAllEAllAttributes(m_Module->getEAttributes());
	m_LanguageUnit->addAllEAllStructuralFeatures(m_Module->getEStructuralFeatures());
	m_OrdinalType->addESuperTypes(m_PrimitiveType);
	m_OrdinalType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_OrdinalType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_OrdinalType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_OrdinalType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_BitstringType->addESuperTypes(m_PrimitiveType);
	m_BitstringType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_BitstringType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_BitstringType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_BitstringType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_OctetType->addESuperTypes(m_PrimitiveType);
	m_OctetType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_OctetType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_OctetType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_OctetType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_OctetstringType->addESuperTypes(m_PrimitiveType);
	m_OctetstringType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_OctetstringType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_OctetstringType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_OctetstringType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_BitType->addESuperTypes(m_PrimitiveType);
	m_BitType->addAllEAllOperations(m_PrimitiveType->getEOperations());
	m_BitType->addAllEAllReferences(m_PrimitiveType->getEReferences());
	m_BitType->addAllEAllAttributes(m_PrimitiveType->getEAttributes());
	m_BitType->addAllEAllStructuralFeatures(m_PrimitiveType->getEStructuralFeatures());
	m_Imports->addESuperTypes(m_AbstractCodeRelationship);
	m_Imports->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Imports->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Imports->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Imports->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_Package->addESuperTypes(m_Module);
	m_Package->addAllEAllOperations(m_Module->getEOperations());
	m_Package->addAllEAllReferences(m_Module->getEReferences());
	m_Package->addAllEAllAttributes(m_Module->getEAttributes());
	m_Package->addAllEAllStructuralFeatures(m_Module->getEStructuralFeatures());
	m_ParameterTo->addESuperTypes(m_AbstractCodeRelationship);
	m_ParameterTo->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_ParameterTo->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_ParameterTo->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_ParameterTo->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_TemplateType->addESuperTypes(m_Datatype);
	m_TemplateType->addAllEAllOperations(m_Datatype->getEOperations());
	m_TemplateType->addAllEAllReferences(m_Datatype->getEReferences());
	m_TemplateType->addAllEAllAttributes(m_Datatype->getEAttributes());
	m_TemplateType->addAllEAllStructuralFeatures(m_Datatype->getEStructuralFeatures());
	m_PreprocessorDirective->addESuperTypes(m_AbstractCodeElement);
	m_PreprocessorDirective->addAllEAllOperations(m_AbstractCodeElement->getEOperations());
	m_PreprocessorDirective->addAllEAllReferences(m_AbstractCodeElement->getEReferences());
	m_PreprocessorDirective->addAllEAllAttributes(m_AbstractCodeElement->getEAttributes());
	m_PreprocessorDirective->addAllEAllStructuralFeatures(m_AbstractCodeElement->getEStructuralFeatures());
	m_MacroDirective->addESuperTypes(m_PreprocessorDirective);
	m_MacroDirective->addAllEAllOperations(m_PreprocessorDirective->getEOperations());
	m_MacroDirective->addAllEAllReferences(m_PreprocessorDirective->getEReferences());
	m_MacroDirective->addAllEAllAttributes(m_PreprocessorDirective->getEAttributes());
	m_MacroDirective->addAllEAllStructuralFeatures(m_PreprocessorDirective->getEStructuralFeatures());
	m_MacroUnit->addESuperTypes(m_PreprocessorDirective);
	m_MacroUnit->addAllEAllOperations(m_PreprocessorDirective->getEOperations());
	m_MacroUnit->addAllEAllReferences(m_PreprocessorDirective->getEReferences());
	m_MacroUnit->addAllEAllAttributes(m_PreprocessorDirective->getEAttributes());
	m_MacroUnit->addAllEAllStructuralFeatures(m_PreprocessorDirective->getEStructuralFeatures());
	m_ConditionalDirective->addESuperTypes(m_PreprocessorDirective);
	m_ConditionalDirective->addAllEAllOperations(m_PreprocessorDirective->getEOperations());
	m_ConditionalDirective->addAllEAllReferences(m_PreprocessorDirective->getEReferences());
	m_ConditionalDirective->addAllEAllAttributes(m_PreprocessorDirective->getEAttributes());
	m_ConditionalDirective->addAllEAllStructuralFeatures(m_PreprocessorDirective->getEStructuralFeatures());
	m_IncludeDirective->addESuperTypes(m_PreprocessorDirective);
	m_IncludeDirective->addAllEAllOperations(m_PreprocessorDirective->getEOperations());
	m_IncludeDirective->addAllEAllReferences(m_PreprocessorDirective->getEReferences());
	m_IncludeDirective->addAllEAllAttributes(m_PreprocessorDirective->getEAttributes());
	m_IncludeDirective->addAllEAllStructuralFeatures(m_PreprocessorDirective->getEStructuralFeatures());
	m_VariantTo->addESuperTypes(m_AbstractCodeRelationship);
	m_VariantTo->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_VariantTo->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_VariantTo->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_VariantTo->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_Expands->addESuperTypes(m_AbstractCodeRelationship);
	m_Expands->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Expands->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Expands->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Expands->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_Redefines->addESuperTypes(m_AbstractCodeRelationship);
	m_Redefines->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Redefines->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Redefines->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Redefines->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_GeneratedFrom->addESuperTypes(m_AbstractCodeRelationship);
	m_GeneratedFrom->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_GeneratedFrom->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_GeneratedFrom->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_GeneratedFrom->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_Includes->addESuperTypes(m_AbstractCodeRelationship);
	m_Includes->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_Includes->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_Includes->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_Includes->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	m_HasValue->addESuperTypes(m_AbstractCodeRelationship);
	m_HasValue->addAllEAllOperations(m_AbstractCodeRelationship->getEOperations());
	m_HasValue->addAllEAllReferences(m_AbstractCodeRelationship->getEReferences());
	m_HasValue->addAllEAllAttributes(m_AbstractCodeRelationship->getEAttributes());
	m_HasValue->addAllEAllStructuralFeatures(m_AbstractCodeRelationship->getEStructuralFeatures());
	
	
	m_AbstractCodeElement->addFeatureAccesors(m_AbstractCodeElement__source, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::AbstractCodeElement_ptr >(o)->getSource()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractCodeElement->addFeatureAccesors(m_AbstractCodeElement__comment, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::AbstractCodeElement_ptr >(o)->getComment()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractCodeElement->addFeatureAccesors(m_AbstractCodeElement__codeRelation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::AbstractCodeElement_ptr >(o)->getCodeRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ControlElement->addFeatureAccesors(m_ControlElement__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ControlElement_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ControlElement->addFeatureAccesors(m_ControlElement__entryFlow, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ControlElement_ptr >(o)->getEntryFlow()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ControlElement->addFeatureAccesors(m_ControlElement__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ControlElement_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MethodUnit->addFeatureAccesors(m_MethodUnit__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::MethodUnit_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MethodUnit->addFeatureAccesors(m_MethodUnit__export, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::MethodUnit_ptr >(o)->getExport_()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Module->addFeatureAccesors(m_Module__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Module_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CallableUnit->addFeatureAccesors(m_CallableUnit__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CallableUnit_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TemplateUnit->addFeatureAccesors(m_TemplateUnit__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::TemplateUnit_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InstanceOf->addFeatureAccesors(m_InstanceOf__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::InstanceOf_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InstanceOf->addFeatureAccesors(m_InstanceOf__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::InstanceOf_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CodeModel->addFeatureAccesors(m_CodeModel__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CodeModel_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DerivedType->addFeatureAccesors(m_DerivedType__itemUnit, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DerivedType_ptr >(o)->getItemUnit()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ArrayType->addFeatureAccesors(m_ArrayType__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ArrayType_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ArrayType->addFeatureAccesors(m_ArrayType__indexUnit, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ArrayType_ptr >(o)->getIndexUnit()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ClassUnit->addFeatureAccesors(m_ClassUnit__isAbstract, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ClassUnit_ptr >(o)->getIsAbstract()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ClassUnit->addFeatureAccesors(m_ClassUnit__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ClassUnit_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CompositeType->addFeatureAccesors(m_CompositeType__itemUnit, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CompositeType_ptr >(o)->getItemUnit()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EnumeratedType->addFeatureAccesors(m_EnumeratedType__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::EnumeratedType_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Extends->addFeatureAccesors(m_Extends__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Extends_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Extends->addFeatureAccesors(m_Extends__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Extends_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasType->addFeatureAccesors(m_HasType__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::HasType_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasType->addFeatureAccesors(m_HasType__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::HasType_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ImplementationOf->addFeatureAccesors(m_ImplementationOf__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ImplementationOf_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ImplementationOf->addFeatureAccesors(m_ImplementationOf__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ImplementationOf_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Implements->addFeatureAccesors(m_Implements__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Implements_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Implements->addFeatureAccesors(m_Implements__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Implements_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InterfaceUnit->addFeatureAccesors(m_InterfaceUnit__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::InterfaceUnit_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DefinedType->addFeatureAccesors(m_DefinedType__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DefinedType_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DefinedType->addFeatureAccesors(m_DefinedType__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DefinedType_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_RangeType->addFeatureAccesors(m_RangeType__lower, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::RangeType_ptr >(o)->getLower()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_RangeType->addFeatureAccesors(m_RangeType__upper, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::RangeType_ptr >(o)->getUpper()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Signature->addFeatureAccesors(m_Signature__parameterUnit, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Signature_ptr >(o)->getParameterUnit()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DataElement->addFeatureAccesors(m_DataElement__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DataElement_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DataElement->addFeatureAccesors(m_DataElement__ext, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DataElement_ptr >(o)->getExt()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DataElement->addFeatureAccesors(m_DataElement__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DataElement_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DataElement->addFeatureAccesors(m_DataElement__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::DataElement_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NamespaceUnit->addFeatureAccesors(m_NamespaceUnit__groupedCode, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::NamespaceUnit_ptr >(o)->getGroupedCode()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_VisibleIn->addFeatureAccesors(m_VisibleIn__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::VisibleIn_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_VisibleIn->addFeatureAccesors(m_VisibleIn__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::VisibleIn_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CommentUnit->addFeatureAccesors(m_CommentUnit__text, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CommentUnit_ptr >(o)->getText()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ValueList->addFeatureAccesors(m_ValueList__valueElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ValueList_ptr >(o)->getValueElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_StorableUnit->addFeatureAccesors(m_StorableUnit__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::StorableUnit_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MemberUnit->addFeatureAccesors(m_MemberUnit__export, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::MemberUnit_ptr >(o)->getExport_()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ParameterUnit->addFeatureAccesors(m_ParameterUnit__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ParameterUnit_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ParameterUnit->addFeatureAccesors(m_ParameterUnit__pos, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ParameterUnit_ptr >(o)->getPos()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SequenceType->addFeatureAccesors(m_SequenceType__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::SequenceType_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_BagType->addFeatureAccesors(m_BagType__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::BagType_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SetType->addFeatureAccesors(m_SetType__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::SetType_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CodeRelationship->addFeatureAccesors(m_CodeRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CodeRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CodeRelationship->addFeatureAccesors(m_CodeRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::CodeRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Imports->addFeatureAccesors(m_Imports__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Imports_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Imports->addFeatureAccesors(m_Imports__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Imports_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ParameterTo->addFeatureAccesors(m_ParameterTo__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ParameterTo_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ParameterTo->addFeatureAccesors(m_ParameterTo__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::ParameterTo_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_PreprocessorDirective->addFeatureAccesors(m_PreprocessorDirective__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::PreprocessorDirective_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MacroUnit->addFeatureAccesors(m_MacroUnit__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::MacroUnit_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_VariantTo->addFeatureAccesors(m_VariantTo__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::VariantTo_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_VariantTo->addFeatureAccesors(m_VariantTo__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::VariantTo_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Expands->addFeatureAccesors(m_Expands__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Expands_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Expands->addFeatureAccesors(m_Expands__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Expands_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Redefines->addFeatureAccesors(m_Redefines__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Redefines_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Redefines->addFeatureAccesors(m_Redefines__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Redefines_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_GeneratedFrom->addFeatureAccesors(m_GeneratedFrom__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::GeneratedFrom_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_GeneratedFrom->addFeatureAccesors(m_GeneratedFrom__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::GeneratedFrom_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Includes->addFeatureAccesors(m_Includes__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Includes_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Includes->addFeatureAccesors(m_Includes__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::Includes_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasValue->addFeatureAccesors(m_HasValue__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::HasValue_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasValue->addFeatureAccesors(m_HasValue__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::code::HasValue_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const CodePackage_ptr CodePackage::_instance()
{
	static CodePackage __instance;
	return &__instance;
}

ecore::EClass_ptr CodePackage::getAbstractCodeElement() const
{
	return m_AbstractCodeElement;
}
  	
e4c::tag_t CodePackage::getTag_AbstractCodeElement() const
{
	return e4c::tag< AbstractCodeElement >::get();
}
 
ecore::EClass_ptr CodePackage::getCodeItem() const
{
	return m_CodeItem;
}
  	
e4c::tag_t CodePackage::getTag_CodeItem() const
{
	return e4c::tag< CodeItem >::get();
}
 
ecore::EClass_ptr CodePackage::getComputationalObject() const
{
	return m_ComputationalObject;
}
  	
e4c::tag_t CodePackage::getTag_ComputationalObject() const
{
	return e4c::tag< ComputationalObject >::get();
}
 
ecore::EClass_ptr CodePackage::getControlElement() const
{
	return m_ControlElement;
}
  	
e4c::tag_t CodePackage::getTag_ControlElement() const
{
	return e4c::tag< ControlElement >::get();
}
 
ecore::EClass_ptr CodePackage::getMethodUnit() const
{
	return m_MethodUnit;
}
  	
e4c::tag_t CodePackage::getTag_MethodUnit() const
{
	return e4c::tag< MethodUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getModule() const
{
	return m_Module;
}
  	
e4c::tag_t CodePackage::getTag_Module() const
{
	return e4c::tag< Module >::get();
}
 
ecore::EClass_ptr CodePackage::getCodeAssembly() const
{
	return m_CodeAssembly;
}
  	
e4c::tag_t CodePackage::getTag_CodeAssembly() const
{
	return e4c::tag< CodeAssembly >::get();
}
 
ecore::EClass_ptr CodePackage::getCallableUnit() const
{
	return m_CallableUnit;
}
  	
e4c::tag_t CodePackage::getTag_CallableUnit() const
{
	return e4c::tag< CallableUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getDatatype() const
{
	return m_Datatype;
}
  	
e4c::tag_t CodePackage::getTag_Datatype() const
{
	return e4c::tag< Datatype >::get();
}
 
ecore::EClass_ptr CodePackage::getTemplateUnit() const
{
	return m_TemplateUnit;
}
  	
e4c::tag_t CodePackage::getTag_TemplateUnit() const
{
	return e4c::tag< TemplateUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getTemplateParameter() const
{
	return m_TemplateParameter;
}
  	
e4c::tag_t CodePackage::getTag_TemplateParameter() const
{
	return e4c::tag< TemplateParameter >::get();
}
 
ecore::EClass_ptr CodePackage::getAbstractCodeRelationship() const
{
	return m_AbstractCodeRelationship;
}
  	
e4c::tag_t CodePackage::getTag_AbstractCodeRelationship() const
{
	return e4c::tag< AbstractCodeRelationship >::get();
}
 
ecore::EClass_ptr CodePackage::getInstanceOf() const
{
	return m_InstanceOf;
}
  	
e4c::tag_t CodePackage::getTag_InstanceOf() const
{
	return e4c::tag< InstanceOf >::get();
}
 
ecore::EClass_ptr CodePackage::getCompilationUnit() const
{
	return m_CompilationUnit;
}
  	
e4c::tag_t CodePackage::getTag_CompilationUnit() const
{
	return e4c::tag< CompilationUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getCodeModel() const
{
	return m_CodeModel;
}
  	
e4c::tag_t CodePackage::getTag_CodeModel() const
{
	return e4c::tag< CodeModel >::get();
}
 
ecore::EClass_ptr CodePackage::getDerivedType() const
{
	return m_DerivedType;
}
  	
e4c::tag_t CodePackage::getTag_DerivedType() const
{
	return e4c::tag< DerivedType >::get();
}
 
ecore::EClass_ptr CodePackage::getArrayType() const
{
	return m_ArrayType;
}
  	
e4c::tag_t CodePackage::getTag_ArrayType() const
{
	return e4c::tag< ArrayType >::get();
}
 
ecore::EClass_ptr CodePackage::getPrimitiveType() const
{
	return m_PrimitiveType;
}
  	
e4c::tag_t CodePackage::getTag_PrimitiveType() const
{
	return e4c::tag< PrimitiveType >::get();
}
 
ecore::EClass_ptr CodePackage::getBooleanType() const
{
	return m_BooleanType;
}
  	
e4c::tag_t CodePackage::getTag_BooleanType() const
{
	return e4c::tag< BooleanType >::get();
}
 
ecore::EClass_ptr CodePackage::getCharType() const
{
	return m_CharType;
}
  	
e4c::tag_t CodePackage::getTag_CharType() const
{
	return e4c::tag< CharType >::get();
}
 
ecore::EClass_ptr CodePackage::getClassUnit() const
{
	return m_ClassUnit;
}
  	
e4c::tag_t CodePackage::getTag_ClassUnit() const
{
	return e4c::tag< ClassUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getCompositeType() const
{
	return m_CompositeType;
}
  	
e4c::tag_t CodePackage::getTag_CompositeType() const
{
	return e4c::tag< CompositeType >::get();
}
 
ecore::EClass_ptr CodePackage::getRecordType() const
{
	return m_RecordType;
}
  	
e4c::tag_t CodePackage::getTag_RecordType() const
{
	return e4c::tag< RecordType >::get();
}
 
ecore::EClass_ptr CodePackage::getEnumeratedType() const
{
	return m_EnumeratedType;
}
  	
e4c::tag_t CodePackage::getTag_EnumeratedType() const
{
	return e4c::tag< EnumeratedType >::get();
}
 
ecore::EClass_ptr CodePackage::getExtends() const
{
	return m_Extends;
}
  	
e4c::tag_t CodePackage::getTag_Extends() const
{
	return e4c::tag< Extends >::get();
}
 
ecore::EClass_ptr CodePackage::getScaledType() const
{
	return m_ScaledType;
}
  	
e4c::tag_t CodePackage::getTag_ScaledType() const
{
	return e4c::tag< ScaledType >::get();
}
 
ecore::EClass_ptr CodePackage::getFloatType() const
{
	return m_FloatType;
}
  	
e4c::tag_t CodePackage::getTag_FloatType() const
{
	return e4c::tag< FloatType >::get();
}
 
ecore::EClass_ptr CodePackage::getHasType() const
{
	return m_HasType;
}
  	
e4c::tag_t CodePackage::getTag_HasType() const
{
	return e4c::tag< HasType >::get();
}
 
ecore::EClass_ptr CodePackage::getImplementationOf() const
{
	return m_ImplementationOf;
}
  	
e4c::tag_t CodePackage::getTag_ImplementationOf() const
{
	return e4c::tag< ImplementationOf >::get();
}
 
ecore::EClass_ptr CodePackage::getImplements() const
{
	return m_Implements;
}
  	
e4c::tag_t CodePackage::getTag_Implements() const
{
	return e4c::tag< Implements >::get();
}
 
ecore::EClass_ptr CodePackage::getIntegerType() const
{
	return m_IntegerType;
}
  	
e4c::tag_t CodePackage::getTag_IntegerType() const
{
	return e4c::tag< IntegerType >::get();
}
 
ecore::EClass_ptr CodePackage::getInterfaceUnit() const
{
	return m_InterfaceUnit;
}
  	
e4c::tag_t CodePackage::getTag_InterfaceUnit() const
{
	return e4c::tag< InterfaceUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getPointerType() const
{
	return m_PointerType;
}
  	
e4c::tag_t CodePackage::getTag_PointerType() const
{
	return e4c::tag< PointerType >::get();
}
 
ecore::EClass_ptr CodePackage::getDefinedType() const
{
	return m_DefinedType;
}
  	
e4c::tag_t CodePackage::getTag_DefinedType() const
{
	return e4c::tag< DefinedType >::get();
}
 
ecore::EClass_ptr CodePackage::getTypeUnit() const
{
	return m_TypeUnit;
}
  	
e4c::tag_t CodePackage::getTag_TypeUnit() const
{
	return e4c::tag< TypeUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getRangeType() const
{
	return m_RangeType;
}
  	
e4c::tag_t CodePackage::getTag_RangeType() const
{
	return e4c::tag< RangeType >::get();
}
 
ecore::EClass_ptr CodePackage::getSignature() const
{
	return m_Signature;
}
  	
e4c::tag_t CodePackage::getTag_Signature() const
{
	return e4c::tag< Signature >::get();
}
 
ecore::EClass_ptr CodePackage::getDataElement() const
{
	return m_DataElement;
}
  	
e4c::tag_t CodePackage::getTag_DataElement() const
{
	return e4c::tag< DataElement >::get();
}
 
ecore::EClass_ptr CodePackage::getStringType() const
{
	return m_StringType;
}
  	
e4c::tag_t CodePackage::getTag_StringType() const
{
	return e4c::tag< StringType >::get();
}
 
ecore::EClass_ptr CodePackage::getChoiceType() const
{
	return m_ChoiceType;
}
  	
e4c::tag_t CodePackage::getTag_ChoiceType() const
{
	return e4c::tag< ChoiceType >::get();
}
 
ecore::EClass_ptr CodePackage::getNamespaceUnit() const
{
	return m_NamespaceUnit;
}
  	
e4c::tag_t CodePackage::getTag_NamespaceUnit() const
{
	return e4c::tag< NamespaceUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getVisibleIn() const
{
	return m_VisibleIn;
}
  	
e4c::tag_t CodePackage::getTag_VisibleIn() const
{
	return e4c::tag< VisibleIn >::get();
}
 
ecore::EClass_ptr CodePackage::getCommentUnit() const
{
	return m_CommentUnit;
}
  	
e4c::tag_t CodePackage::getTag_CommentUnit() const
{
	return e4c::tag< CommentUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getSharedUnit() const
{
	return m_SharedUnit;
}
  	
e4c::tag_t CodePackage::getTag_SharedUnit() const
{
	return e4c::tag< SharedUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getDecimalType() const
{
	return m_DecimalType;
}
  	
e4c::tag_t CodePackage::getTag_DecimalType() const
{
	return e4c::tag< DecimalType >::get();
}
 
ecore::EClass_ptr CodePackage::getDateType() const
{
	return m_DateType;
}
  	
e4c::tag_t CodePackage::getTag_DateType() const
{
	return e4c::tag< DateType >::get();
}
 
ecore::EClass_ptr CodePackage::getTimeType() const
{
	return m_TimeType;
}
  	
e4c::tag_t CodePackage::getTag_TimeType() const
{
	return e4c::tag< TimeType >::get();
}
 
ecore::EEnum_ptr CodePackage::getMethodKind() const
{
	return m_MethodKind;
}
  	
e4c::tag_t CodePackage::getTag_MethodKind() const
{
	return e4c::tag< MethodKind >::get();
}
 
ecore::EClass_ptr CodePackage::getVoidType() const
{
	return m_VoidType;
}
  	
e4c::tag_t CodePackage::getTag_VoidType() const
{
	return e4c::tag< VoidType >::get();
}
 
ecore::EClass_ptr CodePackage::getValueElement() const
{
	return m_ValueElement;
}
  	
e4c::tag_t CodePackage::getTag_ValueElement() const
{
	return e4c::tag< ValueElement >::get();
}
 
ecore::EClass_ptr CodePackage::getValue() const
{
	return m_Value;
}
  	
e4c::tag_t CodePackage::getTag_Value() const
{
	return e4c::tag< Value >::get();
}
 
ecore::EClass_ptr CodePackage::getValueList() const
{
	return m_ValueList;
}
  	
e4c::tag_t CodePackage::getTag_ValueList() const
{
	return e4c::tag< ValueList >::get();
}
 
ecore::EClass_ptr CodePackage::getStorableUnit() const
{
	return m_StorableUnit;
}
  	
e4c::tag_t CodePackage::getTag_StorableUnit() const
{
	return e4c::tag< StorableUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getMemberUnit() const
{
	return m_MemberUnit;
}
  	
e4c::tag_t CodePackage::getTag_MemberUnit() const
{
	return e4c::tag< MemberUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getParameterUnit() const
{
	return m_ParameterUnit;
}
  	
e4c::tag_t CodePackage::getTag_ParameterUnit() const
{
	return e4c::tag< ParameterUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getItemUnit() const
{
	return m_ItemUnit;
}
  	
e4c::tag_t CodePackage::getTag_ItemUnit() const
{
	return e4c::tag< ItemUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getIndexUnit() const
{
	return m_IndexUnit;
}
  	
e4c::tag_t CodePackage::getTag_IndexUnit() const
{
	return e4c::tag< IndexUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getSynonymType() const
{
	return m_SynonymType;
}
  	
e4c::tag_t CodePackage::getTag_SynonymType() const
{
	return e4c::tag< SynonymType >::get();
}
 
ecore::EClass_ptr CodePackage::getSequenceType() const
{
	return m_SequenceType;
}
  	
e4c::tag_t CodePackage::getTag_SequenceType() const
{
	return e4c::tag< SequenceType >::get();
}
 
ecore::EClass_ptr CodePackage::getBagType() const
{
	return m_BagType;
}
  	
e4c::tag_t CodePackage::getTag_BagType() const
{
	return e4c::tag< BagType >::get();
}
 
ecore::EClass_ptr CodePackage::getSetType() const
{
	return m_SetType;
}
  	
e4c::tag_t CodePackage::getTag_SetType() const
{
	return e4c::tag< SetType >::get();
}
 
ecore::EClass_ptr CodePackage::getCodeElement() const
{
	return m_CodeElement;
}
  	
e4c::tag_t CodePackage::getTag_CodeElement() const
{
	return e4c::tag< CodeElement >::get();
}
 
ecore::EClass_ptr CodePackage::getCodeRelationship() const
{
	return m_CodeRelationship;
}
  	
e4c::tag_t CodePackage::getTag_CodeRelationship() const
{
	return e4c::tag< CodeRelationship >::get();
}
 
ecore::EEnum_ptr CodePackage::getParameterKind() const
{
	return m_ParameterKind;
}
  	
e4c::tag_t CodePackage::getTag_ParameterKind() const
{
	return e4c::tag< ParameterKind >::get();
}
 
ecore::EEnum_ptr CodePackage::getExportKind() const
{
	return m_ExportKind;
}
  	
e4c::tag_t CodePackage::getTag_ExportKind() const
{
	return e4c::tag< ExportKind >::get();
}
 
ecore::EClass_ptr CodePackage::getLanguageUnit() const
{
	return m_LanguageUnit;
}
  	
e4c::tag_t CodePackage::getTag_LanguageUnit() const
{
	return e4c::tag< LanguageUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getOrdinalType() const
{
	return m_OrdinalType;
}
  	
e4c::tag_t CodePackage::getTag_OrdinalType() const
{
	return e4c::tag< OrdinalType >::get();
}
 
ecore::EClass_ptr CodePackage::getBitstringType() const
{
	return m_BitstringType;
}
  	
e4c::tag_t CodePackage::getTag_BitstringType() const
{
	return e4c::tag< BitstringType >::get();
}
 
ecore::EClass_ptr CodePackage::getOctetType() const
{
	return m_OctetType;
}
  	
e4c::tag_t CodePackage::getTag_OctetType() const
{
	return e4c::tag< OctetType >::get();
}
 
ecore::EClass_ptr CodePackage::getOctetstringType() const
{
	return m_OctetstringType;
}
  	
e4c::tag_t CodePackage::getTag_OctetstringType() const
{
	return e4c::tag< OctetstringType >::get();
}
 
ecore::EClass_ptr CodePackage::getBitType() const
{
	return m_BitType;
}
  	
e4c::tag_t CodePackage::getTag_BitType() const
{
	return e4c::tag< BitType >::get();
}
 
ecore::EEnum_ptr CodePackage::getStorableKind() const
{
	return m_StorableKind;
}
  	
e4c::tag_t CodePackage::getTag_StorableKind() const
{
	return e4c::tag< StorableKind >::get();
}
 
ecore::EEnum_ptr CodePackage::getCallableKind() const
{
	return m_CallableKind;
}
  	
e4c::tag_t CodePackage::getTag_CallableKind() const
{
	return e4c::tag< CallableKind >::get();
}
 
ecore::EClass_ptr CodePackage::getImports() const
{
	return m_Imports;
}
  	
e4c::tag_t CodePackage::getTag_Imports() const
{
	return e4c::tag< Imports >::get();
}
 
ecore::EClass_ptr CodePackage::getPackage() const
{
	return m_Package;
}
  	
e4c::tag_t CodePackage::getTag_Package() const
{
	return e4c::tag< Package >::get();
}
 
ecore::EClass_ptr CodePackage::getParameterTo() const
{
	return m_ParameterTo;
}
  	
e4c::tag_t CodePackage::getTag_ParameterTo() const
{
	return e4c::tag< ParameterTo >::get();
}
 
ecore::EClass_ptr CodePackage::getTemplateType() const
{
	return m_TemplateType;
}
  	
e4c::tag_t CodePackage::getTag_TemplateType() const
{
	return e4c::tag< TemplateType >::get();
}
 
ecore::EClass_ptr CodePackage::getPreprocessorDirective() const
{
	return m_PreprocessorDirective;
}
  	
e4c::tag_t CodePackage::getTag_PreprocessorDirective() const
{
	return e4c::tag< PreprocessorDirective >::get();
}
 
ecore::EClass_ptr CodePackage::getMacroDirective() const
{
	return m_MacroDirective;
}
  	
e4c::tag_t CodePackage::getTag_MacroDirective() const
{
	return e4c::tag< MacroDirective >::get();
}
 
ecore::EClass_ptr CodePackage::getMacroUnit() const
{
	return m_MacroUnit;
}
  	
e4c::tag_t CodePackage::getTag_MacroUnit() const
{
	return e4c::tag< MacroUnit >::get();
}
 
ecore::EClass_ptr CodePackage::getConditionalDirective() const
{
	return m_ConditionalDirective;
}
  	
e4c::tag_t CodePackage::getTag_ConditionalDirective() const
{
	return e4c::tag< ConditionalDirective >::get();
}
 
ecore::EClass_ptr CodePackage::getIncludeDirective() const
{
	return m_IncludeDirective;
}
  	
e4c::tag_t CodePackage::getTag_IncludeDirective() const
{
	return e4c::tag< IncludeDirective >::get();
}
 
ecore::EEnum_ptr CodePackage::getMacroKind() const
{
	return m_MacroKind;
}
  	
e4c::tag_t CodePackage::getTag_MacroKind() const
{
	return e4c::tag< MacroKind >::get();
}
 
ecore::EClass_ptr CodePackage::getVariantTo() const
{
	return m_VariantTo;
}
  	
e4c::tag_t CodePackage::getTag_VariantTo() const
{
	return e4c::tag< VariantTo >::get();
}
 
ecore::EClass_ptr CodePackage::getExpands() const
{
	return m_Expands;
}
  	
e4c::tag_t CodePackage::getTag_Expands() const
{
	return e4c::tag< Expands >::get();
}
 
ecore::EClass_ptr CodePackage::getRedefines() const
{
	return m_Redefines;
}
  	
e4c::tag_t CodePackage::getTag_Redefines() const
{
	return e4c::tag< Redefines >::get();
}
 
ecore::EClass_ptr CodePackage::getGeneratedFrom() const
{
	return m_GeneratedFrom;
}
  	
e4c::tag_t CodePackage::getTag_GeneratedFrom() const
{
	return e4c::tag< GeneratedFrom >::get();
}
 
ecore::EClass_ptr CodePackage::getIncludes() const
{
	return m_Includes;
}
  	
e4c::tag_t CodePackage::getTag_Includes() const
{
	return e4c::tag< Includes >::get();
}
 
ecore::EClass_ptr CodePackage::getHasValue() const
{
	return m_HasValue;
}
  	
e4c::tag_t CodePackage::getTag_HasValue() const
{
	return e4c::tag< HasValue >::get();
}
 
e4c::tag_t CodePackage::getTag_AbstractCodeElement__source() const
{
	return e4c::tag< AbstractCodeElement__source_tag >::get();
}

ecore::EReference_ptr CodePackage::getAbstractCodeElement__source() const
{
	return m_AbstractCodeElement__source;
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__comment() const
{
	return e4c::tag< AbstractCodeElement__comment_tag >::get();
}

ecore::EReference_ptr CodePackage::getAbstractCodeElement__comment() const
{
	return m_AbstractCodeElement__comment;
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__codeRelation() const
{
	return e4c::tag< AbstractCodeElement__codeRelation_tag >::get();
}

ecore::EReference_ptr CodePackage::getAbstractCodeElement__codeRelation() const
{
	return m_AbstractCodeElement__codeRelation;
}

e4c::tag_t CodePackage::getTag_ControlElement__type() const
{
	return e4c::tag< ControlElement__type_tag >::get();
}

ecore::EReference_ptr CodePackage::getControlElement__type() const
{
	return m_ControlElement__type;
}

e4c::tag_t CodePackage::getTag_ControlElement__entryFlow() const
{
	return e4c::tag< ControlElement__entryFlow_tag >::get();
}

ecore::EReference_ptr CodePackage::getControlElement__entryFlow() const
{
	return m_ControlElement__entryFlow;
}

e4c::tag_t CodePackage::getTag_ControlElement__codeElement() const
{
	return e4c::tag< ControlElement__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getControlElement__codeElement() const
{
	return m_ControlElement__codeElement;
}

e4c::tag_t CodePackage::getTag_MethodUnit__kind() const
{
	return e4c::tag< MethodUnit__kind_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getMethodUnit__kind() const
{
	return m_MethodUnit__kind;
}

e4c::tag_t CodePackage::getTag_MethodUnit__export() const
{
	return e4c::tag< MethodUnit__export_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getMethodUnit__export() const
{
	return m_MethodUnit__export;
}

e4c::tag_t CodePackage::getTag_Module__codeElement() const
{
	return e4c::tag< Module__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getModule__codeElement() const
{
	return m_Module__codeElement;
}

e4c::tag_t CodePackage::getTag_CallableUnit__kind() const
{
	return e4c::tag< CallableUnit__kind_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getCallableUnit__kind() const
{
	return m_CallableUnit__kind;
}

e4c::tag_t CodePackage::getTag_TemplateUnit__codeElement() const
{
	return e4c::tag< TemplateUnit__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getTemplateUnit__codeElement() const
{
	return m_TemplateUnit__codeElement;
}

e4c::tag_t CodePackage::getTag_InstanceOf__to() const
{
	return e4c::tag< InstanceOf__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getInstanceOf__to() const
{
	return m_InstanceOf__to;
}

e4c::tag_t CodePackage::getTag_InstanceOf__from() const
{
	return e4c::tag< InstanceOf__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getInstanceOf__from() const
{
	return m_InstanceOf__from;
}

e4c::tag_t CodePackage::getTag_CodeModel__codeElement() const
{
	return e4c::tag< CodeModel__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getCodeModel__codeElement() const
{
	return m_CodeModel__codeElement;
}

e4c::tag_t CodePackage::getTag_DerivedType__itemUnit() const
{
	return e4c::tag< DerivedType__itemUnit_tag >::get();
}

ecore::EReference_ptr CodePackage::getDerivedType__itemUnit() const
{
	return m_DerivedType__itemUnit;
}

e4c::tag_t CodePackage::getTag_ArrayType__size() const
{
	return e4c::tag< ArrayType__size_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getArrayType__size() const
{
	return m_ArrayType__size;
}

e4c::tag_t CodePackage::getTag_ArrayType__indexUnit() const
{
	return e4c::tag< ArrayType__indexUnit_tag >::get();
}

ecore::EReference_ptr CodePackage::getArrayType__indexUnit() const
{
	return m_ArrayType__indexUnit;
}

e4c::tag_t CodePackage::getTag_ClassUnit__isAbstract() const
{
	return e4c::tag< ClassUnit__isAbstract_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getClassUnit__isAbstract() const
{
	return m_ClassUnit__isAbstract;
}

e4c::tag_t CodePackage::getTag_ClassUnit__codeElement() const
{
	return e4c::tag< ClassUnit__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getClassUnit__codeElement() const
{
	return m_ClassUnit__codeElement;
}

e4c::tag_t CodePackage::getTag_CompositeType__itemUnit() const
{
	return e4c::tag< CompositeType__itemUnit_tag >::get();
}

ecore::EReference_ptr CodePackage::getCompositeType__itemUnit() const
{
	return m_CompositeType__itemUnit;
}

e4c::tag_t CodePackage::getTag_EnumeratedType__value() const
{
	return e4c::tag< EnumeratedType__value_tag >::get();
}

ecore::EReference_ptr CodePackage::getEnumeratedType__value() const
{
	return m_EnumeratedType__value;
}

e4c::tag_t CodePackage::getTag_Extends__to() const
{
	return e4c::tag< Extends__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getExtends__to() const
{
	return m_Extends__to;
}

e4c::tag_t CodePackage::getTag_Extends__from() const
{
	return e4c::tag< Extends__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getExtends__from() const
{
	return m_Extends__from;
}

e4c::tag_t CodePackage::getTag_HasType__to() const
{
	return e4c::tag< HasType__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getHasType__to() const
{
	return m_HasType__to;
}

e4c::tag_t CodePackage::getTag_HasType__from() const
{
	return e4c::tag< HasType__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getHasType__from() const
{
	return m_HasType__from;
}

e4c::tag_t CodePackage::getTag_ImplementationOf__to() const
{
	return e4c::tag< ImplementationOf__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getImplementationOf__to() const
{
	return m_ImplementationOf__to;
}

e4c::tag_t CodePackage::getTag_ImplementationOf__from() const
{
	return e4c::tag< ImplementationOf__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getImplementationOf__from() const
{
	return m_ImplementationOf__from;
}

e4c::tag_t CodePackage::getTag_Implements__to() const
{
	return e4c::tag< Implements__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getImplements__to() const
{
	return m_Implements__to;
}

e4c::tag_t CodePackage::getTag_Implements__from() const
{
	return e4c::tag< Implements__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getImplements__from() const
{
	return m_Implements__from;
}

e4c::tag_t CodePackage::getTag_InterfaceUnit__codeElement() const
{
	return e4c::tag< InterfaceUnit__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getInterfaceUnit__codeElement() const
{
	return m_InterfaceUnit__codeElement;
}

e4c::tag_t CodePackage::getTag_DefinedType__type() const
{
	return e4c::tag< DefinedType__type_tag >::get();
}

ecore::EReference_ptr CodePackage::getDefinedType__type() const
{
	return m_DefinedType__type;
}

e4c::tag_t CodePackage::getTag_DefinedType__codeElement() const
{
	return e4c::tag< DefinedType__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getDefinedType__codeElement() const
{
	return m_DefinedType__codeElement;
}

e4c::tag_t CodePackage::getTag_RangeType__lower() const
{
	return e4c::tag< RangeType__lower_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getRangeType__lower() const
{
	return m_RangeType__lower;
}

e4c::tag_t CodePackage::getTag_RangeType__upper() const
{
	return e4c::tag< RangeType__upper_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getRangeType__upper() const
{
	return m_RangeType__upper;
}

e4c::tag_t CodePackage::getTag_Signature__parameterUnit() const
{
	return e4c::tag< Signature__parameterUnit_tag >::get();
}

ecore::EReference_ptr CodePackage::getSignature__parameterUnit() const
{
	return m_Signature__parameterUnit;
}

e4c::tag_t CodePackage::getTag_DataElement__type() const
{
	return e4c::tag< DataElement__type_tag >::get();
}

ecore::EReference_ptr CodePackage::getDataElement__type() const
{
	return m_DataElement__type;
}

e4c::tag_t CodePackage::getTag_DataElement__ext() const
{
	return e4c::tag< DataElement__ext_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getDataElement__ext() const
{
	return m_DataElement__ext;
}

e4c::tag_t CodePackage::getTag_DataElement__size() const
{
	return e4c::tag< DataElement__size_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getDataElement__size() const
{
	return m_DataElement__size;
}

e4c::tag_t CodePackage::getTag_DataElement__codeElement() const
{
	return e4c::tag< DataElement__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getDataElement__codeElement() const
{
	return m_DataElement__codeElement;
}

e4c::tag_t CodePackage::getTag_NamespaceUnit__groupedCode() const
{
	return e4c::tag< NamespaceUnit__groupedCode_tag >::get();
}

ecore::EReference_ptr CodePackage::getNamespaceUnit__groupedCode() const
{
	return m_NamespaceUnit__groupedCode;
}

e4c::tag_t CodePackage::getTag_VisibleIn__to() const
{
	return e4c::tag< VisibleIn__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getVisibleIn__to() const
{
	return m_VisibleIn__to;
}

e4c::tag_t CodePackage::getTag_VisibleIn__from() const
{
	return e4c::tag< VisibleIn__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getVisibleIn__from() const
{
	return m_VisibleIn__from;
}

e4c::tag_t CodePackage::getTag_CommentUnit__text() const
{
	return e4c::tag< CommentUnit__text_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getCommentUnit__text() const
{
	return m_CommentUnit__text;
}

e4c::tag_t CodePackage::getTag_ValueList__valueElement() const
{
	return e4c::tag< ValueList__valueElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getValueList__valueElement() const
{
	return m_ValueList__valueElement;
}

e4c::tag_t CodePackage::getTag_StorableUnit__kind() const
{
	return e4c::tag< StorableUnit__kind_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getStorableUnit__kind() const
{
	return m_StorableUnit__kind;
}

e4c::tag_t CodePackage::getTag_MemberUnit__export() const
{
	return e4c::tag< MemberUnit__export_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getMemberUnit__export() const
{
	return m_MemberUnit__export;
}

e4c::tag_t CodePackage::getTag_ParameterUnit__kind() const
{
	return e4c::tag< ParameterUnit__kind_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getParameterUnit__kind() const
{
	return m_ParameterUnit__kind;
}

e4c::tag_t CodePackage::getTag_ParameterUnit__pos() const
{
	return e4c::tag< ParameterUnit__pos_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getParameterUnit__pos() const
{
	return m_ParameterUnit__pos;
}

e4c::tag_t CodePackage::getTag_SequenceType__size() const
{
	return e4c::tag< SequenceType__size_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getSequenceType__size() const
{
	return m_SequenceType__size;
}

e4c::tag_t CodePackage::getTag_BagType__size() const
{
	return e4c::tag< BagType__size_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getBagType__size() const
{
	return m_BagType__size;
}

e4c::tag_t CodePackage::getTag_SetType__size() const
{
	return e4c::tag< SetType__size_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getSetType__size() const
{
	return m_SetType__size;
}

e4c::tag_t CodePackage::getTag_CodeRelationship__to() const
{
	return e4c::tag< CodeRelationship__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getCodeRelationship__to() const
{
	return m_CodeRelationship__to;
}

e4c::tag_t CodePackage::getTag_CodeRelationship__from() const
{
	return e4c::tag< CodeRelationship__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getCodeRelationship__from() const
{
	return m_CodeRelationship__from;
}

e4c::tag_t CodePackage::getTag_Imports__to() const
{
	return e4c::tag< Imports__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getImports__to() const
{
	return m_Imports__to;
}

e4c::tag_t CodePackage::getTag_Imports__from() const
{
	return e4c::tag< Imports__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getImports__from() const
{
	return m_Imports__from;
}

e4c::tag_t CodePackage::getTag_ParameterTo__to() const
{
	return e4c::tag< ParameterTo__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getParameterTo__to() const
{
	return m_ParameterTo__to;
}

e4c::tag_t CodePackage::getTag_ParameterTo__from() const
{
	return e4c::tag< ParameterTo__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getParameterTo__from() const
{
	return m_ParameterTo__from;
}

e4c::tag_t CodePackage::getTag_PreprocessorDirective__codeElement() const
{
	return e4c::tag< PreprocessorDirective__codeElement_tag >::get();
}

ecore::EReference_ptr CodePackage::getPreprocessorDirective__codeElement() const
{
	return m_PreprocessorDirective__codeElement;
}

e4c::tag_t CodePackage::getTag_MacroUnit__kind() const
{
	return e4c::tag< MacroUnit__kind_tag >::get();
}

ecore::EAttribute_ptr CodePackage::getMacroUnit__kind() const
{
	return m_MacroUnit__kind;
}

e4c::tag_t CodePackage::getTag_VariantTo__to() const
{
	return e4c::tag< VariantTo__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getVariantTo__to() const
{
	return m_VariantTo__to;
}

e4c::tag_t CodePackage::getTag_VariantTo__from() const
{
	return e4c::tag< VariantTo__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getVariantTo__from() const
{
	return m_VariantTo__from;
}

e4c::tag_t CodePackage::getTag_Expands__to() const
{
	return e4c::tag< Expands__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getExpands__to() const
{
	return m_Expands__to;
}

e4c::tag_t CodePackage::getTag_Expands__from() const
{
	return e4c::tag< Expands__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getExpands__from() const
{
	return m_Expands__from;
}

e4c::tag_t CodePackage::getTag_Redefines__to() const
{
	return e4c::tag< Redefines__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getRedefines__to() const
{
	return m_Redefines__to;
}

e4c::tag_t CodePackage::getTag_Redefines__from() const
{
	return e4c::tag< Redefines__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getRedefines__from() const
{
	return m_Redefines__from;
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__to() const
{
	return e4c::tag< GeneratedFrom__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getGeneratedFrom__to() const
{
	return m_GeneratedFrom__to;
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__from() const
{
	return e4c::tag< GeneratedFrom__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getGeneratedFrom__from() const
{
	return m_GeneratedFrom__from;
}

e4c::tag_t CodePackage::getTag_Includes__to() const
{
	return e4c::tag< Includes__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getIncludes__to() const
{
	return m_Includes__to;
}

e4c::tag_t CodePackage::getTag_Includes__from() const
{
	return e4c::tag< Includes__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getIncludes__from() const
{
	return m_Includes__from;
}

e4c::tag_t CodePackage::getTag_HasValue__to() const
{
	return e4c::tag< HasValue__to_tag >::get();
}

ecore::EReference_ptr CodePackage::getHasValue__to() const
{
	return m_HasValue__to;
}

e4c::tag_t CodePackage::getTag_HasValue__from() const
{
	return e4c::tag< HasValue__from_tag >::get();
}

ecore::EReference_ptr CodePackage::getHasValue__from() const
{
	return m_HasValue__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_code()
{
	return ::kdm::code::CodePackage::_instance();
}
