
#include "SetType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::SetType include) START*/
/*PROTECTED REGION END*/

SetType::SetType() :
    m_size()
{
    /*PROTECTED REGION ID(SetType constructor) START*/
    /*PROTECTED REGION END*/
}

SetType::~SetType()
{
    /*PROTECTED REGION ID(SetType destructor) START*/
    /*PROTECTED REGION END*/
}

void SetType::setSize(size_t _size)
{
    m_size = _size;;
}

SetType::size_t SetType::getSize() const
{
    return m_size;
}



/*PROTECTED REGION ID(kdm::code::SetType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SetType::eClassImpl() const
{
    return CodePackage::_instance()->getSetType();
}

