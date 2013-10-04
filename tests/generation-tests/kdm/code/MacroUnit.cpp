
#include "MacroUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::MacroUnit include) START*/
/*PROTECTED REGION END*/

MacroUnit::MacroUnit() : 
	m_kind()
{
	/*PROTECTED REGION ID(MacroUnit constructor) START*/
	/*PROTECTED REGION END*/
}

MacroUnit::~MacroUnit()
{
	/*PROTECTED REGION ID(MacroUnit destructor) START*/
	/*PROTECTED REGION END*/
}

void MacroUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

MacroUnit::kind_t MacroUnit::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(kdm::code::MacroUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MacroUnit::eClassImpl() const
{
	return CodePackage::_instance()->getMacroUnit();
}
 
