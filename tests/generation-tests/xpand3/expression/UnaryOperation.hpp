
#ifndef EMF_CPP_XPAND3_EXPRESSION_UNARYOPERATION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_UNARYOPERATION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class UnaryOperation :  public virtual ::xpand3::expression::AbstractExpression
{
public:

    typedef UnaryOperation_ptr ptr_type;

    UnaryOperation();
    virtual ~UnaryOperation();

    typedef xpand3::Identifier_ptr operator_t;
    typedef xpand3::expression::AbstractExpression_ptr operand_t;

    operator_t getOperator() const;
    void setOperator(operator_t operator_);
    operator_t releaseOperator();
    operand_t getOperand() const;
    void setOperand(operand_t operand_);


    /*PROTECTED REGION ID(xpand3::expression::UnaryOperation public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::Identifier > m_operator;
    xpand3::expression::AbstractExpression_ptr m_operand;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::UnaryOperation protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_UNARYOPERATION__HPP
