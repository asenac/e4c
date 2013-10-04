
#include "DefinedType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::DefinedType include) START*/
/*PROTECTED REGION END*/

DefinedType::DefinedType() : 
	m_type(),
    m_codeElement()
{
	/*PROTECTED REGION ID(DefinedType constructor) START*/
	/*PROTECTED REGION END*/
}

DefinedType::~DefinedType()
{
	/*PROTECTED REGION ID(DefinedType destructor) START*/
	/*PROTECTED REGION END*/
}

DefinedType::type_t DefinedType::getType() const
{
	return e4c::returned(m_type);
}

void DefinedType::setType(type_t type_)
{
	if (m_type == type_)
		return;
	m_type = type_;
}

DefinedType::codeElement_t DefinedType::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void DefinedType::setCodeElement(codeElement_t codeElement_)
{
	m_codeElement.reset(codeElement_);
}

DefinedType::codeElement_t DefinedType::releaseCodeElement()
{
	return m_codeElement.release();
}



/*PROTECTED REGION ID(kdm::code::DefinedType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DefinedType::eClassImpl() const
{
	return CodePackage::_instance()->getDefinedType();
}
 
