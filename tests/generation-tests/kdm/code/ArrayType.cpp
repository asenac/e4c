
#include "ArrayType.hpp"
#include <kdm/code/IndexUnit.hpp>

using namespace kdm::code;

ArrayType::ArrayType() : 
	m_size(),
    m_indexUnit()
{
}

ArrayType::~ArrayType()
{
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



