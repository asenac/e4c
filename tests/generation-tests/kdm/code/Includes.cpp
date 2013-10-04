
#include "Includes.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Includes include) START*/
/*PROTECTED REGION END*/

Includes::Includes() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Includes constructor) START*/
	/*PROTECTED REGION END*/
}

Includes::~Includes()
{
	/*PROTECTED REGION ID(Includes destructor) START*/
	/*PROTECTED REGION END*/
}

Includes::to_t Includes::getTo() const
{
	return e4c::returned(m_to);
}

void Includes::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Includes::from_t Includes::getFrom() const
{
	return e4c::returned(m_from);
}

void Includes::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Includes implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Includes::eClassImpl() const
{
	return CodePackage::_instance()->getIncludes();
}
 
