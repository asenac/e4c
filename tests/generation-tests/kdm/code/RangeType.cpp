
#include "RangeType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::RangeType include) START*/
/*PROTECTED REGION END*/

RangeType::RangeType() :
    m_lower(),
    m_upper()
{
    /*PROTECTED REGION ID(RangeType constructor) START*/
    /*PROTECTED REGION END*/
}

RangeType::~RangeType()
{
    /*PROTECTED REGION ID(RangeType destructor) START*/
    /*PROTECTED REGION END*/
}

void RangeType::setLower(lower_t _lower)
{
    m_lower = _lower;;
}

RangeType::lower_t RangeType::getLower() const
{
    return m_lower;
}

void RangeType::setUpper(upper_t _upper)
{
    m_upper = _upper;;
}

RangeType::upper_t RangeType::getUpper() const
{
    return m_upper;
}



/*PROTECTED REGION ID(kdm::code::RangeType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RangeType::eClassImpl() const
{
    return CodePackage::_instance()->getRangeType();
}

