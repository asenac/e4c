
#ifndef EMF_CPP_MAKE_META_HPP
#define EMF_CPP_MAKE_META_HPP

#include <e4c/definition.hpp>
#include <Make/fwd.hpp>

#include <PrimitiveTypes/fwd.hpp>

namespace Make
{



struct Makefile__name_tag
{
    typedef Makefile eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct Makefile__comment_tag
{
    typedef Makefile eClass;
    typedef ::Make::Comment eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Makefile__comment_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Makefile__elements_tag
{
    typedef Makefile eClass;
    typedef ::Make::Element eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Makefile__elements_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Element__name_tag
{
    typedef Element eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct Rule__dependencies_tag
{
    typedef Rule eClass;
    typedef ::Make::Dependency eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Rule__dependencies_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Rule__shellLines_tag
{
    typedef Rule eClass;
    typedef ::Make::ShellLine eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = true;
    typedef ::Make::ShellLine__ruleShellLine_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Macro__value_tag
{
    typedef Macro eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ShellLine__command_tag
{
    typedef ShellLine eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ShellLine__display_tag
{
    typedef ShellLine eClass;
    typedef ::PrimitiveTypes::Boolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct ShellLine__ruleShellLine_tag
{
    typedef ShellLine eClass;
    typedef ::Make::Rule eReferenceType;
    static const bool containment = false;
    static const bool container = true;
    static const bool hasOpposite = true;
    typedef ::Make::Rule__shellLines_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct Comment__text_tag
{
    typedef Comment eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};

struct RuleDep__ruledep_tag
{
    typedef RuleDep eClass;
    typedef ::Make::Rule eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef RuleDep__ruledep_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = true;
};

struct FileDep__name_tag
{
    typedef FileDep eClass;
    typedef ::PrimitiveTypes::String eType;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = false;
    static const bool unique = false;
};


} // Make


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::Make::MakePackage >
{
    typedef boost::mpl::list< ::Make::Makefile,
                              ::Make::Element,
                              ::Make::Rule,
                              ::Make::Macro,
                              ::Make::ShellLine,
                              ::Make::Comment,
                              ::Make::Dependency,
                              ::Make::RuleDep,
                              ::Make::FileDep > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::Make::Makefile >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::Makefile__name_tag,
                              ::Make::Makefile__comment_tag,
                              ::Make::Makefile__elements_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::Makefile__name_tag,
                              ::Make::Makefile__comment_tag,
                              ::Make::Makefile__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Makefile >
{
    static const char * get()
    {
        return "Makefile";
    }
};


template < >
struct name< ::Make::Makefile__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct name< ::Make::Makefile__comment_tag >
{
    static const char * get()
    {
        return "comment";
    }
};


template < >
struct name< ::Make::Makefile__elements_tag >
{
    static const char * get()
    {
        return "elements";
    }
};


template < >
struct eclass< ::Make::Element >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::Element__name_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::Element__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Element >
{
    static const char * get()
    {
        return "Element";
    }
};


template < >
struct name< ::Make::Element__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct eclass< ::Make::Rule >
{
    typedef boost::mpl::list< ::Make::Element > eSuperTypes;
    typedef boost::mpl::list< ::Make::Element > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::Rule__dependencies_tag,
                              ::Make::Rule__shellLines_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::Element__name_tag,
                              ::Make::Rule__dependencies_tag,
                              ::Make::Rule__shellLines_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Rule >
{
    static const char * get()
    {
        return "Rule";
    }
};


template < >
struct name< ::Make::Rule__dependencies_tag >
{
    static const char * get()
    {
        return "dependencies";
    }
};


template < >
struct name< ::Make::Rule__shellLines_tag >
{
    static const char * get()
    {
        return "shellLines";
    }
};


template < >
struct eclass< ::Make::Macro >
{
    typedef boost::mpl::list< ::Make::Element > eSuperTypes;
    typedef boost::mpl::list< ::Make::Element > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::Macro__value_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::Element__name_tag,
                              ::Make::Macro__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Macro >
{
    static const char * get()
    {
        return "Macro";
    }
};


template < >
struct name< ::Make::Macro__value_tag >
{
    static const char * get()
    {
        return "value";
    }
};


template < >
struct eclass< ::Make::ShellLine >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::ShellLine__command_tag,
                              ::Make::ShellLine__display_tag,
                              ::Make::ShellLine__ruleShellLine_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::ShellLine__command_tag,
                              ::Make::ShellLine__display_tag,
                              ::Make::ShellLine__ruleShellLine_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::ShellLine >
{
    static const char * get()
    {
        return "ShellLine";
    }
};


template < >
struct name< ::Make::ShellLine__command_tag >
{
    static const char * get()
    {
        return "command";
    }
};


template < >
struct name< ::Make::ShellLine__display_tag >
{
    static const char * get()
    {
        return "display";
    }
};


template < >
struct name< ::Make::ShellLine__ruleShellLine_tag >
{
    static const char * get()
    {
        return "ruleShellLine";
    }
};


template < >
struct eclass< ::Make::Comment >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::Comment__text_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::Comment__text_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Comment >
{
    static const char * get()
    {
        return "Comment";
    }
};


template < >
struct name< ::Make::Comment__text_tag >
{
    static const char * get()
    {
        return "text";
    }
};


template < >
struct eclass< ::Make::Dependency >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::Make::Dependency >
{
    static const char * get()
    {
        return "Dependency";
    }
};


template < >
struct eclass< ::Make::RuleDep >
{
    typedef boost::mpl::list< ::Make::Dependency > eSuperTypes;
    typedef boost::mpl::list< ::Make::Dependency > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::RuleDep__ruledep_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::RuleDep__ruledep_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::RuleDep >
{
    static const char * get()
    {
        return "RuleDep";
    }
};


template < >
struct name< ::Make::RuleDep__ruledep_tag >
{
    static const char * get()
    {
        return "ruledep";
    }
};


template < >
struct eclass< ::Make::FileDep >
{
    typedef boost::mpl::list< ::Make::Dependency > eSuperTypes;
    typedef boost::mpl::list< ::Make::Dependency > eAllSuperTypes;
    typedef boost::mpl::list< ::Make::FileDep__name_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::Make::FileDep__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::Make::FileDep >
{
    static const char * get()
    {
        return "FileDep";
    }
};


template < >
struct name< ::Make::FileDep__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_MAKE_Meta_HPP
