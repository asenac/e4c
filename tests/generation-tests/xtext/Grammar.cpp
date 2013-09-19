
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

name_t Grammar::getName() const
{
	return m_name;
}

void Grammar::setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens)
{
	m_definesHiddenTokens = _definesHiddenTokens;;
}

definesHiddenTokens_t Grammar::getDefinesHiddenTokens() const
{
	return m_definesHiddenTokens;
}



