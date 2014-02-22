
#include "RestrictionOf.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::RestrictionOf include) START*/
/*PROTECTED REGION END*/

RestrictionOf::RestrictionOf() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(RestrictionOf constructor) START*/
    /*PROTECTED REGION END*/
}

RestrictionOf::~RestrictionOf()
{
    /*PROTECTED REGION ID(RestrictionOf destructor) START*/
    /*PROTECTED REGION END*/
}

RestrictionOf::to_t RestrictionOf::getTo() const
{
    return e4c::returned(m_to);
}

void RestrictionOf::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

RestrictionOf::from_t RestrictionOf::getFrom() const
{
    return e4c::returned(m_from);
}

void RestrictionOf::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::RestrictionOf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RestrictionOf::eClassImpl() const
{
    return DataPackage::_instance()->getRestrictionOf();
}

