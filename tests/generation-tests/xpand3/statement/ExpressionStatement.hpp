
#ifndef EMF_CPP_XPAND3_STATEMENT_EXPRESSIONSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_EXPRESSIONSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class ExpressionStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ExpressionStatement_ptr ptr_type;
	
	ExpressionStatement();
	virtual ~ExpressionStatement();

	typedef xpand3::expression::AbstractExpression_ptr expression_t;
	
	expression_t getExpression() const;
	void setExpression(expression_t expression_);
	expression_t releaseExpression();
	

	/*PROTECTED REGION ID(xpand3::statement::ExpressionStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_expression;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::ExpressionStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_EXPRESSIONSTATEMENT__HPP
