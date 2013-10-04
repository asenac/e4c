
#include "Group.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Group include) START*/
/*PROTECTED REGION END*/

Group::Group()
{
	/*PROTECTED REGION ID(Group constructor) START*/
	/*PROTECTED REGION END*/
}

Group::~Group()
{
	/*PROTECTED REGION ID(Group destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::Group implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Group::eClassImpl() const
{
	return XtextPackage::_instance()->getGroup();
}
 
