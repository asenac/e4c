
#ifndef EMF_CPP_KDM_STRUCTURE_META_HPP
#define EMF_CPP_KDM_STRUCTURE_META_HPP

#include <e4c/definition.hpp>
#include <kdm/structure/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace structure
{



struct AbstractStructureElement__aggregated_tag
{
    typedef AbstractStructureElement eClass;
    typedef ::kdm::core::AggregatedRelationship eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractStructureElement__aggregated_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractStructureElement__implementation_tag
{
    typedef AbstractStructureElement eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractStructureElement__implementation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractStructureElement__structureElement_tag
{
    typedef AbstractStructureElement eClass;
    typedef ::kdm::structure::AbstractStructureElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractStructureElement__structureElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractStructureElement__structureRelationship_tag
{
    typedef AbstractStructureElement eClass;
    typedef ::kdm::structure::AbstractStructureRelationship eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractStructureElement__structureRelationship_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct StructureModel__structureElement_tag
{
    typedef StructureModel eClass;
    typedef ::kdm::structure::AbstractStructureElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef StructureModel__structureElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct StructureRelationship__to_tag
{
    typedef StructureRelationship eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef StructureRelationship__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct StructureRelationship__from_tag
{
    typedef StructureRelationship eClass;
    typedef ::kdm::structure::AbstractStructureElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef StructureRelationship__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};


} // structure
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::structure::StructurePackage >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement,
                              ::kdm::structure::Subsystem,
                              ::kdm::structure::Layer,
                              ::kdm::structure::StructureModel,
                              ::kdm::structure::Component,
                              ::kdm::structure::SoftwareSystem,
                              ::kdm::structure::AbstractStructureRelationship,
                              ::kdm::structure::StructureRelationship,
                              ::kdm::structure::ArchitectureView,
                              ::kdm::structure::StructureElement > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::structure::AbstractStructureElement >
{
    typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::AbstractStructureElement >
{
    static const char * get()
    {
        return "AbstractStructureElement";
    }
};


template < >
struct name< ::kdm::structure::AbstractStructureElement__aggregated_tag >
{
    static const char * get()
    {
        return "aggregated";
    }
};


template < >
struct name< ::kdm::structure::AbstractStructureElement__implementation_tag >
{
    static const char * get()
    {
        return "implementation";
    }
};


template < >
struct name< ::kdm::structure::AbstractStructureElement__structureElement_tag >
{
    static const char * get()
    {
        return "structureElement";
    }
};


template < >
struct name< ::kdm::structure::AbstractStructureElement__structureRelationship_tag >
{
    static const char * get()
    {
        return "structureRelationship";
    }
};


template < >
struct eclass< ::kdm::structure::Subsystem >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::Subsystem >
{
    static const char * get()
    {
        return "Subsystem";
    }
};


template < >
struct eclass< ::kdm::structure::Layer >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::Layer >
{
    static const char * get()
    {
        return "Layer";
    }
};


template < >
struct eclass< ::kdm::structure::StructureModel >
{
    typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::kdm::KDMFramework,
                              ::kdm::kdm::KDMModel > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::structure::StructureModel__structureElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::kdm::KDMFramework__audit_tag,
                              ::kdm::kdm::KDMFramework__extensionFamily_tag,
                              ::kdm::kdm::KDMFramework__name_tag,
                              ::kdm::structure::StructureModel__structureElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::StructureModel >
{
    static const char * get()
    {
        return "StructureModel";
    }
};


template < >
struct name< ::kdm::structure::StructureModel__structureElement_tag >
{
    static const char * get()
    {
        return "structureElement";
    }
};


template < >
struct eclass< ::kdm::structure::Component >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::Component >
{
    static const char * get()
    {
        return "Component";
    }
};


template < >
struct eclass< ::kdm::structure::SoftwareSystem >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::SoftwareSystem >
{
    static const char * get()
    {
        return "SoftwareSystem";
    }
};


template < >
struct eclass< ::kdm::structure::AbstractStructureRelationship >
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
struct name< ::kdm::structure::AbstractStructureRelationship >
{
    static const char * get()
    {
        return "AbstractStructureRelationship";
    }
};


template < >
struct eclass< ::kdm::structure::StructureRelationship >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::structure::AbstractStructureRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::structure::StructureRelationship__to_tag,
                              ::kdm::structure::StructureRelationship__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::structure::StructureRelationship__to_tag,
                              ::kdm::structure::StructureRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::StructureRelationship >
{
    static const char * get()
    {
        return "StructureRelationship";
    }
};


template < >
struct name< ::kdm::structure::StructureRelationship__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::structure::StructureRelationship__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::structure::ArchitectureView >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::ArchitectureView >
{
    static const char * get()
    {
        return "ArchitectureView";
    }
};


template < >
struct eclass< ::kdm::structure::StructureElement >
{
    typedef boost::mpl::list< ::kdm::structure::AbstractStructureElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::structure::AbstractStructureElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::structure::AbstractStructureElement__aggregated_tag,
                              ::kdm::structure::AbstractStructureElement__implementation_tag,
                              ::kdm::structure::AbstractStructureElement__structureElement_tag,
                              ::kdm::structure::AbstractStructureElement__structureRelationship_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::structure::StructureElement >
{
    static const char * get()
    {
        return "StructureElement";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_STRUCTURE_Meta_HPP
