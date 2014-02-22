
#include "Rule.hpp"
#include <Make/MakePackage.hpp>
#include <Make/Dependency.hpp>
#include <Make/ShellLine.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Rule include) START*/
/*PROTECTED REGION END*/

Rule::Rule() :
    m_dependencies(),
    m_shellLines()
{
    /*PROTECTED REGION ID(Rule constructor) START*/
    /*PROTECTED REGION END*/
}

Rule::~Rule()
{
    /*PROTECTED REGION ID(Rule destructor) START*/
    /*PROTECTED REGION END*/
}

Rule::dependencies_t Rule::getDependencies() const
{
    return e4c::returned(m_dependencies);
}


void Rule::addDependencies(Make::Dependency_ptr dependencies_)
{
    m_dependencies.push_back(std::unique_ptr < Make::Dependency >(dependencies_));
}

void Rule::addAllDependencies(const dependencies_t& dependencies_)
{
    for (auto i = dependencies_.begin(); i != dependencies_.end(); i++)
        addDependencies(*i);
}

Rule::shellLines_t Rule::getShellLines() const
{
    return e4c::returned(m_shellLines);
}


void Rule::addShellLines(Make::ShellLine_ptr shellLines_)
{
    shellLines_->setRuleShellLine(this);
    m_shellLines.push_back(std::unique_ptr < Make::ShellLine >(shellLines_));
}

void Rule::addAllShellLines(const shellLines_t& shellLines_)
{
    for (auto i = shellLines_.begin(); i != shellLines_.end(); i++)
        addShellLines(*i);
}



/*PROTECTED REGION ID(Make::Rule implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Rule::eClassImpl() const
{
    return MakePackage::_instance()->getRule();
}

