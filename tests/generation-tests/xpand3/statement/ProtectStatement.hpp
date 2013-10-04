
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
	void setCommentStart(commentStart_t commentStart_);
	commentStart_t releaseCommentStart();
	commentEnd_t getCommentEnd() const;
	void setCommentEnd(commentEnd_t commentEnd_);
	commentEnd_t releaseCommentEnd();
	id_t getId() const;
	void setId(id_t id_);
	id_t releaseId();
	void setDisable(disable_t _disable);
	disable_t getDisable() const;
	

	/*PROTECTED REGION ID(xpand3::statement::ProtectStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_commentStart;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_commentEnd;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_id;
	disable_t m_disable;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::ProtectStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_PROTECTSTATEMENT__HPP
