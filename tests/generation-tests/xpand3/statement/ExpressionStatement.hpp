
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > expression_t;

	
	// TODO

	
protected:

	expression_t m_expression;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_EXPRESSIONSTATEMENT__HPP
