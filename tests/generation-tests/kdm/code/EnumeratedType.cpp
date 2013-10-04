
#include "EnumeratedType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Value.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::EnumeratedType include) START*/
/*PROTECTED REGION END*/

EnumeratedType::EnumeratedType() : 
	m_value()
{
	/*PROTECTED REGION ID(EnumeratedType constructor) START*/
	/*PROTECTED REGION END*/
}

EnumeratedType::~EnumeratedType()
{
	/*PROTECTED REGION ID(EnumeratedType destructor) START*/
	/*PROTECTED REGION END*/
}

EnumeratedType::value_t EnumeratedType::getValue() const
{
	return e4c::returned(m_value);
}


void EnumeratedType::addValue(kdm::code::Value_ptr value_)
{
	m_value.push_back(std::unique_ptr < kdm::code::Value >(value_));
}

void EnumeratedType::addAllValue(const value_t& value_)
{
	for (auto i = value_.begin(); i != value_.end(); i++)
		addValue(*i);
}



/*PROTECTED REGION ID(kdm::code::EnumeratedType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumeratedType::eClassImpl() const
{
	return CodePackage::_instance()->getEnumeratedType();
}
 
