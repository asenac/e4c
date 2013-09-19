#ifndef EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP
#define EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/expression/fwd.hpp>

namespace xpand3
{
namespace expression
{


class ExpressionPackage : public ::ecore::EPackage
{
public:
    static const ExpressionPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractExpression() const;
 	e4c::tag_t getTag_BooleanOperation() const;
 	e4c::tag_t getTag_Cast() const;
 	e4c::tag_t getTag_ChainExpression() const;
 	e4c::tag_t getTag_ConstructorCallExpression() const;
 	e4c::tag_t getTag_FeatureCall() const;
 	e4c::tag_t getTag_CollectionExpression() const;
 	e4c::tag_t getTag_OperationCall() const;
 	e4c::tag_t getTag_TypeSelectExpression() const;
 	e4c::tag_t getTag_GlobalVarExpression() const;
 	e4c::tag_t getTag_IfExpression() const;
 	e4c::tag_t getTag_LetExpression() const;
 	e4c::tag_t getTag_ListLiteral() const;
 	e4c::tag_t getTag_Literal() const;
 	e4c::tag_t getTag_BooleanLiteral() const;
 	e4c::tag_t getTag_IntegerLiteral() const;
 	e4c::tag_t getTag_NullLiteral() const;
 	e4c::tag_t getTag_RealLiteral() const;
 	e4c::tag_t getTag_StringLiteral() const;
 	e4c::tag_t getTag_SwitchExpression() const;
 	e4c::tag_t getTag_Case() const;
 	e4c::tag_t getTag_BinaryOperation() const;
 	e4c::tag_t getTag_UnaryOperation() const;
 
 	// Structural features
 	e4c::tag_t getTag_Cast__type() const;
 	e4c::tag_t getTag_Cast__target() const;
 	e4c::tag_t getTag_ChainExpression__first() const;
 	e4c::tag_t getTag_ChainExpression__next() const;
 	e4c::tag_t getTag_ConstructorCallExpression__type() const;
 	e4c::tag_t getTag_FeatureCall__target() const;
 	e4c::tag_t getTag_FeatureCall__name() const;
 	e4c::tag_t getTag_CollectionExpression__closure() const;
 	e4c::tag_t getTag_CollectionExpression__eleName() const;
 	e4c::tag_t getTag_OperationCall__params() const;
 	e4c::tag_t getTag_TypeSelectExpression__typeLiteral() const;
 	e4c::tag_t getTag_GlobalVarExpression__globalVarName() const;
 	e4c::tag_t getTag_IfExpression__condition() const;
 	e4c::tag_t getTag_IfExpression__thenPart() const;
 	e4c::tag_t getTag_IfExpression__elsePart() const;
 	e4c::tag_t getTag_LetExpression__varExpression() const;
 	e4c::tag_t getTag_LetExpression__targetExpression() const;
 	e4c::tag_t getTag_LetExpression__varName() const;
 	e4c::tag_t getTag_ListLiteral__elements() const;
 	e4c::tag_t getTag_Literal__literalValue() const;
 	e4c::tag_t getTag_SwitchExpression__switchExpr() const;
 	e4c::tag_t getTag_SwitchExpression__defaultExpr() const;
 	e4c::tag_t getTag_SwitchExpression__cases() const;
 	e4c::tag_t getTag_Case__condition() const;
 	e4c::tag_t getTag_Case__thenPart() const;
 	e4c::tag_t getTag_BinaryOperation__left() const;
 	e4c::tag_t getTag_BinaryOperation__right() const;
 	e4c::tag_t getTag_BinaryOperation__operator() const;
 	e4c::tag_t getTag_UnaryOperation__operator() const;
 	e4c::tag_t getTag_UnaryOperation__operand() const;

protected:
    ExpressionPackage();
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP
