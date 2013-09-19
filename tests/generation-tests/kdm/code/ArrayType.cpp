
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

size_t ArrayType::getSize() const
{
	return m_size;
}



