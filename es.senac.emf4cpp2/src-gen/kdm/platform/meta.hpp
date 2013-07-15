
#ifndef EMF_CPP_KDM_PLATFORM_META_HPP
#define EMF_CPP_KDM_PLATFORM_META_HPP

#include <kdm/platform/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/action/fwd.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace platform
{



struct AbstractPlatformElement__source_tag
{
	typedef AbstractPlatformElement eClass;
	typedef ::kdm::source::SourceRef eReferenceType;
	typedef AbstractPlatformElement__source_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractPlatformElement__relation_tag
{
	typedef AbstractPlatformElement eClass;
	typedef ::kdm::platform::AbstractPlatformRelationship eReferenceType;
	typedef AbstractPlatformElement__relation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractPlatformElement__abstraction_tag
{
	typedef AbstractPlatformElement eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef AbstractPlatformElement__abstraction_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractPlatformElement__implementation_tag
{
	typedef AbstractPlatformElement eClass;
	typedef ::kdm::code::AbstractCodeElement eReferenceType;
	typedef AbstractPlatformElement__implementation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct PlatformModel__platformElement_tag
{
	typedef PlatformModel eClass;
	typedef ::kdm::platform::AbstractPlatformElement eReferenceType;
	typedef PlatformModel__platformElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Requires__to_tag
{
	typedef Requires eClass;
	typedef ::kdm::platform::AbstractPlatformElement eReferenceType;
	typedef Requires__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Requires__from_tag
{
	typedef Requires eClass;
	typedef ::kdm::platform::DeployedComponent eReferenceType;
	typedef Requires__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ResourceType__platformElement_tag
{
	typedef ResourceType eClass;
	typedef ::kdm::platform::AbstractPlatformElement eReferenceType;
	typedef ResourceType__platformElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct PlatformAction__kind_tag
{
	typedef PlatformAction eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct PlatformAction__platformElement_tag
{
	typedef PlatformAction eClass;
	typedef ::kdm::platform::PlatformEvent eReferenceType;
	typedef PlatformAction__platformElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BindsTo__to_tag
{
	typedef BindsTo eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef BindsTo__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BindsTo__from_tag
{
	typedef BindsTo eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef BindsTo__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct PlatformRelationship__to_tag
{
	typedef PlatformRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef PlatformRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct PlatformRelationship__from_tag
{
	typedef PlatformRelationship eClass;
	typedef ::kdm::platform::AbstractPlatformElement eReferenceType;
	typedef PlatformRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct PlatformEvent__kind_tag
{
	typedef PlatformEvent eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct DeployedSoftwareSystem__groupedComponent_tag
{
	typedef DeployedSoftwareSystem eClass;
	typedef ::kdm::platform::DeployedComponent eReferenceType;
	typedef DeployedSoftwareSystem__groupedComponent_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Machine__deployedComponent_tag
{
	typedef Machine eClass;
	typedef ::kdm::platform::DeployedComponent eReferenceType;
	typedef Machine__deployedComponent_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Machine__deployedResource_tag
{
	typedef Machine eClass;
	typedef ::kdm::platform::DeployedResource eReferenceType;
	typedef Machine__deployedResource_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DeployedComponent__groupedCode_tag
{
	typedef DeployedComponent eClass;
	typedef ::kdm::code::Module eReferenceType;
	typedef DeployedComponent__groupedCode_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DeployedResource__platformElement_tag
{
	typedef DeployedResource eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef DeployedResource__platformElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Loads__to_tag
{
	typedef Loads eClass;
	typedef ::kdm::platform::DeployedComponent eReferenceType;
	typedef Loads__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Loads__from_tag
{
	typedef Loads eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Loads__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Spawns__to_tag
{
	typedef Spawns eClass;
	typedef ::kdm::platform::RuntimeResource eReferenceType;
	typedef Spawns__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Spawns__from_tag
{
	typedef Spawns eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef Spawns__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsResource__to_tag
{
	typedef ReadsResource eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef ReadsResource__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsResource__from_tag
{
	typedef ReadsResource eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ReadsResource__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct WritesResource__to_tag
{
	typedef WritesResource eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef WritesResource__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct WritesResource__from_tag
{
	typedef WritesResource eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef WritesResource__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ManagesResource__to_tag
{
	typedef ManagesResource eClass;
	typedef ::kdm::platform::ResourceType eReferenceType;
	typedef ManagesResource__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ManagesResource__from_tag
{
	typedef ManagesResource eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ManagesResource__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DefinedBy__to_tag
{
	typedef DefinedBy eClass;
	typedef ::kdm::code::CodeItem eReferenceType;
	typedef DefinedBy__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DefinedBy__from_tag
{
	typedef DefinedBy eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef DefinedBy__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // platform
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::platform::PlatformPackage >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::PlatformModel,
	                          ::kdm::platform::AbstractPlatformRelationship,
	                          ::kdm::platform::Requires,
	                          ::kdm::platform::ResourceType,
	                          ::kdm::platform::NamingResource,
	                          ::kdm::platform::MarshalledResource,
	                          ::kdm::platform::MessagingResource,
	                          ::kdm::platform::FileResource,
	                          ::kdm::platform::ExecutionResource,
	                          ::kdm::platform::PlatformAction,
	                          ::kdm::platform::ExternalActor,
	                          ::kdm::platform::DataManager,
	                          ::kdm::platform::BindsTo,
	                          ::kdm::platform::PlatformElement,
	                          ::kdm::platform::PlatformRelationship,
	                          ::kdm::platform::PlatformEvent,
	                          ::kdm::platform::LockResource,
	                          ::kdm::platform::DeployedSoftwareSystem,
	                          ::kdm::platform::Machine,
	                          ::kdm::platform::DeployedComponent,
	                          ::kdm::platform::DeployedResource,
	                          ::kdm::platform::Loads,
	                          ::kdm::platform::Spawns,
	                          ::kdm::platform::RuntimeResource,
	                          ::kdm::platform::Thread,
	                          ::kdm::platform::Process,
	                          ::kdm::platform::ReadsResource,
	                          ::kdm::platform::WritesResource,
	                          ::kdm::platform::ManagesResource,
	                          ::kdm::platform::DefinedBy,
	                          ::kdm::platform::StreamResource > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::platform::AbstractPlatformElement >
{
	typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::AbstractPlatformElement >
{
	static const char * get()
	{
		return "AbstractPlatformElement";
	}
};


template < >
struct name< ::kdm::platform::AbstractPlatformElement__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::kdm::platform::AbstractPlatformElement__relation_tag >
{
	static const char * get()
	{
		return "relation";
	}
};


template < >
struct name< ::kdm::platform::AbstractPlatformElement__abstraction_tag >
{
	static const char * get()
	{
		return "abstraction";
	}
};


template < >
struct name< ::kdm::platform::AbstractPlatformElement__implementation_tag >
{
	static const char * get()
	{
		return "implementation";
	}
};


template < >
struct eclass< ::kdm::platform::PlatformModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::PlatformModel__platformElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::platform::PlatformModel__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::PlatformModel >
{
	static const char * get()
	{
		return "PlatformModel";
	}
};


template < >
struct name< ::kdm::platform::PlatformModel__platformElement_tag >
{
	static const char * get()
	{
		return "platformElement";
	}
};


template < >
struct eclass< ::kdm::platform::AbstractPlatformRelationship >
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
struct name< ::kdm::platform::AbstractPlatformRelationship >
{
	static const char * get()
	{
		return "AbstractPlatformRelationship";
	}
};


template < >
struct eclass< ::kdm::platform::Requires >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::platform::AbstractPlatformRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::Requires__to_tag,
	                          ::kdm::platform::Requires__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::Requires__to_tag,
	                          ::kdm::platform::Requires__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Requires >
{
	static const char * get()
	{
		return "Requires";
	}
};


template < >
struct name< ::kdm::platform::Requires__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::Requires__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::ResourceType >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::ResourceType__platformElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::ResourceType >
{
	static const char * get()
	{
		return "ResourceType";
	}
};


template < >
struct name< ::kdm::platform::ResourceType__platformElement_tag >
{
	static const char * get()
	{
		return "platformElement";
	}
};


template < >
struct eclass< ::kdm::platform::NamingResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::NamingResource >
{
	static const char * get()
	{
		return "NamingResource";
	}
};


template < >
struct eclass< ::kdm::platform::MarshalledResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::MarshalledResource >
{
	static const char * get()
	{
		return "MarshalledResource";
	}
};


template < >
struct eclass< ::kdm::platform::MessagingResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::MessagingResource >
{
	static const char * get()
	{
		return "MessagingResource";
	}
};


template < >
struct eclass< ::kdm::platform::FileResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::FileResource >
{
	static const char * get()
	{
		return "FileResource";
	}
};


template < >
struct eclass< ::kdm::platform::ExecutionResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::ExecutionResource >
{
	static const char * get()
	{
		return "ExecutionResource";
	}
};


template < >
struct eclass< ::kdm::platform::PlatformAction >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::PlatformAction__kind_tag,
	                          ::kdm::platform::PlatformAction__platformElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::PlatformAction__kind_tag,
	                          ::kdm::platform::PlatformAction__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::PlatformAction >
{
	static const char * get()
	{
		return "PlatformAction";
	}
};


template < >
struct name< ::kdm::platform::PlatformAction__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct name< ::kdm::platform::PlatformAction__platformElement_tag >
{
	static const char * get()
	{
		return "platformElement";
	}
};


template < >
struct eclass< ::kdm::platform::ExternalActor >
{
	typedef boost::mpl::list< ::kdm::platform::PlatformAction > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::PlatformAction > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::PlatformAction__kind_tag,
	                          ::kdm::platform::PlatformAction__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::ExternalActor >
{
	static const char * get()
	{
		return "ExternalActor";
	}
};


template < >
struct eclass< ::kdm::platform::DataManager >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::DataManager >
{
	static const char * get()
	{
		return "DataManager";
	}
};


template < >
struct eclass< ::kdm::platform::BindsTo >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::platform::AbstractPlatformRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::BindsTo__to_tag,
	                          ::kdm::platform::BindsTo__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::BindsTo__to_tag,
	                          ::kdm::platform::BindsTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::BindsTo >
{
	static const char * get()
	{
		return "BindsTo";
	}
};


template < >
struct name< ::kdm::platform::BindsTo__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::BindsTo__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::PlatformElement >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::PlatformElement >
{
	static const char * get()
	{
		return "PlatformElement";
	}
};


template < >
struct eclass< ::kdm::platform::PlatformRelationship >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::platform::AbstractPlatformRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::PlatformRelationship__to_tag,
	                          ::kdm::platform::PlatformRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::PlatformRelationship__to_tag,
	                          ::kdm::platform::PlatformRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::PlatformRelationship >
{
	static const char * get()
	{
		return "PlatformRelationship";
	}
};


template < >
struct name< ::kdm::platform::PlatformRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::PlatformRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::PlatformEvent >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::PlatformEvent__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::PlatformEvent__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::PlatformEvent >
{
	static const char * get()
	{
		return "PlatformEvent";
	}
};


template < >
struct name< ::kdm::platform::PlatformEvent__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::kdm::platform::LockResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::LockResource >
{
	static const char * get()
	{
		return "LockResource";
	}
};


template < >
struct eclass< ::kdm::platform::DeployedSoftwareSystem >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::DeployedSoftwareSystem__groupedComponent_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::DeployedSoftwareSystem__groupedComponent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::DeployedSoftwareSystem >
{
	static const char * get()
	{
		return "DeployedSoftwareSystem";
	}
};


template < >
struct name< ::kdm::platform::DeployedSoftwareSystem__groupedComponent_tag >
{
	static const char * get()
	{
		return "groupedComponent";
	}
};


template < >
struct eclass< ::kdm::platform::Machine >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::Machine__deployedComponent_tag,
	                          ::kdm::platform::Machine__deployedResource_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::Machine__deployedComponent_tag,
	                          ::kdm::platform::Machine__deployedResource_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Machine >
{
	static const char * get()
	{
		return "Machine";
	}
};


template < >
struct name< ::kdm::platform::Machine__deployedComponent_tag >
{
	static const char * get()
	{
		return "deployedComponent";
	}
};


template < >
struct name< ::kdm::platform::Machine__deployedResource_tag >
{
	static const char * get()
	{
		return "deployedResource";
	}
};


template < >
struct eclass< ::kdm::platform::DeployedComponent >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::DeployedComponent__groupedCode_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::DeployedComponent__groupedCode_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::DeployedComponent >
{
	static const char * get()
	{
		return "DeployedComponent";
	}
};


template < >
struct name< ::kdm::platform::DeployedComponent__groupedCode_tag >
{
	static const char * get()
	{
		return "groupedCode";
	}
};


template < >
struct eclass< ::kdm::platform::DeployedResource >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::DeployedResource__platformElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::DeployedResource__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::DeployedResource >
{
	static const char * get()
	{
		return "DeployedResource";
	}
};


template < >
struct name< ::kdm::platform::DeployedResource__platformElement_tag >
{
	static const char * get()
	{
		return "platformElement";
	}
};


template < >
struct eclass< ::kdm::platform::Loads >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::platform::AbstractPlatformRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::Loads__to_tag,
	                          ::kdm::platform::Loads__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::Loads__to_tag,
	                          ::kdm::platform::Loads__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Loads >
{
	static const char * get()
	{
		return "Loads";
	}
};


template < >
struct name< ::kdm::platform::Loads__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::Loads__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::Spawns >
{
	typedef boost::mpl::list< ::kdm::platform::AbstractPlatformRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::platform::AbstractPlatformRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::Spawns__to_tag,
	                          ::kdm::platform::Spawns__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::Spawns__to_tag,
	                          ::kdm::platform::Spawns__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Spawns >
{
	static const char * get()
	{
		return "Spawns";
	}
};


template < >
struct name< ::kdm::platform::Spawns__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::Spawns__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::RuntimeResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::RuntimeResource >
{
	static const char * get()
	{
		return "RuntimeResource";
	}
};


template < >
struct eclass< ::kdm::platform::Thread >
{
	typedef boost::mpl::list< ::kdm::platform::RuntimeResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType,
	                          ::kdm::platform::RuntimeResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Thread >
{
	static const char * get()
	{
		return "Thread";
	}
};


template < >
struct eclass< ::kdm::platform::Process >
{
	typedef boost::mpl::list< ::kdm::platform::RuntimeResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType,
	                          ::kdm::platform::RuntimeResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::Process >
{
	static const char * get()
	{
		return "Process";
	}
};


template < >
struct eclass< ::kdm::platform::ReadsResource >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::ReadsResource__to_tag,
	                          ::kdm::platform::ReadsResource__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::ReadsResource__to_tag,
	                          ::kdm::platform::ReadsResource__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::ReadsResource >
{
	static const char * get()
	{
		return "ReadsResource";
	}
};


template < >
struct name< ::kdm::platform::ReadsResource__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::ReadsResource__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::WritesResource >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::WritesResource__to_tag,
	                          ::kdm::platform::WritesResource__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::WritesResource__to_tag,
	                          ::kdm::platform::WritesResource__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::WritesResource >
{
	static const char * get()
	{
		return "WritesResource";
	}
};


template < >
struct name< ::kdm::platform::WritesResource__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::WritesResource__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::ManagesResource >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::ManagesResource__to_tag,
	                          ::kdm::platform::ManagesResource__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::ManagesResource__to_tag,
	                          ::kdm::platform::ManagesResource__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::ManagesResource >
{
	static const char * get()
	{
		return "ManagesResource";
	}
};


template < >
struct name< ::kdm::platform::ManagesResource__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::ManagesResource__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::DefinedBy >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::platform::DefinedBy__to_tag,
	                          ::kdm::platform::DefinedBy__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::platform::DefinedBy__to_tag,
	                          ::kdm::platform::DefinedBy__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::DefinedBy >
{
	static const char * get()
	{
		return "DefinedBy";
	}
};


template < >
struct name< ::kdm::platform::DefinedBy__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::platform::DefinedBy__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::platform::StreamResource >
{
	typedef boost::mpl::list< ::kdm::platform::ResourceType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::platform::AbstractPlatformElement,
	                          ::kdm::platform::ResourceType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::platform::AbstractPlatformElement__source_tag,
	                          ::kdm::platform::AbstractPlatformElement__relation_tag,
	                          ::kdm::platform::AbstractPlatformElement__abstraction_tag,
	                          ::kdm::platform::AbstractPlatformElement__implementation_tag,
	                          ::kdm::platform::ResourceType__platformElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::platform::StreamResource >
{
	static const char * get()
	{
		return "StreamResource";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_PLATFORM_Meta_HPP
