
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

	typedef xpand3::Identifier_ptr varName_t;
	typedef xpand3::expression::AbstractExpression_ptr varValue_t;

	
	varName_t getVarName() const;
	varValue_t getVarValue() const;


	std::unique_ptr < xpand3::Identifier > m_varName;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_varValue;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_LETSTATEMENT__HPP
