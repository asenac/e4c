
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


// xpand3::expression::UnaryOperation
class UnaryOperation :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef UnaryOperation_ptr ptr_type;
	
	UnaryOperation();
	virtual ~UnaryOperation();

	typedef std::unique_ptr < xpand3::Identifier > operator_t;
	typedef xpand3::expression::AbstractExpression_ptr operand_t;

	
	// TODO
	// TODO

	
protected:

	operator_t m_operator;
	operand_t m_operand;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_UNARYOPERATION__HPP
