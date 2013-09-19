
#include "DataElement.hpp"
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

DataElement::DataElement() : 
	m_type(),
    m_ext(),
    m_size(),
    m_codeElement()
{
}

DataElement::~DataElement()
{
}

void DataElement::setExt(ext_t _ext)
{
	m_ext = _ext;;
}

ext_t DataElement::getExt() const
{
	return m_ext;
}

void DataElement::setSize(size_t _size)
{
	m_size = _size;;
}

size_t DataElement::getSize() const
{
	return m_size;
}



