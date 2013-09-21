
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


// xpand3::statement::ExpressionStatement
class ExpressionStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ExpressionStatement_ptr ptr_type;
	
	ExpressionStatement();
	virtual ~ExpressionStatement();

	typedef xpand3::expression::AbstractExpression_ptr expression_t;

	
	expression_t getExpression() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_expression;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_EXPRESSIONSTATEMENT__HPP
