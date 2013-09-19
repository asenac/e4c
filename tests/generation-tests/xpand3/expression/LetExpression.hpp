
#ifndef EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::LetExpression
class LetExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef LetExpression_ptr ptr_type;
	
	LetExpression();
	virtual ~LetExpression();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > varExpression_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > targetExpression_t;
	typedef std::unique_ptr < xpand3::Identifier > varName_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	varExpression_t m_varExpression;
	targetExpression_t m_targetExpression;
	varName_t m_varName;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP
