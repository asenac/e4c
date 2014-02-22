
#include "TypedBy.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/ContentItem.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::TypedBy include) START*/
/*PROTECTED REGION END*/

TypedBy::TypedBy() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(TypedBy constructor) START*/
    /*PROTECTED REGION END*/
}

TypedBy::~TypedBy()
{
    /*PROTECTED REGION ID(TypedBy destructor) START*/
    /*PROTECTED REGION END*/
}

TypedBy::to_t TypedBy::getTo() const
{
    return e4c::returned(m_to);
}

void TypedBy::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

TypedBy::from_t TypedBy::getFrom() const
{
    return e4c::returned(m_from);
}

void TypedBy::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::TypedBy implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypedBy::eClassImpl() const
{
    return DataPackage::_instance()->getTypedBy();
}

