
#include "CBitField.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CBitField include) START*/
/*PROTECTED REGION END*/

CBitField::CBitField()
{
	/*PROTECTED REGION ID(CBitField constructor) START*/
	/*PROTECTED REGION END*/
}

CBitField::~CBitField()
{
	/*PROTECTED REGION ID(CBitField destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CBitField implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CBitField::eClassImpl() const
{
	return CPackage::_instance()->getCBitField();
}
 
