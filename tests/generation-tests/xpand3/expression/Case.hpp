
#ifndef EMF_CPP_XPAND3_EXPRESSION_CASE__HPP
#define EMF_CPP_XPAND3_EXPRESSION_CASE__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::Case
class Case :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef Case_ptr ptr_type;
	
	Case();
	virtual ~Case();

	typedef xpand3::expression::AbstractExpression_ptr condition_t;
	typedef xpand3::expression::AbstractExpression_ptr thenPart_t;

	
	condition_t getCondition() const;
	thenPart_t getThenPart() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_thenPart;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CASE__HPP
