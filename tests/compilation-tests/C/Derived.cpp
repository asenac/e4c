
#include "Derived.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::Derived include) START*/
/*PROTECTED REGION END*/

Derived::Derived()
{
	/*PROTECTED REGION ID(Derived constructor) START*/
	/*PROTECTED REGION END*/
}

Derived::~Derived()
{
	/*PROTECTED REGION ID(Derived destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::Derived implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Derived::eClassImpl() const
{
	return CPackage::_instance()->getDerived();
}
 
