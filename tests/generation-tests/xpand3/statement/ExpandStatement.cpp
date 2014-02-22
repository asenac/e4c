
#include "ExpandStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::ExpandStatement include) START*/
/*PROTECTED REGION END*/

ExpandStatement::ExpandStatement() :
    m_foreach(),
    m_parameters(),
    m_separator(),
    m_target(),
    m_definition()
{
    /*PROTECTED REGION ID(ExpandStatement constructor) START*/
    /*PROTECTED REGION END*/
}

ExpandStatement::~ExpandStatement()
{
    /*PROTECTED REGION ID(ExpandStatement destructor) START*/
    /*PROTECTED REGION END*/
}

void ExpandStatement::setForeach(foreach_t _foreach)
{
    m_foreach = _foreach;;
}

ExpandStatement::foreach_t ExpandStatement::getForeach() const
{
    return m_foreach;
}

ExpandStatement::parameters_t ExpandStatement::getParameters() const
{
    return e4c::returned(m_parameters);
}


void ExpandStatement::addParameters(xpand3::expression::AbstractExpression_ptr parameters_)
{
    m_parameters.push_back(std::unique_ptr < xpand3::expression::AbstractExpression >(parameters_));
}

void ExpandStatement::addAllParameters(const parameters_t& parameters_)
{
    for (auto i = parameters_.begin(); i != parameters_.end(); i++)
        addParameters(*i);
}

ExpandStatement::separator_t ExpandStatement::getSeparator() const
{
    return e4c::returned(m_separator);
}


void ExpandStatement::setSeparator(separator_t separator_)
{
    m_separator.reset(separator_);
}

ExpandStatement::separator_t ExpandStatement::releaseSeparator()
{
    return m_separator.release();
}

ExpandStatement::target_t ExpandStatement::getTarget() const
{
    return e4c::returned(m_target);
}


void ExpandStatement::setTarget(target_t target_)
{
    m_target.reset(target_);
}

ExpandStatement::target_t ExpandStatement::releaseTarget()
{
    return m_target.release();
}

ExpandStatement::definition_t ExpandStatement::getDefinition() const
{
    return e4c::returned(m_definition);
}


void ExpandStatement::setDefinition(definition_t definition_)
{
    m_definition.reset(definition_);
}

ExpandStatement::definition_t ExpandStatement::releaseDefinition()
{
    return m_definition.release();
}



/*PROTECTED REGION ID(xpand3::statement::ExpandStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExpandStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getExpandStatement();
}

