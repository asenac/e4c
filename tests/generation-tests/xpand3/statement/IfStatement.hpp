
#ifndef EMF_CPP_XPAND3_STATEMENT_IFSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_IFSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::IfStatement
class IfStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef IfStatement_ptr ptr_type;
	
	IfStatement();
	virtual ~IfStatement();

	typedef xpand3::expression::AbstractExpression_ptr condition_t;
	typedef xpand3::statement::IfStatement_ptr elseIf_t;

	
	condition_t getCondition() const;
	elseIf_t getElseIf() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::statement::IfStatement > m_elseIf;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_IFSTATEMENT__HPP
