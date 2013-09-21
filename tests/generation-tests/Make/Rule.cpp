
#include "Rule.hpp"
#include <Make/Dependency.hpp>
#include <Make/ShellLine.hpp>

using namespace Make;

Rule::Rule() : 
	m_dependencies(),
    m_shellLines()
{
}

Rule::~Rule()
{
}

Rule::dependencies_t Rule::getDependencies() const
{
	return e4c::returned(m_dependencies);
}

Rule::shellLines_t Rule::getShellLines() const
{
	return e4c::returned(m_shellLines);
}



