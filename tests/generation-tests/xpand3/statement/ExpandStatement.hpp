
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


class ExpandStatement :  public virtual ::xpand3::statement::AbstractStatement
{
public:

	typedef ExpandStatement_ptr ptr_type;
	
	ExpandStatement();
	virtual ~ExpandStatement();

	typedef ::ecore::EBoolean foreach_t;
	typedef std::vector < xpand3::expression::AbstractExpression_ptr > parameters_t;
	typedef xpand3::expression::AbstractExpression_ptr separator_t;
	typedef xpand3::expression::AbstractExpression_ptr target_t;
	typedef xpand3::Identifier_ptr definition_t;
	
	void setForeach(foreach_t _foreach);
	foreach_t getForeach() const;
	parameters_t getParameters() const;
	void addParameters(xpand3::expression::AbstractExpression_ptr parameters_);
	void addAllParameters(const parameters_t& parameters_);
	separator_t getSeparator() const;
	void setSeparator(separator_t separator_);
	separator_t releaseSeparator();
	target_t getTarget() const;
	void setTarget(target_t target_);
	target_t releaseTarget();
	definition_t getDefinition() const;
	void setDefinition(definition_t definition_);
	definition_t releaseDefinition();
	

	/*PROTECTED REGION ID(xpand3::statement::ExpandStatement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StatementPackage;

	foreach_t m_foreach;
	std::vector < std::unique_ptr < xpand3::expression::AbstractExpression > > m_parameters;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_separator;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_target;
	std::unique_ptr < xpand3::Identifier > m_definition;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::statement::ExpandStatement protected) START*/
	/*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_EXPANDSTATEMENT__HPP
