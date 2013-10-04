
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


class IfStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef IfStatement_ptr ptr_type;
	
	IfStatement();
	virtual ~IfStatement();

	typedef xpand3::expression::AbstractExpression_ptr condition_t;
	typedef xpand3::statement::IfStatement_ptr elseIf_t;
	
	condition_t getCondition() const;
	void setCondition(condition_t condition_);
	condition_t releaseCondition();
	elseIf_t getElseIf() const;
	void setElseIf(elseIf_t elseIf_);
	elseIf_t releaseElseIf();
	

	/*PROTECTED REGION ID(xpand3::statement::IfStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_condition;
	std::unique_ptr < xpand3::statement::IfStatement > m_elseIf;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::IfStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_IFSTATEMENT__HPP
