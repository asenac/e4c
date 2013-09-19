
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > condition_t;
	typedef std::unique_ptr < xpand3::statement::IfStatement > elseIf_t;

	
	// TODO
	// TODO

	
protected:

	condition_t m_condition;
	elseIf_t m_elseIf;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_IFSTATEMENT__HPP
