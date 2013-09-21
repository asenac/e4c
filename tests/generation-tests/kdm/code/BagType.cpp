
#include "BagType.hpp"

using namespace kdm::code;

BagType::BagType() : 
	m_size()
{
}

BagType::~BagType()
{
}

void BagType::setSize(size_t _size)
{
	m_size = _size;;
}

BagType::size_t BagType::getSize() const
{
	return m_size;
}



