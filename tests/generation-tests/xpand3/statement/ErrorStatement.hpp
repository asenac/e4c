
#ifndef EMF_CPP_XPAND3_STATEMENT_ERRORSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_ERRORSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::ErrorStatement
class ErrorStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ErrorStatement_ptr ptr_type;
	
	ErrorStatement();
	virtual ~ErrorStatement();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > message_t;

	
	// TODO

	
protected:

	message_t m_message;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ERRORSTATEMENT__HPP
