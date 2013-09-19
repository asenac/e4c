
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > target_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > separator_t;
	typedef std::unique_ptr < xpand3::Identifier > variable_t;
	typedef std::unique_ptr < xpand3::Identifier > iteratorName_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	target_t m_target;
	separator_t m_separator;
	variable_t m_variable;
	iteratorName_t m_iteratorName;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP
