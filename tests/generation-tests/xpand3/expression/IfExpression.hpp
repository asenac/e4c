
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
	void setCondition(condition_t condition_);
	condition_t releaseCondition();
	thenPart_t getThenPart() const;
	void setThenPart(thenPart_t thenPart_);
	thenPart_t releaseThenPart();
	elsePart_t getElsePart() const;
	void setElsePart(elsePart_t elsePart_);
	elsePart_t releaseElsePart();
	

	/*PROTECTED REGION ID(xpand3::expression::IfExpression public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_thenPart;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_elsePart;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::IfExpression protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_IFEXPRESSION__HPP
