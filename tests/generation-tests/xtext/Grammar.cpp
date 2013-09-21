
#include "Grammar.hpp"
#include <xtext/Grammar.hpp>
#include <xtext/AbstractRule.hpp>
#include <xtext/AbstractMetamodelDeclaration.hpp>

using namespace xtext;

Grammar::Grammar() : 
	m_name(),
    m_usedGrammars(),
    m_definesHiddenTokens(),
    m_hiddenTokens(),
    m_metamodelDeclarations(),
    m_rules()
{
}

Grammar::~Grammar()
{
}

void Grammar::setName(name_t _name)
{
	m_name = _name;;
}

Grammar::name_t Grammar::getName() const
{
	return m_name;
}

Grammar::usedGrammars_t Grammar::getUsedGrammars() const
{
	return e4c::returned(m_usedGrammars);
}

void Grammar::setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens)
{
	m_definesHiddenTokens = _definesHiddenTokens;;
}

Grammar::definesHiddenTokens_t Grammar::getDefinesHiddenTokens() const
{
	return m_definesHiddenTokens;
}

Grammar::hiddenTokens_t Grammar::getHiddenTokens() const
{
	return e4c::returned(m_hiddenTokens);
}

Grammar::metamodelDeclarations_t Grammar::getMetamodelDeclarations() const
{
	return e4c::returned(m_metamodelDeclarations);
}

Grammar::rules_t Grammar::getRules() const
{
	return e4c::returned(m_rules);
}



