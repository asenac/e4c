
#ifndef EMF_CPP_WIDGETSMM_META_HPP
#define EMF_CPP_WIDGETSMM_META_HPP

#include <e4c/definition.hpp>
#include <widgetsmm/fwd.hpp>

#include <>
#include <ecore/fwd.hpp>

namespace widgetsmm
{



struct Widget__parent_tag
{
    typedef Widget eClass;
    typedef ::widgetsmm::Window eReferenceType;
    static const bool containment = false;
    static const bool container = true;
    static const bool hasOpposite = true;
    typedef ::widgetsmm::Window__children_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Widget__properties_tag
{
    typedef Widget eClass;
    typedef ::widgetsmm::Property eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Widget__properties_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Widget__name_tag
{
    typedef Widget eClass;
    typedef :: eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Widget__type_tag
{
    typedef Widget eClass;
    typedef :: eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ComboBox__count_tag
{
    typedef ComboBox eClass;
    typedef ::ecore::EInt eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ComboBox__currentIndex_tag
{
    typedef ComboBox eClass;
    typedef ::ecore::EInt eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Window__title_tag
{
    typedef Window eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Window__children_tag
{
    typedef Window eClass;
    typedef ::widgetsmm::Widget eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = true;
    typedef ::widgetsmm::Widget__parent_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Property__name_tag
{
    typedef Property eClass;
    typedef :: eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Property__value_tag
{
    typedef Property eClass;
    typedef :: eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // widgetsmm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::widgetsmm::WidgetsmmPackage >
{
    typedef boost::mpl::list< ::widgetsmm::Widget,
                              ::widgetsmm::ComboBox,
                              ::widgetsmm::Window,
                              ::widgetsmm::Property > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::widgetsmm::Widget >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::Widget__parent_tag,
                              ::widgetsmm::Widget__properties_tag,
                              ::widgetsmm::Widget__name_tag,
                              ::widgetsmm::Widget__type_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::widgetsmm::Widget__parent_tag,
                              ::widgetsmm::Widget__properties_tag,
                              ::widgetsmm::Widget__name_tag,
                              ::widgetsmm::Widget__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::widgetsmm::Widget >
{
    static const char * get()
    {
        return "Widget";
    }
};


template < >
struct name< ::widgetsmm::Widget__parent_tag >
{
    static const char * get()
    {
        return "parent";
    }
};


template < >
struct name< ::widgetsmm::Widget__properties_tag >
{
    static const char * get()
    {
        return "properties";
    }
};


template < >
struct name< ::widgetsmm::Widget__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct name< ::widgetsmm::Widget__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct eclass< ::widgetsmm::ComboBox >
{
    typedef boost::mpl::list< ::widgetsmm::Widget > eSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::Widget > eAllSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::ComboBox__count_tag,
                              ::widgetsmm::ComboBox__currentIndex_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::widgetsmm::Widget__parent_tag,
                              ::widgetsmm::Widget__properties_tag,
                              ::widgetsmm::Widget__name_tag,
                              ::widgetsmm::Widget__type_tag,
                              ::widgetsmm::ComboBox__count_tag,
                              ::widgetsmm::ComboBox__currentIndex_tag > eAllStructuralFeatures;
};

template < >
struct name< ::widgetsmm::ComboBox >
{
    static const char * get()
    {
        return "ComboBox";
    }
};


template < >
struct name< ::widgetsmm::ComboBox__count_tag >
{
    static const char * get()
    {
        return "count";
    }
};


template < >
struct name< ::widgetsmm::ComboBox__currentIndex_tag >
{
    static const char * get()
    {
        return "currentIndex";
    }
};


template < >
struct eclass< ::widgetsmm::Window >
{
    typedef boost::mpl::list< ::widgetsmm::Widget > eSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::Widget > eAllSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::Window__title_tag,
                              ::widgetsmm::Window__children_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::widgetsmm::Widget__parent_tag,
                              ::widgetsmm::Widget__properties_tag,
                              ::widgetsmm::Widget__name_tag,
                              ::widgetsmm::Widget__type_tag,
                              ::widgetsmm::Window__title_tag,
                              ::widgetsmm::Window__children_tag > eAllStructuralFeatures;
};

template < >
struct name< ::widgetsmm::Window >
{
    static const char * get()
    {
        return "Window";
    }
};


template < >
struct name< ::widgetsmm::Window__title_tag >
{
    static const char * get()
    {
        return "title";
    }
};


template < >
struct name< ::widgetsmm::Window__children_tag >
{
    static const char * get()
    {
        return "children";
    }
};


template < >
struct eclass< ::widgetsmm::Property >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::widgetsmm::Property__name_tag,
                              ::widgetsmm::Property__value_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::widgetsmm::Property__name_tag,
                              ::widgetsmm::Property__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::widgetsmm::Property >
{
    static const char * get()
    {
        return "Property";
    }
};


template < >
struct name< ::widgetsmm::Property__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct name< ::widgetsmm::Property__value_tag >
{
    static const char * get()
    {
        return "value";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_WIDGETSMM_Meta_HPP
