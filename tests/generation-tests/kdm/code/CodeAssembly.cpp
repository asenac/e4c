
#include "CodeAssembly.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CodeAssembly include) START*/
/*PROTECTED REGION END*/

CodeAssembly::CodeAssembly()
{
	/*PROTECTED REGION ID(CodeAssembly constructor) START*/
	/*PROTECTED REGION END*/
}

CodeAssembly::~CodeAssembly()
{
	/*PROTECTED REGION ID(CodeAssembly destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::CodeAssembly implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CodeAssembly::eClassImpl() const
{
	return CodePackage::_instance()->getCodeAssembly();
}
 
