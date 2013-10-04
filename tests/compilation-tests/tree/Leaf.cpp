
#include "Leaf.hpp"
#include <tree/TreePackage.hpp>

using namespace tree;

/*PROTECTED REGION ID(tree::Leaf include) START*/
/*PROTECTED REGION END*/

Leaf::Leaf()
{
	/*PROTECTED REGION ID(Leaf constructor) START*/
	/*PROTECTED REGION END*/
}

Leaf::~Leaf()
{
	/*PROTECTED REGION ID(Leaf destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(tree::Leaf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Leaf::eClassImpl() const
{
	return TreePackage::_instance()->getLeaf();
}
 
