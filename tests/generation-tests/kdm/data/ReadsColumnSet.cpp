
#include "ReadsColumnSet.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ColumnSet.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ReadsColumnSet include) START*/
/*PROTECTED REGION END*/

ReadsColumnSet::ReadsColumnSet() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ReadsColumnSet constructor) START*/
    /*PROTECTED REGION END*/
}

ReadsColumnSet::~ReadsColumnSet()
{
    /*PROTECTED REGION ID(ReadsColumnSet destructor) START*/
    /*PROTECTED REGION END*/
}

ReadsColumnSet::to_t ReadsColumnSet::getTo() const
{
    return e4c::returned(m_to);
}

void ReadsColumnSet::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ReadsColumnSet::from_t ReadsColumnSet::getFrom() const
{
    return e4c::returned(m_from);
}

void ReadsColumnSet::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::ReadsColumnSet implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReadsColumnSet::eClassImpl() const
{
    return DataPackage::_instance()->getReadsColumnSet();
}

