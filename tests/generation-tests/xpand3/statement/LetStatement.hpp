
#ifndef EMF_CPP_XPAND3_STATEMENT_LETSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_LETSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::LetStatement
class LetStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef LetStatement_ptr ptr_type;
	
	LetStatement();
	virtual ~LetStatement();

	typedef std::unique_ptr < xpand3::Identifier > varName_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > varValue_t;

	
	// TODO
	// TODO

	
protected:

	varName_t m_varName;
	varValue_t m_varValue;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_LETSTATEMENT__HPP
