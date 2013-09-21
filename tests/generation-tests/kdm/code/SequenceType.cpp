
#include "SequenceType.hpp"

using namespace kdm::code;

SequenceType::SequenceType() : 
	m_size()
{
}

SequenceType::~SequenceType()
{
}

void SequenceType::setSize(size_t _size)
{
	m_size = _size;;
}

SequenceType::size_t SequenceType::getSize() const
{
	return m_size;
}



