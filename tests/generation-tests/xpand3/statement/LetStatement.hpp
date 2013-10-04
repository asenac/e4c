
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


class LetStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef LetStatement_ptr ptr_type;
	
	LetStatement();
	virtual ~LetStatement();

	typedef xpand3::Identifier_ptr varName_t;
	typedef xpand3::expression::AbstractExpression_ptr varValue_t;
	
	varName_t getVarName() const;
	void setVarName(varName_t varName_);
	varName_t releaseVarName();
	varValue_t getVarValue() const;
	void setVarValue(varValue_t varValue_);
	varValue_t releaseVarValue();
	

	/*PROTECTED REGION ID(xpand3::statement::LetStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	std::unique_ptr < xpand3::Identifier > m_varName;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_varValue;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::LetStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_LETSTATEMENT__HPP
