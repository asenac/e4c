
#ifndef EMF_CPP_XPAND3_STATEMENT_META_HPP
#define EMF_CPP_XPAND3_STATEMENT_META_HPP

#include <e4c/definition.hpp>
#include <xpand3/statement/fwd.hpp>

#include <ecore/fwd.hpp>
#include <xpand3/expression/fwd.hpp>
#include <xpand3/fwd.hpp>

namespace xpand3
{
namespace statement
{



struct ExpandStatement__foreach_tag
{
    typedef ExpandStatement eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExpandStatement__parameters_tag
{
    typedef ExpandStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExpandStatement__parameters_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExpandStatement__separator_tag
{
    typedef ExpandStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExpandStatement__separator_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExpandStatement__target_tag
{
    typedef ExpandStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExpandStatement__target_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExpandStatement__definition_tag
{
    typedef ExpandStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExpandStatement__definition_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ExpressionStatement__expression_tag
{
    typedef ExpressionStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ExpressionStatement__expression_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ErrorStatement__message_tag
{
    typedef ErrorStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ErrorStatement__message_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct AbstractStatementWithBody__body_tag
{
    typedef AbstractStatementWithBody eClass;
    typedef ::xpand3::statement::AbstractStatement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef AbstractStatementWithBody__body_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 1;
    static const bool ordered = true;
    static const bool unique = true;
};

struct FileStatement__fileNameExpression_tag
{
    typedef FileStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef FileStatement__fileNameExpression_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct FileStatement__outletNameIdentifier_tag
{
    typedef FileStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef FileStatement__outletNameIdentifier_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct FileStatement__once_tag
{
    typedef FileStatement eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ForEachStatement__target_tag
{
    typedef ForEachStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ForEachStatement__target_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ForEachStatement__separator_tag
{
    typedef ForEachStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ForEachStatement__separator_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ForEachStatement__variable_tag
{
    typedef ForEachStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ForEachStatement__variable_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ForEachStatement__iteratorName_tag
{
    typedef ForEachStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ForEachStatement__iteratorName_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct IfStatement__condition_tag
{
    typedef IfStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef IfStatement__condition_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct IfStatement__elseIf_tag
{
    typedef IfStatement eClass;
    typedef ::xpand3::statement::IfStatement eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef IfStatement__elseIf_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct LetStatement__varName_tag
{
    typedef LetStatement eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef LetStatement__varName_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct LetStatement__varValue_tag
{
    typedef LetStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef LetStatement__varValue_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ProtectStatement__commentStart_tag
{
    typedef ProtectStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ProtectStatement__commentStart_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ProtectStatement__commentEnd_tag
{
    typedef ProtectStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ProtectStatement__commentEnd_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ProtectStatement__id_tag
{
    typedef ProtectStatement eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ProtectStatement__id_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ProtectStatement__disable_tag
{
    typedef ProtectStatement eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct TextStatement__value_tag
{
    typedef TextStatement eClass;
    typedef ::ecore::EString eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct TextStatement__deleteLine_tag
{
    typedef TextStatement eClass;
    typedef ::ecore::EBoolean eType;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // statement
} // xpand3


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::xpand3::statement::StatementPackage >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::ExpandStatement,
                              ::xpand3::statement::ExpressionStatement,
                              ::xpand3::statement::ErrorStatement,
                              ::xpand3::statement::AbstractStatementWithBody,
                              ::xpand3::statement::FileStatement,
                              ::xpand3::statement::ForEachStatement,
                              ::xpand3::statement::IfStatement,
                              ::xpand3::statement::LetStatement,
                              ::xpand3::statement::ProtectStatement,
                              ::xpand3::statement::TextStatement > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::xpand3::statement::AbstractStatement >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::AbstractStatement >
{
    static const char * get()
    {
        return "AbstractStatement";
    }
};


template < >
struct eclass< ::xpand3::statement::ExpandStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::ExpandStatement__foreach_tag,
                              ::xpand3::statement::ExpandStatement__parameters_tag,
                              ::xpand3::statement::ExpandStatement__separator_tag,
                              ::xpand3::statement::ExpandStatement__target_tag,
                              ::xpand3::statement::ExpandStatement__definition_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::ExpandStatement__foreach_tag,
                              ::xpand3::statement::ExpandStatement__parameters_tag,
                              ::xpand3::statement::ExpandStatement__separator_tag,
                              ::xpand3::statement::ExpandStatement__target_tag,
                              ::xpand3::statement::ExpandStatement__definition_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::ExpandStatement >
{
    static const char * get()
    {
        return "ExpandStatement";
    }
};


template < >
struct name< ::xpand3::statement::ExpandStatement__foreach_tag >
{
    static const char * get()
    {
        return "foreach";
    }
};


template < >
struct name< ::xpand3::statement::ExpandStatement__parameters_tag >
{
    static const char * get()
    {
        return "parameters";
    }
};


template < >
struct name< ::xpand3::statement::ExpandStatement__separator_tag >
{
    static const char * get()
    {
        return "separator";
    }
};


template < >
struct name< ::xpand3::statement::ExpandStatement__target_tag >
{
    static const char * get()
    {
        return "target";
    }
};


template < >
struct name< ::xpand3::statement::ExpandStatement__definition_tag >
{
    static const char * get()
    {
        return "definition";
    }
};


template < >
struct eclass< ::xpand3::statement::ExpressionStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::ExpressionStatement__expression_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::ExpressionStatement__expression_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::ExpressionStatement >
{
    static const char * get()
    {
        return "ExpressionStatement";
    }
};


template < >
struct name< ::xpand3::statement::ExpressionStatement__expression_tag >
{
    static const char * get()
    {
        return "expression";
    }
};


template < >
struct eclass< ::xpand3::statement::ErrorStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::ErrorStatement__message_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::ErrorStatement__message_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::ErrorStatement >
{
    static const char * get()
    {
        return "ErrorStatement";
    }
};


template < >
struct name< ::xpand3::statement::ErrorStatement__message_tag >
{
    static const char * get()
    {
        return "message";
    }
};


template < >
struct eclass< ::xpand3::statement::AbstractStatementWithBody >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody__body_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::AbstractStatementWithBody >
{
    static const char * get()
    {
        return "AbstractStatementWithBody";
    }
};


template < >
struct name< ::xpand3::statement::AbstractStatementWithBody__body_tag >
{
    static const char * get()
    {
        return "body";
    }
};


template < >
struct eclass< ::xpand3::statement::FileStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::AbstractStatementWithBody > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::FileStatement__fileNameExpression_tag,
                              ::xpand3::statement::FileStatement__outletNameIdentifier_tag,
                              ::xpand3::statement::FileStatement__once_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag,
                              ::xpand3::statement::FileStatement__fileNameExpression_tag,
                              ::xpand3::statement::FileStatement__outletNameIdentifier_tag,
                              ::xpand3::statement::FileStatement__once_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::FileStatement >
{
    static const char * get()
    {
        return "FileStatement";
    }
};


template < >
struct name< ::xpand3::statement::FileStatement__fileNameExpression_tag >
{
    static const char * get()
    {
        return "fileNameExpression";
    }
};


template < >
struct name< ::xpand3::statement::FileStatement__outletNameIdentifier_tag >
{
    static const char * get()
    {
        return "outletNameIdentifier";
    }
};


template < >
struct name< ::xpand3::statement::FileStatement__once_tag >
{
    static const char * get()
    {
        return "once";
    }
};


template < >
struct eclass< ::xpand3::statement::ForEachStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::AbstractStatementWithBody > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::ForEachStatement__target_tag,
                              ::xpand3::statement::ForEachStatement__separator_tag,
                              ::xpand3::statement::ForEachStatement__variable_tag,
                              ::xpand3::statement::ForEachStatement__iteratorName_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag,
                              ::xpand3::statement::ForEachStatement__target_tag,
                              ::xpand3::statement::ForEachStatement__separator_tag,
                              ::xpand3::statement::ForEachStatement__variable_tag,
                              ::xpand3::statement::ForEachStatement__iteratorName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::ForEachStatement >
{
    static const char * get()
    {
        return "ForEachStatement";
    }
};


template < >
struct name< ::xpand3::statement::ForEachStatement__target_tag >
{
    static const char * get()
    {
        return "target";
    }
};


template < >
struct name< ::xpand3::statement::ForEachStatement__separator_tag >
{
    static const char * get()
    {
        return "separator";
    }
};


template < >
struct name< ::xpand3::statement::ForEachStatement__variable_tag >
{
    static const char * get()
    {
        return "variable";
    }
};


template < >
struct name< ::xpand3::statement::ForEachStatement__iteratorName_tag >
{
    static const char * get()
    {
        return "iteratorName";
    }
};


template < >
struct eclass< ::xpand3::statement::IfStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::AbstractStatementWithBody > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::IfStatement__condition_tag,
                              ::xpand3::statement::IfStatement__elseIf_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag,
                              ::xpand3::statement::IfStatement__condition_tag,
                              ::xpand3::statement::IfStatement__elseIf_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::IfStatement >
{
    static const char * get()
    {
        return "IfStatement";
    }
};


template < >
struct name< ::xpand3::statement::IfStatement__condition_tag >
{
    static const char * get()
    {
        return "condition";
    }
};


template < >
struct name< ::xpand3::statement::IfStatement__elseIf_tag >
{
    static const char * get()
    {
        return "elseIf";
    }
};


template < >
struct eclass< ::xpand3::statement::LetStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::AbstractStatementWithBody > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::LetStatement__varName_tag,
                              ::xpand3::statement::LetStatement__varValue_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag,
                              ::xpand3::statement::LetStatement__varName_tag,
                              ::xpand3::statement::LetStatement__varValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::LetStatement >
{
    static const char * get()
    {
        return "LetStatement";
    }
};


template < >
struct name< ::xpand3::statement::LetStatement__varName_tag >
{
    static const char * get()
    {
        return "varName";
    }
};


template < >
struct name< ::xpand3::statement::LetStatement__varValue_tag >
{
    static const char * get()
    {
        return "varValue";
    }
};


template < >
struct eclass< ::xpand3::statement::ProtectStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatementWithBody > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement,
                              ::xpand3::statement::AbstractStatementWithBody > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::ProtectStatement__commentStart_tag,
                              ::xpand3::statement::ProtectStatement__commentEnd_tag,
                              ::xpand3::statement::ProtectStatement__id_tag,
                              ::xpand3::statement::ProtectStatement__disable_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::AbstractStatementWithBody__body_tag,
                              ::xpand3::statement::ProtectStatement__commentStart_tag,
                              ::xpand3::statement::ProtectStatement__commentEnd_tag,
                              ::xpand3::statement::ProtectStatement__id_tag,
                              ::xpand3::statement::ProtectStatement__disable_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::ProtectStatement >
{
    static const char * get()
    {
        return "ProtectStatement";
    }
};


template < >
struct name< ::xpand3::statement::ProtectStatement__commentStart_tag >
{
    static const char * get()
    {
        return "commentStart";
    }
};


template < >
struct name< ::xpand3::statement::ProtectStatement__commentEnd_tag >
{
    static const char * get()
    {
        return "commentEnd";
    }
};


template < >
struct name< ::xpand3::statement::ProtectStatement__id_tag >
{
    static const char * get()
    {
        return "id";
    }
};


template < >
struct name< ::xpand3::statement::ProtectStatement__disable_tag >
{
    static const char * get()
    {
        return "disable";
    }
};


template < >
struct eclass< ::xpand3::statement::TextStatement >
{
    typedef boost::mpl::list< ::xpand3::statement::AbstractStatement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::statement::AbstractStatement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::statement::TextStatement__value_tag,
                              ::xpand3::statement::TextStatement__deleteLine_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::statement::TextStatement__value_tag,
                              ::xpand3::statement::TextStatement__deleteLine_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::statement::TextStatement >
{
    static const char * get()
    {
        return "TextStatement";
    }
};


template < >
struct name< ::xpand3::statement::TextStatement__value_tag >
{
    static const char * get()
    {
        return "value";
    }
};


template < >
struct name< ::xpand3::statement::TextStatement__deleteLine_tag >
{
    static const char * get()
    {
        return "deleteLine";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_XPAND3_STATEMENT_Meta_HPP
