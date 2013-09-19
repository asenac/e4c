#include "CodePackage.hpp"
#include "CodeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::code;

CodePackage::CodePackage()
{
	m_eFactoryInstance = CodeFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	// MethodKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(MethodKind);
	    ee->setEPackage(this);
	    ee->setName("MethodKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("operator");
	        el->setValue(MethodKind::operator);
	        el->setLiteral("operator");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("destructor");
	        el->setValue(MethodKind::destructor);
	        el->setLiteral("destructor");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("method");
	        el->setValue(MethodKind::method);
	        el->setLiteral("method");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("abstract");
	        el->setValue(MethodKind::abstract);
	        el->setLiteral("abstract");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("virtual");
	        el->setValue(MethodKind::virtual);
	        el->setLiteral("virtual");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(MethodKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("constructor");
	        el->setValue(MethodKind::constructor);
	        el->setLiteral("constructor");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// ParameterKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(ParameterKind);
	    ee->setEPackage(this);
	    ee->setName("ParameterKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("byReference");
	        el->setValue(ParameterKind::byReference);
	        el->setLiteral("byReference");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(ParameterKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("exception");
	        el->setValue(ParameterKind::exception);
	        el->setLiteral("exception");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("return");
	        el->setValue(ParameterKind::return);
	        el->setLiteral("return");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("byValue");
	        el->setValue(ParameterKind::byValue);
	        el->setLiteral("byValue");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("catchall");
	        el->setValue(ParameterKind::catchall);
	        el->setLiteral("catchall");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("byName");
	        el->setValue(ParameterKind::byName);
	        el->setLiteral("byName");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("throws");
	        el->setValue(ParameterKind::throws);
	        el->setLiteral("throws");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("variadic");
	        el->setValue(ParameterKind::variadic);
	        el->setLiteral("variadic");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// ExportKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(ExportKind);
	    ee->setEPackage(this);
	    ee->setName("ExportKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("private");
	        el->setValue(ExportKind::private);
	        el->setLiteral("private");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(ExportKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("public");
	        el->setValue(ExportKind::public);
	        el->setLiteral("public");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("protected");
	        el->setValue(ExportKind::protected);
	        el->setLiteral("protected");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("final");
	        el->setValue(ExportKind::final);
	        el->setLiteral("final");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// StorableKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(StorableKind);
	    ee->setEPackage(this);
	    ee->setName("StorableKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("global");
	        el->setValue(StorableKind::global);
	        el->setLiteral("global");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("external");
	        el->setValue(StorableKind::external);
	        el->setLiteral("external");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("static");
	        el->setValue(StorableKind::static);
	        el->setLiteral("static");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(StorableKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("register");
	        el->setValue(StorableKind::register);
	        el->setLiteral("register");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("local");
	        el->setValue(StorableKind::local);
	        el->setLiteral("local");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// CallableKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(CallableKind);
	    ee->setEPackage(this);
	    ee->setName("CallableKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("external");
	        el->setValue(CallableKind::external);
	        el->setLiteral("external");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("regular");
	        el->setValue(CallableKind::regular);
	        el->setLiteral("regular");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("stored");
	        el->setValue(CallableKind::stored);
	        el->setLiteral("stored");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("operator");
	        el->setValue(CallableKind::operator);
	        el->setLiteral("operator");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(CallableKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
	// MacroKind
	{
	    ::ecore::EEnum_ptr ee = ecoreFactory->createEEnum();
	    ee->setClassifierID(MacroKind);
	    ee->setEPackage(this);
	    ee->setName("MacroKind");
	    ee->setSerializable(true);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("external");
	        el->setValue(MacroKind::external);
	        el->setLiteral("external");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("unknown");
	        el->setValue(MacroKind::unknown);
	        el->setLiteral("unknown");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("option");
	        el->setValue(MacroKind::option);
	        el->setLiteral("option");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("undefined");
	        el->setValue(MacroKind::undefined);
	        el->setLiteral("undefined");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
	    {
	        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
	        el->setName("regular");
	        el->setValue(MacroKind::regular);
	        el->setLiteral("regular");
	        el->setEEnum(ee);
	        ee->getELiterals().push_back(el);
	    }
	    m_Classifiers.push_back(ee);
    }
}

const CodePackage_ptr CodePackage::_instance()
{
	static CodePackage __instance;
	return &__instance;
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement() const
{
	return e4c::tag< AbstractCodeElement >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeItem() const
{
	return e4c::tag< CodeItem >::get();
}
 
e4c::tag_t CodePackage::getTag_ComputationalObject() const
{
	return e4c::tag< ComputationalObject >::get();
}
 
e4c::tag_t CodePackage::getTag_ControlElement() const
{
	return e4c::tag< ControlElement >::get();
}
 
e4c::tag_t CodePackage::getTag_MethodUnit() const
{
	return e4c::tag< MethodUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_Module() const
{
	return e4c::tag< Module >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeAssembly() const
{
	return e4c::tag< CodeAssembly >::get();
}
 
e4c::tag_t CodePackage::getTag_CallableUnit() const
{
	return e4c::tag< CallableUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_Datatype() const
{
	return e4c::tag< Datatype >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateUnit() const
{
	return e4c::tag< TemplateUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateParameter() const
{
	return e4c::tag< TemplateParameter >::get();
}
 
e4c::tag_t CodePackage::getTag_AbstractCodeRelationship() const
{
	return e4c::tag< AbstractCodeRelationship >::get();
}
 
e4c::tag_t CodePackage::getTag_InstanceOf() const
{
	return e4c::tag< InstanceOf >::get();
}
 
e4c::tag_t CodePackage::getTag_CompilationUnit() const
{
	return e4c::tag< CompilationUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeModel() const
{
	return e4c::tag< CodeModel >::get();
}
 
e4c::tag_t CodePackage::getTag_DerivedType() const
{
	return e4c::tag< DerivedType >::get();
}
 
e4c::tag_t CodePackage::getTag_ArrayType() const
{
	return e4c::tag< ArrayType >::get();
}
 
e4c::tag_t CodePackage::getTag_PrimitiveType() const
{
	return e4c::tag< PrimitiveType >::get();
}
 
e4c::tag_t CodePackage::getTag_BooleanType() const
{
	return e4c::tag< BooleanType >::get();
}
 
e4c::tag_t CodePackage::getTag_CharType() const
{
	return e4c::tag< CharType >::get();
}
 
e4c::tag_t CodePackage::getTag_ClassUnit() const
{
	return e4c::tag< ClassUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_CompositeType() const
{
	return e4c::tag< CompositeType >::get();
}
 
e4c::tag_t CodePackage::getTag_RecordType() const
{
	return e4c::tag< RecordType >::get();
}
 
e4c::tag_t CodePackage::getTag_EnumeratedType() const
{
	return e4c::tag< EnumeratedType >::get();
}
 
e4c::tag_t CodePackage::getTag_Extends() const
{
	return e4c::tag< Extends >::get();
}
 
e4c::tag_t CodePackage::getTag_ScaledType() const
{
	return e4c::tag< ScaledType >::get();
}
 
e4c::tag_t CodePackage::getTag_FloatType() const
{
	return e4c::tag< FloatType >::get();
}
 
e4c::tag_t CodePackage::getTag_HasType() const
{
	return e4c::tag< HasType >::get();
}
 
e4c::tag_t CodePackage::getTag_ImplementationOf() const
{
	return e4c::tag< ImplementationOf >::get();
}
 
e4c::tag_t CodePackage::getTag_Implements() const
{
	return e4c::tag< Implements >::get();
}
 
e4c::tag_t CodePackage::getTag_IntegerType() const
{
	return e4c::tag< IntegerType >::get();
}
 
e4c::tag_t CodePackage::getTag_InterfaceUnit() const
{
	return e4c::tag< InterfaceUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_PointerType() const
{
	return e4c::tag< PointerType >::get();
}
 
e4c::tag_t CodePackage::getTag_DefinedType() const
{
	return e4c::tag< DefinedType >::get();
}
 
e4c::tag_t CodePackage::getTag_TypeUnit() const
{
	return e4c::tag< TypeUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_RangeType() const
{
	return e4c::tag< RangeType >::get();
}
 
e4c::tag_t CodePackage::getTag_Signature() const
{
	return e4c::tag< Signature >::get();
}
 
e4c::tag_t CodePackage::getTag_DataElement() const
{
	return e4c::tag< DataElement >::get();
}
 
e4c::tag_t CodePackage::getTag_StringType() const
{
	return e4c::tag< StringType >::get();
}
 
e4c::tag_t CodePackage::getTag_ChoiceType() const
{
	return e4c::tag< ChoiceType >::get();
}
 
e4c::tag_t CodePackage::getTag_NamespaceUnit() const
{
	return e4c::tag< NamespaceUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_VisibleIn() const
{
	return e4c::tag< VisibleIn >::get();
}
 
e4c::tag_t CodePackage::getTag_CommentUnit() const
{
	return e4c::tag< CommentUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_SharedUnit() const
{
	return e4c::tag< SharedUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_DecimalType() const
{
	return e4c::tag< DecimalType >::get();
}
 
e4c::tag_t CodePackage::getTag_DateType() const
{
	return e4c::tag< DateType >::get();
}
 
e4c::tag_t CodePackage::getTag_TimeType() const
{
	return e4c::tag< TimeType >::get();
}
 
e4c::tag_t CodePackage::getTag_MethodKind() const
{
	return e4c::tag< MethodKind >::get();
}
 
e4c::tag_t CodePackage::getTag_VoidType() const
{
	return e4c::tag< VoidType >::get();
}
 
e4c::tag_t CodePackage::getTag_ValueElement() const
{
	return e4c::tag< ValueElement >::get();
}
 
e4c::tag_t CodePackage::getTag_Value() const
{
	return e4c::tag< Value >::get();
}
 
e4c::tag_t CodePackage::getTag_ValueList() const
{
	return e4c::tag< ValueList >::get();
}
 
e4c::tag_t CodePackage::getTag_StorableUnit() const
{
	return e4c::tag< StorableUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_MemberUnit() const
{
	return e4c::tag< MemberUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterUnit() const
{
	return e4c::tag< ParameterUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ItemUnit() const
{
	return e4c::tag< ItemUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_IndexUnit() const
{
	return e4c::tag< IndexUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_SynonymType() const
{
	return e4c::tag< SynonymType >::get();
}
 
e4c::tag_t CodePackage::getTag_SequenceType() const
{
	return e4c::tag< SequenceType >::get();
}
 
e4c::tag_t CodePackage::getTag_BagType() const
{
	return e4c::tag< BagType >::get();
}
 
e4c::tag_t CodePackage::getTag_SetType() const
{
	return e4c::tag< SetType >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeElement() const
{
	return e4c::tag< CodeElement >::get();
}
 
e4c::tag_t CodePackage::getTag_CodeRelationship() const
{
	return e4c::tag< CodeRelationship >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterKind() const
{
	return e4c::tag< ParameterKind >::get();
}
 
e4c::tag_t CodePackage::getTag_ExportKind() const
{
	return e4c::tag< ExportKind >::get();
}
 
e4c::tag_t CodePackage::getTag_LanguageUnit() const
{
	return e4c::tag< LanguageUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_OrdinalType() const
{
	return e4c::tag< OrdinalType >::get();
}
 
e4c::tag_t CodePackage::getTag_BitstringType() const
{
	return e4c::tag< BitstringType >::get();
}
 
e4c::tag_t CodePackage::getTag_OctetType() const
{
	return e4c::tag< OctetType >::get();
}
 
e4c::tag_t CodePackage::getTag_OctetstringType() const
{
	return e4c::tag< OctetstringType >::get();
}
 
e4c::tag_t CodePackage::getTag_BitType() const
{
	return e4c::tag< BitType >::get();
}
 
e4c::tag_t CodePackage::getTag_StorableKind() const
{
	return e4c::tag< StorableKind >::get();
}
 
e4c::tag_t CodePackage::getTag_CallableKind() const
{
	return e4c::tag< CallableKind >::get();
}
 
e4c::tag_t CodePackage::getTag_Imports() const
{
	return e4c::tag< Imports >::get();
}
 
e4c::tag_t CodePackage::getTag_Package() const
{
	return e4c::tag< Package >::get();
}
 
e4c::tag_t CodePackage::getTag_ParameterTo() const
{
	return e4c::tag< ParameterTo >::get();
}
 
e4c::tag_t CodePackage::getTag_TemplateType() const
{
	return e4c::tag< TemplateType >::get();
}
 
e4c::tag_t CodePackage::getTag_PreprocessorDirective() const
{
	return e4c::tag< PreprocessorDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroDirective() const
{
	return e4c::tag< MacroDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroUnit() const
{
	return e4c::tag< MacroUnit >::get();
}
 
e4c::tag_t CodePackage::getTag_ConditionalDirective() const
{
	return e4c::tag< ConditionalDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_IncludeDirective() const
{
	return e4c::tag< IncludeDirective >::get();
}
 
e4c::tag_t CodePackage::getTag_MacroKind() const
{
	return e4c::tag< MacroKind >::get();
}
 
e4c::tag_t CodePackage::getTag_VariantTo() const
{
	return e4c::tag< VariantTo >::get();
}
 
e4c::tag_t CodePackage::getTag_Expands() const
{
	return e4c::tag< Expands >::get();
}
 
e4c::tag_t CodePackage::getTag_Redefines() const
{
	return e4c::tag< Redefines >::get();
}
 
e4c::tag_t CodePackage::getTag_GeneratedFrom() const
{
	return e4c::tag< GeneratedFrom >::get();
}
 
e4c::tag_t CodePackage::getTag_Includes() const
{
	return e4c::tag< Includes >::get();
}
 
e4c::tag_t CodePackage::getTag_HasValue() const
{
	return e4c::tag< HasValue >::get();
}
 
e4c::tag_t CodePackage::getTag_AbstractCodeElement__source() const
{
	return e4c::tag< AbstractCodeElement__source_tag >::get();
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__comment() const
{
	return e4c::tag< AbstractCodeElement__comment_tag >::get();
}

e4c::tag_t CodePackage::getTag_AbstractCodeElement__codeRelation() const
{
	return e4c::tag< AbstractCodeElement__codeRelation_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__type() const
{
	return e4c::tag< ControlElement__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__entryFlow() const
{
	return e4c::tag< ControlElement__entryFlow_tag >::get();
}

e4c::tag_t CodePackage::getTag_ControlElement__codeElement() const
{
	return e4c::tag< ControlElement__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_MethodUnit__kind() const
{
	return e4c::tag< MethodUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_MethodUnit__export() const
{
	return e4c::tag< MethodUnit__export_tag >::get();
}

e4c::tag_t CodePackage::getTag_Module__codeElement() const
{
	return e4c::tag< Module__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_CallableUnit__kind() const
{
	return e4c::tag< CallableUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_TemplateUnit__codeElement() const
{
	return e4c::tag< TemplateUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_InstanceOf__to() const
{
	return e4c::tag< InstanceOf__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_InstanceOf__from() const
{
	return e4c::tag< InstanceOf__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeModel__codeElement() const
{
	return e4c::tag< CodeModel__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_DerivedType__itemUnit() const
{
	return e4c::tag< DerivedType__itemUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_ArrayType__size() const
{
	return e4c::tag< ArrayType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_ArrayType__indexUnit() const
{
	return e4c::tag< ArrayType__indexUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_ClassUnit__isAbstract() const
{
	return e4c::tag< ClassUnit__isAbstract_tag >::get();
}

e4c::tag_t CodePackage::getTag_ClassUnit__codeElement() const
{
	return e4c::tag< ClassUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_CompositeType__itemUnit() const
{
	return e4c::tag< CompositeType__itemUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_EnumeratedType__value() const
{
	return e4c::tag< EnumeratedType__value_tag >::get();
}

e4c::tag_t CodePackage::getTag_Extends__to() const
{
	return e4c::tag< Extends__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Extends__from() const
{
	return e4c::tag< Extends__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasType__to() const
{
	return e4c::tag< HasType__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasType__from() const
{
	return e4c::tag< HasType__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_ImplementationOf__to() const
{
	return e4c::tag< ImplementationOf__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_ImplementationOf__from() const
{
	return e4c::tag< ImplementationOf__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Implements__to() const
{
	return e4c::tag< Implements__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Implements__from() const
{
	return e4c::tag< Implements__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_InterfaceUnit__codeElement() const
{
	return e4c::tag< InterfaceUnit__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_DefinedType__type() const
{
	return e4c::tag< DefinedType__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_DefinedType__codeElement() const
{
	return e4c::tag< DefinedType__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_RangeType__lower() const
{
	return e4c::tag< RangeType__lower_tag >::get();
}

e4c::tag_t CodePackage::getTag_RangeType__upper() const
{
	return e4c::tag< RangeType__upper_tag >::get();
}

e4c::tag_t CodePackage::getTag_Signature__parameterUnit() const
{
	return e4c::tag< Signature__parameterUnit_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__type() const
{
	return e4c::tag< DataElement__type_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__ext() const
{
	return e4c::tag< DataElement__ext_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__size() const
{
	return e4c::tag< DataElement__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_DataElement__codeElement() const
{
	return e4c::tag< DataElement__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_NamespaceUnit__groupedCode() const
{
	return e4c::tag< NamespaceUnit__groupedCode_tag >::get();
}

e4c::tag_t CodePackage::getTag_VisibleIn__to() const
{
	return e4c::tag< VisibleIn__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_VisibleIn__from() const
{
	return e4c::tag< VisibleIn__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_CommentUnit__text() const
{
	return e4c::tag< CommentUnit__text_tag >::get();
}

e4c::tag_t CodePackage::getTag_ValueList__valueElement() const
{
	return e4c::tag< ValueList__valueElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_StorableUnit__kind() const
{
	return e4c::tag< StorableUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_MemberUnit__export() const
{
	return e4c::tag< MemberUnit__export_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterUnit__kind() const
{
	return e4c::tag< ParameterUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterUnit__pos() const
{
	return e4c::tag< ParameterUnit__pos_tag >::get();
}

e4c::tag_t CodePackage::getTag_SequenceType__size() const
{
	return e4c::tag< SequenceType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_BagType__size() const
{
	return e4c::tag< BagType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_SetType__size() const
{
	return e4c::tag< SetType__size_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeRelationship__to() const
{
	return e4c::tag< CodeRelationship__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_CodeRelationship__from() const
{
	return e4c::tag< CodeRelationship__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Imports__to() const
{
	return e4c::tag< Imports__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Imports__from() const
{
	return e4c::tag< Imports__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterTo__to() const
{
	return e4c::tag< ParameterTo__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_ParameterTo__from() const
{
	return e4c::tag< ParameterTo__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_PreprocessorDirective__codeElement() const
{
	return e4c::tag< PreprocessorDirective__codeElement_tag >::get();
}

e4c::tag_t CodePackage::getTag_MacroUnit__kind() const
{
	return e4c::tag< MacroUnit__kind_tag >::get();
}

e4c::tag_t CodePackage::getTag_VariantTo__to() const
{
	return e4c::tag< VariantTo__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_VariantTo__from() const
{
	return e4c::tag< VariantTo__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Expands__to() const
{
	return e4c::tag< Expands__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Expands__from() const
{
	return e4c::tag< Expands__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Redefines__to() const
{
	return e4c::tag< Redefines__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Redefines__from() const
{
	return e4c::tag< Redefines__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__to() const
{
	return e4c::tag< GeneratedFrom__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_GeneratedFrom__from() const
{
	return e4c::tag< GeneratedFrom__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_Includes__to() const
{
	return e4c::tag< Includes__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_Includes__from() const
{
	return e4c::tag< Includes__from_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasValue__to() const
{
	return e4c::tag< HasValue__to_tag >::get();
}

e4c::tag_t CodePackage::getTag_HasValue__from() const
{
	return e4c::tag< HasValue__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_code()
{
	return ::kdm::code::CodePackage::_instance();
}
