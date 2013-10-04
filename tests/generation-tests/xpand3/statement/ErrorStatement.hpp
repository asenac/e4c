
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


class ErrorStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ErrorStatement_ptr ptr_type;
	
	ErrorStatement();
	virtual ~ErrorStatement();

	typedef xpand3::expression::AbstractExpression_ptr message_t;
	
	message_t getMessage() const;
	void setMessage(message_t message_);
	message_t releaseMessage();
	

	/*PROTECTED REGION ID(xpand3::statement::ErrorStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_message;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::ErrorStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ERRORSTATEMENT__HPP
