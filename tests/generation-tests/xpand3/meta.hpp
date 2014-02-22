
#ifndef EMF_CPP_XPAND3_META_HPP
#define EMF_CPP_XPAND3_META_HPP

#include <e4c/definition.hpp>
#include <xpand3/fwd.hpp>

#include <ecore/fwd.hpp>
#include <xpand3/declaration/fwd.hpp>

namespace xpand3
{



struct SyntaxElement__line_tag
{
    typedef SyntaxElement eClass;
    typedef ::ecore::EInt eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SyntaxElement__start_tag
{
    typedef SyntaxElement eClass;
    typedef ::ecore::EInt eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SyntaxElement__end_tag
{
    typedef SyntaxElement eClass;
    typedef ::ecore::EInt eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SyntaxElement__fileName_tag
{
    typedef SyntaxElement eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct File__imports_tag
{
    typedef File eClass;
    typedef ::xpand3::ImportStatement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef File__imports_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct File__declarations_tag
{
    typedef File eClass;
    typedef ::xpand3::declaration::AbstractDeclaration eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef File__declarations_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ImportStatement__importedId_tag
{
    typedef ImportStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ImportStatement__importedId_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ImportStatement__exported_tag
{
    typedef ImportStatement eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Identifier__value_tag
{
    typedef Identifier eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct DeclaredParameter__name_tag
{
    typedef DeclaredParameter eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DeclaredParameter__name_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct DeclaredParameter__type_tag
{
    typedef DeclaredParameter eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DeclaredParameter__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // xpand3


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::xpand3::Xpand3Package >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::File,
                              ::xpand3::ImportStatement,
                              ::xpand3::Identifier,
                              ::xpand3::DeclaredParameter > eClasses;
    typedef boost::mpl::list< ::xpand3::expression::ExpressionPackage,
                              ::xpand3::statement::StatementPackage,
                              ::xpand3::declaration::DeclarationPackage > eSubpackages;
};

template < >
struct eclass< ::xpand3::SyntaxElement >
{
    typedef boost::mpl::list<  > eSuperTypes;
    typedef boost::mpl::list<  > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::SyntaxElement >
{
    static const char * get()
    {
        return "SyntaxElement";
    }
};


template < >
struct name< ::xpand3::SyntaxElement__line_tag >
{
    static const char * get()
    {
        return "line";
    }
};


template < >
struct name< ::xpand3::SyntaxElement__start_tag >
{
    static const char * get()
    {
        return "start";
    }
};


template < >
struct name< ::xpand3::SyntaxElement__end_tag >
{
    static const char * get()
    {
        return "end";
    }
};


template < >
struct name< ::xpand3::SyntaxElement__fileName_tag >
{
    static const char * get()
    {
        return "fileName";
    }
};


template < >
struct eclass< ::xpand3::File >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::File__imports_tag,
                              ::xpand3::File__declarations_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::File__imports_tag,
                              ::xpand3::File__declarations_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::File >
{
    static const char * get()
    {
        return "File";
    }
};


template < >
struct name< ::xpand3::File__imports_tag >
{
    static const char * get()
    {
        return "imports";
    }
};


template < >
struct name< ::xpand3::File__declarations_tag >
{
    static const char * get()
    {
        return "declarations";
    }
};


template < >
struct eclass< ::xpand3::ImportStatement >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::ImportStatement__importedId_tag,
                              ::xpand3::ImportStatement__exported_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::ImportStatement__importedId_tag,
                              ::xpand3::ImportStatement__exported_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::ImportStatement >
{
    static const char * get()
    {
        return "ImportStatement";
    }
};


template < >
struct name< ::xpand3::ImportStatement__importedId_tag >
{
    static const char * get()
    {
        return "importedId";
    }
};


template < >
struct name< ::xpand3::ImportStatement__exported_tag >
{
    static const char * get()
    {
        return "exported";
    }
};


template < >
struct eclass< ::xpand3::Identifier >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::Identifier__value_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::Identifier__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::Identifier >
{
    static const char * get()
    {
        return "Identifier";
    }
};


template < >
struct name< ::xpand3::Identifier__value_tag >
{
    static const char * get()
    {
        return "value";
    }
};


template < >
struct eclass< ::xpand3::DeclaredParameter >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::DeclaredParameter__name_tag,
                              ::xpand3::DeclaredParameter__type_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::DeclaredParameter__name_tag,
                              ::xpand3::DeclaredParameter__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::DeclaredParameter >
{
    static const char * get()
    {
        return "DeclaredParameter";
    }
};


template < >
struct name< ::xpand3::DeclaredParameter__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct name< ::xpand3::DeclaredParameter__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_XPAND3_Meta_HPP
