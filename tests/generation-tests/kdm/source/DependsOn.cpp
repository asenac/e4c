
#include "DependsOn.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::DependsOn include) START*/
/*PROTECTED REGION END*/

DependsOn::DependsOn() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(DependsOn constructor) START*/
    /*PROTECTED REGION END*/
}

DependsOn::~DependsOn()
{
    /*PROTECTED REGION ID(DependsOn destructor) START*/
    /*PROTECTED REGION END*/
}

DependsOn::to_t DependsOn::getTo() const
{
    return e4c::returned(m_to);
}

void DependsOn::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

DependsOn::from_t DependsOn::getFrom() const
{
    return e4c::returned(m_from);
}

void DependsOn::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::source::DependsOn implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DependsOn::eClassImpl() const
{
    return SourcePackage::_instance()->getDependsOn();
}

