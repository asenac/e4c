
#ifndef EMF_CPP_KDM_UI_META_HPP
#define EMF_CPP_KDM_UI_META_HPP

#include <e4c/definition.hpp>
#include <kdm/ui/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/code/fwd.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace ui
{



struct AbstractUIElement__source_tag
{
    typedef AbstractUIElement eClass;
    typedef ::kdm::source::SourceRef eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractUIElement__source_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractUIElement__UIRelation_tag
{
    typedef AbstractUIElement eClass;
    typedef ::kdm::ui::AbstractUIRelationship eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractUIElement__UIRelation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractUIElement__implementation_tag
{
    typedef AbstractUIElement eClass;
    typedef ::kdm::code::AbstractCodeElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractUIElement__implementation_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct AbstractUIElement__abstraction_tag
{
    typedef AbstractUIElement eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractUIElement__abstraction_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct UIResource__UIElement_tag
{
    typedef UIResource eClass;
    typedef ::kdm::ui::AbstractUIElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIResource__UIElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIModel__UIElement_tag
{
    typedef UIModel eClass;
    typedef ::kdm::ui::AbstractUIElement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIModel__UIElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UILayout__to_tag
{
    typedef UILayout eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UILayout__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UILayout__from_tag
{
    typedef UILayout eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UILayout__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct DisplaysImage__to_tag
{
    typedef DisplaysImage eClass;
    typedef ::kdm::source::Image eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DisplaysImage__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct DisplaysImage__from_tag
{
    typedef DisplaysImage eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DisplaysImage__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Displays__to_tag
{
    typedef Displays eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Displays__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Displays__from_tag
{
    typedef Displays eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Displays__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIFlow__to_tag
{
    typedef UIFlow eClass;
    typedef ::kdm::ui::AbstractUIElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIFlow__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIFlow__from_tag
{
    typedef UIFlow eClass;
    typedef ::kdm::ui::AbstractUIElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIFlow__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIRelationship__to_tag
{
    typedef UIRelationship eClass;
    typedef ::kdm::core::KDMEntity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIRelationship__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIRelationship__from_tag
{
    typedef UIRelationship eClass;
    typedef ::kdm::ui::AbstractUIElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIRelationship__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIAction__kind_tag
{
    typedef UIAction eClass;
    typedef ::kdm::core::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct UIAction__UIElement_tag
{
    typedef UIAction eClass;
    typedef ::kdm::ui::UIEvent eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UIAction__UIElement_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct UIEvent__kind_tag
{
    typedef UIEvent eClass;
    typedef ::kdm::core::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ReadsUI__to_tag
{
    typedef ReadsUI eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ReadsUI__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ReadsUI__from_tag
{
    typedef ReadsUI eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ReadsUI__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct WritesUI__to_tag
{
    typedef WritesUI eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef WritesUI__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct WritesUI__from_tag
{
    typedef WritesUI eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef WritesUI__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ManagesUI__to_tag
{
    typedef ManagesUI eClass;
    typedef ::kdm::ui::UIResource eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ManagesUI__to_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct ManagesUI__from_tag
{
    typedef ManagesUI eClass;
    typedef ::kdm::action::ActionElement eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ManagesUI__from_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};


} // ui
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::ui::UiPackage >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement,
                              ::kdm::ui::UIResource,
                              ::kdm::ui::UIDisplay,
                              ::kdm::ui::Screen,
                              ::kdm::ui::Report,
                              ::kdm::ui::UIModel,
                              ::kdm::ui::AbstractUIRelationship,
                              ::kdm::ui::UILayout,
                              ::kdm::ui::UIField,
                              ::kdm::ui::DisplaysImage,
                              ::kdm::ui::Displays,
                              ::kdm::ui::UIFlow,
                              ::kdm::ui::UIElement,
                              ::kdm::ui::UIRelationship,
                              ::kdm::ui::UIAction,
                              ::kdm::ui::UIEvent,
                              ::kdm::ui::ReadsUI,
                              ::kdm::ui::WritesUI,
                              ::kdm::ui::ManagesUI > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::ui::AbstractUIElement >
{
    typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::AbstractUIElement >
{
    static const char * get()
    {
        return "AbstractUIElement";
    }
};


template < >
struct name< ::kdm::ui::AbstractUIElement__source_tag >
{
    static const char * get()
    {
        return "source";
    }
};


template < >
struct name< ::kdm::ui::AbstractUIElement__UIRelation_tag >
{
    static const char * get()
    {
        return "UIRelation";
    }
};


template < >
struct name< ::kdm::ui::AbstractUIElement__implementation_tag >
{
    static const char * get()
    {
        return "implementation";
    }
};


template < >
struct name< ::kdm::ui::AbstractUIElement__abstraction_tag >
{
    static const char * get()
    {
        return "abstraction";
    }
};


template < >
struct eclass< ::kdm::ui::UIResource >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIResource__UIElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIResource__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIResource >
{
    static const char * get()
    {
        return "UIResource";
    }
};


template < >
struct name< ::kdm::ui::UIResource__UIElement_tag >
{
    static const char * get()
    {
        return "UIElement";
    }
};


template < >
struct eclass< ::kdm::ui::UIDisplay >
{
    typedef boost::mpl::list< ::kdm::ui::UIResource > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement,
                              ::kdm::ui::UIResource > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIResource__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIDisplay >
{
    static const char * get()
    {
        return "UIDisplay";
    }
};


template < >
struct eclass< ::kdm::ui::Screen >
{
    typedef boost::mpl::list< ::kdm::ui::UIDisplay > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement,
                              ::kdm::ui::UIResource,
                              ::kdm::ui::UIDisplay > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIResource__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::Screen >
{
    static const char * get()
    {
        return "Screen";
    }
};


template < >
struct eclass< ::kdm::ui::Report >
{
    typedef boost::mpl::list< ::kdm::ui::UIDisplay > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement,
                              ::kdm::ui::UIResource,
                              ::kdm::ui::UIDisplay > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIResource__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::Report >
{
    static const char * get()
    {
        return "Report";
    }
};


template < >
struct eclass< ::kdm::ui::UIModel >
{
    typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::kdm::KDMFramework,
                              ::kdm::kdm::KDMModel > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIModel__UIElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::kdm::KDMFramework__audit_tag,
                              ::kdm::kdm::KDMFramework__extensionFamily_tag,
                              ::kdm::kdm::KDMFramework__name_tag,
                              ::kdm::ui::UIModel__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIModel >
{
    static const char * get()
    {
        return "UIModel";
    }
};


template < >
struct name< ::kdm::ui::UIModel__UIElement_tag >
{
    static const char * get()
    {
        return "UIElement";
    }
};


template < >
struct eclass< ::kdm::ui::AbstractUIRelationship >
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
struct name< ::kdm::ui::AbstractUIRelationship >
{
    static const char * get()
    {
        return "AbstractUIRelationship";
    }
};


template < >
struct eclass< ::kdm::ui::UILayout >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::ui::AbstractUIRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UILayout__to_tag,
                              ::kdm::ui::UILayout__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::UILayout__to_tag,
                              ::kdm::ui::UILayout__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UILayout >
{
    static const char * get()
    {
        return "UILayout";
    }
};


template < >
struct name< ::kdm::ui::UILayout__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::UILayout__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::UIField >
{
    typedef boost::mpl::list< ::kdm::ui::UIResource > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement,
                              ::kdm::ui::UIResource > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIResource__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIField >
{
    static const char * get()
    {
        return "UIField";
    }
};


template < >
struct eclass< ::kdm::ui::DisplaysImage >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::ui::AbstractUIRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::DisplaysImage__to_tag,
                              ::kdm::ui::DisplaysImage__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::DisplaysImage__to_tag,
                              ::kdm::ui::DisplaysImage__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::DisplaysImage >
{
    static const char * get()
    {
        return "DisplaysImage";
    }
};


template < >
struct name< ::kdm::ui::DisplaysImage__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::DisplaysImage__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::Displays >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::ui::AbstractUIRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::Displays__to_tag,
                              ::kdm::ui::Displays__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::Displays__to_tag,
                              ::kdm::ui::Displays__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::Displays >
{
    static const char * get()
    {
        return "Displays";
    }
};


template < >
struct name< ::kdm::ui::Displays__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::Displays__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::UIFlow >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::ui::AbstractUIRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIFlow__to_tag,
                              ::kdm::ui::UIFlow__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::UIFlow__to_tag,
                              ::kdm::ui::UIFlow__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIFlow >
{
    static const char * get()
    {
        return "UIFlow";
    }
};


template < >
struct name< ::kdm::ui::UIFlow__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::UIFlow__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::UIElement >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIElement >
{
    static const char * get()
    {
        return "UIElement";
    }
};


template < >
struct eclass< ::kdm::ui::UIRelationship >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::ui::AbstractUIRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIRelationship__to_tag,
                              ::kdm::ui::UIRelationship__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::UIRelationship__to_tag,
                              ::kdm::ui::UIRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIRelationship >
{
    static const char * get()
    {
        return "UIRelationship";
    }
};


template < >
struct name< ::kdm::ui::UIRelationship__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::UIRelationship__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::UIAction >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIAction__kind_tag,
                              ::kdm::ui::UIAction__UIElement_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIAction__kind_tag,
                              ::kdm::ui::UIAction__UIElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIAction >
{
    static const char * get()
    {
        return "UIAction";
    }
};


template < >
struct name< ::kdm::ui::UIAction__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct name< ::kdm::ui::UIAction__UIElement_tag >
{
    static const char * get()
    {
        return "UIElement";
    }
};


template < >
struct eclass< ::kdm::ui::UIEvent >
{
    typedef boost::mpl::list< ::kdm::ui::AbstractUIElement > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMEntity,
                              ::kdm::ui::AbstractUIElement > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::UIEvent__kind_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::core::KDMEntity__name_tag,
                              ::kdm::ui::AbstractUIElement__source_tag,
                              ::kdm::ui::AbstractUIElement__UIRelation_tag,
                              ::kdm::ui::AbstractUIElement__implementation_tag,
                              ::kdm::ui::AbstractUIElement__abstraction_tag,
                              ::kdm::ui::UIEvent__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::UIEvent >
{
    static const char * get()
    {
        return "UIEvent";
    }
};


template < >
struct name< ::kdm::ui::UIEvent__kind_tag >
{
    static const char * get()
    {
        return "kind";
    }
};


template < >
struct eclass< ::kdm::ui::ReadsUI >
{
    typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::ReadsUI__to_tag,
                              ::kdm::ui::ReadsUI__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::ReadsUI__to_tag,
                              ::kdm::ui::ReadsUI__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::ReadsUI >
{
    static const char * get()
    {
        return "ReadsUI";
    }
};


template < >
struct name< ::kdm::ui::ReadsUI__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::ReadsUI__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::WritesUI >
{
    typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::WritesUI__to_tag,
                              ::kdm::ui::WritesUI__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::WritesUI__to_tag,
                              ::kdm::ui::WritesUI__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::WritesUI >
{
    static const char * get()
    {
        return "WritesUI";
    }
};


template < >
struct name< ::kdm::ui::WritesUI__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::WritesUI__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};


template < >
struct eclass< ::kdm::ui::ManagesUI >
{
    typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
    typedef boost::mpl::list< ::kdm::core::Element,
                              ::kdm::core::ModelElement,
                              ::kdm::core::KDMRelationship,
                              ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
    typedef boost::mpl::list< ::kdm::ui::ManagesUI__to_tag,
                              ::kdm::ui::ManagesUI__from_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
                              ::kdm::core::Element__annotation_tag,
                              ::kdm::core::ModelElement__stereotype_tag,
                              ::kdm::core::ModelElement__taggedValue_tag,
                              ::kdm::ui::ManagesUI__to_tag,
                              ::kdm::ui::ManagesUI__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::ui::ManagesUI >
{
    static const char * get()
    {
        return "ManagesUI";
    }
};


template < >
struct name< ::kdm::ui::ManagesUI__to_tag >
{
    static const char * get()
    {
        return "to";
    }
};


template < >
struct name< ::kdm::ui::ManagesUI__from_tag >
{
    static const char * get()
    {
        return "from";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_UI_Meta_HPP
