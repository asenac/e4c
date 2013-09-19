#ifndef EMF_CPP_XPAND3_EXPRESSION_FACTORY_HPP
#define EMF_CPP_XPAND3_EXPRESSION_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/expression/fwd.hpp>

namespace xpand3
{
namespace expression
{


class ExpressionFactory : public ::ecore::EFactory
{
public:

    static const ExpressionFactory_ptr _instance();

    BooleanOperation_ptr createBooleanOperation() const;
    Cast_ptr createCast() const;
    ChainExpression_ptr createChainExpression() const;
    ConstructorCallExpression_ptr createConstructorCallExpression() const;
    FeatureCall_ptr createFeatureCall() const;
    CollectionExpression_ptr createCollectionExpression() const;
    OperationCall_ptr createOperationCall() const;
    TypeSelectExpression_ptr createTypeSelectExpression() const;
    GlobalVarExpression_ptr createGlobalVarExpression() const;
    IfExpression_ptr createIfExpression() const;
    LetExpression_ptr createLetExpression() const;
    ListLiteral_ptr createListLiteral() const;
    BooleanLiteral_ptr createBooleanLiteral() const;
    IntegerLiteral_ptr createIntegerLiteral() const;
    NullLiteral_ptr createNullLiteral() const;
    RealLiteral_ptr createRealLiteral() const;
    StringLiteral_ptr createStringLiteral() const;
    SwitchExpression_ptr createSwitchExpression() const;
    Case_ptr createCase() const;
    BinaryOperation_ptr createBinaryOperation() const;
    UnaryOperation_ptr createUnaryOperation() const;

protected:

    ExpressionFactory();
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_FACTORY_HPP
