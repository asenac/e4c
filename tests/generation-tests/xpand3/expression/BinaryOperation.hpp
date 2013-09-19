
#ifndef EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::BinaryOperation
class BinaryOperation :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef BinaryOperation_ptr ptr_type;
	
	BinaryOperation();
	virtual ~BinaryOperation();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > left_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > right_t;
	typedef std::unique_ptr < xpand3::Identifier > operator_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	left_t m_left;
	right_t m_right;
	operator_t m_operator;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP
