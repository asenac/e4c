
#include "BagType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::BagType include) START*/
/*PROTECTED REGION END*/

BagType::BagType() :
    m_size()
{
    /*PROTECTED REGION ID(BagType constructor) START*/
    /*PROTECTED REGION END*/
}

BagType::~BagType()
{
    /*PROTECTED REGION ID(BagType destructor) START*/
    /*PROTECTED REGION END*/
}

void BagType::setSize(size_t _size)
{
    m_size = _size;;
}

BagType::size_t BagType::getSize() const
{
    return m_size;
}



/*PROTECTED REGION ID(kdm::code::BagType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BagType::eClassImpl() const
{
    return CodePackage::_instance()->getBagType();
}

