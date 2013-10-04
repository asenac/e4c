
#include "NamespaceUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::NamespaceUnit include) START*/
/*PROTECTED REGION END*/

NamespaceUnit::NamespaceUnit() : 
	m_groupedCode()
{
	/*PROTECTED REGION ID(NamespaceUnit constructor) START*/
	/*PROTECTED REGION END*/
}

NamespaceUnit::~NamespaceUnit()
{
	/*PROTECTED REGION ID(NamespaceUnit destructor) START*/
	/*PROTECTED REGION END*/
}

NamespaceUnit::groupedCode_t NamespaceUnit::getGroupedCode() const
{
	return e4c::returned(m_groupedCode);
}

void NamespaceUnit::addGroupedCode(kdm::code::CodeItem_ptr groupedCode_)
{
	if (e4c::contains(m_groupedCode, groupedCode_))
		return;
	m_groupedCode.insert(groupedCode_);
}

void NamespaceUnit::addAllGroupedCode(const groupedCode_t& groupedCode_)
{
	for (auto i = groupedCode_.begin(); i != groupedCode_.end(); i++)
		addGroupedCode(*i);
}



/*PROTECTED REGION ID(kdm::code::NamespaceUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NamespaceUnit::eClassImpl() const
{
	return CodePackage::_instance()->getNamespaceUnit();
}
 
