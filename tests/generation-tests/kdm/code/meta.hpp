
#ifndef EMF_CPP_KDM_CODE_META_HPP
#define EMF_CPP_KDM_CODE_META_HPP

#include <e4c/definition.hpp>
#include <kdm/code/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace code
{



struct AbstractCodeElement__source_tag
{
    typedef AbstractCodeElement eClass;
    typedef ::kdm::source::SourceRef eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractCodeElement__source_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractCodeElement__comment_tag
{
    typedef AbstractCodeElement eClass;
    typedef ::kdm::code::CommentUnit eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractCodeElement__comment_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractCodeElement__codeRelation_tag
{
    typedef AbstractCodeElement eClass;
    typedef ::kdm::code::AbstractCodeRelationship eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractCodeElement__codeRelation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ControlElement__type_tag
{
    typedef ControlElement eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ControlElement__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ControlElement__entryFlow_tag
{
    typedef ControlElement eClass;
    typedef ::kdm::action::EntryFlow eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ControlElement__entryFlow_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ControlElement__codeElement_tag
{
    typedef ControlElement eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ControlElement__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct MethodUnit__kind_tag
{
    typedef MethodUnit eClass;
    typedef ::kdm::code::MethodKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct MethodUnit__export_tag
{
    typedef MethodUnit eClass;
    typedef ::kdm::code::ExportKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct Module__codeElement_tag
{
    typedef Module eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Module__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct CallableUnit__kind_tag
{
    typedef CallableUnit eClass;
    typedef ::kdm::code::CallableKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct TemplateUnit__codeElement_tag
{
    typedef TemplateUnit eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef TemplateUnit__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct InstanceOf__to_tag
{
    typedef InstanceOf eClass;
    typedef ::kdm::code::TemplateUnit eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef InstanceOf__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct InstanceOf__from_tag
{
    typedef InstanceOf eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef InstanceOf__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct CodeModel__codeElement_tag
{
    typedef CodeModel eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CodeModel__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct DerivedType__itemUnit_tag
{
    typedef DerivedType eClass;
    typedef ::kdm::code::ItemUnit eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DerivedType__itemUnit_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ArrayType__size_tag
{
    typedef ArrayType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ArrayType__indexUnit_tag
{
    typedef ArrayType eClass;
    typedef ::kdm::code::IndexUnit eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ArrayType__indexUnit_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ClassUnit__isAbstract_tag
{
    typedef ClassUnit eClass;
    typedef ::kdm::core::Boolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ClassUnit__codeElement_tag
{
    typedef ClassUnit eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ClassUnit__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct CompositeType__itemUnit_tag
{
    typedef CompositeType eClass;
    typedef ::kdm::code::ItemUnit eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CompositeType__itemUnit_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct EnumeratedType__value_tag
{
    typedef EnumeratedType eClass;
    typedef ::kdm::code::Value eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef EnumeratedType__value_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Extends__to_tag
{
    typedef Extends eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Extends__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Extends__from_tag
{
    typedef Extends eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Extends__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct HasType__to_tag
{
    typedef HasType eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef HasType__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct HasType__from_tag
{
    typedef HasType eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef HasType__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ImplementationOf__to_tag
{
    typedef ImplementationOf eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ImplementationOf__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ImplementationOf__from_tag
{
    typedef ImplementationOf eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ImplementationOf__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Implements__to_tag
{
    typedef Implements eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Implements__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Implements__from_tag
{
    typedef Implements eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Implements__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct InterfaceUnit__codeElement_tag
{
    typedef InterfaceUnit eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef InterfaceUnit__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct DefinedType__type_tag
{
    typedef DefinedType eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DefinedType__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct DefinedType__codeElement_tag
{
    typedef DefinedType eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DefinedType__codeElement_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct RangeType__lower_tag
{
    typedef RangeType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct RangeType__upper_tag
{
    typedef RangeType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct Signature__parameterUnit_tag
{
    typedef Signature eClass;
    typedef ::kdm::code::ParameterUnit eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Signature__parameterUnit_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct DataElement__type_tag
{
    typedef DataElement eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DataElement__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct DataElement__ext_tag
{
    typedef DataElement eClass;
    typedef ::kdm::core::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct DataElement__size_tag
{
    typedef DataElement eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct DataElement__codeElement_tag
{
    typedef DataElement eClass;
    typedef ::kdm::code::Datatype eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DataElement__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct NamespaceUnit__groupedCode_tag
{
    typedef NamespaceUnit eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef NamespaceUnit__groupedCode_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct VisibleIn__to_tag
{
    typedef VisibleIn eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef VisibleIn__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct VisibleIn__from_tag
{
    typedef VisibleIn eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef VisibleIn__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct CommentUnit__text_tag
{
    typedef CommentUnit eClass;
    typedef ::kdm::core::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ValueList__valueElement_tag
{
    typedef ValueList eClass;
    typedef ::kdm::code::ValueElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ValueList__valueElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct StorableUnit__kind_tag
{
    typedef StorableUnit eClass;
    typedef ::kdm::code::StorableKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct MemberUnit__export_tag
{
    typedef MemberUnit eClass;
    typedef ::kdm::code::ExportKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ParameterUnit__kind_tag
{
    typedef ParameterUnit eClass;
    typedef ::kdm::code::ParameterKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ParameterUnit__pos_tag
{
    typedef ParameterUnit eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct SequenceType__size_tag
{
    typedef SequenceType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct BagType__size_tag
{
    typedef BagType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct SetType__size_tag
{
    typedef SetType eClass;
    typedef ::kdm::core::Integer eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct CodeRelationship__to_tag
{
    typedef CodeRelationship eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CodeRelationship__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct CodeRelationship__from_tag
{
    typedef CodeRelationship eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CodeRelationship__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Imports__to_tag
{
    typedef Imports eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Imports__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Imports__from_tag
{
    typedef Imports eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Imports__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ParameterTo__to_tag
{
    typedef ParameterTo eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ParameterTo__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ParameterTo__from_tag
{
    typedef ParameterTo eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ParameterTo__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct PreprocessorDirective__codeElement_tag
{
    typedef PreprocessorDirective eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef PreprocessorDirective__codeElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct MacroUnit__kind_tag
{
    typedef MacroUnit eClass;
    typedef ::kdm::code::MacroKind eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct VariantTo__to_tag
{
    typedef VariantTo eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef VariantTo__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct VariantTo__from_tag
{
    typedef VariantTo eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef VariantTo__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Expands__to_tag
{
    typedef Expands eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Expands__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Expands__from_tag
{
    typedef Expands eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Expands__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Redefines__to_tag
{
    typedef Redefines eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Redefines__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Redefines__from_tag
{
    typedef Redefines eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Redefines__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct GeneratedFrom__to_tag
{
    typedef GeneratedFrom eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef GeneratedFrom__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct GeneratedFrom__from_tag
{
    typedef GeneratedFrom eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef GeneratedFrom__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Includes__to_tag
{
    typedef Includes eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Includes__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Includes__from_tag
{
    typedef Includes eClass;
    typedef ::kdm::code::PreprocessorDirective eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Includes__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct HasValue__to_tag
{
    typedef HasValue eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef HasValue__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct HasValue__from_tag
{
    typedef HasValue eClass;
    typedef ::kdm::code::CodeItem eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef HasValue__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};


} // code
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::code::CodePackage >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::ControlElement,
                              ::kdm::code::MethodUnit,
                              ::kdm::code::Module,
                              ::kdm::code::CodeAssembly,
                              ::kdm::code::CallableUnit,
                              ::kdm::code::Datatype,
                              ::kdm::code::TemplateUnit,
                              ::kdm::code::TemplateParameter,
                              ::kdm::code::AbstractCodeRelationship,
                              ::kdm::code::InstanceOf,
                              ::kdm::code::CompilationUnit,
                              ::kdm::code::CodeModel,
                              ::kdm::code::DerivedType,
                              ::kdm::code::ArrayType,
                              ::kdm::code::PrimitiveType,
                              ::kdm::code::BooleanType,
                              ::kdm::code::CharType,
                              ::kdm::code::ClassUnit,
                              ::kdm::code::CompositeType,
                              ::kdm::code::RecordType,
                              ::kdm::code::EnumeratedType,
                              ::kdm::code::Extends,
                              ::kdm::code::ScaledType,
                              ::kdm::code::FloatType,
                              ::kdm::code::HasType,
                              ::kdm::code::ImplementationOf,
                              ::kdm::code::Implements,
                              ::kdm::code::IntegerType,
                              ::kdm::code::InterfaceUnit,
                              ::kdm::code::PointerType,
                              ::kdm::code::DefinedType,
                              ::kdm::code::TypeUnit,
                              ::kdm::code::RangeType,
                              ::kdm::code::Signature,
                              ::kdm::code::DataElement,
                              ::kdm::code::StringType,
                              ::kdm::code::ChoiceType,
                              ::kdm::code::NamespaceUnit,
                              ::kdm::code::VisibleIn,
                              ::kdm::code::CommentUnit,
                              ::kdm::code::SharedUnit,
                              ::kdm::code::DecimalType,
                              ::kdm::code::DateType,
                              ::kdm::code::TimeType,
                              ::kdm::code::VoidType,
                              ::kdm::code::ValueElement,
                              ::kdm::code::Value,
                              ::kdm::code::ValueList,
                              ::kdm::code::StorableUnit,
                              ::kdm::code::MemberUnit,
                              ::kdm::code::ParameterUnit,
                              ::kdm::code::ItemUnit,
                              ::kdm::code::IndexUnit,
                              ::kdm::code::SynonymType,
                              ::kdm::code::SequenceType,
                              ::kdm::code::BagType,
                              ::kdm::code::SetType,
                              ::kdm::code::CodeElement,
                              ::kdm::code::CodeRelationship,
                              ::kdm::code::LanguageUnit,
                              ::kdm::code::OrdinalType,
                              ::kdm::code::BitstringType,
                              ::kdm::code::OctetType,
                              ::kdm::code::OctetstringType,
                              ::kdm::code::BitType,
                              ::kdm::code::Imports,
                              ::kdm::code::Package,
                              ::kdm::code::ParameterTo,
                              ::kdm::code::TemplateType,
                              ::kdm::code::PreprocessorDirective,
                              ::kdm::code::MacroDirective,
                              ::kdm::code::MacroUnit,
                              ::kdm::code::ConditionalDirective,
                              ::kdm::code::IncludeDirective,
                              ::kdm::code::VariantTo,
                              ::kdm::code::Expands,
                              ::kdm::code::Redefines,
                              ::kdm::code::GeneratedFrom,
                              ::kdm::code::Includes,
                              ::kdm::code::HasValue > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::code::AbstractCodeElement >
{
    typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::AbstractCodeElement >
{
    static const char * get()
    {
        return "AbstractCodeElement";
    }
};


template < >
struct name< ::kdm::code::AbstractCodeElement__source_tag >
{
    static const char * get()
    {
        return "source";
    }
};


template < >
struct name< ::kdm::code::AbstractCodeElement__comment_tag >
{
    static const char * get()
    {
        return "comment";
    }
};


template < >
struct name< ::kdm::code::AbstractCodeElement__codeRelation_tag >
{
    static const char * get()
    {
        return "codeRelation";
    }
};


template < >
struct eclass< ::kdm::code::CodeItem >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CodeItem >
{
    static const char * get()
    {
        return "CodeItem";
    }
};


template < >
struct eclass< ::kdm::code::ComputationalObject >
{
    typedef boost::mpl::list< ::kdm::code::CodeItem > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ComputationalObject >
{
    static const char * get()
    {
        return "ComputationalObject";
    }
};


template < >
struct eclass< ::kdm::code::ControlElement >
{
    typedef boost::mpl::list< ::kdm::code::ComputationalObject > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ControlElement__type_tag,
                              ::kdm::code::ControlElement__entryFlow_tag,
                              ::kdm::code::ControlElement__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::ControlElement__type_tag,
                              ::kdm::code::ControlElement__entryFlow_tag,
                              ::kdm::code::ControlElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ControlElement >
{
    static const char * get()
    {
        return "ControlElement";
    }
};


template < >
struct name< ::kdm::code::ControlElement__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct name< ::kdm::code::ControlElement__entryFlow_tag >
{
    static const char * get()
    {
        return "entryFlow";
    }
};


template < >
struct name< ::kdm::code::ControlElement__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::MethodUnit >
{
    typedef boost::mpl::list< ::kdm::code::ControlElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::ControlElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::MethodUnit__kind_tag,
                              ::kdm::code::MethodUnit__export_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::ControlElement__type_tag,
                              ::kdm::code::ControlElement__entryFlow_tag,
                              ::kdm::code::ControlElement__codeElement_tag,
                              ::kdm::code::MethodUnit__kind_tag,
                              ::kdm::code::MethodUnit__export_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::MethodUnit >
{
    static const char * get()
    {
        return "MethodUnit";
    }
};


template < >
struct name< ::kdm::code::MethodUnit__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct name< ::kdm::code::MethodUnit__export_tag >
{
    static const char * get()
    {
        return "export";
    }
};


template < >
struct eclass< ::kdm::code::Module >
{
    typedef boost::mpl::list< ::kdm::code::CodeItem > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Module__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Module >
{
    static const char * get()
    {
        return "Module";
    }
};


template < >
struct name< ::kdm::code::Module__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::CodeAssembly >
{
    typedef boost::mpl::list< ::kdm::code::Module > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Module > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CodeAssembly >
{
    static const char * get()
    {
        return "CodeAssembly";
    }
};


template < >
struct eclass< ::kdm::code::CallableUnit >
{
    typedef boost::mpl::list< ::kdm::code::ControlElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::ControlElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::CallableUnit__kind_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::ControlElement__type_tag,
                              ::kdm::code::ControlElement__entryFlow_tag,
                              ::kdm::code::ControlElement__codeElement_tag,
                              ::kdm::code::CallableUnit__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CallableUnit >
{
    static const char * get()
    {
        return "CallableUnit";
    }
};


template < >
struct name< ::kdm::code::CallableUnit__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct eclass< ::kdm::code::Datatype >
{
    typedef boost::mpl::list< ::kdm::code::CodeItem > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Datatype >
{
    static const char * get()
    {
        return "Datatype";
    }
};


template < >
struct eclass< ::kdm::code::TemplateUnit >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::TemplateUnit__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::TemplateUnit__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::TemplateUnit >
{
    static const char * get()
    {
        return "TemplateUnit";
    }
};


template < >
struct name< ::kdm::code::TemplateUnit__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::TemplateParameter >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::TemplateParameter >
{
    static const char * get()
    {
        return "TemplateParameter";
    }
};


template < >
struct eclass< ::kdm::code::AbstractCodeRelationship >
{
    typedef boost::mpl::list< ::kdm::core::KDMRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::AbstractCodeRelationship >
{
    static const char * get()
    {
        return "AbstractCodeRelationship";
    }
};


template < >
struct eclass< ::kdm::code::InstanceOf >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::InstanceOf__to_tag,
                              ::kdm::code::InstanceOf__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::InstanceOf__to_tag,
                              ::kdm::code::InstanceOf__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::InstanceOf >
{
    static const char * get()
    {
        return "InstanceOf";
    }
};


template < >
struct name< ::kdm::code::InstanceOf__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::InstanceOf__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::CompilationUnit >
{
    typedef boost::mpl::list< ::kdm::code::Module > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Module > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CompilationUnit >
{
    static const char * get()
    {
        return "CompilationUnit";
    }
};


template < >
struct eclass< ::kdm::code::CodeModel >
{
    typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::kdm::KDMFramework,
                              ::kdm::kdm::KDMModel > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::CodeModel__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::kdm::KDMFramework__audit_tag,
                              ::kdm::kdm::KDMFramework__extensionFamily_tag,
                              ::kdm::kdm::KDMFramework__name_tag,
                              ::kdm::code::CodeModel__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CodeModel >
{
    static const char * get()
    {
        return "CodeModel";
    }
};


template < >
struct name< ::kdm::code::CodeModel__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::DerivedType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::DerivedType__itemUnit_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::DerivedType >
{
    static const char * get()
    {
        return "DerivedType";
    }
};


template < >
struct name< ::kdm::code::DerivedType__itemUnit_tag >
{
    static const char * get()
    {
        return "itemUnit";
    }
};


template < >
struct eclass< ::kdm::code::ArrayType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ArrayType__size_tag,
                              ::kdm::code::ArrayType__indexUnit_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag,
                              ::kdm::code::ArrayType__size_tag,
                              ::kdm::code::ArrayType__indexUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ArrayType >
{
    static const char * get()
    {
        return "ArrayType";
    }
};


template < >
struct name< ::kdm::code::ArrayType__size_tag >
{
    static const char * get()
    {
        return "size";
    }
};


template < >
struct name< ::kdm::code::ArrayType__indexUnit_tag >
{
    static const char * get()
    {
        return "indexUnit";
    }
};


template < >
struct eclass< ::kdm::code::PrimitiveType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::PrimitiveType >
{
    static const char * get()
    {
        return "PrimitiveType";
    }
};


template < >
struct eclass< ::kdm::code::BooleanType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::BooleanType >
{
    static const char * get()
    {
        return "BooleanType";
    }
};


template < >
struct eclass< ::kdm::code::CharType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CharType >
{
    static const char * get()
    {
        return "CharType";
    }
};


template < >
struct eclass< ::kdm::code::ClassUnit >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ClassUnit__isAbstract_tag,
                              ::kdm::code::ClassUnit__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::ClassUnit__isAbstract_tag,
                              ::kdm::code::ClassUnit__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ClassUnit >
{
    static const char * get()
    {
        return "ClassUnit";
    }
};


template < >
struct name< ::kdm::code::ClassUnit__isAbstract_tag >
{
    static const char * get()
    {
        return "isAbstract";
    }
};


template < >
struct name< ::kdm::code::ClassUnit__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::CompositeType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::CompositeType__itemUnit_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::CompositeType__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CompositeType >
{
    static const char * get()
    {
        return "CompositeType";
    }
};


template < >
struct name< ::kdm::code::CompositeType__itemUnit_tag >
{
    static const char * get()
    {
        return "itemUnit";
    }
};


template < >
struct eclass< ::kdm::code::RecordType >
{
    typedef boost::mpl::list< ::kdm::code::CompositeType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::CompositeType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::CompositeType__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::RecordType >
{
    static const char * get()
    {
        return "RecordType";
    }
};


template < >
struct eclass< ::kdm::code::EnumeratedType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::EnumeratedType__value_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::EnumeratedType__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::EnumeratedType >
{
    static const char * get()
    {
        return "EnumeratedType";
    }
};


template < >
struct name< ::kdm::code::EnumeratedType__value_tag >
{
    static const char * get()
    {
        return "value";
    }
};


template < >
struct eclass< ::kdm::code::Extends >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Extends__to_tag,
                              ::kdm::code::Extends__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Extends__to_tag,
                              ::kdm::code::Extends__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Extends >
{
    static const char * get()
    {
        return "Extends";
    }
};


template < >
struct name< ::kdm::code::Extends__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Extends__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::ScaledType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ScaledType >
{
    static const char * get()
    {
        return "ScaledType";
    }
};


template < >
struct eclass< ::kdm::code::FloatType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::FloatType >
{
    static const char * get()
    {
        return "FloatType";
    }
};


template < >
struct eclass< ::kdm::code::HasType >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::HasType__to_tag,
                              ::kdm::code::HasType__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::HasType__to_tag,
                              ::kdm::code::HasType__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::HasType >
{
    static const char * get()
    {
        return "HasType";
    }
};


template < >
struct name< ::kdm::code::HasType__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::HasType__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::ImplementationOf >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ImplementationOf__to_tag,
                              ::kdm::code::ImplementationOf__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::ImplementationOf__to_tag,
                              ::kdm::code::ImplementationOf__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ImplementationOf >
{
    static const char * get()
    {
        return "ImplementationOf";
    }
};


template < >
struct name< ::kdm::code::ImplementationOf__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::ImplementationOf__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::Implements >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Implements__to_tag,
                              ::kdm::code::Implements__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Implements__to_tag,
                              ::kdm::code::Implements__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Implements >
{
    static const char * get()
    {
        return "Implements";
    }
};


template < >
struct name< ::kdm::code::Implements__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Implements__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::IntegerType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::IntegerType >
{
    static const char * get()
    {
        return "IntegerType";
    }
};


template < >
struct eclass< ::kdm::code::InterfaceUnit >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::InterfaceUnit__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::InterfaceUnit__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::InterfaceUnit >
{
    static const char * get()
    {
        return "InterfaceUnit";
    }
};


template < >
struct name< ::kdm::code::InterfaceUnit__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::PointerType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::PointerType >
{
    static const char * get()
    {
        return "PointerType";
    }
};


template < >
struct eclass< ::kdm::code::DefinedType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::DefinedType__type_tag,
                              ::kdm::code::DefinedType__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DefinedType__type_tag,
                              ::kdm::code::DefinedType__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::DefinedType >
{
    static const char * get()
    {
        return "DefinedType";
    }
};


template < >
struct name< ::kdm::code::DefinedType__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct name< ::kdm::code::DefinedType__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::TypeUnit >
{
    typedef boost::mpl::list< ::kdm::code::DefinedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DefinedType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DefinedType__type_tag,
                              ::kdm::code::DefinedType__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::TypeUnit >
{
    static const char * get()
    {
        return "TypeUnit";
    }
};


template < >
struct eclass< ::kdm::code::RangeType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::RangeType__lower_tag,
                              ::kdm::code::RangeType__upper_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag,
                              ::kdm::code::RangeType__lower_tag,
                              ::kdm::code::RangeType__upper_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::RangeType >
{
    static const char * get()
    {
        return "RangeType";
    }
};


template < >
struct name< ::kdm::code::RangeType__lower_tag >
{
    static const char * get()
    {
        return "lower";
    }
};


template < >
struct name< ::kdm::code::RangeType__upper_tag >
{
    static const char * get()
    {
        return "upper";
    }
};


template < >
struct eclass< ::kdm::code::Signature >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Signature__parameterUnit_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Signature__parameterUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Signature >
{
    static const char * get()
    {
        return "Signature";
    }
};


template < >
struct name< ::kdm::code::Signature__parameterUnit_tag >
{
    static const char * get()
    {
        return "parameterUnit";
    }
};


template < >
struct eclass< ::kdm::code::DataElement >
{
    typedef boost::mpl::list< ::kdm::code::ComputationalObject > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::DataElement >
{
    static const char * get()
    {
        return "DataElement";
    }
};


template < >
struct name< ::kdm::code::DataElement__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct name< ::kdm::code::DataElement__ext_tag >
{
    static const char * get()
    {
        return "ext";
    }
};


template < >
struct name< ::kdm::code::DataElement__size_tag >
{
    static const char * get()
    {
        return "size";
    }
};


template < >
struct name< ::kdm::code::DataElement__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::StringType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::StringType >
{
    static const char * get()
    {
        return "StringType";
    }
};


template < >
struct eclass< ::kdm::code::ChoiceType >
{
    typedef boost::mpl::list< ::kdm::code::CompositeType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::CompositeType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::CompositeType__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ChoiceType >
{
    static const char * get()
    {
        return "ChoiceType";
    }
};


template < >
struct eclass< ::kdm::code::NamespaceUnit >
{
    typedef boost::mpl::list< ::kdm::code::CodeItem > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::NamespaceUnit__groupedCode_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::NamespaceUnit__groupedCode_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::NamespaceUnit >
{
    static const char * get()
    {
        return "NamespaceUnit";
    }
};


template < >
struct name< ::kdm::code::NamespaceUnit__groupedCode_tag >
{
    static const char * get()
    {
        return "groupedCode";
    }
};


template < >
struct eclass< ::kdm::code::VisibleIn >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::VisibleIn__to_tag,
                              ::kdm::code::VisibleIn__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::VisibleIn__to_tag,
                              ::kdm::code::VisibleIn__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::VisibleIn >
{
    static const char * get()
    {
        return "VisibleIn";
    }
};


template < >
struct name< ::kdm::code::VisibleIn__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::VisibleIn__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::CommentUnit >
{
    typedef boost::mpl::list< ::kdm::core::ModelElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::CommentUnit__text_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::CommentUnit__text_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CommentUnit >
{
    static const char * get()
    {
        return "CommentUnit";
    }
};


template < >
struct name< ::kdm::code::CommentUnit__text_tag >
{
    static const char * get()
    {
        return "text";
    }
};


template < >
struct eclass< ::kdm::code::SharedUnit >
{
    typedef boost::mpl::list< ::kdm::code::CompilationUnit > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Module,
                              ::kdm::code::CompilationUnit > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::SharedUnit >
{
    static const char * get()
    {
        return "SharedUnit";
    }
};


template < >
struct eclass< ::kdm::code::DecimalType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::DecimalType >
{
    static const char * get()
    {
        return "DecimalType";
    }
};


template < >
struct eclass< ::kdm::code::DateType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::DateType >
{
    static const char * get()
    {
        return "DateType";
    }
};


template < >
struct eclass< ::kdm::code::TimeType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::TimeType >
{
    static const char * get()
    {
        return "TimeType";
    }
};


template < >
struct eclass< ::kdm::code::VoidType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::VoidType >
{
    static const char * get()
    {
        return "VoidType";
    }
};


template < >
struct eclass< ::kdm::code::ValueElement >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ValueElement >
{
    static const char * get()
    {
        return "ValueElement";
    }
};


template < >
struct eclass< ::kdm::code::Value >
{
    typedef boost::mpl::list< ::kdm::code::ValueElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement,
                              ::kdm::code::ValueElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Value >
{
    static const char * get()
    {
        return "Value";
    }
};


template < >
struct eclass< ::kdm::code::ValueList >
{
    typedef boost::mpl::list< ::kdm::code::ValueElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement,
                              ::kdm::code::ValueElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ValueList__valueElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag,
                              ::kdm::code::ValueList__valueElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ValueList >
{
    static const char * get()
    {
        return "ValueList";
    }
};


template < >
struct name< ::kdm::code::ValueList__valueElement_tag >
{
    static const char * get()
    {
        return "valueElement";
    }
};


template < >
struct eclass< ::kdm::code::StorableUnit >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::StorableUnit__kind_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag,
                              ::kdm::code::StorableUnit__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::StorableUnit >
{
    static const char * get()
    {
        return "StorableUnit";
    }
};


template < >
struct name< ::kdm::code::StorableUnit__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct eclass< ::kdm::code::MemberUnit >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::MemberUnit__export_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag,
                              ::kdm::code::MemberUnit__export_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::MemberUnit >
{
    static const char * get()
    {
        return "MemberUnit";
    }
};


template < >
struct name< ::kdm::code::MemberUnit__export_tag >
{
    static const char * get()
    {
        return "export";
    }
};


template < >
struct eclass< ::kdm::code::ParameterUnit >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ParameterUnit__kind_tag,
                              ::kdm::code::ParameterUnit__pos_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag,
                              ::kdm::code::ParameterUnit__kind_tag,
                              ::kdm::code::ParameterUnit__pos_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ParameterUnit >
{
    static const char * get()
    {
        return "ParameterUnit";
    }
};


template < >
struct name< ::kdm::code::ParameterUnit__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct name< ::kdm::code::ParameterUnit__pos_tag >
{
    static const char * get()
    {
        return "pos";
    }
};


template < >
struct eclass< ::kdm::code::ItemUnit >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ItemUnit >
{
    static const char * get()
    {
        return "ItemUnit";
    }
};


template < >
struct eclass< ::kdm::code::IndexUnit >
{
    typedef boost::mpl::list< ::kdm::code::DataElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::ComputationalObject,
                              ::kdm::code::DataElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DataElement__type_tag,
                              ::kdm::code::DataElement__ext_tag,
                              ::kdm::code::DataElement__size_tag,
                              ::kdm::code::DataElement__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::IndexUnit >
{
    static const char * get()
    {
        return "IndexUnit";
    }
};


template < >
struct eclass< ::kdm::code::SynonymType >
{
    typedef boost::mpl::list< ::kdm::code::DefinedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DefinedType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DefinedType__type_tag,
                              ::kdm::code::DefinedType__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::SynonymType >
{
    static const char * get()
    {
        return "SynonymType";
    }
};


template < >
struct eclass< ::kdm::code::SequenceType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::SequenceType__size_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag,
                              ::kdm::code::SequenceType__size_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::SequenceType >
{
    static const char * get()
    {
        return "SequenceType";
    }
};


template < >
struct name< ::kdm::code::SequenceType__size_tag >
{
    static const char * get()
    {
        return "size";
    }
};


template < >
struct eclass< ::kdm::code::BagType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::BagType__size_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag,
                              ::kdm::code::BagType__size_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::BagType >
{
    static const char * get()
    {
        return "BagType";
    }
};


template < >
struct name< ::kdm::code::BagType__size_tag >
{
    static const char * get()
    {
        return "size";
    }
};


template < >
struct eclass< ::kdm::code::SetType >
{
    typedef boost::mpl::list< ::kdm::code::DerivedType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::DerivedType > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::SetType__size_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::DerivedType__itemUnit_tag,
                              ::kdm::code::SetType__size_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::SetType >
{
    static const char * get()
    {
        return "SetType";
    }
};


template < >
struct name< ::kdm::code::SetType__size_tag >
{
    static const char * get()
    {
        return "size";
    }
};


template < >
struct eclass< ::kdm::code::CodeElement >
{
    typedef boost::mpl::list< ::kdm::code::CodeItem > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CodeElement >
{
    static const char * get()
    {
        return "CodeElement";
    }
};


template < >
struct eclass< ::kdm::code::CodeRelationship >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::CodeRelationship__to_tag,
                              ::kdm::code::CodeRelationship__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::CodeRelationship__to_tag,
                              ::kdm::code::CodeRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::CodeRelationship >
{
    static const char * get()
    {
        return "CodeRelationship";
    }
};


template < >
struct name< ::kdm::code::CodeRelationship__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::CodeRelationship__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::LanguageUnit >
{
    typedef boost::mpl::list< ::kdm::code::Module > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Module > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::LanguageUnit >
{
    static const char * get()
    {
        return "LanguageUnit";
    }
};


template < >
struct eclass< ::kdm::code::OrdinalType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::OrdinalType >
{
    static const char * get()
    {
        return "OrdinalType";
    }
};


template < >
struct eclass< ::kdm::code::BitstringType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::BitstringType >
{
    static const char * get()
    {
        return "BitstringType";
    }
};


template < >
struct eclass< ::kdm::code::OctetType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::OctetType >
{
    static const char * get()
    {
        return "OctetType";
    }
};


template < >
struct eclass< ::kdm::code::OctetstringType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::OctetstringType >
{
    static const char * get()
    {
        return "OctetstringType";
    }
};


template < >
struct eclass< ::kdm::code::BitType >
{
    typedef boost::mpl::list< ::kdm::code::PrimitiveType > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype,
                              ::kdm::code::PrimitiveType > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::BitType >
{
    static const char * get()
    {
        return "BitType";
    }
};


template < >
struct eclass< ::kdm::code::Imports >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Imports__to_tag,
                              ::kdm::code::Imports__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Imports__to_tag,
                              ::kdm::code::Imports__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Imports >
{
    static const char * get()
    {
        return "Imports";
    }
};


template < >
struct name< ::kdm::code::Imports__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Imports__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::Package >
{
    typedef boost::mpl::list< ::kdm::code::Module > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Module > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::Module__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Package >
{
    static const char * get()
    {
        return "Package";
    }
};


template < >
struct eclass< ::kdm::code::ParameterTo >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::ParameterTo__to_tag,
                              ::kdm::code::ParameterTo__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::ParameterTo__to_tag,
                              ::kdm::code::ParameterTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ParameterTo >
{
    static const char * get()
    {
        return "ParameterTo";
    }
};


template < >
struct name< ::kdm::code::ParameterTo__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::ParameterTo__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::TemplateType >
{
    typedef boost::mpl::list< ::kdm::code::Datatype > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::CodeItem,
                              ::kdm::code::Datatype > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::TemplateType >
{
    static const char * get()
    {
        return "TemplateType";
    }
};


template < >
struct eclass< ::kdm::code::PreprocessorDirective >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::PreprocessorDirective__codeElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::PreprocessorDirective__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::PreprocessorDirective >
{
    static const char * get()
    {
        return "PreprocessorDirective";
    }
};


template < >
struct name< ::kdm::code::PreprocessorDirective__codeElement_tag >
{
    static const char * get()
    {
        return "codeElement";
    }
};


template < >
struct eclass< ::kdm::code::MacroDirective >
{
    typedef boost::mpl::list< ::kdm::code::PreprocessorDirective > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::PreprocessorDirective > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::PreprocessorDirective__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::MacroDirective >
{
    static const char * get()
    {
        return "MacroDirective";
    }
};


template < >
struct eclass< ::kdm::code::MacroUnit >
{
    typedef boost::mpl::list< ::kdm::code::PreprocessorDirective > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::PreprocessorDirective > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::MacroUnit__kind_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::PreprocessorDirective__codeElement_tag,
                              ::kdm::code::MacroUnit__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::MacroUnit >
{
    static const char * get()
    {
        return "MacroUnit";
    }
};


template < >
struct name< ::kdm::code::MacroUnit__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct eclass< ::kdm::code::ConditionalDirective >
{
    typedef boost::mpl::list< ::kdm::code::PreprocessorDirective > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::PreprocessorDirective > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::PreprocessorDirective__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::ConditionalDirective >
{
    static const char * get()
    {
        return "ConditionalDirective";
    }
};


template < >
struct eclass< ::kdm::code::IncludeDirective >
{
    typedef boost::mpl::list< ::kdm::code::PreprocessorDirective > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::code::AbstractCodeElement,
                              ::kdm::code::PreprocessorDirective > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::code::AbstractCodeElement__source_tag,
                              ::kdm::code::AbstractCodeElement__comment_tag,
                              ::kdm::code::AbstractCodeElement__codeRelation_tag,
                              ::kdm::code::PreprocessorDirective__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::IncludeDirective >
{
    static const char * get()
    {
        return "IncludeDirective";
    }
};


template < >
struct eclass< ::kdm::code::VariantTo >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::VariantTo__to_tag,
                              ::kdm::code::VariantTo__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::VariantTo__to_tag,
                              ::kdm::code::VariantTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::VariantTo >
{
    static const char * get()
    {
        return "VariantTo";
    }
};


template < >
struct name< ::kdm::code::VariantTo__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::VariantTo__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::Expands >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Expands__to_tag,
                              ::kdm::code::Expands__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Expands__to_tag,
                              ::kdm::code::Expands__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Expands >
{
    static const char * get()
    {
        return "Expands";
    }
};


template < >
struct name< ::kdm::code::Expands__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Expands__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::Redefines >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Redefines__to_tag,
                              ::kdm::code::Redefines__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Redefines__to_tag,
                              ::kdm::code::Redefines__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Redefines >
{
    static const char * get()
    {
        return "Redefines";
    }
};


template < >
struct name< ::kdm::code::Redefines__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Redefines__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::GeneratedFrom >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::GeneratedFrom__to_tag,
                              ::kdm::code::GeneratedFrom__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::GeneratedFrom__to_tag,
                              ::kdm::code::GeneratedFrom__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::GeneratedFrom >
{
    static const char * get()
    {
        return "GeneratedFrom";
    }
};


template < >
struct name< ::kdm::code::GeneratedFrom__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::GeneratedFrom__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::Includes >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::Includes__to_tag,
                              ::kdm::code::Includes__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::Includes__to_tag,
                              ::kdm::code::Includes__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::Includes >
{
    static const char * get()
    {
        return "Includes";
    }
};


template < >
struct name< ::kdm::code::Includes__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::Includes__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::code::HasValue >
{
    typedef boost::mpl::list< ::kdm::code::AbstractCodeRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::code::AbstractCodeRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::code::HasValue__to_tag,
                              ::kdm::code::HasValue__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::code::HasValue__to_tag,
                              ::kdm::code::HasValue__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::code::HasValue >
{
    static const char * get()
    {
        return "HasValue";
    }
};


template < >
struct name< ::kdm::code::HasValue__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::code::HasValue__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_CODE_Meta_HPP
