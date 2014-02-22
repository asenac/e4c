
#include "ManagesData.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ManagesData include) START*/
/*PROTECTED REGION END*/

ManagesData::ManagesData() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ManagesData constructor) START*/
    /*PROTECTED REGION END*/
}

ManagesData::~ManagesData()
{
    /*PROTECTED REGION ID(ManagesData destructor) START*/
    /*PROTECTED REGION END*/
}

ManagesData::to_t ManagesData::getTo() const
{
    return e4c::returned(m_to);
}

void ManagesData::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ManagesData::from_t ManagesData::getFrom() const
{
    return e4c::returned(m_from);
}

void ManagesData::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::ManagesData implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ManagesData::eClassImpl() const
{
    return DataPackage::_instance()->getManagesData();
}

