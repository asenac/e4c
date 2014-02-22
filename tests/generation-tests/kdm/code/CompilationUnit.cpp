
#include "CompilationUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CompilationUnit include) START*/
/*PROTECTED REGION END*/

CompilationUnit::CompilationUnit()
{
    /*PROTECTED REGION ID(CompilationUnit constructor) START*/
    /*PROTECTED REGION END*/
}

CompilationUnit::~CompilationUnit()
{
    /*PROTECTED REGION ID(CompilationUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::CompilationUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CompilationUnit::eClassImpl() const
{
    return CodePackage::_instance()->getCompilationUnit();
}

