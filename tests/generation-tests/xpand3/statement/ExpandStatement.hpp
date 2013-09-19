
#ifndef EMF_CPP_XPAND3_STATEMENT_EXPANDSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_EXPANDSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


// xpand3::statement::ExpandStatement
class ExpandStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ExpandStatement_ptr ptr_type;
	
	ExpandStatement();
	virtual ~ExpandStatement();

	typedef int foreach_t;
	typedef boost::ptr_vector < xpand3::expression::AbstractExpression > parameters_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > separator_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > target_t;
	typedef std::unique_ptr < xpand3::Identifier > definition_t;

	
	void setForeach(foreach_t _foreach);
	foreach_t getForeach() const;
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	foreach_t m_foreach;
	parameters_t m_parameters;
	separator_t m_separator;
	target_t m_target;
	definition_t m_definition;

};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_EXPANDSTATEMENT__HPP
