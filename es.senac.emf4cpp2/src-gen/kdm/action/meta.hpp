
#ifndef EMF_CPP_KDM_ACTION_META_HPP
#define EMF_CPP_KDM_ACTION_META_HPP

#include <kdm/action/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace action
{



struct ActionElement__kind_tag
{
	typedef ActionElement eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct ActionElement__codeElement_tag
{
	typedef ActionElement eClass;
	typedef ::kdm::code::AbstractCodeElement eReferenceType;
	typedef ActionElement__codeElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ActionElement__actionRelation_tag
{
	typedef ActionElement eClass;
	typedef ::kdm::action::AbstractActionRelationship eReferenceType;
	typedef ActionElement__actionRelation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ControlFlow__to_tag
{
	typedef ControlFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ControlFlow__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ControlFlow__from_tag
{
	typedef ControlFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ControlFlow__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Calls__to_tag
{
	typedef Calls eClass;
	typedef ::kdm::code::ControlElement eReferenceType;
	typedef Calls__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Calls__from_tag
{
	typedef Calls eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Calls__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Creates__to_tag
{
	typedef Creates eClass;
	typedef ::kdm::code::Datatype eReferenceType;
	typedef Creates__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Creates__from_tag
{
	typedef Creates eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Creates__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Reads__to_tag
{
	typedef Reads eClass;
	typedef ::kdm::code::DataElement eReferenceType;
	typedef Reads__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Reads__from_tag
{
	typedef Reads eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Reads__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Writes__to_tag
{
	typedef Writes eClass;
	typedef ::kdm::code::DataElement eReferenceType;
	typedef Writes__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Writes__from_tag
{
	typedef Writes eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Writes__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CompliesTo__to_tag
{
	typedef CompliesTo eClass;
	typedef ::kdm::code::CodeItem eReferenceType;
	typedef CompliesTo__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CompliesTo__from_tag
{
	typedef CompliesTo eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef CompliesTo__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct UsesType__to_tag
{
	typedef UsesType eClass;
	typedef ::kdm::code::Datatype eReferenceType;
	typedef UsesType__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct UsesType__from_tag
{
	typedef UsesType eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef UsesType__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Addresses__to_tag
{
	typedef Addresses eClass;
	typedef ::kdm::code::ComputationalObject eReferenceType;
	typedef Addresses__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Addresses__from_tag
{
	typedef Addresses eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Addresses__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ActionRelationship__to_tag
{
	typedef ActionRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef ActionRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ActionRelationship__from_tag
{
	typedef ActionRelationship eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ActionRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Throws__to_tag
{
	typedef Throws eClass;
	typedef ::kdm::code::DataElement eReferenceType;
	typedef Throws__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Throws__from_tag
{
	typedef Throws eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Throws__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Dispatches__to_tag
{
	typedef Dispatches eClass;
	typedef ::kdm::code::DataElement eReferenceType;
	typedef Dispatches__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Dispatches__from_tag
{
	typedef Dispatches eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Dispatches__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct EntryFlow__to_tag
{
	typedef EntryFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef EntryFlow__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct EntryFlow__from_tag
{
	typedef EntryFlow eClass;
	typedef ::kdm::code::ControlElement eReferenceType;
	typedef EntryFlow__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExitFlow__to_tag
{
	typedef ExitFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ExitFlow__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExitFlow__from_tag
{
	typedef ExitFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ExitFlow__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExceptionFlow__to_tag
{
	typedef ExceptionFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ExceptionFlow__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExceptionFlow__from_tag
{
	typedef ExceptionFlow eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ExceptionFlow__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // action
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::action::ActionPackage >
{
	typedef boost::mpl::list< ::kdm::action::ActionElement,
	                          ::kdm::action::AbstractActionRelationship,
	                          ::kdm::action::ControlFlow,
	                          ::kdm::action::Calls,
	                          ::kdm::action::Creates,
	                          ::kdm::action::Reads,
	                          ::kdm::action::Writes,
	                          ::kdm::action::CompliesTo,
	                          ::kdm::action::Flow,
	                          ::kdm::action::TrueFlow,
	                          ::kdm::action::FalseFlow,
	                          ::kdm::action::GuardedFlow,
	                          ::kdm::action::UsesType,
	                          ::kdm::action::Addresses,
	                          ::kdm::action::ActionRelationship,
	                          ::kdm::action::Throws,
	                          ::kdm::action::Dispatches,
	                          ::kdm::action::EntryFlow,
	                          ::kdm::action::BlockUnit,
	                          ::kdm::action::ExceptionUnit,
	                          ::kdm::action::TryUnit,
	                          ::kdm::action::FinallyUnit,
	                          ::kdm::action::CatchUnit,
	                          ::kdm::action::ExitFlow,
	                          ::kdm::action::ExceptionFlow > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::action::ActionElement >
{
	typedef boost::mpl::list< ::kdm::code::AbstractCodeElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ActionElement >
{
	static const char * get()
	{
		return "ActionElement";
	}
};


template < >
struct name< ::kdm::action::ActionElement__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct name< ::kdm::action::ActionElement__codeElement_tag >
{
	static const char * get()
	{
		return "codeElement";
	}
};


template < >
struct name< ::kdm::action::ActionElement__actionRelation_tag >
{
	static const char * get()
	{
		return "actionRelation";
	}
};


template < >
struct eclass< ::kdm::action::AbstractActionRelationship >
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
struct name< ::kdm::action::AbstractActionRelationship >
{
	static const char * get()
	{
		return "AbstractActionRelationship";
	}
};


template < >
struct eclass< ::kdm::action::ControlFlow >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ControlFlow >
{
	static const char * get()
	{
		return "ControlFlow";
	}
};


template < >
struct name< ::kdm::action::ControlFlow__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::ControlFlow__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Calls >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Calls__to_tag,
	                          ::kdm::action::Calls__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Calls__to_tag,
	                          ::kdm::action::Calls__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Calls >
{
	static const char * get()
	{
		return "Calls";
	}
};


template < >
struct name< ::kdm::action::Calls__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Calls__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Creates >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Creates__to_tag,
	                          ::kdm::action::Creates__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Creates__to_tag,
	                          ::kdm::action::Creates__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Creates >
{
	static const char * get()
	{
		return "Creates";
	}
};


template < >
struct name< ::kdm::action::Creates__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Creates__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Reads >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Reads__to_tag,
	                          ::kdm::action::Reads__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Reads__to_tag,
	                          ::kdm::action::Reads__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Reads >
{
	static const char * get()
	{
		return "Reads";
	}
};


template < >
struct name< ::kdm::action::Reads__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Reads__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Writes >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Writes__to_tag,
	                          ::kdm::action::Writes__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Writes__to_tag,
	                          ::kdm::action::Writes__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Writes >
{
	static const char * get()
	{
		return "Writes";
	}
};


template < >
struct name< ::kdm::action::Writes__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Writes__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::CompliesTo >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::CompliesTo__to_tag,
	                          ::kdm::action::CompliesTo__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::CompliesTo__to_tag,
	                          ::kdm::action::CompliesTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::CompliesTo >
{
	static const char * get()
	{
		return "CompliesTo";
	}
};


template < >
struct name< ::kdm::action::CompliesTo__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::CompliesTo__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Flow >
{
	typedef boost::mpl::list< ::kdm::action::ControlFlow > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship,
	                          ::kdm::action::ControlFlow > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Flow >
{
	static const char * get()
	{
		return "Flow";
	}
};


template < >
struct eclass< ::kdm::action::TrueFlow >
{
	typedef boost::mpl::list< ::kdm::action::ControlFlow > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship,
	                          ::kdm::action::ControlFlow > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::TrueFlow >
{
	static const char * get()
	{
		return "TrueFlow";
	}
};


template < >
struct eclass< ::kdm::action::FalseFlow >
{
	typedef boost::mpl::list< ::kdm::action::ControlFlow > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship,
	                          ::kdm::action::ControlFlow > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::FalseFlow >
{
	static const char * get()
	{
		return "FalseFlow";
	}
};


template < >
struct eclass< ::kdm::action::GuardedFlow >
{
	typedef boost::mpl::list< ::kdm::action::ControlFlow > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship,
	                          ::kdm::action::ControlFlow > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ControlFlow__to_tag,
	                          ::kdm::action::ControlFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::GuardedFlow >
{
	static const char * get()
	{
		return "GuardedFlow";
	}
};


template < >
struct eclass< ::kdm::action::UsesType >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::UsesType__to_tag,
	                          ::kdm::action::UsesType__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::UsesType__to_tag,
	                          ::kdm::action::UsesType__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::UsesType >
{
	static const char * get()
	{
		return "UsesType";
	}
};


template < >
struct name< ::kdm::action::UsesType__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::UsesType__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Addresses >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Addresses__to_tag,
	                          ::kdm::action::Addresses__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Addresses__to_tag,
	                          ::kdm::action::Addresses__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Addresses >
{
	static const char * get()
	{
		return "Addresses";
	}
};


template < >
struct name< ::kdm::action::Addresses__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Addresses__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::ActionRelationship >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::ActionRelationship__to_tag,
	                          ::kdm::action::ActionRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ActionRelationship__to_tag,
	                          ::kdm::action::ActionRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ActionRelationship >
{
	static const char * get()
	{
		return "ActionRelationship";
	}
};


template < >
struct name< ::kdm::action::ActionRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::ActionRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Throws >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Throws__to_tag,
	                          ::kdm::action::Throws__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Throws__to_tag,
	                          ::kdm::action::Throws__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Throws >
{
	static const char * get()
	{
		return "Throws";
	}
};


template < >
struct name< ::kdm::action::Throws__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Throws__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::Dispatches >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::Dispatches__to_tag,
	                          ::kdm::action::Dispatches__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::Dispatches__to_tag,
	                          ::kdm::action::Dispatches__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::Dispatches >
{
	static const char * get()
	{
		return "Dispatches";
	}
};


template < >
struct name< ::kdm::action::Dispatches__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::Dispatches__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::EntryFlow >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::EntryFlow__to_tag,
	                          ::kdm::action::EntryFlow__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::EntryFlow__to_tag,
	                          ::kdm::action::EntryFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::EntryFlow >
{
	static const char * get()
	{
		return "EntryFlow";
	}
};


template < >
struct name< ::kdm::action::EntryFlow__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::EntryFlow__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::BlockUnit >
{
	typedef boost::mpl::list< ::kdm::action::ActionElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement,
	                          ::kdm::action::ActionElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::BlockUnit >
{
	static const char * get()
	{
		return "BlockUnit";
	}
};


template < >
struct eclass< ::kdm::action::ExceptionUnit >
{
	typedef boost::mpl::list< ::kdm::action::BlockUnit > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement,
	                          ::kdm::action::ActionElement,
	                          ::kdm::action::BlockUnit > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ExceptionUnit >
{
	static const char * get()
	{
		return "ExceptionUnit";
	}
};


template < >
struct eclass< ::kdm::action::TryUnit >
{
	typedef boost::mpl::list< ::kdm::action::ExceptionUnit > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement,
	                          ::kdm::action::ActionElement,
	                          ::kdm::action::BlockUnit,
	                          ::kdm::action::ExceptionUnit > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::TryUnit >
{
	static const char * get()
	{
		return "TryUnit";
	}
};


template < >
struct eclass< ::kdm::action::FinallyUnit >
{
	typedef boost::mpl::list< ::kdm::action::ExceptionUnit > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement,
	                          ::kdm::action::ActionElement,
	                          ::kdm::action::BlockUnit,
	                          ::kdm::action::ExceptionUnit > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::FinallyUnit >
{
	static const char * get()
	{
		return "FinallyUnit";
	}
};


template < >
struct eclass< ::kdm::action::CatchUnit >
{
	typedef boost::mpl::list< ::kdm::action::ExceptionUnit > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::code::AbstractCodeElement,
	                          ::kdm::action::ActionElement,
	                          ::kdm::action::BlockUnit,
	                          ::kdm::action::ExceptionUnit > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::code::AbstractCodeElement__source_tag,
	                          ::kdm::code::AbstractCodeElement__comment_tag,
	                          ::kdm::code::AbstractCodeElement__codeRelation_tag,
	                          ::kdm::action::ActionElement__kind_tag,
	                          ::kdm::action::ActionElement__codeElement_tag,
	                          ::kdm::action::ActionElement__actionRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::CatchUnit >
{
	static const char * get()
	{
		return "CatchUnit";
	}
};


template < >
struct eclass< ::kdm::action::ExitFlow >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::ExitFlow__to_tag,
	                          ::kdm::action::ExitFlow__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ExitFlow__to_tag,
	                          ::kdm::action::ExitFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ExitFlow >
{
	static const char * get()
	{
		return "ExitFlow";
	}
};


template < >
struct name< ::kdm::action::ExitFlow__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::ExitFlow__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::action::ExceptionFlow >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::action::ExceptionFlow__to_tag,
	                          ::kdm::action::ExceptionFlow__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::action::ExceptionFlow__to_tag,
	                          ::kdm::action::ExceptionFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::action::ExceptionFlow >
{
	static const char * get()
	{
		return "ExceptionFlow";
	}
};


template < >
struct name< ::kdm::action::ExceptionFlow__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::action::ExceptionFlow__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_ACTION_Meta_HPP
