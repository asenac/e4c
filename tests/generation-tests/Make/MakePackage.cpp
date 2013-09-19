#include "MakePackage.hpp"
#include "MakeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace Make;

MakePackage::MakePackage()
{
	m_eFactoryInstance = MakeFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const MakePackage_ptr MakePackage::_instance()
{
	static MakePackage __instance;
	return &__instance;
}

e4c::tag_t MakePackage::getTag_Makefile() const
{
	return e4c::tag< Makefile >::get();
}
 
e4c::tag_t MakePackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t MakePackage::getTag_Rule() const
{
	return e4c::tag< Rule >::get();
}
 
e4c::tag_t MakePackage::getTag_Macro() const
{
	return e4c::tag< Macro >::get();
}
 
e4c::tag_t MakePackage::getTag_ShellLine() const
{
	return e4c::tag< ShellLine >::get();
}
 
e4c::tag_t MakePackage::getTag_Comment() const
{
	return e4c::tag< Comment >::get();
}
 
e4c::tag_t MakePackage::getTag_Dependency() const
{
	return e4c::tag< Dependency >::get();
}
 
e4c::tag_t MakePackage::getTag_RuleDep() const
{
	return e4c::tag< RuleDep >::get();
}
 
e4c::tag_t MakePackage::getTag_FileDep() const
{
	return e4c::tag< FileDep >::get();
}
 
e4c::tag_t MakePackage::getTag_Makefile__name() const
{
	return e4c::tag< Makefile__name_tag >::get();
}

e4c::tag_t MakePackage::getTag_Makefile__comment() const
{
	return e4c::tag< Makefile__comment_tag >::get();
}

e4c::tag_t MakePackage::getTag_Makefile__elements() const
{
	return e4c::tag< Makefile__elements_tag >::get();
}

e4c::tag_t MakePackage::getTag_Element__name() const
{
	return e4c::tag< Element__name_tag >::get();
}

e4c::tag_t MakePackage::getTag_Rule__dependencies() const
{
	return e4c::tag< Rule__dependencies_tag >::get();
}

e4c::tag_t MakePackage::getTag_Rule__shellLines() const
{
	return e4c::tag< Rule__shellLines_tag >::get();
}

e4c::tag_t MakePackage::getTag_Macro__value() const
{
	return e4c::tag< Macro__value_tag >::get();
}

e4c::tag_t MakePackage::getTag_ShellLine__command() const
{
	return e4c::tag< ShellLine__command_tag >::get();
}

e4c::tag_t MakePackage::getTag_ShellLine__display() const
{
	return e4c::tag< ShellLine__display_tag >::get();
}

e4c::tag_t MakePackage::getTag_ShellLine__ruleShellLine() const
{
	return e4c::tag< ShellLine__ruleShellLine_tag >::get();
}

e4c::tag_t MakePackage::getTag_Comment__text() const
{
	return e4c::tag< Comment__text_tag >::get();
}

e4c::tag_t MakePackage::getTag_RuleDep__ruledep() const
{
	return e4c::tag< RuleDep__ruledep_tag >::get();
}

e4c::tag_t MakePackage::getTag_FileDep__name() const
{
	return e4c::tag< FileDep__name_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_Make()
{
	return ::Make::MakePackage::_instance();
}
