
#ifndef EMF_CPP_XPAND3_EXPRESSION_SWITCHEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_SWITCHEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::SwitchExpression
class SwitchExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef SwitchExpression_ptr ptr_type;
	
	SwitchExpression();
	virtual ~SwitchExpression();

	typedef xpand3::expression::AbstractExpression_ptr switchExpr_t;
	typedef xpand3::expression::AbstractExpression_ptr defaultExpr_t;
	typedef std::vector < xpand3::expression::Case_ptr > cases_t;

	
	switchExpr_t getSwitchExpr() const;
	defaultExpr_t getDefaultExpr() const;
	cases_t getCases() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_switchExpr;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_defaultExpr;
	std::vector < std::unique_ptr < xpand3::expression::Case > > m_cases;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_SWITCHEXPRESSION__HPP
