
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
	void setSwitchExpr(switchExpr_t switchExpr_);
	switchExpr_t releaseSwitchExpr();
	defaultExpr_t getDefaultExpr() const;
	void setDefaultExpr(defaultExpr_t defaultExpr_);
	defaultExpr_t releaseDefaultExpr();
	cases_t getCases() const;
	void addCases(xpand3::expression::Case_ptr cases_);
	void addAllCases(const cases_t& cases_);
	

	/*PROTECTED REGION ID(xpand3::expression::SwitchExpression public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_switchExpr;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_defaultExpr;
	std::vector < std::unique_ptr < xpand3::expression::Case > > m_cases;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::SwitchExpression protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_SWITCHEXPRESSION__HPP
