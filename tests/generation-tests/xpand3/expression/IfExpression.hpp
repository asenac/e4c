
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

	typedef xpand3::expression::AbstractExpression_ptr condition_t;
	typedef xpand3::expression::AbstractExpression_ptr thenPart_t;
	typedef xpand3::expression::AbstractExpression_ptr elsePart_t;

	
	condition_t getCondition() const;
	thenPart_t getThenPart() const;
	elsePart_t getElsePart() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_thenPart;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_elsePart;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_IFEXPRESSION__HPP
