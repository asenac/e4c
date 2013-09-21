
#ifndef EMF_CPP_XPAND3_STATEMENT_PROTECTSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_PROTECTSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::ProtectStatement
class ProtectStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef ProtectStatement_ptr ptr_type;
	
	ProtectStatement();
	virtual ~ProtectStatement();

	typedef xpand3::expression::AbstractExpression_ptr commentStart_t;
	typedef xpand3::expression::AbstractExpression_ptr commentEnd_t;
	typedef xpand3::expression::AbstractExpression_ptr id_t;
	typedef ::ecore::EBoolean disable_t;

	
	commentStart_t getCommentStart() const;
	commentEnd_t getCommentEnd() const;
	id_t getId() const;
	void setDisable(disable_t _disable);
	disable_t getDisable() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_commentStart;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_commentEnd;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_id;
	disable_t m_disable;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_PROTECTSTATEMENT__HPP
