#ifndef EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP
#define EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/expression/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace xpand3
{
namespace expression
{


class ExpressionPackage : public ::ecore::EPackage
{
public:
    static const ExpressionPackage_ptr _instance();

 	::ecore::EClass_ptr getAbstractExpression() const;
 	::ecore::EClass_ptr getBooleanOperation() const;
 	::ecore::EClass_ptr getCast() const;
 	::ecore::EClass_ptr getChainExpression() const;
 	::ecore::EClass_ptr getConstructorCallExpression() const;
 	::ecore::EClass_ptr getFeatureCall() const;
 	::ecore::EClass_ptr getCollectionExpression() const;
 	::ecore::EClass_ptr getOperationCall() const;
 	::ecore::EClass_ptr getTypeSelectExpression() const;
 	::ecore::EClass_ptr getGlobalVarExpression() const;
 	::ecore::EClass_ptr getIfExpression() const;
 	::ecore::EClass_ptr getLetExpression() const;
 	::ecore::EClass_ptr getListLiteral() const;
 	::ecore::EClass_ptr getLiteral() const;
 	::ecore::EClass_ptr getBooleanLiteral() const;
 	::ecore::EClass_ptr getIntegerLiteral() const;
 	::ecore::EClass_ptr getNullLiteral() const;
 	::ecore::EClass_ptr getRealLiteral() const;
 	::ecore::EClass_ptr getStringLiteral() const;
 	::ecore::EClass_ptr getSwitchExpression() const;
 	::ecore::EClass_ptr getCase() const;
 	::ecore::EClass_ptr getBinaryOperation() const;
 	::ecore::EClass_ptr getUnaryOperation() const;
 	
 	::ecore::EReference_ptr getCast__type() const;
 	::ecore::EReference_ptr getCast__target() const;
 	::ecore::EReference_ptr getChainExpression__first() const;
 	::ecore::EReference_ptr getChainExpression__next() const;
 	::ecore::EReference_ptr getConstructorCallExpression__type() const;
 	::ecore::EReference_ptr getFeatureCall__target() const;
 	::ecore::EReference_ptr getFeatureCall__name() const;
 	::ecore::EReference_ptr getCollectionExpression__closure() const;
 	::ecore::EReference_ptr getCollectionExpression__eleName() const;
 	::ecore::EReference_ptr getOperationCall__params() const;
 	::ecore::EReference_ptr getTypeSelectExpression__typeLiteral() const;
 	::ecore::EReference_ptr getGlobalVarExpression__globalVarName() const;
 	::ecore::EReference_ptr getIfExpression__condition() const;
 	::ecore::EReference_ptr getIfExpression__thenPart() const;
 	::ecore::EReference_ptr getIfExpression__elsePart() const;
 	::ecore::EReference_ptr getLetExpression__varExpression() const;
 	::ecore::EReference_ptr getLetExpression__targetExpression() const;
 	::ecore::EReference_ptr getLetExpression__varName() const;
 	::ecore::EReference_ptr getListLiteral__elements() const;
 	::ecore::EReference_ptr getLiteral__literalValue() const;
 	::ecore::EReference_ptr getSwitchExpression__switchExpr() const;
 	::ecore::EReference_ptr getSwitchExpression__defaultExpr() const;
 	::ecore::EReference_ptr getSwitchExpression__cases() const;
 	::ecore::EReference_ptr getCase__condition() const;
 	::ecore::EReference_ptr getCase__thenPart() const;
 	::ecore::EReference_ptr getBinaryOperation__left() const;
 	::ecore::EReference_ptr getBinaryOperation__right() const;
 	::ecore::EReference_ptr getBinaryOperation__operator() const;
 	::ecore::EReference_ptr getUnaryOperation__operator() const;
 	::ecore::EReference_ptr getUnaryOperation__operand() const;

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
    
 	::ecore::EClass_ptr m_AbstractExpression;
 	::ecore::EClass_ptr m_BooleanOperation;
 	::ecore::EClass_ptr m_Cast;
 	::ecore::EClass_ptr m_ChainExpression;
 	::ecore::EClass_ptr m_ConstructorCallExpression;
 	::ecore::EClass_ptr m_FeatureCall;
 	::ecore::EClass_ptr m_CollectionExpression;
 	::ecore::EClass_ptr m_OperationCall;
 	::ecore::EClass_ptr m_TypeSelectExpression;
 	::ecore::EClass_ptr m_GlobalVarExpression;
 	::ecore::EClass_ptr m_IfExpression;
 	::ecore::EClass_ptr m_LetExpression;
 	::ecore::EClass_ptr m_ListLiteral;
 	::ecore::EClass_ptr m_Literal;
 	::ecore::EClass_ptr m_BooleanLiteral;
 	::ecore::EClass_ptr m_IntegerLiteral;
 	::ecore::EClass_ptr m_NullLiteral;
 	::ecore::EClass_ptr m_RealLiteral;
 	::ecore::EClass_ptr m_StringLiteral;
 	::ecore::EClass_ptr m_SwitchExpression;
 	::ecore::EClass_ptr m_Case;
 	::ecore::EClass_ptr m_BinaryOperation;
 	::ecore::EClass_ptr m_UnaryOperation;
 	::ecore::EReference_ptr m_Cast__type;
 	::ecore::EReference_ptr m_Cast__target;
 	::ecore::EReference_ptr m_ChainExpression__first;
 	::ecore::EReference_ptr m_ChainExpression__next;
 	::ecore::EReference_ptr m_ConstructorCallExpression__type;
 	::ecore::EReference_ptr m_FeatureCall__target;
 	::ecore::EReference_ptr m_FeatureCall__name;
 	::ecore::EReference_ptr m_CollectionExpression__closure;
 	::ecore::EReference_ptr m_CollectionExpression__eleName;
 	::ecore::EReference_ptr m_OperationCall__params;
 	::ecore::EReference_ptr m_TypeSelectExpression__typeLiteral;
 	::ecore::EReference_ptr m_GlobalVarExpression__globalVarName;
 	::ecore::EReference_ptr m_IfExpression__condition;
 	::ecore::EReference_ptr m_IfExpression__thenPart;
 	::ecore::EReference_ptr m_IfExpression__elsePart;
 	::ecore::EReference_ptr m_LetExpression__varExpression;
 	::ecore::EReference_ptr m_LetExpression__targetExpression;
 	::ecore::EReference_ptr m_LetExpression__varName;
 	::ecore::EReference_ptr m_ListLiteral__elements;
 	::ecore::EReference_ptr m_Literal__literalValue;
 	::ecore::EReference_ptr m_SwitchExpression__switchExpr;
 	::ecore::EReference_ptr m_SwitchExpression__defaultExpr;
 	::ecore::EReference_ptr m_SwitchExpression__cases;
 	::ecore::EReference_ptr m_Case__condition;
 	::ecore::EReference_ptr m_Case__thenPart;
 	::ecore::EReference_ptr m_BinaryOperation__left;
 	::ecore::EReference_ptr m_BinaryOperation__right;
 	::ecore::EReference_ptr m_BinaryOperation__operator;
 	::ecore::EReference_ptr m_UnaryOperation__operator;
 	::ecore::EReference_ptr m_UnaryOperation__operand;
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_PACKAGE_HPP
