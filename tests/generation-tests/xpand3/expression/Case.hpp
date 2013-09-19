
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > condition_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > thenPart_t;

	
	// TODO
	// TODO

	
protected:

	condition_t m_condition;
	thenPart_t m_thenPart;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CASE__HPP
