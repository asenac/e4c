
#include "Tree.hpp"
#include <CST/CSTPackage.hpp>

using namespace CST;

/*PROTECTED REGION ID(CST::Tree include) START*/
/*PROTECTED REGION END*/

Tree::Tree()
{
    /*PROTECTED REGION ID(Tree constructor) START*/
    /*PROTECTED REGION END*/
}

Tree::~Tree()
{
    /*PROTECTED REGION ID(Tree destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(CST::Tree implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Tree::eClassImpl() const
{
    return CSTPackage::_instance()->getTree();
}

