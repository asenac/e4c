
#ifndef EMF_CPP_MYDSL_META_HPP
#define EMF_CPP_MYDSL_META_HPP

#include <e4c/definition.hpp>
#include <myDsl/fwd.hpp>

#include <ecore/fwd.hpp>

namespace myDsl
{



struct Model__imports_tag
{
    typedef Model eClass;
    typedef ::myDsl::Import eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Model__imports_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Model__elements_tag
{
    typedef Model eClass;
    typedef ::myDsl::Type eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Model__elements_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Import__importURI_tag
{
    typedef Import eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Type__name_tag
{
    typedef Type eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Entity__extends_tag
{
    typedef Entity eClass;
    typedef ::myDsl::Entity eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Entity__extends_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Entity__properties_tag
{
    typedef Entity eClass;
    typedef ::myDsl::Property eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Entity__properties_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Property__name_tag
{
    typedef Property eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Property__type_tag
{
    typedef Property eClass;
    typedef ::myDsl::Type eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Property__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Property__many_tag
{
    typedef Property eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // myDsl


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::myDsl::MyDslPackage >
{
    typedef boost::mpl::list< ::myDsl::Model,
                              ::myDsl::Import,
                              ::myDsl::Type,
                              ::myDsl::SimpleType,
                              ::myDsl::Entity,
                              ::myDsl::Property > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::myDsl::Model >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::myDsl::Model__imports_tag,
                              ::myDsl::Model__elements_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Model__imports_tag,
                              ::myDsl::Model__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::Model >
{
    static const char * get()
    {
        return "Model";
    }
};


template < >
struct name< ::myDsl::Model__imports_tag >
{
    static const char * get()
    {
        return "imports";
    }
};


template < >
struct name< ::myDsl::Model__elements_tag >
{
    static const char * get()
    {
        return "elements";
    }
};


template < >
struct eclass< ::myDsl::Import >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::myDsl::Import__importURI_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Import__importURI_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::Import >
{
    static const char * get()
    {
        return "Import";
    }
};


template < >
struct name< ::myDsl::Import__importURI_tag >
{
    static const char * get()
    {
        return "importURI";
    }
};


template < >
struct eclass< ::myDsl::Type >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::myDsl::Type__name_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Type__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::Type >
{
    static const char * get()
    {
        return "Type";
    }
};


template < >
struct name< ::myDsl::Type__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct eclass< ::myDsl::SimpleType >
{
    typedef boost::mpl::list< ::myDsl::Type > eSuperTypes;
    typedef boost::mpl::list< ::myDsl::Type > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Type__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::SimpleType >
{
    static const char * get()
    {
        return "SimpleType";
    }
};


template < >
struct eclass< ::myDsl::Entity >
{
    typedef boost::mpl::list< ::myDsl::Type > eSuperTypes;
    typedef boost::mpl::list< ::myDsl::Type > eAllSuperTypes;
    typedef boost::mpl::list< ::myDsl::Entity__extends_tag,
                              ::myDsl::Entity__properties_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Type__name_tag,
                              ::myDsl::Entity__extends_tag,
                              ::myDsl::Entity__properties_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::Entity >
{
    static const char * get()
    {
        return "Entity";
    }
};


template < >
struct name< ::myDsl::Entity__extends_tag >
{
    static const char * get()
    {
        return "extends";
    }
};


template < >
struct name< ::myDsl::Entity__properties_tag >
{
    static const char * get()
    {
        return "properties";
    }
};


template < >
struct eclass< ::myDsl::Property >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::myDsl::Property__name_tag,
                              ::myDsl::Property__type_tag,
                              ::myDsl::Property__many_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::myDsl::Property__name_tag,
                              ::myDsl::Property__type_tag,
                              ::myDsl::Property__many_tag > eAllStructuralFeatures;
};

template < >
struct name< ::myDsl::Property >
{
    static const char * get()
    {
        return "Property";
    }
};


template < >
struct name< ::myDsl::Property__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct name< ::myDsl::Property__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct name< ::myDsl::Property__many_tag >
{
    static const char * get()
    {
        return "many";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_MYDSL_Meta_HPP
