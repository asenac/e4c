#include "MakeFactory.hpp"
#include "MakePackage.hpp"
#include "include.hpp"

using namespace Make;

MakeFactory::MakeFactory()
{
	m_ePackage = MakePackage::_instance();
	// std::bind(&MakeFactory::createMakefile, this);
	// m_ePackage->getTag_Makefile();
	// std::bind(&MakeFactory::createRule, this);
	// m_ePackage->getTag_Rule();
	// std::bind(&MakeFactory::createMacro, this);
	// m_ePackage->getTag_Macro();
	// std::bind(&MakeFactory::createShellLine, this);
	// m_ePackage->getTag_ShellLine();
	// std::bind(&MakeFactory::createComment, this);
	// m_ePackage->getTag_Comment();
	// std::bind(&MakeFactory::createRuleDep, this);
	// m_ePackage->getTag_RuleDep();
	// std::bind(&MakeFactory::createFileDep, this);
	// m_ePackage->getTag_FileDep();
}

const MakeFactory_ptr MakeFactory::_instance()
{
	static MakeFactory __instance;
	return &__instance;
}

Makefile_ptr MakeFactory::createMakefile() const
{
	return new Makefile();
}

Rule_ptr MakeFactory::createRule() const
{
	return new Rule();
}

Macro_ptr MakeFactory::createMacro() const
{
	return new Macro();
}

ShellLine_ptr MakeFactory::createShellLine() const
{
	return new ShellLine();
}

Comment_ptr MakeFactory::createComment() const
{
	return new Comment();
}

RuleDep_ptr MakeFactory::createRuleDep() const
{
	return new RuleDep();
}

FileDep_ptr MakeFactory::createFileDep() const
{
	return new FileDep();
}

