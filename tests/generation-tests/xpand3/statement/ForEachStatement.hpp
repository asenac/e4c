
#ifndef EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::ForEachStatement
class ForEachStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

	typedef ForEachStatement_ptr ptr_type;
	
	ForEachStatement();
	virtual ~ForEachStatement();

	typedef xpand3::expression::AbstractExpression_ptr target_t;
	typedef xpand3::expression::AbstractExpression_ptr separator_t;
	typedef xpand3::Identifier_ptr variable_t;
	typedef xpand3::Identifier_ptr iteratorName_t;

	
	target_t getTarget() const;
	separator_t getSeparator() const;
	variable_t getVariable() const;
	iteratorName_t getIteratorName() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_target;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_separator;
	std::unique_ptr < xpand3::Identifier > m_variable;
	std::unique_ptr < xpand3::Identifier > m_iteratorName;

		
protected:

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP
