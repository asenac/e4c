
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

	typedef xpand3::expression::AbstractExpression_ptr message_t;

	
	message_t getMessage() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_message;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ERRORSTATEMENT__HPP
