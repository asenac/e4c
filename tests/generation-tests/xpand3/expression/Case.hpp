
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


class Case :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef Case_ptr ptr_type;
	
	Case();
	virtual ~Case();

	typedef xpand3::expression::AbstractExpression_ptr condition_t;
	typedef xpand3::expression::AbstractExpression_ptr thenPart_t;
	
	condition_t getCondition() const;
	void setCondition(condition_t condition_);
	condition_t releaseCondition();
	thenPart_t getThenPart() const;
	void setThenPart(thenPart_t thenPart_);
	thenPart_t releaseThenPart();
	

	/*PROTECTED REGION ID(xpand3::expression::Case public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_thenPart;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::Case protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CASE__HPP
