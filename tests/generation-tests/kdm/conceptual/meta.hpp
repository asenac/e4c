
#ifndef EMF_CPP_KDM_CONCEPTUAL_META_HPP
#define EMF_CPP_KDM_CONCEPTUAL_META_HPP

#include <e4c/definition.hpp>
#include <kdm/conceptual/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace conceptual
{



struct ConceptualModel__conceptualElement_tag
{
    typedef ConceptualModel eClass;
    typedef ::kdm::conceptual::AbstractConceptualElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualModel__conceptualElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractConceptualElement__source_tag
{
    typedef AbstractConceptualElement eClass;
    typedef ::kdm::source::SourceRef eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractConceptualElement__source_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractConceptualElement__implementation_tag
{
    typedef AbstractConceptualElement eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractConceptualElement__implementation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractConceptualElement__conceptualRelation_tag
{
    typedef AbstractConceptualElement eClass;
    typedef ::kdm::conceptual::AbstractConceptualRelationship eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractConceptualElement__conceptualRelation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractConceptualElement__abstraction_tag
{
    typedef AbstractConceptualElement eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractConceptualElement__abstraction_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualContainer__conceptualElement_tag
{
    typedef ConceptualContainer eClass;
    typedef ::kdm::conceptual::AbstractConceptualElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualContainer__conceptualElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualRelationship__to_tag
{
    typedef ConceptualRelationship eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualRelationship__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualRelationship__from_tag
{
    typedef ConceptualRelationship eClass;
    typedef ::kdm::conceptual::AbstractConceptualElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualRelationship__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualFlow__to_tag
{
    typedef ConceptualFlow eClass;
    typedef ::kdm::conceptual::ConceptualContainer eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualFlow__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualFlow__from_tag
{
    typedef ConceptualFlow eClass;
    typedef ::kdm::conceptual::ConceptualContainer eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualFlow__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ConceptualRole__conceptualElement_tag
{
    typedef ConceptualRole eClass;
    typedef ::kdm::conceptual::AbstractConceptualElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConceptualRole__conceptualElement_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};


} // conceptual
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::conceptual::ConceptualPackage >
{
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualModel,
                              ::kdm::conceptual::AbstractConceptualElement,
                              ::kdm::conceptual::TermUnit,
                              ::kdm::conceptual::ConceptualContainer,
                              ::kdm::conceptual::FactUnit,
                              ::kdm::conceptual::AbstractConceptualRelationship,
                              ::kdm::conceptual::ConceptualRelationship,
                              ::kdm::conceptual::BehaviorUnit,
                              ::kdm::conceptual::RuleUnit,
                              ::kdm::conceptual::ScenarioUnit,
                              ::kdm::conceptual::ConceptualFlow,
                              ::kdm::conceptual::ConceptualElement,
                              ::kdm::conceptual::ConceptualRole > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::conceptual::ConceptualModel >
{
    typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::kdm::KDMFramework,
                              ::kdm::kdm::KDMModel > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualModel__conceptualElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::kdm::KDMFramework__audit_tag,
                              ::kdm::kdm::KDMFramework__extensionFamily_tag,
                              ::kdm::kdm::KDMFramework__name_tag,
                              ::kdm::conceptual::ConceptualModel__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualModel >
{
    static const char * get()
    {
        return "ConceptualModel";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualModel__conceptualElement_tag >
{
    static const char * get()
    {
        return "conceptualElement";
    }
};


template < >
struct eclass< ::kdm::conceptual::AbstractConceptualElement >
{
    typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::AbstractConceptualElement >
{
    static const char * get()
    {
        return "AbstractConceptualElement";
    }
};


template < >
struct name< ::kdm::conceptual::AbstractConceptualElement__source_tag >
{
    static const char * get()
    {
        return "source";
    }
};


template < >
struct name< ::kdm::conceptual::AbstractConceptualElement__implementation_tag >
{
    static const char * get()
    {
        return "implementation";
    }
};


template < >
struct name< ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag >
{
    static const char * get()
    {
        return "conceptualRelation";
    }
};


template < >
struct name< ::kdm::conceptual::AbstractConceptualElement__abstraction_tag >
{
    static const char * get()
    {
        return "abstraction";
    }
};


template < >
struct eclass< ::kdm::conceptual::TermUnit >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::TermUnit >
{
    static const char * get()
    {
        return "TermUnit";
    }
};


template < >
struct eclass< ::kdm::conceptual::ConceptualContainer >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualContainer >
{
    static const char * get()
    {
        return "ConceptualContainer";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualContainer__conceptualElement_tag >
{
    static const char * get()
    {
        return "conceptualElement";
    }
};


template < >
struct eclass< ::kdm::conceptual::FactUnit >
{
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualContainer > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement,
                              ::kdm::conceptual::ConceptualContainer > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::FactUnit >
{
    static const char * get()
    {
        return "FactUnit";
    }
};


template < >
struct eclass< ::kdm::conceptual::AbstractConceptualRelationship >
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
struct name< ::kdm::conceptual::AbstractConceptualRelationship >
{
    static const char * get()
    {
        return "AbstractConceptualRelationship";
    }
};


template < >
struct eclass< ::kdm::conceptual::ConceptualRelationship >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::conceptual::AbstractConceptualRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualRelationship__to_tag,
                              ::kdm::conceptual::ConceptualRelationship__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::conceptual::ConceptualRelationship__to_tag,
                              ::kdm::conceptual::ConceptualRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualRelationship >
{
    static const char * get()
    {
        return "ConceptualRelationship";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualRelationship__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualRelationship__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::conceptual::BehaviorUnit >
{
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualContainer > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement,
                              ::kdm::conceptual::ConceptualContainer > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::BehaviorUnit >
{
    static const char * get()
    {
        return "BehaviorUnit";
    }
};


template < >
struct eclass< ::kdm::conceptual::RuleUnit >
{
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualContainer > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement,
                              ::kdm::conceptual::ConceptualContainer > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::RuleUnit >
{
    static const char * get()
    {
        return "RuleUnit";
    }
};


template < >
struct eclass< ::kdm::conceptual::ScenarioUnit >
{
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualContainer > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement,
                              ::kdm::conceptual::ConceptualContainer > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualContainer__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ScenarioUnit >
{
    static const char * get()
    {
        return "ScenarioUnit";
    }
};


template < >
struct eclass< ::kdm::conceptual::ConceptualFlow >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::conceptual::AbstractConceptualRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualFlow__to_tag,
                              ::kdm::conceptual::ConceptualFlow__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::conceptual::ConceptualFlow__to_tag,
                              ::kdm::conceptual::ConceptualFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualFlow >
{
    static const char * get()
    {
        return "ConceptualFlow";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualFlow__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualFlow__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::conceptual::ConceptualElement >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualElement >
{
    static const char * get()
    {
        return "ConceptualElement";
    }
};


template < >
struct eclass< ::kdm::conceptual::ConceptualRole >
{
    typedef boost::mpl::list< ::kdm::conceptual::AbstractConceptualElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::conceptual::AbstractConceptualElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::conceptual::ConceptualRole__conceptualElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::conceptual::AbstractConceptualElement__source_tag,
                              ::kdm::conceptual::AbstractConceptualElement__implementation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__conceptualRelation_tag,
                              ::kdm::conceptual::AbstractConceptualElement__abstraction_tag,
                              ::kdm::conceptual::ConceptualRole__conceptualElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::conceptual::ConceptualRole >
{
    static const char * get()
    {
        return "ConceptualRole";
    }
};


template < >
struct name< ::kdm::conceptual::ConceptualRole__conceptualElement_tag >
{
    static const char * get()
    {
        return "conceptualElement";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_CONCEPTUAL_Meta_HPP
