#include "StatementFactory.hpp"
#include "StatementPackage.hpp"
#include "include.hpp"

using namespace xpand3::statement;

StatementFactory::StatementFactory()
{
	// m_ePackage = StatementPackage::_instance();
	// std::bind(&StatementFactory::createExpandStatement, this);
	// m_ePackage->getTag_ExpandStatement();
	// std::bind(&StatementFactory::createExpressionStatement, this);
	// m_ePackage->getTag_ExpressionStatement();
	// std::bind(&StatementFactory::createErrorStatement, this);
	// m_ePackage->getTag_ErrorStatement();
	// std::bind(&StatementFactory::createFileStatement, this);
	// m_ePackage->getTag_FileStatement();
	// std::bind(&StatementFactory::createForEachStatement, this);
	// m_ePackage->getTag_ForEachStatement();
	// std::bind(&StatementFactory::createIfStatement, this);
	// m_ePackage->getTag_IfStatement();
	// std::bind(&StatementFactory::createLetStatement, this);
	// m_ePackage->getTag_LetStatement();
	// std::bind(&StatementFactory::createProtectStatement, this);
	// m_ePackage->getTag_ProtectStatement();
	// std::bind(&StatementFactory::createTextStatement, this);
	// m_ePackage->getTag_TextStatement();
}

const StatementFactory_ptr StatementFactory::_instance()
{
	static StatementFactory __instance;
	return &__instance;
}

ExpandStatement_ptr StatementFactory::createExpandStatement() const
{
	return new ExpandStatement();
}

ExpressionStatement_ptr StatementFactory::createExpressionStatement() const
{
	return new ExpressionStatement();
}

ErrorStatement_ptr StatementFactory::createErrorStatement() const
{
	return new ErrorStatement();
}

FileStatement_ptr StatementFactory::createFileStatement() const
{
	return new FileStatement();
}

ForEachStatement_ptr StatementFactory::createForEachStatement() const
{
	return new ForEachStatement();
}

IfStatement_ptr StatementFactory::createIfStatement() const
{
	return new IfStatement();
}

LetStatement_ptr StatementFactory::createLetStatement() const
{
	return new LetStatement();
}

ProtectStatement_ptr StatementFactory::createProtectStatement() const
{
	return new ProtectStatement();
}

TextStatement_ptr StatementFactory::createTextStatement() const
{
	return new TextStatement();
}

