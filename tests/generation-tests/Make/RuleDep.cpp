
#include "RuleDep.hpp"
#include <Make/MakePackage.hpp>
#include <Make/Rule.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::RuleDep include) START*/
/*PROTECTED REGION END*/

RuleDep::RuleDep() :
    m_ruledep()
{
    /*PROTECTED REGION ID(RuleDep constructor) START*/
    /*PROTECTED REGION END*/
}

RuleDep::~RuleDep()
{
    /*PROTECTED REGION ID(RuleDep destructor) START*/
    /*PROTECTED REGION END*/
}

RuleDep::ruledep_t RuleDep::getRuledep() const
{
    return e4c::returned(m_ruledep);
}

void RuleDep::setRuledep(ruledep_t ruledep_)
{
    if (m_ruledep == ruledep_)
        return;
    m_ruledep = ruledep_;
}



/*PROTECTED REGION ID(Make::RuleDep implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RuleDep::eClassImpl() const
{
    return MakePackage::_instance()->getRuleDep();
}

