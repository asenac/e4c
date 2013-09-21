
#include "Field.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Field include) START*/
/*PROTECTED REGION END*/

Field::Field() : 
	m_identifier()
{
}

Field::~Field()
{
}

void Field::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

Field::identifier_t Field::getIdentifier() const
{
	return m_identifier;
}




/*PROTECTED REGION ID(idlmm::Field implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Field::eClassImpl() const
{
	return IdlmmPackage::_instance()->getField();
}
 
