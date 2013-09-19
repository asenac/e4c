
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > commentStart_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > commentEnd_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > id_t;
	typedef int disable_t;

	
	// TODO
	// TODO
	// TODO
	void setDisable(disable_t _disable);
	disable_t getDisable() const;

	
protected:

	commentStart_t m_commentStart;
	commentEnd_t m_commentEnd;
	id_t m_id;
	disable_t m_disable;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_PROTECTSTATEMENT__HPP
