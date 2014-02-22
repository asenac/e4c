
#ifndef EMF_CPP_XPAND3_EXPRESSION_META_HPP
#define EMF_CPP_XPAND3_EXPRESSION_META_HPP

#include <e4c/definition.hpp>
#include <xpand3/expression/fwd.hpp>

#include <ecore/fwd.hpp>
#include <xpand3/fwd.hpp>

namespace xpand3
{
namespace expression
{



struct Cast__type_tag
{
    typedef Cast eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Cast__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Cast__target_tag
{
    typedef Cast eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Cast__target_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ChainExpression__first_tag
{
    typedef ChainExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ChainExpression__first_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ChainExpression__next_tag
{
    typedef ChainExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ChainExpression__next_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ConstructorCallExpression__type_tag
{
    typedef ConstructorCallExpression eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ConstructorCallExpression__type_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct FeatureCall__target_tag
{
    typedef FeatureCall eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef FeatureCall__target_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct FeatureCall__name_tag
{
    typedef FeatureCall eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef FeatureCall__name_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct CollectionExpression__closure_tag
{
    typedef CollectionExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CollectionExpression__closure_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct CollectionExpression__eleName_tag
{
    typedef CollectionExpression eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef CollectionExpression__eleName_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct OperationCall__params_tag
{
    typedef OperationCall eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef OperationCall__params_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct TypeSelectExpression__typeLiteral_tag
{
    typedef TypeSelectExpression eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef TypeSelectExpression__typeLiteral_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct GlobalVarExpression__globalVarName_tag
{
    typedef GlobalVarExpression eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef GlobalVarExpression__globalVarName_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct IfExpression__condition_tag
{
    typedef IfExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef IfExpression__condition_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct IfExpression__thenPart_tag
{
    typedef IfExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef IfExpression__thenPart_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct IfExpression__elsePart_tag
{
    typedef IfExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef IfExpression__elsePart_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct LetExpression__varExpression_tag
{
    typedef LetExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef LetExpression__varExpression_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct LetExpression__targetExpression_tag
{
    typedef LetExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef LetExpression__targetExpression_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct LetExpression__varName_tag
{
    typedef LetExpression eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef LetExpression__varName_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct ListLiteral__elements_tag
{
    typedef ListLiteral eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef ListLiteral__elements_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Literal__literalValue_tag
{
    typedef Literal eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Literal__literalValue_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SwitchExpression__switchExpr_tag
{
    typedef SwitchExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef SwitchExpression__switchExpr_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SwitchExpression__defaultExpr_tag
{
    typedef SwitchExpression eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef SwitchExpression__defaultExpr_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct SwitchExpression__cases_tag
{
    typedef SwitchExpression eClass;
    typedef ::xpand3::expression::Case eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef SwitchExpression__cases_tag eOpposite;
    static const int upperBound = -1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Case__condition_tag
{
    typedef Case eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Case__condition_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct Case__thenPart_tag
{
    typedef Case eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef Case__thenPart_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct BinaryOperation__left_tag
{
    typedef BinaryOperation eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef BinaryOperation__left_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct BinaryOperation__right_tag
{
    typedef BinaryOperation eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef BinaryOperation__right_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct BinaryOperation__operator_tag
{
    typedef BinaryOperation eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef BinaryOperation__operator_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct UnaryOperation__operator_tag
{
    typedef UnaryOperation eClass;
    typedef ::xpand3::Identifier eReferenceType;
    static const bool containment = true;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UnaryOperation__operator_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};

struct UnaryOperation__operand_tag
{
    typedef UnaryOperation eClass;
    typedef ::xpand3::expression::AbstractExpression eReferenceType;
    static const bool containment = false;
    static const bool container = false;
    static const bool hasOpposite = false;
    typedef UnaryOperation__operand_tag eOpposite;
    static const int upperBound = 1;
    static const int lowerBound = 0;
    static const bool ordered = true;
    static const bool unique = true;
};


} // expression
} // xpand3


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::xpand3::expression::ExpressionPackage >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::BooleanOperation,
                              ::xpand3::expression::Cast,
                              ::xpand3::expression::ChainExpression,
                              ::xpand3::expression::ConstructorCallExpression,
                              ::xpand3::expression::FeatureCall,
                              ::xpand3::expression::CollectionExpression,
                              ::xpand3::expression::OperationCall,
                              ::xpand3::expression::TypeSelectExpression,
                              ::xpand3::expression::GlobalVarExpression,
                              ::xpand3::expression::IfExpression,
                              ::xpand3::expression::LetExpression,
                              ::xpand3::expression::ListLiteral,
                              ::xpand3::expression::Literal,
                              ::xpand3::expression::BooleanLiteral,
                              ::xpand3::expression::IntegerLiteral,
                              ::xpand3::expression::NullLiteral,
                              ::xpand3::expression::RealLiteral,
                              ::xpand3::expression::StringLiteral,
                              ::xpand3::expression::SwitchExpression,
                              ::xpand3::expression::Case,
                              ::xpand3::expression::BinaryOperation,
                              ::xpand3::expression::UnaryOperation > eClasses;
    typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::xpand3::expression::AbstractExpression >
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
struct name< ::xpand3::expression::AbstractExpression >
{
    static const char * get()
    {
        return "AbstractExpression";
    }
};


template < >
struct eclass< ::xpand3::expression::BooleanOperation >
{
    typedef boost::mpl::list< ::xpand3::expression::BinaryOperation > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::BinaryOperation > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::BinaryOperation__left_tag,
                              ::xpand3::expression::BinaryOperation__right_tag,
                              ::xpand3::expression::BinaryOperation__operator_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::BooleanOperation >
{
    static const char * get()
    {
        return "BooleanOperation";
    }
};


template < >
struct eclass< ::xpand3::expression::Cast >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::Cast__type_tag,
                              ::xpand3::expression::Cast__target_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Cast__type_tag,
                              ::xpand3::expression::Cast__target_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::Cast >
{
    static const char * get()
    {
        return "Cast";
    }
};


template < >
struct name< ::xpand3::expression::Cast__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct name< ::xpand3::expression::Cast__target_tag >
{
    static const char * get()
    {
        return "target";
    }
};


template < >
struct eclass< ::xpand3::expression::ChainExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::ChainExpression__first_tag,
                              ::xpand3::expression::ChainExpression__next_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::ChainExpression__first_tag,
                              ::xpand3::expression::ChainExpression__next_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::ChainExpression >
{
    static const char * get()
    {
        return "ChainExpression";
    }
};


template < >
struct name< ::xpand3::expression::ChainExpression__first_tag >
{
    static const char * get()
    {
        return "first";
    }
};


template < >
struct name< ::xpand3::expression::ChainExpression__next_tag >
{
    static const char * get()
    {
        return "next";
    }
};


template < >
struct eclass< ::xpand3::expression::ConstructorCallExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::ConstructorCallExpression__type_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::ConstructorCallExpression__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::ConstructorCallExpression >
{
    static const char * get()
    {
        return "ConstructorCallExpression";
    }
};


template < >
struct name< ::xpand3::expression::ConstructorCallExpression__type_tag >
{
    static const char * get()
    {
        return "type";
    }
};


template < >
struct eclass< ::xpand3::expression::FeatureCall >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::FeatureCall__target_tag,
                              ::xpand3::expression::FeatureCall__name_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::FeatureCall__target_tag,
                              ::xpand3::expression::FeatureCall__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::FeatureCall >
{
    static const char * get()
    {
        return "FeatureCall";
    }
};


template < >
struct name< ::xpand3::expression::FeatureCall__target_tag >
{
    static const char * get()
    {
        return "target";
    }
};


template < >
struct name< ::xpand3::expression::FeatureCall__name_tag >
{
    static const char * get()
    {
        return "name";
    }
};


template < >
struct eclass< ::xpand3::expression::CollectionExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::FeatureCall > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::FeatureCall > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::CollectionExpression__closure_tag,
                              ::xpand3::expression::CollectionExpression__eleName_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::FeatureCall__target_tag,
                              ::xpand3::expression::FeatureCall__name_tag,
                              ::xpand3::expression::CollectionExpression__closure_tag,
                              ::xpand3::expression::CollectionExpression__eleName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::CollectionExpression >
{
    static const char * get()
    {
        return "CollectionExpression";
    }
};


template < >
struct name< ::xpand3::expression::CollectionExpression__closure_tag >
{
    static const char * get()
    {
        return "closure";
    }
};


template < >
struct name< ::xpand3::expression::CollectionExpression__eleName_tag >
{
    static const char * get()
    {
        return "eleName";
    }
};


template < >
struct eclass< ::xpand3::expression::OperationCall >
{
    typedef boost::mpl::list< ::xpand3::expression::FeatureCall > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::FeatureCall > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::OperationCall__params_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::FeatureCall__target_tag,
                              ::xpand3::expression::FeatureCall__name_tag,
                              ::xpand3::expression::OperationCall__params_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::OperationCall >
{
    static const char * get()
    {
        return "OperationCall";
    }
};


template < >
struct name< ::xpand3::expression::OperationCall__params_tag >
{
    static const char * get()
    {
        return "params";
    }
};


template < >
struct eclass< ::xpand3::expression::TypeSelectExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::FeatureCall > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::FeatureCall > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::TypeSelectExpression__typeLiteral_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::FeatureCall__target_tag,
                              ::xpand3::expression::FeatureCall__name_tag,
                              ::xpand3::expression::TypeSelectExpression__typeLiteral_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::TypeSelectExpression >
{
    static const char * get()
    {
        return "TypeSelectExpression";
    }
};


template < >
struct name< ::xpand3::expression::TypeSelectExpression__typeLiteral_tag >
{
    static const char * get()
    {
        return "typeLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::GlobalVarExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::GlobalVarExpression__globalVarName_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::GlobalVarExpression__globalVarName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::GlobalVarExpression >
{
    static const char * get()
    {
        return "GlobalVarExpression";
    }
};


template < >
struct name< ::xpand3::expression::GlobalVarExpression__globalVarName_tag >
{
    static const char * get()
    {
        return "globalVarName";
    }
};


template < >
struct eclass< ::xpand3::expression::IfExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::IfExpression__condition_tag,
                              ::xpand3::expression::IfExpression__thenPart_tag,
                              ::xpand3::expression::IfExpression__elsePart_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::IfExpression__condition_tag,
                              ::xpand3::expression::IfExpression__thenPart_tag,
                              ::xpand3::expression::IfExpression__elsePart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::IfExpression >
{
    static const char * get()
    {
        return "IfExpression";
    }
};


template < >
struct name< ::xpand3::expression::IfExpression__condition_tag >
{
    static const char * get()
    {
        return "condition";
    }
};


template < >
struct name< ::xpand3::expression::IfExpression__thenPart_tag >
{
    static const char * get()
    {
        return "thenPart";
    }
};


template < >
struct name< ::xpand3::expression::IfExpression__elsePart_tag >
{
    static const char * get()
    {
        return "elsePart";
    }
};


template < >
struct eclass< ::xpand3::expression::LetExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::LetExpression__varExpression_tag,
                              ::xpand3::expression::LetExpression__targetExpression_tag,
                              ::xpand3::expression::LetExpression__varName_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::LetExpression__varExpression_tag,
                              ::xpand3::expression::LetExpression__targetExpression_tag,
                              ::xpand3::expression::LetExpression__varName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::LetExpression >
{
    static const char * get()
    {
        return "LetExpression";
    }
};


template < >
struct name< ::xpand3::expression::LetExpression__varExpression_tag >
{
    static const char * get()
    {
        return "varExpression";
    }
};


template < >
struct name< ::xpand3::expression::LetExpression__targetExpression_tag >
{
    static const char * get()
    {
        return "targetExpression";
    }
};


template < >
struct name< ::xpand3::expression::LetExpression__varName_tag >
{
    static const char * get()
    {
        return "varName";
    }
};


template < >
struct eclass< ::xpand3::expression::ListLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::ListLiteral__elements_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::ListLiteral__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::ListLiteral >
{
    static const char * get()
    {
        return "ListLiteral";
    }
};


template < >
struct name< ::xpand3::expression::ListLiteral__elements_tag >
{
    static const char * get()
    {
        return "elements";
    }
};


template < >
struct eclass< ::xpand3::expression::Literal >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::Literal__literalValue_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::Literal >
{
    static const char * get()
    {
        return "Literal";
    }
};


template < >
struct name< ::xpand3::expression::Literal__literalValue_tag >
{
    static const char * get()
    {
        return "literalValue";
    }
};


template < >
struct eclass< ::xpand3::expression::BooleanLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::Literal > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::Literal > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::BooleanLiteral >
{
    static const char * get()
    {
        return "BooleanLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::IntegerLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::Literal > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::Literal > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::IntegerLiteral >
{
    static const char * get()
    {
        return "IntegerLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::NullLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::Literal > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::Literal > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::NullLiteral >
{
    static const char * get()
    {
        return "NullLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::RealLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::Literal > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::Literal > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::RealLiteral >
{
    static const char * get()
    {
        return "RealLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::StringLiteral >
{
    typedef boost::mpl::list< ::xpand3::expression::Literal > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression,
                              ::xpand3::expression::Literal > eAllSuperTypes;
    typedef boost::mpl::list<  > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Literal__literalValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::StringLiteral >
{
    static const char * get()
    {
        return "StringLiteral";
    }
};


template < >
struct eclass< ::xpand3::expression::SwitchExpression >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::SwitchExpression__switchExpr_tag,
                              ::xpand3::expression::SwitchExpression__defaultExpr_tag,
                              ::xpand3::expression::SwitchExpression__cases_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::SwitchExpression__switchExpr_tag,
                              ::xpand3::expression::SwitchExpression__defaultExpr_tag,
                              ::xpand3::expression::SwitchExpression__cases_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::SwitchExpression >
{
    static const char * get()
    {
        return "SwitchExpression";
    }
};


template < >
struct name< ::xpand3::expression::SwitchExpression__switchExpr_tag >
{
    static const char * get()
    {
        return "switchExpr";
    }
};


template < >
struct name< ::xpand3::expression::SwitchExpression__defaultExpr_tag >
{
    static const char * get()
    {
        return "defaultExpr";
    }
};


template < >
struct name< ::xpand3::expression::SwitchExpression__cases_tag >
{
    static const char * get()
    {
        return "cases";
    }
};


template < >
struct eclass< ::xpand3::expression::Case >
{
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::Case__condition_tag,
                              ::xpand3::expression::Case__thenPart_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::Case__condition_tag,
                              ::xpand3::expression::Case__thenPart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::Case >
{
    static const char * get()
    {
        return "Case";
    }
};


template < >
struct name< ::xpand3::expression::Case__condition_tag >
{
    static const char * get()
    {
        return "condition";
    }
};


template < >
struct name< ::xpand3::expression::Case__thenPart_tag >
{
    static const char * get()
    {
        return "thenPart";
    }
};


template < >
struct eclass< ::xpand3::expression::BinaryOperation >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::BinaryOperation__left_tag,
                              ::xpand3::expression::BinaryOperation__right_tag,
                              ::xpand3::expression::BinaryOperation__operator_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::BinaryOperation__left_tag,
                              ::xpand3::expression::BinaryOperation__right_tag,
                              ::xpand3::expression::BinaryOperation__operator_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::BinaryOperation >
{
    static const char * get()
    {
        return "BinaryOperation";
    }
};


template < >
struct name< ::xpand3::expression::BinaryOperation__left_tag >
{
    static const char * get()
    {
        return "left";
    }
};


template < >
struct name< ::xpand3::expression::BinaryOperation__right_tag >
{
    static const char * get()
    {
        return "right";
    }
};


template < >
struct name< ::xpand3::expression::BinaryOperation__operator_tag >
{
    static const char * get()
    {
        return "operator";
    }
};


template < >
struct eclass< ::xpand3::expression::UnaryOperation >
{
    typedef boost::mpl::list< ::xpand3::expression::AbstractExpression > eSuperTypes;
    typedef boost::mpl::list< ::xpand3::SyntaxElement,
                              ::xpand3::expression::AbstractExpression > eAllSuperTypes;
    typedef boost::mpl::list< ::xpand3::expression::UnaryOperation__operator_tag,
                              ::xpand3::expression::UnaryOperation__operand_tag > eStructuralFeatures;
    typedef boost::mpl::list< ::xpand3::SyntaxElement__line_tag,
                              ::xpand3::SyntaxElement__start_tag,
                              ::xpand3::SyntaxElement__end_tag,
                              ::xpand3::SyntaxElement__fileName_tag,
                              ::xpand3::expression::UnaryOperation__operator_tag,
                              ::xpand3::expression::UnaryOperation__operand_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xpand3::expression::UnaryOperation >
{
    static const char * get()
    {
        return "UnaryOperation";
    }
};


template < >
struct name< ::xpand3::expression::UnaryOperation__operator_tag >
{
    static const char * get()
    {
        return "operator";
    }
};


template < >
struct name< ::xpand3::expression::UnaryOperation__operand_tag >
{
    static const char * get()
    {
        return "operand";
    }
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_XPAND3_EXPRESSION_Meta_HPP
