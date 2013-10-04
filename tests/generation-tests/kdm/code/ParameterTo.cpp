
#include "ParameterTo.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ParameterTo include) START*/
/*PROTECTED REGION END*/

ParameterTo::ParameterTo() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ParameterTo constructor) START*/
	/*PROTECTED REGION END*/
}

ParameterTo::~ParameterTo()
{
	/*PROTECTED REGION ID(ParameterTo destructor) START*/
	/*PROTECTED REGION END*/
}

ParameterTo::to_t ParameterTo::getTo() const
{
	return e4c::returned(m_to);
}

void ParameterTo::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ParameterTo::from_t ParameterTo::getFrom() const
{
	return e4c::returned(m_from);
}

void ParameterTo::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::ParameterTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ParameterTo::eClassImpl() const
{
	return CodePackage::_instance()->getParameterTo();
}
 
