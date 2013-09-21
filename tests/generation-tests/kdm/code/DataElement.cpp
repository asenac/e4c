
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

DataElement::type_t DataElement::getType() const
{
	return e4c::returned(m_type);
}

void DataElement::setExt(ext_t _ext)
{
	m_ext = _ext;;
}

DataElement::ext_t DataElement::getExt() const
{
	return m_ext;
}

void DataElement::setSize(size_t _size)
{
	m_size = _size;;
}

DataElement::size_t DataElement::getSize() const
{
	return m_size;
}

DataElement::codeElement_t DataElement::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



