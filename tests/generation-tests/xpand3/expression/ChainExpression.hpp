
#ifndef EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::ChainExpression
class ChainExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef ChainExpression_ptr ptr_type;
	
	ChainExpression();
	virtual ~ChainExpression();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > first_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > next_t;

	
	// TODO
	// TODO

	
protected:

	first_t m_first;
	next_t m_next;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP
