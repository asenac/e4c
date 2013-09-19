
#ifndef EMF_CPP_IDLMM_META_HPP
#define EMF_CPP_IDLMM_META_HPP

#include <e4c/definition.hpp>
#include <idlmm/fwd.hpp>

#include <ecore/fwd.hpp>

namespace idlmm
{



struct Container__contains_tag
{
	typedef Container eClass;
	typedef ::idlmm::Contained eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::idlmm::Contained__definedIn_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Contained__repositoryId_tag
{
	typedef Contained eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Contained__version_tag
{
	typedef Contained eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Contained__absoluteName_tag
{
	typedef Contained eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Contained__definedIn_tag
{
	typedef Contained eClass;
	typedef ::idlmm::Container eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::idlmm::Container__contains_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct InterfaceDef__isAbstract_tag
{
	typedef InterfaceDef eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct InterfaceDef__isCustom_tag
{
	typedef InterfaceDef eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct InterfaceDef__isTruncatable_tag
{
	typedef InterfaceDef eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct InterfaceDef__derivesFrom_tag
{
	typedef InterfaceDef eClass;
	typedef ::idlmm::InterfaceDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef InterfaceDef__derivesFrom_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct InterfaceDef__forward_tag
{
	typedef InterfaceDef eClass;
	typedef ::idlmm::ForwardDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef InterfaceDef__forward_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ModuleDef__prefix_tag
{
	typedef ModuleDef eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct IDLType__typeCode_tag
{
	typedef IDLType eClass;
	typedef ::idlmm::ETypeCode eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct OperationDef__parameters_tag
{
	typedef OperationDef eClass;
	typedef ::idlmm::ParameterDef eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef OperationDef__parameters_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct OperationDef__isOneway_tag
{
	typedef OperationDef eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct OperationDef__contexts_tag
{
	typedef OperationDef eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct OperationDef__canRaise_tag
{
	typedef OperationDef eClass;
	typedef ::idlmm::ExceptionDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef OperationDef__canRaise_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AttributeDef__getRaises_tag
{
	typedef AttributeDef eClass;
	typedef ::idlmm::ExceptionDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AttributeDef__getRaises_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AttributeDef__setRaises_tag
{
	typedef AttributeDef eClass;
	typedef ::idlmm::ExceptionDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AttributeDef__setRaises_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AttributeDef__isReadonly_tag
{
	typedef AttributeDef eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ConstantDef__constValue_tag
{
	typedef ConstantDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ConstantDef__constValue_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Typed__containedType_tag
{
	typedef Typed eClass;
	typedef ::idlmm::IDLType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Typed__containedType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Typed__sharedType_tag
{
	typedef Typed eClass;
	typedef ::idlmm::TypedefDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Typed__sharedType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ParameterDef__identifier_tag
{
	typedef ParameterDef eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ParameterDef__direction_tag
{
	typedef ParameterDef eClass;
	typedef ::idlmm::ParameterMode eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct PrimitiveDef__kind_tag
{
	typedef PrimitiveDef eClass;
	typedef ::idlmm::PrimitiveKind eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ExceptionDef__typeCode_tag
{
	typedef ExceptionDef eClass;
	typedef ::idlmm::ETypeCode eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ExceptionDef__members_tag
{
	typedef ExceptionDef eClass;
	typedef ::idlmm::Field eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ExceptionDef__members_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Field__identifier_tag
{
	typedef Field eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct FixedDef__digits_tag
{
	typedef FixedDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef FixedDef__digits_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct FixedDef__scale_tag
{
	typedef FixedDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef FixedDef__scale_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct WstringDef__bound_tag
{
	typedef WstringDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef WstringDef__bound_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct StringDef__bound_tag
{
	typedef StringDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef StringDef__bound_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ArrayDef__name_tag
{
	typedef ArrayDef eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ArrayDef__bounds_tag
{
	typedef ArrayDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ArrayDef__bounds_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct SequenceDef__bound_tag
{
	typedef SequenceDef eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef SequenceDef__bound_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnionField__identifier_tag
{
	typedef UnionField eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnionField__label_tag
{
	typedef UnionField eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef UnionField__label_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnionDef__unionMembers_tag
{
	typedef UnionDef eClass;
	typedef ::idlmm::UnionField eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef UnionDef__unionMembers_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnionDef__containedDiscrim_tag
{
	typedef UnionDef eClass;
	typedef ::idlmm::IDLType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef UnionDef__containedDiscrim_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnionDef__sharedDiscrim_tag
{
	typedef UnionDef eClass;
	typedef ::idlmm::TypedefDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef UnionDef__sharedDiscrim_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EnumDef__members_tag
{
	typedef EnumDef eClass;
	typedef ::idlmm::EnumMember eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::idlmm::EnumMember__enum_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct StructDef__members_tag
{
	typedef StructDef eClass;
	typedef ::idlmm::Field eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef StructDef__members_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TranslationUnit__contains_tag
{
	typedef TranslationUnit eClass;
	typedef ::idlmm::Contained eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TranslationUnit__contains_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TranslationUnit__identifier_tag
{
	typedef TranslationUnit eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TranslationUnit__includes_tag
{
	typedef TranslationUnit eClass;
	typedef ::idlmm::Include eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TranslationUnit__includes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Include__importURI_tag
{
	typedef Include eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Include__translationUnit_tag
{
	typedef Include eClass;
	typedef ::idlmm::TranslationUnit eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Include__translationUnit_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinaryExpression__left_tag
{
	typedef BinaryExpression eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef BinaryExpression__left_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinaryExpression__right_tag
{
	typedef BinaryExpression eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef BinaryExpression__right_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinaryExpression__operator_tag
{
	typedef BinaryExpression eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnaryExpression__expression_tag
{
	typedef UnaryExpression eClass;
	typedef ::idlmm::Expression eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef UnaryExpression__expression_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct UnaryExpression__operator_tag
{
	typedef UnaryExpression eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ConstantDefRef__constant_tag
{
	typedef ConstantDefRef eClass;
	typedef ::idlmm::Constant eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ConstantDefRef__constant_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ValueExpression__value_tag
{
	typedef ValueExpression eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ForwardDef__definition_tag
{
	typedef ForwardDef eClass;
	typedef ::idlmm::InterfaceDef eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ForwardDef__definition_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EnumMember__enum_tag
{
	typedef EnumMember eClass;
	typedef ::idlmm::EnumDef eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::idlmm::EnumDef__members_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NamedElement__identifier_tag
{
	typedef NamedElement eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // idlmm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::idlmm::IdlmmPackage >
{
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Container,
	                          ::idlmm::Contained,
	                          ::idlmm::InterfaceDef,
	                          ::idlmm::ModuleDef,
	                          ::idlmm::IDLType,
	                          ::idlmm::OperationDef,
	                          ::idlmm::AttributeDef,
	                          ::idlmm::ConstantDef,
	                          ::idlmm::Typed,
	                          ::idlmm::ParameterDef,
	                          ::idlmm::PrimitiveDef,
	                          ::idlmm::ExceptionDef,
	                          ::idlmm::Field,
	                          ::idlmm::FixedDef,
	                          ::idlmm::WstringDef,
	                          ::idlmm::StringDef,
	                          ::idlmm::AliasDef,
	                          ::idlmm::ArrayDef,
	                          ::idlmm::SequenceDef,
	                          ::idlmm::UnionField,
	                          ::idlmm::TypedefDef,
	                          ::idlmm::UnionDef,
	                          ::idlmm::EnumDef,
	                          ::idlmm::StructDef,
	                          ::idlmm::TranslationUnit,
	                          ::idlmm::Include,
	                          ::idlmm::Expression,
	                          ::idlmm::BinaryExpression,
	                          ::idlmm::UnaryExpression,
	                          ::idlmm::LiteralExpression,
	                          ::idlmm::ConstantDefRef,
	                          ::idlmm::ValueExpression,
	                          ::idlmm::ForwardDef,
	                          ::idlmm::EnumMember,
	                          ::idlmm::Constant,
	                          ::idlmm::NamedElement > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::idlmm::ModelElement >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ModelElement >
{
	static const char * get()
	{
		return "ModelElement";
	}
};


template < >
struct eclass< ::idlmm::Container >
{
	typedef boost::mpl::list< ::idlmm::Contained > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::Container__contains_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Container__contains_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Container >
{
	static const char * get()
	{
		return "Container";
	}
};


template < >
struct name< ::idlmm::Container__contains_tag >
{
	static const char * get()
	{
		return "contains";
	}
};


template < >
struct eclass< ::idlmm::Contained >
{
	typedef boost::mpl::list< ::idlmm::NamedElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Contained >
{
	static const char * get()
	{
		return "Contained";
	}
};


template < >
struct name< ::idlmm::Contained__repositoryId_tag >
{
	static const char * get()
	{
		return "repositoryId";
	}
};


template < >
struct name< ::idlmm::Contained__version_tag >
{
	static const char * get()
	{
		return "version";
	}
};


template < >
struct name< ::idlmm::Contained__absoluteName_tag >
{
	static const char * get()
	{
		return "absoluteName";
	}
};


template < >
struct name< ::idlmm::Contained__definedIn_tag >
{
	static const char * get()
	{
		return "definedIn";
	}
};


template < >
struct eclass< ::idlmm::InterfaceDef >
{
	typedef boost::mpl::list< ::idlmm::Container,
	                          ::idlmm::TypedefDef > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Container,
	                          ::idlmm::IDLType,
	                          ::idlmm::TypedefDef > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::InterfaceDef__isAbstract_tag,
	                          ::idlmm::InterfaceDef__isCustom_tag,
	                          ::idlmm::InterfaceDef__isTruncatable_tag,
	                          ::idlmm::InterfaceDef__derivesFrom_tag,
	                          ::idlmm::InterfaceDef__forward_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Container__contains_tag,
	                          ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::InterfaceDef__isAbstract_tag,
	                          ::idlmm::InterfaceDef__isCustom_tag,
	                          ::idlmm::InterfaceDef__isTruncatable_tag,
	                          ::idlmm::InterfaceDef__derivesFrom_tag,
	                          ::idlmm::InterfaceDef__forward_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::InterfaceDef >
{
	static const char * get()
	{
		return "InterfaceDef";
	}
};


template < >
struct name< ::idlmm::InterfaceDef__isAbstract_tag >
{
	static const char * get()
	{
		return "isAbstract";
	}
};


template < >
struct name< ::idlmm::InterfaceDef__isCustom_tag >
{
	static const char * get()
	{
		return "isCustom";
	}
};


template < >
struct name< ::idlmm::InterfaceDef__isTruncatable_tag >
{
	static const char * get()
	{
		return "isTruncatable";
	}
};


template < >
struct name< ::idlmm::InterfaceDef__derivesFrom_tag >
{
	static const char * get()
	{
		return "derivesFrom";
	}
};


template < >
struct name< ::idlmm::InterfaceDef__forward_tag >
{
	static const char * get()
	{
		return "forward";
	}
};


template < >
struct eclass< ::idlmm::ModuleDef >
{
	typedef boost::mpl::list< ::idlmm::Container > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Container > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModuleDef__prefix_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Container__contains_tag,
	                          ::idlmm::ModuleDef__prefix_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ModuleDef >
{
	static const char * get()
	{
		return "ModuleDef";
	}
};


template < >
struct name< ::idlmm::ModuleDef__prefix_tag >
{
	static const char * get()
	{
		return "prefix";
	}
};


template < >
struct eclass< ::idlmm::IDLType >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::IDLType >
{
	static const char * get()
	{
		return "IDLType";
	}
};


template < >
struct name< ::idlmm::IDLType__typeCode_tag >
{
	static const char * get()
	{
		return "typeCode";
	}
};


template < >
struct eclass< ::idlmm::OperationDef >
{
	typedef boost::mpl::list< ::idlmm::Contained,
	                          ::idlmm::Typed > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Typed > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::OperationDef__parameters_tag,
	                          ::idlmm::OperationDef__isOneway_tag,
	                          ::idlmm::OperationDef__contexts_tag,
	                          ::idlmm::OperationDef__canRaise_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::OperationDef__parameters_tag,
	                          ::idlmm::OperationDef__isOneway_tag,
	                          ::idlmm::OperationDef__contexts_tag,
	                          ::idlmm::OperationDef__canRaise_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::OperationDef >
{
	static const char * get()
	{
		return "OperationDef";
	}
};


template < >
struct name< ::idlmm::OperationDef__parameters_tag >
{
	static const char * get()
	{
		return "parameters";
	}
};


template < >
struct name< ::idlmm::OperationDef__isOneway_tag >
{
	static const char * get()
	{
		return "isOneway";
	}
};


template < >
struct name< ::idlmm::OperationDef__contexts_tag >
{
	static const char * get()
	{
		return "contexts";
	}
};


template < >
struct name< ::idlmm::OperationDef__canRaise_tag >
{
	static const char * get()
	{
		return "canRaise";
	}
};


template < >
struct eclass< ::idlmm::AttributeDef >
{
	typedef boost::mpl::list< ::idlmm::Contained,
	                          ::idlmm::Typed > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Typed > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::AttributeDef__getRaises_tag,
	                          ::idlmm::AttributeDef__setRaises_tag,
	                          ::idlmm::AttributeDef__isReadonly_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::AttributeDef__getRaises_tag,
	                          ::idlmm::AttributeDef__setRaises_tag,
	                          ::idlmm::AttributeDef__isReadonly_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::AttributeDef >
{
	static const char * get()
	{
		return "AttributeDef";
	}
};


template < >
struct name< ::idlmm::AttributeDef__getRaises_tag >
{
	static const char * get()
	{
		return "getRaises";
	}
};


template < >
struct name< ::idlmm::AttributeDef__setRaises_tag >
{
	static const char * get()
	{
		return "setRaises";
	}
};


template < >
struct name< ::idlmm::AttributeDef__isReadonly_tag >
{
	static const char * get()
	{
		return "isReadonly";
	}
};


template < >
struct eclass< ::idlmm::ConstantDef >
{
	typedef boost::mpl::list< ::idlmm::Contained,
	                          ::idlmm::Typed,
	                          ::idlmm::Constant > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Typed,
	                          ::idlmm::Constant > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ConstantDef__constValue_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::ConstantDef__constValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ConstantDef >
{
	static const char * get()
	{
		return "ConstantDef";
	}
};


template < >
struct name< ::idlmm::ConstantDef__constValue_tag >
{
	static const char * get()
	{
		return "constValue";
	}
};


template < >
struct eclass< ::idlmm::Typed >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Typed >
{
	static const char * get()
	{
		return "Typed";
	}
};


template < >
struct name< ::idlmm::Typed__containedType_tag >
{
	static const char * get()
	{
		return "containedType";
	}
};


template < >
struct name< ::idlmm::Typed__sharedType_tag >
{
	static const char * get()
	{
		return "sharedType";
	}
};


template < >
struct eclass< ::idlmm::ParameterDef >
{
	typedef boost::mpl::list< ::idlmm::Typed > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ParameterDef__identifier_tag,
	                          ::idlmm::ParameterDef__direction_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::ParameterDef__identifier_tag,
	                          ::idlmm::ParameterDef__direction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ParameterDef >
{
	static const char * get()
	{
		return "ParameterDef";
	}
};


template < >
struct name< ::idlmm::ParameterDef__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};


template < >
struct name< ::idlmm::ParameterDef__direction_tag >
{
	static const char * get()
	{
		return "direction";
	}
};


template < >
struct eclass< ::idlmm::PrimitiveDef >
{
	typedef boost::mpl::list< ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::PrimitiveDef__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::PrimitiveDef__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::PrimitiveDef >
{
	static const char * get()
	{
		return "PrimitiveDef";
	}
};


template < >
struct name< ::idlmm::PrimitiveDef__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::idlmm::ExceptionDef >
{
	typedef boost::mpl::list< ::idlmm::Contained > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ExceptionDef__typeCode_tag,
	                          ::idlmm::ExceptionDef__members_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::ExceptionDef__typeCode_tag,
	                          ::idlmm::ExceptionDef__members_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ExceptionDef >
{
	static const char * get()
	{
		return "ExceptionDef";
	}
};


template < >
struct name< ::idlmm::ExceptionDef__typeCode_tag >
{
	static const char * get()
	{
		return "typeCode";
	}
};


template < >
struct name< ::idlmm::ExceptionDef__members_tag >
{
	static const char * get()
	{
		return "members";
	}
};


template < >
struct eclass< ::idlmm::Field >
{
	typedef boost::mpl::list< ::idlmm::Typed > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::Field__identifier_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::Field__identifier_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Field >
{
	static const char * get()
	{
		return "Field";
	}
};


template < >
struct name< ::idlmm::Field__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};


template < >
struct eclass< ::idlmm::FixedDef >
{
	typedef boost::mpl::list< ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::FixedDef__digits_tag,
	                          ::idlmm::FixedDef__scale_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::FixedDef__digits_tag,
	                          ::idlmm::FixedDef__scale_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::FixedDef >
{
	static const char * get()
	{
		return "FixedDef";
	}
};


template < >
struct name< ::idlmm::FixedDef__digits_tag >
{
	static const char * get()
	{
		return "digits";
	}
};


template < >
struct name< ::idlmm::FixedDef__scale_tag >
{
	static const char * get()
	{
		return "scale";
	}
};


template < >
struct eclass< ::idlmm::WstringDef >
{
	typedef boost::mpl::list< ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::WstringDef__bound_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::WstringDef__bound_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::WstringDef >
{
	static const char * get()
	{
		return "WstringDef";
	}
};


template < >
struct name< ::idlmm::WstringDef__bound_tag >
{
	static const char * get()
	{
		return "bound";
	}
};


template < >
struct eclass< ::idlmm::StringDef >
{
	typedef boost::mpl::list< ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::StringDef__bound_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::StringDef__bound_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::StringDef >
{
	static const char * get()
	{
		return "StringDef";
	}
};


template < >
struct name< ::idlmm::StringDef__bound_tag >
{
	static const char * get()
	{
		return "bound";
	}
};


template < >
struct eclass< ::idlmm::AliasDef >
{
	typedef boost::mpl::list< ::idlmm::Typed,
	                          ::idlmm::TypedefDef > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed,
	                          ::idlmm::IDLType,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::TypedefDef > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::AliasDef >
{
	static const char * get()
	{
		return "AliasDef";
	}
};


template < >
struct eclass< ::idlmm::ArrayDef >
{
	typedef boost::mpl::list< ::idlmm::Typed,
	                          ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ArrayDef__name_tag,
	                          ::idlmm::ArrayDef__bounds_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::ArrayDef__name_tag,
	                          ::idlmm::ArrayDef__bounds_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ArrayDef >
{
	static const char * get()
	{
		return "ArrayDef";
	}
};


template < >
struct name< ::idlmm::ArrayDef__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::idlmm::ArrayDef__bounds_tag >
{
	static const char * get()
	{
		return "bounds";
	}
};


template < >
struct eclass< ::idlmm::SequenceDef >
{
	typedef boost::mpl::list< ::idlmm::Typed,
	                          ::idlmm::IDLType > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed,
	                          ::idlmm::IDLType > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::SequenceDef__bound_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::SequenceDef__bound_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::SequenceDef >
{
	static const char * get()
	{
		return "SequenceDef";
	}
};


template < >
struct name< ::idlmm::SequenceDef__bound_tag >
{
	static const char * get()
	{
		return "bound";
	}
};


template < >
struct eclass< ::idlmm::UnionField >
{
	typedef boost::mpl::list< ::idlmm::Typed > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Typed > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::UnionField__identifier_tag,
	                          ::idlmm::UnionField__label_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Typed__containedType_tag,
	                          ::idlmm::Typed__sharedType_tag,
	                          ::idlmm::UnionField__identifier_tag,
	                          ::idlmm::UnionField__label_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::UnionField >
{
	static const char * get()
	{
		return "UnionField";
	}
};


template < >
struct name< ::idlmm::UnionField__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};


template < >
struct name< ::idlmm::UnionField__label_tag >
{
	static const char * get()
	{
		return "label";
	}
};


template < >
struct eclass< ::idlmm::TypedefDef >
{
	typedef boost::mpl::list< ::idlmm::IDLType,
	                          ::idlmm::Contained > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::TypedefDef >
{
	static const char * get()
	{
		return "TypedefDef";
	}
};


template < >
struct eclass< ::idlmm::UnionDef >
{
	typedef boost::mpl::list< ::idlmm::TypedefDef > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::TypedefDef > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::UnionDef__unionMembers_tag,
	                          ::idlmm::UnionDef__containedDiscrim_tag,
	                          ::idlmm::UnionDef__sharedDiscrim_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::UnionDef__unionMembers_tag,
	                          ::idlmm::UnionDef__containedDiscrim_tag,
	                          ::idlmm::UnionDef__sharedDiscrim_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::UnionDef >
{
	static const char * get()
	{
		return "UnionDef";
	}
};


template < >
struct name< ::idlmm::UnionDef__unionMembers_tag >
{
	static const char * get()
	{
		return "unionMembers";
	}
};


template < >
struct name< ::idlmm::UnionDef__containedDiscrim_tag >
{
	static const char * get()
	{
		return "containedDiscrim";
	}
};


template < >
struct name< ::idlmm::UnionDef__sharedDiscrim_tag >
{
	static const char * get()
	{
		return "sharedDiscrim";
	}
};


template < >
struct eclass< ::idlmm::EnumDef >
{
	typedef boost::mpl::list< ::idlmm::TypedefDef > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::TypedefDef > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::EnumDef__members_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::EnumDef__members_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::EnumDef >
{
	static const char * get()
	{
		return "EnumDef";
	}
};


template < >
struct name< ::idlmm::EnumDef__members_tag >
{
	static const char * get()
	{
		return "members";
	}
};


template < >
struct eclass< ::idlmm::StructDef >
{
	typedef boost::mpl::list< ::idlmm::TypedefDef > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::IDLType,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::TypedefDef > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::StructDef__members_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::IDLType__typeCode_tag,
	                          ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::StructDef__members_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::StructDef >
{
	static const char * get()
	{
		return "StructDef";
	}
};


template < >
struct name< ::idlmm::StructDef__members_tag >
{
	static const char * get()
	{
		return "members";
	}
};


template < >
struct eclass< ::idlmm::TranslationUnit >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::TranslationUnit__contains_tag,
	                          ::idlmm::TranslationUnit__identifier_tag,
	                          ::idlmm::TranslationUnit__includes_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::TranslationUnit__contains_tag,
	                          ::idlmm::TranslationUnit__identifier_tag,
	                          ::idlmm::TranslationUnit__includes_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::TranslationUnit >
{
	static const char * get()
	{
		return "TranslationUnit";
	}
};


template < >
struct name< ::idlmm::TranslationUnit__contains_tag >
{
	static const char * get()
	{
		return "contains";
	}
};


template < >
struct name< ::idlmm::TranslationUnit__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};


template < >
struct name< ::idlmm::TranslationUnit__includes_tag >
{
	static const char * get()
	{
		return "includes";
	}
};


template < >
struct eclass< ::idlmm::Include >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::Include__importURI_tag,
	                          ::idlmm::Include__translationUnit_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::Include__importURI_tag,
	                          ::idlmm::Include__translationUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Include >
{
	static const char * get()
	{
		return "Include";
	}
};


template < >
struct name< ::idlmm::Include__importURI_tag >
{
	static const char * get()
	{
		return "importURI";
	}
};


template < >
struct name< ::idlmm::Include__translationUnit_tag >
{
	static const char * get()
	{
		return "translationUnit";
	}
};


template < >
struct eclass< ::idlmm::Expression >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Expression >
{
	static const char * get()
	{
		return "Expression";
	}
};


template < >
struct eclass< ::idlmm::BinaryExpression >
{
	typedef boost::mpl::list< ::idlmm::Expression > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Expression > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::BinaryExpression__left_tag,
	                          ::idlmm::BinaryExpression__right_tag,
	                          ::idlmm::BinaryExpression__operator_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::BinaryExpression__left_tag,
	                          ::idlmm::BinaryExpression__right_tag,
	                          ::idlmm::BinaryExpression__operator_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::BinaryExpression >
{
	static const char * get()
	{
		return "BinaryExpression";
	}
};


template < >
struct name< ::idlmm::BinaryExpression__left_tag >
{
	static const char * get()
	{
		return "left";
	}
};


template < >
struct name< ::idlmm::BinaryExpression__right_tag >
{
	static const char * get()
	{
		return "right";
	}
};


template < >
struct name< ::idlmm::BinaryExpression__operator_tag >
{
	static const char * get()
	{
		return "operator";
	}
};


template < >
struct eclass< ::idlmm::UnaryExpression >
{
	typedef boost::mpl::list< ::idlmm::Expression > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Expression > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::UnaryExpression__expression_tag,
	                          ::idlmm::UnaryExpression__operator_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::UnaryExpression__expression_tag,
	                          ::idlmm::UnaryExpression__operator_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::UnaryExpression >
{
	static const char * get()
	{
		return "UnaryExpression";
	}
};


template < >
struct name< ::idlmm::UnaryExpression__expression_tag >
{
	static const char * get()
	{
		return "expression";
	}
};


template < >
struct name< ::idlmm::UnaryExpression__operator_tag >
{
	static const char * get()
	{
		return "operator";
	}
};


template < >
struct eclass< ::idlmm::LiteralExpression >
{
	typedef boost::mpl::list< ::idlmm::Expression > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Expression > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::LiteralExpression >
{
	static const char * get()
	{
		return "LiteralExpression";
	}
};


template < >
struct eclass< ::idlmm::ConstantDefRef >
{
	typedef boost::mpl::list< ::idlmm::LiteralExpression > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Expression,
	                          ::idlmm::LiteralExpression > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ConstantDefRef__constant_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::ConstantDefRef__constant_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ConstantDefRef >
{
	static const char * get()
	{
		return "ConstantDefRef";
	}
};


template < >
struct name< ::idlmm::ConstantDefRef__constant_tag >
{
	static const char * get()
	{
		return "constant";
	}
};


template < >
struct eclass< ::idlmm::ValueExpression >
{
	typedef boost::mpl::list< ::idlmm::LiteralExpression > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::Expression,
	                          ::idlmm::LiteralExpression > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ValueExpression__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::ValueExpression__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ValueExpression >
{
	static const char * get()
	{
		return "ValueExpression";
	}
};


template < >
struct name< ::idlmm::ValueExpression__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::idlmm::ForwardDef >
{
	typedef boost::mpl::list< ::idlmm::Contained > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::ForwardDef__definition_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::ForwardDef__definition_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::ForwardDef >
{
	static const char * get()
	{
		return "ForwardDef";
	}
};


template < >
struct name< ::idlmm::ForwardDef__definition_tag >
{
	static const char * get()
	{
		return "definition";
	}
};


template < >
struct eclass< ::idlmm::EnumMember >
{
	typedef boost::mpl::list< ::idlmm::Constant > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained,
	                          ::idlmm::Constant > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::EnumMember__enum_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag,
	                          ::idlmm::EnumMember__enum_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::EnumMember >
{
	static const char * get()
	{
		return "EnumMember";
	}
};


template < >
struct name< ::idlmm::EnumMember__enum_tag >
{
	static const char * get()
	{
		return "enum";
	}
};


template < >
struct eclass< ::idlmm::Constant >
{
	typedef boost::mpl::list< ::idlmm::Contained > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement,
	                          ::idlmm::NamedElement,
	                          ::idlmm::Contained > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag,
	                          ::idlmm::Contained__repositoryId_tag,
	                          ::idlmm::Contained__version_tag,
	                          ::idlmm::Contained__absoluteName_tag,
	                          ::idlmm::Contained__definedIn_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::Constant >
{
	static const char * get()
	{
		return "Constant";
	}
};


template < >
struct eclass< ::idlmm::NamedElement >
{
	typedef boost::mpl::list< ::idlmm::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::idlmm::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::idlmm::NamedElement__identifier_tag > eAllStructuralFeatures;
};

template < >
struct name< ::idlmm::NamedElement >
{
	static const char * get()
	{
		return "NamedElement";
	}
};


template < >
struct name< ::idlmm::NamedElement__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_IDLMM_Meta_HPP
