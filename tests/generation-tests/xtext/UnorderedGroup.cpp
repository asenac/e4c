
#include "UnorderedGroup.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::UnorderedGroup include) START*/
/*PROTECTED REGION END*/

UnorderedGroup::UnorderedGroup()
{
	/*PROTECTED REGION ID(UnorderedGroup constructor) START*/
	/*PROTECTED REGION END*/
}

UnorderedGroup::~UnorderedGroup()
{
	/*PROTECTED REGION ID(UnorderedGroup destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::UnorderedGroup implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnorderedGroup::eClassImpl() const
{
	return XtextPackage::_instance()->getUnorderedGroup();
}
 
