
#include "SetType.hpp"

using namespace kdm::code;

SetType::SetType() : 
	m_size()
{
}

SetType::~SetType()
{
}

void SetType::setSize(size_t _size)
{
	m_size = _size;;
}

size_t SetType::getSize() const
{
	return m_size;
}



