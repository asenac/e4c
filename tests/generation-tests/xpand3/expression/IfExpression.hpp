
#ifndef EMF_CPP_XPAND3_EXPRESSION_IFEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_IFEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::IfExpression
class IfExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef IfExpression_ptr ptr_type;
	
	IfExpression();
	virtual ~IfExpression();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > condition_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > thenPart_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > elsePart_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	condition_t m_condition;
	thenPart_t m_thenPart;
	elsePart_t m_elsePart;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_IFEXPRESSION__HPP
