
#include "Grammar.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/Grammar.hpp>
#include <xtext/AbstractRule.hpp>
#include <xtext/AbstractMetamodelDeclaration.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Grammar include) START*/
/*PROTECTED REGION END*/

Grammar::Grammar() : 
	m_name(),
    m_usedGrammars(),
    m_definesHiddenTokens(),
    m_hiddenTokens(),
    m_metamodelDeclarations(),
    m_rules()
{
	/*PROTECTED REGION ID(Grammar constructor) START*/
	/*PROTECTED REGION END*/
}

Grammar::~Grammar()
{
	/*PROTECTED REGION ID(Grammar destructor) START*/
	/*PROTECTED REGION END*/
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

void Grammar::addUsedGrammars(xtext::Grammar_ptr usedGrammars_)
{
	if (e4c::contains(m_usedGrammars, usedGrammars_))
		return;
	m_usedGrammars.push_back(usedGrammars_);
}

void Grammar::addAllUsedGrammars(const usedGrammars_t& usedGrammars_)
{
	for (auto i = usedGrammars_.begin(); i != usedGrammars_.end(); i++)
		addUsedGrammars(*i);
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

void Grammar::addHiddenTokens(xtext::AbstractRule_ptr hiddenTokens_)
{
	if (e4c::contains(m_hiddenTokens, hiddenTokens_))
		return;
	m_hiddenTokens.push_back(hiddenTokens_);
}

void Grammar::addAllHiddenTokens(const hiddenTokens_t& hiddenTokens_)
{
	for (auto i = hiddenTokens_.begin(); i != hiddenTokens_.end(); i++)
		addHiddenTokens(*i);
}

Grammar::metamodelDeclarations_t Grammar::getMetamodelDeclarations() const
{
	return e4c::returned(m_metamodelDeclarations);
}


void Grammar::addMetamodelDeclarations(xtext::AbstractMetamodelDeclaration_ptr metamodelDeclarations_)
{
	m_metamodelDeclarations.push_back(std::unique_ptr < xtext::AbstractMetamodelDeclaration >(metamodelDeclarations_));
}

void Grammar::addAllMetamodelDeclarations(const metamodelDeclarations_t& metamodelDeclarations_)
{
	for (auto i = metamodelDeclarations_.begin(); i != metamodelDeclarations_.end(); i++)
		addMetamodelDeclarations(*i);
}

Grammar::rules_t Grammar::getRules() const
{
	return e4c::returned(m_rules);
}


void Grammar::addRules(xtext::AbstractRule_ptr rules_)
{
	m_rules.push_back(std::unique_ptr < xtext::AbstractRule >(rules_));
}

void Grammar::addAllRules(const rules_t& rules_)
{
	for (auto i = rules_.begin(); i != rules_.end(); i++)
		addRules(*i);
}



/*PROTECTED REGION ID(xtext::Grammar implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Grammar::eClassImpl() const
{
	return XtextPackage::_instance()->getGrammar();
}
 
