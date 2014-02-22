
#ifndef EMF_CPP_XPAND3_DECLARATION_META_HPP
#define EMF_CPP_XPAND3_DECLARATION_META_HPP

#include <e4c/definition.hpp>
#include <xpand3/declaration/fwd.hpp>

#include <ecore/fwd.hpp>
#include <xpand3/fwd.hpp>
#include <xpand3/expression/fwd.hpp>
#include <xpand3/statement/fwd.hpp>

namespace xpand3
{
namespace declaration
{



struct AbstractDeclaration__owner_tag
{
    typedef AbstractDeclaration eClass;
    typedef ::xpand3::File eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractDeclaration__owner_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractDeclaration__params_tag
{
    typedef AbstractDeclaration eClass;
    typedef ::xpand3::DeclaredParameter eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractDeclaration__params_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractDeclaration__isPrivate_tag
{
    typedef AbstractDeclaration eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractDeclaration__guard_tag
{
    typedef AbstractDeclaration eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractDeclaration__guard_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractNamedDeclaration__name_tag
{
    typedef AbstractNamedDeclaration eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractNamedDeclaration__name_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Definition__body_tag
{
    typedef Definition eClass;
    typedef ::xpand3::statement::AbstractStatement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Definition__body_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Extension__cached_tag
{
    typedef Extension eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Extension__body_tag
{
    typedef Extension eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Extension__body_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Extension__returnType_tag
{
    typedef Extension eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Extension__returnType_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractAspect__pointcut_tag
{
    typedef AbstractAspect eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractAspect__pointcut_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractAspect__wildparams_tag
{
    typedef AbstractAspect eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExtensionAspect__expression_tag
{
    typedef ExtensionAspect eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExtensionAspect__expression_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct DefinitionAspect__body_tag
{
    typedef DefinitionAspect eClass;
    typedef ::xpand3::statement::AbstractStatement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef DefinitionAspect__body_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Check__errorSeverity_tag
{
    typedef Check eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Check__msg_tag
{
    typedef Check eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Check__msg_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Check__constraint_tag
{
    typedef Check eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Check__constraint_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Check__feature_tag
{
    typedef Check eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct CreateExtension__toBeCreated_tag
{
    typedef CreateExtension eClass;
    typedef ::xpand3::DeclaredParameter eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CreateExtension__toBeCreated_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct JavaExtension__javaType_tag
{
    typedef JavaExtension eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef JavaExtension__javaType_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct JavaExtension__javaMethod_tag
{
    typedef JavaExtension eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef JavaExtension__javaMethod_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct JavaExtension__javaParamTypes_tag
{
    typedef JavaExtension eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef JavaExtension__javaParamTypes_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // declaration
} // xpand3


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::xpand3::declaration::DeclarationPackage >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractNamedDeclaration,
                              ::xpand3::declaration::Definition,
                              ::xpand3::declaration::Extension,
                              ::xpand3::declaration::AbstractAspect,
                              ::xpand3::declaration::ExtensionAspect,
                              ::xpand3::declaration::DefinitionAspect,
                              ::xpand3::declaration::Check,
                              ::xpand3::declaration::CreateExtension,
                              ::xpand3::declaration::JavaExtension > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::xpand3::declaration::AbstractDeclaration >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::AbstractDeclaration >
{
    static const char * get()
    {
        return "AbstractDeclaration";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractDeclaration__owner_tag >
{
    static const char * get()
    {
        return "owner";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractDeclaration__params_tag >
{
    static const char * get()
    {
        return "params";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractDeclaration__isPrivate_tag >
{
    static const char * get()
    {
        return "isPrivate";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractDeclaration__guard_tag >
{
    static const char * get()
    {
        return "guard";
    }
};


template < >
struct eclass< ::xpand3::declaration::AbstractNamedDeclaration >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::AbstractNamedDeclaration__name_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractNamedDeclaration__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::AbstractNamedDeclaration >
{
    static const char * get()
    {
        return "AbstractNamedDeclaration";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractNamedDeclaration__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct eclass< ::xpand3::declaration::Definition >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractNamedDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractNamedDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::Definition__body_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractNamedDeclaration__name_tag,
                              ::xpand3::declaration::Definition__body_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::Definition >
{
    static const char * get()
    {
        return "Definition";
    }
};


template < >
struct name< ::xpand3::declaration::Definition__body_tag >
{
    static const char * get()
    {
        return "body";
    }
};


template < >
struct eclass< ::xpand3::declaration::Extension >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractNamedDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractNamedDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::Extension__cached_tag,
                              ::xpand3::declaration::Extension__body_tag,
                              ::xpand3::declaration::Extension__returnType_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractNamedDeclaration__name_tag,
                              ::xpand3::declaration::Extension__cached_tag,
                              ::xpand3::declaration::Extension__body_tag,
                              ::xpand3::declaration::Extension__returnType_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::Extension >
{
    static const char * get()
    {
        return "Extension";
    }
};


template < >
struct name< ::xpand3::declaration::Extension__cached_tag >
{
    static const char * get()
    {
        return "cached";
    }
};


template < >
struct name< ::xpand3::declaration::Extension__body_tag >
{
    static const char * get()
    {
        return "body";
    }
};


template < >
struct name< ::xpand3::declaration::Extension__returnType_tag >
{
    static const char * get()
    {
        return "returnType";
    }
};


template < >
struct eclass< ::xpand3::declaration::AbstractAspect >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::AbstractAspect__pointcut_tag,
                              ::xpand3::declaration::AbstractAspect__wildparams_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractAspect__pointcut_tag,
                              ::xpand3::declaration::AbstractAspect__wildparams_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::AbstractAspect >
{
    static const char * get()
    {
        return "AbstractAspect";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractAspect__pointcut_tag >
{
    static const char * get()
    {
        return "pointcut";
    }
};


template < >
struct name< ::xpand3::declaration::AbstractAspect__wildparams_tag >
{
    static const char * get()
    {
        return "wildparams";
    }
};


template < >
struct eclass< ::xpand3::declaration::ExtensionAspect >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractAspect > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractAspect > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::ExtensionAspect__expression_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractAspect__pointcut_tag,
                              ::xpand3::declaration::AbstractAspect__wildparams_tag,
                              ::xpand3::declaration::ExtensionAspect__expression_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::ExtensionAspect >
{
    static const char * get()
    {
        return "ExtensionAspect";
    }
};


template < >
struct name< ::xpand3::declaration::ExtensionAspect__expression_tag >
{
    static const char * get()
    {
        return "expression";
    }
};


template < >
struct eclass< ::xpand3::declaration::DefinitionAspect >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractAspect > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractAspect > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::DefinitionAspect__body_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractAspect__pointcut_tag,
                              ::xpand3::declaration::AbstractAspect__wildparams_tag,
                              ::xpand3::declaration::DefinitionAspect__body_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::DefinitionAspect >
{
    static const char * get()
    {
        return "DefinitionAspect";
    }
};


template < >
struct name< ::xpand3::declaration::DefinitionAspect__body_tag >
{
    static const char * get()
    {
        return "body";
    }
};


template < >
struct eclass< ::xpand3::declaration::Check >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::Check__errorSeverity_tag,
                              ::xpand3::declaration::Check__msg_tag,
                              ::xpand3::declaration::Check__constraint_tag,
                              ::xpand3::declaration::Check__feature_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::Check__errorSeverity_tag,
                              ::xpand3::declaration::Check__msg_tag,
                              ::xpand3::declaration::Check__constraint_tag,
                              ::xpand3::declaration::Check__feature_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::Check >
{
    static const char * get()
    {
        return "Check";
    }
};


template < >
struct name< ::xpand3::declaration::Check__errorSeverity_tag >
{
    static const char * get()
    {
        return "errorSeverity";
    }
};


template < >
struct name< ::xpand3::declaration::Check__msg_tag >
{
    static const char * get()
    {
        return "msg";
    }
};


template < >
struct name< ::xpand3::declaration::Check__constraint_tag >
{
    static const char * get()
    {
        return "constraint";
    }
};


template < >
struct name< ::xpand3::declaration::Check__feature_tag >
{
    static const char * get()
    {
        return "feature";
    }
};


template < >
struct eclass< ::xpand3::declaration::CreateExtension >
{
    typedef boost::mpl::list< ::xpand3::declaration::Extension > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractNamedDeclaration,
                              ::xpand3::declaration::Extension > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::CreateExtension__toBeCreated_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractNamedDeclaration__name_tag,
                              ::xpand3::declaration::Extension__cached_tag,
                              ::xpand3::declaration::Extension__body_tag,
                              ::xpand3::declaration::Extension__returnType_tag,
                              ::xpand3::declaration::CreateExtension__toBeCreated_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::CreateExtension >
{
    static const char * get()
    {
        return "CreateExtension";
    }
};


template < >
struct name< ::xpand3::declaration::CreateExtension__toBeCreated_tag >
{
    static const char * get()
    {
        return "toBeCreated";
    }
};


template < >
struct eclass< ::xpand3::declaration::JavaExtension >
{
    typedef boost::mpl::list< ::xpand3::declaration::AbstractNamedDeclaration > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::declaration::AbstractDeclaration,
                              ::xpand3::declaration::AbstractNamedDeclaration > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::declaration::JavaExtension__javaType_tag,
                              ::xpand3::declaration::JavaExtension__javaMethod_tag,
                              ::xpand3::declaration::JavaExtension__javaParamTypes_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::declaration::AbstractDeclaration__owner_tag,
                              ::xpand3::declaration::AbstractDeclaration__params_tag,
                              ::xpand3::declaration::AbstractDeclaration__isPrivate_tag,
                              ::xpand3::declaration::AbstractDeclaration__guard_tag,
                              ::xpand3::declaration::AbstractNamedDeclaration__name_tag,
                              ::xpand3::declaration::JavaExtension__javaType_tag,
                              ::xpand3::declaration::JavaExtension__javaMethod_tag,
                              ::xpand3::declaration::JavaExtension__javaParamTypes_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::declaration::JavaExtension >
{
    static const char * get()
    {
        return "JavaExtension";
    }
};


template < >
struct name< ::xpand3::declaration::JavaExtension__javaType_tag >
{
    static const char * get()
    {
        return "javaType";
    }
};


template < >
struct name< ::xpand3::declaration::JavaExtension__javaMethod_tag >
{
    static const char * get()
    {
        return "javaMethod";
    }
};


template < >
struct name< ::xpand3::declaration::JavaExtension__javaParamTypes_tag >
{
    static const char * get()
    {
        return "javaParamTypes";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_XPAND3_DECLARATION_Meta_HPP
