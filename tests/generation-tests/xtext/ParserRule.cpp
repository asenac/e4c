
#include "ParserRule.hpp"
#include <xtext/AbstractRule.hpp>

using namespace xtext;

ParserRule::ParserRule() : 
	m_definesHiddenTokens(),
    m_hiddenTokens()
{
}

ParserRule::~ParserRule()
{
}

void ParserRule::setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens)
{
	m_definesHiddenTokens = _definesHiddenTokens;;
}

definesHiddenTokens_t ParserRule::getDefinesHiddenTokens() const
{
	return m_definesHiddenTokens;
}



