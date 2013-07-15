
#ifndef EMF_CPP_KDM_EVENT_META_HPP
#define EMF_CPP_KDM_EVENT_META_HPP

#include <kdm/event/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/action/fwd.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace event
{



struct EventModel__eventElement_tag
{
	typedef EventModel eClass;
	typedef ::kdm::event::AbstractEventElement eReferenceType;
	typedef EventModel__eventElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractEventElement__source_tag
{
	typedef AbstractEventElement eClass;
	typedef ::kdm::source::SourceRef eReferenceType;
	typedef AbstractEventElement__source_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractEventElement__eventRelation_tag
{
	typedef AbstractEventElement eClass;
	typedef ::kdm::event::AbstractEventRelationship eReferenceType;
	typedef AbstractEventElement__eventRelation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractEventElement__abstraction_tag
{
	typedef AbstractEventElement eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef AbstractEventElement__abstraction_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractEventElement__implementation_tag
{
	typedef AbstractEventElement eClass;
	typedef ::kdm::code::AbstractCodeElement eReferenceType;
	typedef AbstractEventElement__implementation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Event__kind_tag
{
	typedef Event eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct EventRelationship__to_tag
{
	typedef EventRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef EventRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct EventRelationship__from_tag
{
	typedef EventRelationship eClass;
	typedef ::kdm::event::AbstractEventElement eReferenceType;
	typedef EventRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct EventResource__eventElement_tag
{
	typedef EventResource eClass;
	typedef ::kdm::event::AbstractEventElement eReferenceType;
	typedef EventResource__eventElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct EventAction__kind_tag
{
	typedef EventAction eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct EventAction__eventElement_tag
{
	typedef EventAction eClass;
	typedef ::kdm::event::Event eReferenceType;
	typedef EventAction__eventElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsState__to_tag
{
	typedef ReadsState eClass;
	typedef ::kdm::event::State eReferenceType;
	typedef ReadsState__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsState__from_tag
{
	typedef ReadsState eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ReadsState__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ProducesEvent__to_tag
{
	typedef ProducesEvent eClass;
	typedef ::kdm::event::Event eReferenceType;
	typedef ProducesEvent__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ProducesEvent__from_tag
{
	typedef ProducesEvent eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ProducesEvent__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ConsumesEvent__to_tag
{
	typedef ConsumesEvent eClass;
	typedef ::kdm::event::Event eReferenceType;
	typedef ConsumesEvent__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ConsumesEvent__from_tag
{
	typedef ConsumesEvent eClass;
	typedef ::kdm::event::Transition eReferenceType;
	typedef ConsumesEvent__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct NextState__to_tag
{
	typedef NextState eClass;
	typedef ::kdm::event::State eReferenceType;
	typedef NextState__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct NextState__from_tag
{
	typedef NextState eClass;
	typedef ::kdm::event::Transition eReferenceType;
	typedef NextState__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct HasState__to_tag
{
	typedef HasState eClass;
	typedef ::kdm::event::AbstractEventElement eReferenceType;
	typedef HasState__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct HasState__from_tag
{
	typedef HasState eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef HasState__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // event
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::event::EventPackage >
{
	typedef boost::mpl::list< ::kdm::event::EventModel,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::Event,
	                          ::kdm::event::AbstractEventRelationship,
	                          ::kdm::event::EventRelationship,
	                          ::kdm::event::EventResource,
	                          ::kdm::event::State,
	                          ::kdm::event::Transition,
	                          ::kdm::event::OnEntry,
	                          ::kdm::event::OnExit,
	                          ::kdm::event::EventAction,
	                          ::kdm::event::ReadsState,
	                          ::kdm::event::ProducesEvent,
	                          ::kdm::event::ConsumesEvent,
	                          ::kdm::event::NextState,
	                          ::kdm::event::InitialState,
	                          ::kdm::event::EventElement,
	                          ::kdm::event::HasState > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::event::EventModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::EventModel__eventElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::event::EventModel__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::EventModel >
{
	static const char * get()
	{
		return "EventModel";
	}
};


template < >
struct name< ::kdm::event::EventModel__eventElement_tag >
{
	static const char * get()
	{
		return "eventElement";
	}
};


template < >
struct eclass< ::kdm::event::AbstractEventElement >
{
	typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::AbstractEventElement >
{
	static const char * get()
	{
		return "AbstractEventElement";
	}
};


template < >
struct name< ::kdm::event::AbstractEventElement__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::kdm::event::AbstractEventElement__eventRelation_tag >
{
	static const char * get()
	{
		return "eventRelation";
	}
};


template < >
struct name< ::kdm::event::AbstractEventElement__abstraction_tag >
{
	static const char * get()
	{
		return "abstraction";
	}
};


template < >
struct name< ::kdm::event::AbstractEventElement__implementation_tag >
{
	static const char * get()
	{
		return "implementation";
	}
};


template < >
struct eclass< ::kdm::event::Event >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::Event__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::Event__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::Event >
{
	static const char * get()
	{
		return "Event";
	}
};


template < >
struct name< ::kdm::event::Event__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::kdm::event::AbstractEventRelationship >
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
struct name< ::kdm::event::AbstractEventRelationship >
{
	static const char * get()
	{
		return "AbstractEventRelationship";
	}
};


template < >
struct eclass< ::kdm::event::EventRelationship >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::event::AbstractEventRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::EventRelationship__to_tag,
	                          ::kdm::event::EventRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::EventRelationship__to_tag,
	                          ::kdm::event::EventRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::EventRelationship >
{
	static const char * get()
	{
		return "EventRelationship";
	}
};


template < >
struct name< ::kdm::event::EventRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::EventRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::event::EventResource >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::EventResource__eventElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::EventResource >
{
	static const char * get()
	{
		return "EventResource";
	}
};


template < >
struct name< ::kdm::event::EventResource__eventElement_tag >
{
	static const char * get()
	{
		return "eventElement";
	}
};


template < >
struct eclass< ::kdm::event::State >
{
	typedef boost::mpl::list< ::kdm::event::EventResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::EventResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::State >
{
	static const char * get()
	{
		return "State";
	}
};


template < >
struct eclass< ::kdm::event::Transition >
{
	typedef boost::mpl::list< ::kdm::event::EventResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::EventResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::Transition >
{
	static const char * get()
	{
		return "Transition";
	}
};


template < >
struct eclass< ::kdm::event::OnEntry >
{
	typedef boost::mpl::list< ::kdm::event::Transition > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::EventResource,
	                          ::kdm::event::Transition > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::OnEntry >
{
	static const char * get()
	{
		return "OnEntry";
	}
};


template < >
struct eclass< ::kdm::event::OnExit >
{
	typedef boost::mpl::list< ::kdm::event::Transition > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::EventResource,
	                          ::kdm::event::Transition > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::OnExit >
{
	static const char * get()
	{
		return "OnExit";
	}
};


template < >
struct eclass< ::kdm::event::EventAction >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::EventAction__kind_tag,
	                          ::kdm::event::EventAction__eventElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventAction__kind_tag,
	                          ::kdm::event::EventAction__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::EventAction >
{
	static const char * get()
	{
		return "EventAction";
	}
};


template < >
struct name< ::kdm::event::EventAction__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct name< ::kdm::event::EventAction__eventElement_tag >
{
	static const char * get()
	{
		return "eventElement";
	}
};


template < >
struct eclass< ::kdm::event::ReadsState >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::ReadsState__to_tag,
	                          ::kdm::event::ReadsState__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::ReadsState__to_tag,
	                          ::kdm::event::ReadsState__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::ReadsState >
{
	static const char * get()
	{
		return "ReadsState";
	}
};


template < >
struct name< ::kdm::event::ReadsState__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::ReadsState__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::event::ProducesEvent >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::ProducesEvent__to_tag,
	                          ::kdm::event::ProducesEvent__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::ProducesEvent__to_tag,
	                          ::kdm::event::ProducesEvent__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::ProducesEvent >
{
	static const char * get()
	{
		return "ProducesEvent";
	}
};


template < >
struct name< ::kdm::event::ProducesEvent__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::ProducesEvent__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::event::ConsumesEvent >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::event::AbstractEventRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::ConsumesEvent__to_tag,
	                          ::kdm::event::ConsumesEvent__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::ConsumesEvent__to_tag,
	                          ::kdm::event::ConsumesEvent__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::ConsumesEvent >
{
	static const char * get()
	{
		return "ConsumesEvent";
	}
};


template < >
struct name< ::kdm::event::ConsumesEvent__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::ConsumesEvent__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::event::NextState >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::event::AbstractEventRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::NextState__to_tag,
	                          ::kdm::event::NextState__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::NextState__to_tag,
	                          ::kdm::event::NextState__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::NextState >
{
	static const char * get()
	{
		return "NextState";
	}
};


template < >
struct name< ::kdm::event::NextState__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::NextState__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::event::InitialState >
{
	typedef boost::mpl::list< ::kdm::event::State > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement,
	                          ::kdm::event::EventResource,
	                          ::kdm::event::State > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag,
	                          ::kdm::event::EventResource__eventElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::InitialState >
{
	static const char * get()
	{
		return "InitialState";
	}
};


template < >
struct eclass< ::kdm::event::EventElement >
{
	typedef boost::mpl::list< ::kdm::event::AbstractEventElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::event::AbstractEventElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::event::AbstractEventElement__source_tag,
	                          ::kdm::event::AbstractEventElement__eventRelation_tag,
	                          ::kdm::event::AbstractEventElement__abstraction_tag,
	                          ::kdm::event::AbstractEventElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::EventElement >
{
	static const char * get()
	{
		return "EventElement";
	}
};


template < >
struct eclass< ::kdm::event::HasState >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::event::HasState__to_tag,
	                          ::kdm::event::HasState__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::event::HasState__to_tag,
	                          ::kdm::event::HasState__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::event::HasState >
{
	static const char * get()
	{
		return "HasState";
	}
};


template < >
struct name< ::kdm::event::HasState__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::event::HasState__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_EVENT_Meta_HPP
