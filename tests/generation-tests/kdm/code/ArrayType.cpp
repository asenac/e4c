
#include "ArrayType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/IndexUnit.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ArrayType include) START*/
/*PROTECTED REGION END*/

ArrayType::ArrayType() : 
	m_size(),
    m_indexUnit()
{
	/*PROTECTED REGION ID(ArrayType constructor) START*/
	/*PROTECTED REGION END*/
}

ArrayType::~ArrayType()
{
	/*PROTECTED REGION ID(ArrayType destructor) START*/
	/*PROTECTED REGION END*/
}

void ArrayType::setSize(size_t _size)
{
	m_size = _size;;
}

ArrayType::size_t ArrayType::getSize() const
{
	return m_size;
}

ArrayType::indexUnit_t ArrayType::getIndexUnit() const
{
	return e4c::returned(m_indexUnit);
}


void ArrayType::setIndexUnit(indexUnit_t indexUnit_)
{
	m_indexUnit.reset(indexUnit_);
}

ArrayType::indexUnit_t ArrayType::releaseIndexUnit()
{
	return m_indexUnit.release();
}



/*PROTECTED REGION ID(kdm::code::ArrayType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ArrayType::eClassImpl() const
{
	return CodePackage::_instance()->getArrayType();
}
 
