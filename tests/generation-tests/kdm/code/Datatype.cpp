
#include "Datatype.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Datatype include) START*/
/*PROTECTED REGION END*/

Datatype::Datatype()
{
	/*PROTECTED REGION ID(Datatype constructor) START*/
	/*PROTECTED REGION END*/
}

Datatype::~Datatype()
{
	/*PROTECTED REGION ID(Datatype destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::Datatype implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Datatype::eClassImpl() const
{
	return CodePackage::_instance()->getDatatype();
}
 
