
#include "Imports.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Imports include) START*/
/*PROTECTED REGION END*/

Imports::Imports() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Imports constructor) START*/
	/*PROTECTED REGION END*/
}

Imports::~Imports()
{
	/*PROTECTED REGION ID(Imports destructor) START*/
	/*PROTECTED REGION END*/
}

Imports::to_t Imports::getTo() const
{
	return e4c::returned(m_to);
}

void Imports::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Imports::from_t Imports::getFrom() const
{
	return e4c::returned(m_from);
}

void Imports::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Imports implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Imports::eClassImpl() const
{
	return CodePackage::_instance()->getImports();
}
 
