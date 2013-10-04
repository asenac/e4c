
#include "GeneratedFrom.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/PreprocessorDirective.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::GeneratedFrom include) START*/
/*PROTECTED REGION END*/

GeneratedFrom::GeneratedFrom() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(GeneratedFrom constructor) START*/
	/*PROTECTED REGION END*/
}

GeneratedFrom::~GeneratedFrom()
{
	/*PROTECTED REGION ID(GeneratedFrom destructor) START*/
	/*PROTECTED REGION END*/
}

GeneratedFrom::to_t GeneratedFrom::getTo() const
{
	return e4c::returned(m_to);
}

void GeneratedFrom::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

GeneratedFrom::from_t GeneratedFrom::getFrom() const
{
	return e4c::returned(m_from);
}

void GeneratedFrom::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::GeneratedFrom implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GeneratedFrom::eClassImpl() const
{
	return CodePackage::_instance()->getGeneratedFrom();
}
 
