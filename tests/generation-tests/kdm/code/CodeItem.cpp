
#include "CodeItem.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CodeItem include) START*/
/*PROTECTED REGION END*/

CodeItem::CodeItem()
{
	/*PROTECTED REGION ID(CodeItem constructor) START*/
	/*PROTECTED REGION END*/
}

CodeItem::~CodeItem()
{
	/*PROTECTED REGION ID(CodeItem destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::CodeItem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CodeItem::eClassImpl() const
{
	return CodePackage::_instance()->getCodeItem();
}
 
