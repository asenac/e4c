
#include "DataElement.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::DataElement include) START*/
/*PROTECTED REGION END*/

DataElement::DataElement() : 
	m_type(),
    m_ext(),
    m_size(),
    m_codeElement()
{
	/*PROTECTED REGION ID(DataElement constructor) START*/
	/*PROTECTED REGION END*/
}

DataElement::~DataElement()
{
	/*PROTECTED REGION ID(DataElement destructor) START*/
	/*PROTECTED REGION END*/
}

DataElement::type_t DataElement::getType() const
{
	return e4c::returned(m_type);
}

void DataElement::setType(type_t type_)
{
	if (m_type == type_)
		return;
	m_type = type_;
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


void DataElement::addCodeElement(kdm::code::Datatype_ptr codeElement_)
{
	m_codeElement.insert(std::unique_ptr < kdm::code::Datatype >(codeElement_));
}

void DataElement::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::DataElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataElement::eClassImpl() const
{
	return CodePackage::_instance()->getDataElement();
}
 
