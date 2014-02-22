#include "ETypeParameter.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::ETypeParameter include) START*/
/*PROTECTED REGION END*/

ETypeParameter::ETypeParameter() :
    m_eBounds()
{
    /*PROTECTED REGION ID(ETypeParameter constructor) START*/
    /*PROTECTED REGION END*/
}

ETypeParameter::~ETypeParameter()
{
    /*PROTECTED REGION ID(ETypeParameter destructor) START*/
    /*PROTECTED REGION END*/
}

ETypeParameter::eBounds_t ETypeParameter::getEBounds() const
{
    return e4c::returned(m_eBounds);
}

void ETypeParameter::addEBounds(ecore::EGenericType_ptr eBounds_)
{
    assert(eBounds_);
    m_eBounds.push_back(std::unique_ptr < ecore::EGenericType >(eBounds_));
}

void ETypeParameter::addAllEBounds(const eBounds_t& eBounds_)
{
    for (auto i = eBounds_.begin(); i != eBounds_.end(); i++)
        addEBounds(*i);
}

void ETypeParameter::removeEBounds(ecore::EGenericType_ptr eBounds_)
{
    assert(eBounds_);
    e4c::remove(m_eBounds, eBounds_);
}

void ETypeParameter::clearEBounds()
{
    m_eBounds.clear();
}



/*PROTECTED REGION ID(ecore::ETypeParameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ETypeParameter::eClassImpl() const
{
    return EcorePackage::_instance()->getETypeParameter();
}

