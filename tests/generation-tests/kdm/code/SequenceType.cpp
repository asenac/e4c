
#include "SequenceType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::SequenceType include) START*/
/*PROTECTED REGION END*/

SequenceType::SequenceType() :
    m_size()
{
    /*PROTECTED REGION ID(SequenceType constructor) START*/
    /*PROTECTED REGION END*/
}

SequenceType::~SequenceType()
{
    /*PROTECTED REGION ID(SequenceType destructor) START*/
    /*PROTECTED REGION END*/
}

void SequenceType::setSize(size_t _size)
{
    m_size = _size;;
}

SequenceType::size_t SequenceType::getSize() const
{
    return m_size;
}



/*PROTECTED REGION ID(kdm::code::SequenceType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SequenceType::eClassImpl() const
{
    return CodePackage::_instance()->getSequenceType();
}

