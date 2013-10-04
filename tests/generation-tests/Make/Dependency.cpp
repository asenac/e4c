
#include "Dependency.hpp"
#include <Make/MakePackage.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Dependency include) START*/
/*PROTECTED REGION END*/

Dependency::Dependency()
{
	/*PROTECTED REGION ID(Dependency constructor) START*/
	/*PROTECTED REGION END*/
}

Dependency::~Dependency()
{
	/*PROTECTED REGION ID(Dependency destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(Make::Dependency implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Dependency::eClassImpl() const
{
	return MakePackage::_instance()->getDependency();
}
 
