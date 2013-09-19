#include "Xpand3Factory.hpp"
#include "Xpand3Package.hpp"
#include "include.hpp"

using namespace xpand3;

Xpand3Factory::Xpand3Factory()
{
	m_ePackage = Xpand3Package::_instance();
	// std::bind(&Xpand3Factory::createFile, this);
	// m_ePackage->getTag_File();
	// std::bind(&Xpand3Factory::createImportStatement, this);
	// m_ePackage->getTag_ImportStatement();
	// std::bind(&Xpand3Factory::createIdentifier, this);
	// m_ePackage->getTag_Identifier();
	// std::bind(&Xpand3Factory::createDeclaredParameter, this);
	// m_ePackage->getTag_DeclaredParameter();
}

const Xpand3Factory_ptr Xpand3Factory::_instance()
{
	static Xpand3Factory __instance;
	return &__instance;
}

File_ptr Xpand3Factory::createFile() const
{
	return new File();
}

ImportStatement_ptr Xpand3Factory::createImportStatement() const
{
	return new ImportStatement();
}

Identifier_ptr Xpand3Factory::createIdentifier() const
{
	return new Identifier();
}

DeclaredParameter_ptr Xpand3Factory::createDeclaredParameter() const
{
	return new DeclaredParameter();
}

