
#include "Enumeration.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/EnumerationLiteral.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Enumeration include) START*/
/*PROTECTED REGION END*/

Enumeration::Enumeration() :
    m_ownedLiteral()
{
    /*PROTECTED REGION ID(Enumeration constructor) START*/
    /*PROTECTED REGION END*/
}

Enumeration::~Enumeration()
{
    /*PROTECTED REGION ID(Enumeration destructor) START*/
    /*PROTECTED REGION END*/
}

Enumeration::ownedLiteral_t Enumeration::getOwnedLiteral() const
{
    return e4c::returned(m_ownedLiteral);
}


void Enumeration::addOwnedLiteral(emof::EnumerationLiteral_ptr ownedLiteral_)
{
    ownedLiteral_->setEnumeration(this);
    m_ownedLiteral.push_back(std::unique_ptr < emof::EnumerationLiteral >(ownedLiteral_));
}

void Enumeration::addAllOwnedLiteral(const ownedLiteral_t& ownedLiteral_)
{
    for (auto i = ownedLiteral_.begin(); i != ownedLiteral_.end(); i++)
        addOwnedLiteral(*i);
}



/*PROTECTED REGION ID(emof::Enumeration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Enumeration::eClassImpl() const
{
    return EmofPackage::_instance()->getEnumeration();
}

