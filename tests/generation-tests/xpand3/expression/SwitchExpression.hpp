
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > switchExpr_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > defaultExpr_t;
	typedef boost::ptr_vector < xpand3::expression::Case > cases_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	switchExpr_t m_switchExpr;
	defaultExpr_t m_defaultExpr;
	cases_t m_cases;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_SWITCHEXPRESSION__HPP
