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
	
	::ecore::EClass_ptr AbstractCodeElement_ = ecoreFactory->createEClass();
	AbstractCodeElement_->setName("AbstractCodeElement");
	// m_eClassifiers.push_back(AbstractCodeElement_);
	::ecore::EClass_ptr CodeItem_ = ecoreFactory->createEClass();
	CodeItem_->setName("CodeItem");
	// m_eClassifiers.push_back(CodeItem_);
	::ecore::EClass_ptr ComputationalObject_ = ecoreFactory->createEClass();
	ComputationalObject_->setName("ComputationalObject");
	// m_eClassifiers.push_back(ComputationalObject_);
	::ecore::EClass_ptr ControlElement_ = ecoreFactory->createEClass();
	ControlElement_->setName("ControlElement");
	// m_eClassifiers.push_back(ControlElement_);
	::ecore::EClass_ptr MethodUnit_ = ecoreFactory->createEClass();
	MethodUnit_->setName("MethodUnit");
	// m_eClassifiers.push_back(MethodUnit_);
	::ecore::EClass_ptr Module_ = ecoreFactory->createEClass();
	Module_->setName("Module");
	// m_eClassifiers.push_back(Module_);
	::ecore::EClass_ptr CodeAssembly_ = ecoreFactory->createEClass();
	CodeAssembly_->setName("CodeAssembly");
	// m_eClassifiers.push_back(CodeAssembly_);
	::ecore::EClass_ptr CallableUnit_ = ecoreFactory->createEClass();
	CallableUnit_->setName("CallableUnit");
	// m_eClassifiers.push_back(CallableUnit_);
	::ecore::EClass_ptr Datatype_ = ecoreFactory->createEClass();
	Datatype_->setName("Datatype");
	// m_eClassifiers.push_back(Datatype_);
	::ecore::EClass_ptr TemplateUnit_ = ecoreFactory->createEClass();
	TemplateUnit_->setName("TemplateUnit");
	// m_eClassifiers.push_back(TemplateUnit_);
	::ecore::EClass_ptr TemplateParameter_ = ecoreFactory->createEClass();
	TemplateParameter_->setName("TemplateParameter");
	// m_eClassifiers.push_back(TemplateParameter_);
	::ecore::EClass_ptr AbstractCodeRelationship_ = ecoreFactory->createEClass();
	AbstractCodeRelationship_->setName("AbstractCodeRelationship");
	// m_eClassifiers.push_back(AbstractCodeRelationship_);
	::ecore::EClass_ptr InstanceOf_ = ecoreFactory->createEClass();
	InstanceOf_->setName("InstanceOf");
	// m_eClassifiers.push_back(InstanceOf_);
	::ecore::EClass_ptr CompilationUnit_ = ecoreFactory->createEClass();
	CompilationUnit_->setName("CompilationUnit");
	// m_eClassifiers.push_back(CompilationUnit_);
	::ecore::EClass_ptr CodeModel_ = ecoreFactory->createEClass();
	CodeModel_->setName("CodeModel");
	// m_eClassifiers.push_back(CodeModel_);
	::ecore::EClass_ptr DerivedType_ = ecoreFactory->createEClass();
	DerivedType_->setName("DerivedType");
	// m_eClassifiers.push_back(DerivedType_);
	::ecore::EClass_ptr ArrayType_ = ecoreFactory->createEClass();
	ArrayType_->setName("ArrayType");
	// m_eClassifiers.push_back(ArrayType_);
	::ecore::EClass_ptr PrimitiveType_ = ecoreFactory->createEClass();
	PrimitiveType_->setName("PrimitiveType");
	// m_eClassifiers.push_back(PrimitiveType_);
	::ecore::EClass_ptr BooleanType_ = ecoreFactory->createEClass();
	BooleanType_->setName("BooleanType");
	// m_eClassifiers.push_back(BooleanType_);
	::ecore::EClass_ptr CharType_ = ecoreFactory->createEClass();
	CharType_->setName("CharType");
	// m_eClassifiers.push_back(CharType_);
	::ecore::EClass_ptr ClassUnit_ = ecoreFactory->createEClass();
	ClassUnit_->setName("ClassUnit");
	// m_eClassifiers.push_back(ClassUnit_);
	::ecore::EClass_ptr CompositeType_ = ecoreFactory->createEClass();
	CompositeType_->setName("CompositeType");
	// m_eClassifiers.push_back(CompositeType_);
	::ecore::EClass_ptr RecordType_ = ecoreFactory->createEClass();
	RecordType_->setName("RecordType");
	// m_eClassifiers.push_back(RecordType_);
	::ecore::EClass_ptr EnumeratedType_ = ecoreFactory->createEClass();
	EnumeratedType_->setName("EnumeratedType");
	// m_eClassifiers.push_back(EnumeratedType_);
	::ecore::EClass_ptr Extends_ = ecoreFactory->createEClass();
	Extends_->setName("Extends");
	// m_eClassifiers.push_back(Extends_);
	::ecore::EClass_ptr ScaledType_ = ecoreFactory->createEClass();
	ScaledType_->setName("ScaledType");
	// m_eClassifiers.push_back(ScaledType_);
	::ecore::EClass_ptr FloatType_ = ecoreFactory->createEClass();
	FloatType_->setName("FloatType");
	// m_eClassifiers.push_back(FloatType_);
	::ecore::EClass_ptr HasType_ = ecoreFactory->createEClass();
	HasType_->setName("HasType");
	// m_eClassifiers.push_back(HasType_);
	::ecore::EClass_ptr ImplementationOf_ = ecoreFactory->createEClass();
	ImplementationOf_->setName("ImplementationOf");
	// m_eClassifiers.push_back(ImplementationOf_);
	::ecore::EClass_ptr Implements_ = ecoreFactory->createEClass();
	Implements_->setName("Implements");
	// m_eClassifiers.push_back(Implements_);
	::ecore::EClass_ptr IntegerType_ = ecoreFactory->createEClass();
	IntegerType_->setName("IntegerType");
	// m_eClassifiers.push_back(IntegerType_);
	::ecore::EClass_ptr InterfaceUnit_ = ecoreFactory->createEClass();
	InterfaceUnit_->setName("InterfaceUnit");
	// m_eClassifiers.push_back(InterfaceUnit_);
	::ecore::EClass_ptr PointerType_ = ecoreFactory->createEClass();
	PointerType_->setName("PointerType");
	// m_eClassifiers.push_back(PointerType_);
	::ecore::EClass_ptr DefinedType_ = ecoreFactory->createEClass();
	DefinedType_->setName("DefinedType");
	// m_eClassifiers.push_back(DefinedType_);
	::ecore::EClass_ptr TypeUnit_ = ecoreFactory->createEClass();
	TypeUnit_->setName("TypeUnit");
	// m_eClassifiers.push_back(TypeUnit_);
	::ecore::EClass_ptr RangeType_ = ecoreFactory->createEClass();
	RangeType_->setName("RangeType");
	// m_eClassifiers.push_back(RangeType_);
	::ecore::EClass_ptr Signature_ = ecoreFactory->createEClass();
	Signature_->setName("Signature");
	// m_eClassifiers.push_back(Signature_);
	::ecore::EClass_ptr DataElement_ = ecoreFactory->createEClass();
	DataElement_->setName("DataElement");
	// m_eClassifiers.push_back(DataElement_);
	::ecore::EClass_ptr StringType_ = ecoreFactory->createEClass();
	StringType_->setName("StringType");
	// m_eClassifiers.push_back(StringType_);
	::ecore::EClass_ptr ChoiceType_ = ecoreFactory->createEClass();
	ChoiceType_->setName("ChoiceType");
	// m_eClassifiers.push_back(ChoiceType_);
	::ecore::EClass_ptr NamespaceUnit_ = ecoreFactory->createEClass();
	NamespaceUnit_->setName("NamespaceUnit");
	// m_eClassifiers.push_back(NamespaceUnit_);
	::ecore::EClass_ptr VisibleIn_ = ecoreFactory->createEClass();
	VisibleIn_->setName("VisibleIn");
	// m_eClassifiers.push_back(VisibleIn_);
	::ecore::EClass_ptr CommentUnit_ = ecoreFactory->createEClass();
	CommentUnit_->setName("CommentUnit");
	// m_eClassifiers.push_back(CommentUnit_);
	::ecore::EClass_ptr SharedUnit_ = ecoreFactory->createEClass();
	SharedUnit_->setName("SharedUnit");
	// m_eClassifiers.push_back(SharedUnit_);
	::ecore::EClass_ptr DecimalType_ = ecoreFactory->createEClass();
	DecimalType_->setName("DecimalType");
	// m_eClassifiers.push_back(DecimalType_);
	::ecore::EClass_ptr DateType_ = ecoreFactory->createEClass();
	DateType_->setName("DateType");
	// m_eClassifiers.push_back(DateType_);
	::ecore::EClass_ptr TimeType_ = ecoreFactory->createEClass();
	TimeType_->setName("TimeType");
	// m_eClassifiers.push_back(TimeType_);
	::ecore::EClass_ptr VoidType_ = ecoreFactory->createEClass();
	VoidType_->setName("VoidType");
	// m_eClassifiers.push_back(VoidType_);
	::ecore::EClass_ptr ValueElement_ = ecoreFactory->createEClass();
	ValueElement_->setName("ValueElement");
	// m_eClassifiers.push_back(ValueElement_);
	::ecore::EClass_ptr Value_ = ecoreFactory->createEClass();
	Value_->setName("Value");
	// m_eClassifiers.push_back(Value_);
	::ecore::EClass_ptr ValueList_ = ecoreFactory->createEClass();
	ValueList_->setName("ValueList");
	// m_eClassifiers.push_back(ValueList_);
	::ecore::EClass_ptr StorableUnit_ = ecoreFactory->createEClass();
	StorableUnit_->setName("StorableUnit");
	// m_eClassifiers.push_back(StorableUnit_);
	::ecore::EClass_ptr MemberUnit_ = ecoreFactory->createEClass();
	MemberUnit_->setName("MemberUnit");
	// m_eClassifiers.push_back(MemberUnit_);
	::ecore::EClass_ptr ParameterUnit_ = ecoreFactory->createEClass();
	ParameterUnit_->setName("ParameterUnit");
	// m_eClassifiers.push_back(ParameterUnit_);
	::ecore::EClass_ptr ItemUnit_ = ecoreFactory->createEClass();
	ItemUnit_->setName("ItemUnit");
	// m_eClassifiers.push_back(ItemUnit_);
	::ecore::EClass_ptr IndexUnit_ = ecoreFactory->createEClass();
	IndexUnit_->setName("IndexUnit");
	// m_eClassifiers.push_back(IndexUnit_);
	::ecore::EClass_ptr SynonymType_ = ecoreFactory->createEClass();
	SynonymType_->setName("SynonymType");
	// m_eClassifiers.push_back(SynonymType_);
	::ecore::EClass_ptr SequenceType_ = ecoreFactory->createEClass();
	SequenceType_->setName("SequenceType");
	// m_eClassifiers.push_back(SequenceType_);
	::ecore::EClass_ptr BagType_ = ecoreFactory->createEClass();
	BagType_->setName("BagType");
	// m_eClassifiers.push_back(BagType_);
	::ecore::EClass_ptr SetType_ = ecoreFactory->createEClass();
	SetType_->setName("SetType");
	// m_eClassifiers.push_back(SetType_);
	::ecore::EClass_ptr CodeElement_ = ecoreFactory->createEClass();
	CodeElement_->setName("CodeElement");
	// m_eClassifiers.push_back(CodeElement_);
	::ecore::EClass_ptr CodeRelationship_ = ecoreFactory->createEClass();
	CodeRelationship_->setName("CodeRelationship");
	// m_eClassifiers.push_back(CodeRelationship_);
	::ecore::EClass_ptr LanguageUnit_ = ecoreFactory->createEClass();
	LanguageUnit_->setName("LanguageUnit");
	// m_eClassifiers.push_back(LanguageUnit_);
	::ecore::EClass_ptr OrdinalType_ = ecoreFactory->createEClass();
	OrdinalType_->setName("OrdinalType");
	// m_eClassifiers.push_back(OrdinalType_);
	::ecore::EClass_ptr BitstringType_ = ecoreFactory->createEClass();
	BitstringType_->setName("BitstringType");
	// m_eClassifiers.push_back(BitstringType_);
	::ecore::EClass_ptr OctetType_ = ecoreFactory->createEClass();
	OctetType_->setName("OctetType");
	// m_eClassifiers.push_back(OctetType_);
	::ecore::EClass_ptr OctetstringType_ = ecoreFactory->createEClass();
	OctetstringType_->setName("OctetstringType");
	// m_eClassifiers.push_back(OctetstringType_);
	::ecore::EClass_ptr BitType_ = ecoreFactory->createEClass();
	BitType_->setName("BitType");
	// m_eClassifiers.push_back(BitType_);
	::ecore::EClass_ptr Imports_ = ecoreFactory->createEClass();
	Imports_->setName("Imports");
	// m_eClassifiers.push_back(Imports_);
	::ecore::EClass_ptr Package_ = ecoreFactory->createEClass();
	Package_->setName("Package");
	// m_eClassifiers.push_back(Package_);
	::ecore::EClass_ptr ParameterTo_ = ecoreFactory->createEClass();
	ParameterTo_->setName("ParameterTo");
	// m_eClassifiers.push_back(ParameterTo_);
	::ecore::EClass_ptr TemplateType_ = ecoreFactory->createEClass();
	TemplateType_->setName("TemplateType");
	// m_eClassifiers.push_back(TemplateType_);
	::ecore::EClass_ptr PreprocessorDirective_ = ecoreFactory->createEClass();
	PreprocessorDirective_->setName("PreprocessorDirective");
	// m_eClassifiers.push_back(PreprocessorDirective_);
	::ecore::EClass_ptr MacroDirective_ = ecoreFactory->createEClass();
	MacroDirective_->setName("MacroDirective");
	// m_eClassifiers.push_back(MacroDirective_);
	::ecore::EClass_ptr MacroUnit_ = ecoreFactory->createEClass();
	MacroUnit_->setName("MacroUnit");
	// m_eClassifiers.push_back(MacroUnit_);
	::ecore::EClass_ptr ConditionalDirective_ = ecoreFactory->createEClass();
	ConditionalDirective_->setName("ConditionalDirective");
	// m_eClassifiers.push_back(ConditionalDirective_);
	::ecore::EClass_ptr IncludeDirective_ = ecoreFactory->createEClass();
	IncludeDirective_->setName("IncludeDirective");
	// m_eClassifiers.push_back(IncludeDirective_);
	::ecore::EClass_ptr VariantTo_ = ecoreFactory->createEClass();
	VariantTo_->setName("VariantTo");
	// m_eClassifiers.push_back(VariantTo_);
	::ecore::EClass_ptr Expands_ = ecoreFactory->createEClass();
	Expands_->setName("Expands");
	// m_eClassifiers.push_back(Expands_);
	::ecore::EClass_ptr Redefines_ = ecoreFactory->createEClass();
	Redefines_->setName("Redefines");
	// m_eClassifiers.push_back(Redefines_);
	::ecore::EClass_ptr GeneratedFrom_ = ecoreFactory->createEClass();
	GeneratedFrom_->setName("GeneratedFrom");
	// m_eClassifiers.push_back(GeneratedFrom_);
	::ecore::EClass_ptr Includes_ = ecoreFactory->createEClass();
	Includes_->setName("Includes");
	// m_eClassifiers.push_back(Includes_);
	::ecore::EClass_ptr HasValue_ = ecoreFactory->createEClass();
	HasValue_->setName("HasValue");
	// m_eClassifiers.push_back(HasValue_);
	
	
	// AbstractCodeElement_->addESuperType(KDMEntity_);
	// CodeItem_->addESuperType(AbstractCodeElement_);
	// ComputationalObject_->addESuperType(CodeItem_);
	// ControlElement_->addESuperType(ComputationalObject_);
	// MethodUnit_->addESuperType(ControlElement_);
	// Module_->addESuperType(CodeItem_);
	// CodeAssembly_->addESuperType(Module_);
	// CallableUnit_->addESuperType(ControlElement_);
	// Datatype_->addESuperType(CodeItem_);
	// TemplateUnit_->addESuperType(Datatype_);
	// TemplateParameter_->addESuperType(Datatype_);
	// AbstractCodeRelationship_->addESuperType(KDMRelationship_);
	// InstanceOf_->addESuperType(AbstractCodeRelationship_);
	// CompilationUnit_->addESuperType(Module_);
	// CodeModel_->addESuperType(KDMModel_);
	// DerivedType_->addESuperType(Datatype_);
	// ArrayType_->addESuperType(DerivedType_);
	// PrimitiveType_->addESuperType(Datatype_);
	// BooleanType_->addESuperType(PrimitiveType_);
	// CharType_->addESuperType(PrimitiveType_);
	// ClassUnit_->addESuperType(Datatype_);
	// CompositeType_->addESuperType(Datatype_);
	// RecordType_->addESuperType(CompositeType_);
	// EnumeratedType_->addESuperType(Datatype_);
	// Extends_->addESuperType(AbstractCodeRelationship_);
	// ScaledType_->addESuperType(PrimitiveType_);
	// FloatType_->addESuperType(PrimitiveType_);
	// HasType_->addESuperType(AbstractCodeRelationship_);
	// ImplementationOf_->addESuperType(AbstractCodeRelationship_);
	// Implements_->addESuperType(AbstractCodeRelationship_);
	// IntegerType_->addESuperType(PrimitiveType_);
	// InterfaceUnit_->addESuperType(Datatype_);
	// PointerType_->addESuperType(DerivedType_);
	// DefinedType_->addESuperType(Datatype_);
	// TypeUnit_->addESuperType(DefinedType_);
	// RangeType_->addESuperType(DerivedType_);
	// Signature_->addESuperType(Datatype_);
	// DataElement_->addESuperType(ComputationalObject_);
	// StringType_->addESuperType(PrimitiveType_);
	// ChoiceType_->addESuperType(CompositeType_);
	// NamespaceUnit_->addESuperType(CodeItem_);
	// VisibleIn_->addESuperType(AbstractCodeRelationship_);
	// CommentUnit_->addESuperType(ModelElement_);
	// SharedUnit_->addESuperType(CompilationUnit_);
	// DecimalType_->addESuperType(PrimitiveType_);
	// DateType_->addESuperType(PrimitiveType_);
	// TimeType_->addESuperType(PrimitiveType_);
	// VoidType_->addESuperType(PrimitiveType_);
	// ValueElement_->addESuperType(DataElement_);
	// Value_->addESuperType(ValueElement_);
	// ValueList_->addESuperType(ValueElement_);
	// StorableUnit_->addESuperType(DataElement_);
	// MemberUnit_->addESuperType(DataElement_);
	// ParameterUnit_->addESuperType(DataElement_);
	// ItemUnit_->addESuperType(DataElement_);
	// IndexUnit_->addESuperType(DataElement_);
	// SynonymType_->addESuperType(DefinedType_);
	// SequenceType_->addESuperType(DerivedType_);
	// BagType_->addESuperType(DerivedType_);
	// SetType_->addESuperType(DerivedType_);
	// CodeElement_->addESuperType(CodeItem_);
	// CodeRelationship_->addESuperType(AbstractCodeRelationship_);
	// LanguageUnit_->addESuperType(Module_);
	// OrdinalType_->addESuperType(PrimitiveType_);
	// BitstringType_->addESuperType(PrimitiveType_);
	// OctetType_->addESuperType(PrimitiveType_);
	// OctetstringType_->addESuperType(PrimitiveType_);
	// BitType_->addESuperType(PrimitiveType_);
	// Imports_->addESuperType(AbstractCodeRelationship_);
	// Package_->addESuperType(Module_);
	// ParameterTo_->addESuperType(AbstractCodeRelationship_);
	// TemplateType_->addESuperType(Datatype_);
	// PreprocessorDirective_->addESuperType(AbstractCodeElement_);
	// MacroDirective_->addESuperType(PreprocessorDirective_);
	// MacroUnit_->addESuperType(PreprocessorDirective_);
	// ConditionalDirective_->addESuperType(PreprocessorDirective_);
	// IncludeDirective_->addESuperType(PreprocessorDirective_);
	// VariantTo_->addESuperType(AbstractCodeRelationship_);
	// Expands_->addESuperType(AbstractCodeRelationship_);
	// Redefines_->addESuperType(AbstractCodeRelationship_);
	// GeneratedFrom_->addESuperType(AbstractCodeRelationship_);
	// Includes_->addESuperType(AbstractCodeRelationship_);
	// HasValue_->addESuperType(AbstractCodeRelationship_);
	
	
	
	
    ::ecore::EEnum_ptr MethodKind_ = ecoreFactory->createEEnum();
    MethodKind_->setName("MethodKind");
    MethodKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("operator");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::operator));
        el->setLiteral("operator");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("destructor");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::destructor));
        el->setLiteral("destructor");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("method");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::method));
        el->setLiteral("method");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("abstract");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::abstract));
        el->setLiteral("abstract");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("virtual");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::virtual));
        el->setLiteral("virtual");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("constructor");
        el->setValue(static_cast< ::ecore::EInt >(MethodKind::constructor));
        el->setLiteral("constructor");
        // el->m_eEnum = MethodKind_;
        // MethodKind_->m_eLiterals.push_back(el);
    }
    // MethodKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MethodKind_);
    ::ecore::EEnum_ptr ParameterKind_ = ecoreFactory->createEEnum();
    ParameterKind_->setName("ParameterKind");
    ParameterKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byReference");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byReference));
        el->setLiteral("byReference");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("exception");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::exception));
        el->setLiteral("exception");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("return");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::return));
        el->setLiteral("return");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byValue");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byValue));
        el->setLiteral("byValue");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("catchall");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::catchall));
        el->setLiteral("catchall");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("byName");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::byName));
        el->setLiteral("byName");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("throws");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::throws));
        el->setLiteral("throws");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("variadic");
        el->setValue(static_cast< ::ecore::EInt >(ParameterKind::variadic));
        el->setLiteral("variadic");
        // el->m_eEnum = ParameterKind_;
        // ParameterKind_->m_eLiterals.push_back(el);
    }
    // ParameterKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ParameterKind_);
    ::ecore::EEnum_ptr ExportKind_ = ecoreFactory->createEEnum();
    ExportKind_->setName("ExportKind");
    ExportKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("private");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::private));
        el->setLiteral("private");
        // el->m_eEnum = ExportKind_;
        // ExportKind_->m_eLiterals.push_back(el);
    }
    // ExportKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ExportKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = ExportKind_;
        // ExportKind_->m_eLiterals.push_back(el);
    }
    // ExportKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ExportKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("public");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::public));
        el->setLiteral("public");
        // el->m_eEnum = ExportKind_;
        // ExportKind_->m_eLiterals.push_back(el);
    }
    // ExportKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ExportKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("protected");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::protected));
        el->setLiteral("protected");
        // el->m_eEnum = ExportKind_;
        // ExportKind_->m_eLiterals.push_back(el);
    }
    // ExportKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ExportKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("final");
        el->setValue(static_cast< ::ecore::EInt >(ExportKind::final));
        el->setLiteral("final");
        // el->m_eEnum = ExportKind_;
        // ExportKind_->m_eLiterals.push_back(el);
    }
    // ExportKind_->m_ePackage = this;
    // m_eClassifiers.push_back(ExportKind_);
    ::ecore::EEnum_ptr StorableKind_ = ecoreFactory->createEEnum();
    StorableKind_->setName("StorableKind");
    StorableKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("global");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::global));
        el->setLiteral("global");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::external));
        el->setLiteral("external");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("static");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::static));
        el->setLiteral("static");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("register");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::register));
        el->setLiteral("register");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("local");
        el->setValue(static_cast< ::ecore::EInt >(StorableKind::local));
        el->setLiteral("local");
        // el->m_eEnum = StorableKind_;
        // StorableKind_->m_eLiterals.push_back(el);
    }
    // StorableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(StorableKind_);
    ::ecore::EEnum_ptr CallableKind_ = ecoreFactory->createEEnum();
    CallableKind_->setName("CallableKind");
    CallableKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::external));
        el->setLiteral("external");
        // el->m_eEnum = CallableKind_;
        // CallableKind_->m_eLiterals.push_back(el);
    }
    // CallableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(CallableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("regular");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::regular));
        el->setLiteral("regular");
        // el->m_eEnum = CallableKind_;
        // CallableKind_->m_eLiterals.push_back(el);
    }
    // CallableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(CallableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("stored");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::stored));
        el->setLiteral("stored");
        // el->m_eEnum = CallableKind_;
        // CallableKind_->m_eLiterals.push_back(el);
    }
    // CallableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(CallableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("operator");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::operator));
        el->setLiteral("operator");
        // el->m_eEnum = CallableKind_;
        // CallableKind_->m_eLiterals.push_back(el);
    }
    // CallableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(CallableKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(CallableKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = CallableKind_;
        // CallableKind_->m_eLiterals.push_back(el);
    }
    // CallableKind_->m_ePackage = this;
    // m_eClassifiers.push_back(CallableKind_);
    ::ecore::EEnum_ptr MacroKind_ = ecoreFactory->createEEnum();
    MacroKind_->setName("MacroKind");
    MacroKind_->setSerializable(true);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("external");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::external));
        el->setLiteral("external");
        // el->m_eEnum = MacroKind_;
        // MacroKind_->m_eLiterals.push_back(el);
    }
    // MacroKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MacroKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("unknown");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::unknown));
        el->setLiteral("unknown");
        // el->m_eEnum = MacroKind_;
        // MacroKind_->m_eLiterals.push_back(el);
    }
    // MacroKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MacroKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("option");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::option));
        el->setLiteral("option");
        // el->m_eEnum = MacroKind_;
        // MacroKind_->m_eLiterals.push_back(el);
    }
    // MacroKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MacroKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("undefined");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::undefined));
        el->setLiteral("undefined");
        // el->m_eEnum = MacroKind_;
        // MacroKind_->m_eLiterals.push_back(el);
    }
    // MacroKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MacroKind_);
    {
        ::ecore::EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
        el->setName("regular");
        el->setValue(static_cast< ::ecore::EInt >(MacroKind::regular));
        el->setLiteral("regular");
        // el->m_eEnum = MacroKind_;
        // MacroKind_->m_eLiterals.push_back(el);
    }
    // MacroKind_->m_ePackage = this;
    // m_eClassifiers.push_back(MacroKind_);
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
