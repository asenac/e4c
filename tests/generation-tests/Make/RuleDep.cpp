
#include "RuleDep.hpp"
#include <Make/Rule.hpp>

using namespace Make;

RuleDep::RuleDep() : 
	m_ruledep()
{
}

RuleDep::~RuleDep()
{
}

RuleDep::ruledep_t RuleDep::getRuledep() const
{
	return e4c::returned(m_ruledep);
}



