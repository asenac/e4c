
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



