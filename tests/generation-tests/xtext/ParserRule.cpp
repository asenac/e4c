
#include "ParserRule.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractRule.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::ParserRule include) START*/
/*PROTECTED REGION END*/

ParserRule::ParserRule() :
    m_definesHiddenTokens(),
    m_hiddenTokens()
{
    /*PROTECTED REGION ID(ParserRule constructor) START*/
    /*PROTECTED REGION END*/
}

ParserRule::~ParserRule()
{
    /*PROTECTED REGION ID(ParserRule destructor) START*/
    /*PROTECTED REGION END*/
}

void ParserRule::setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens)
{
    m_definesHiddenTokens = _definesHiddenTokens;;
}

ParserRule::definesHiddenTokens_t ParserRule::getDefinesHiddenTokens() const
{
    return m_definesHiddenTokens;
}

ParserRule::hiddenTokens_t ParserRule::getHiddenTokens() const
{
    return e4c::returned(m_hiddenTokens);
}

void ParserRule::addHiddenTokens(xtext::AbstractRule_ptr hiddenTokens_)
{
    if (e4c::contains(m_hiddenTokens, hiddenTokens_))
        return;
    m_hiddenTokens.push_back(hiddenTokens_);
}

void ParserRule::addAllHiddenTokens(const hiddenTokens_t& hiddenTokens_)
{
    for (auto i = hiddenTokens_.begin(); i != hiddenTokens_.end(); i++)
        addHiddenTokens(*i);
}



/*PROTECTED REGION ID(xtext::ParserRule implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ParserRule::eClassImpl() const
{
    return XtextPackage::_instance()->getParserRule();
}

