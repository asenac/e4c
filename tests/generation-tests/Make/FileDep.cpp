
#include "FileDep.hpp"
#include <Make/MakePackage.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::FileDep include) START*/
/*PROTECTED REGION END*/

FileDep::FileDep() : 
	m_name()
{
	/*PROTECTED REGION ID(FileDep constructor) START*/
	/*PROTECTED REGION END*/
}

FileDep::~FileDep()
{
	/*PROTECTED REGION ID(FileDep destructor) START*/
	/*PROTECTED REGION END*/
}

void FileDep::setName(name_t _name)
{
	m_name = _name;;
}

FileDep::name_t FileDep::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(Make::FileDep implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FileDep::eClassImpl() const
{
	return MakePackage::_instance()->getFileDep();
}
 
