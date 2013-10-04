#include "XtextFactory.hpp"
#include "XtextPackage.hpp"
#include "include.hpp"

using namespace xtext;

XtextFactory::XtextFactory()
{
	// m_ePackage = XtextPackage::_instance();
	// std::bind(&XtextFactory::createGrammar, this);
	// m_ePackage->getTag_Grammar();
	// std::bind(&XtextFactory::createAbstractRule, this);
	// m_ePackage->getTag_AbstractRule();
	// std::bind(&XtextFactory::createAbstractMetamodelDeclaration, this);
	// m_ePackage->getTag_AbstractMetamodelDeclaration();
	// std::bind(&XtextFactory::createGeneratedMetamodel, this);
	// m_ePackage->getTag_GeneratedMetamodel();
	// std::bind(&XtextFactory::createReferencedMetamodel, this);
	// m_ePackage->getTag_ReferencedMetamodel();
	// std::bind(&XtextFactory::createParserRule, this);
	// m_ePackage->getTag_ParserRule();
	// std::bind(&XtextFactory::createTypeRef, this);
	// m_ePackage->getTag_TypeRef();
	// std::bind(&XtextFactory::createAbstractElement, this);
	// m_ePackage->getTag_AbstractElement();
	// std::bind(&XtextFactory::createAction, this);
	// m_ePackage->getTag_Action();
	// std::bind(&XtextFactory::createKeyword, this);
	// m_ePackage->getTag_Keyword();
	// std::bind(&XtextFactory::createRuleCall, this);
	// m_ePackage->getTag_RuleCall();
	// std::bind(&XtextFactory::createAssignment, this);
	// m_ePackage->getTag_Assignment();
	// std::bind(&XtextFactory::createCrossReference, this);
	// m_ePackage->getTag_CrossReference();
	// std::bind(&XtextFactory::createTerminalRule, this);
	// m_ePackage->getTag_TerminalRule();
	// std::bind(&XtextFactory::createAbstractNegatedToken, this);
	// m_ePackage->getTag_AbstractNegatedToken();
	// std::bind(&XtextFactory::createNegatedToken, this);
	// m_ePackage->getTag_NegatedToken();
	// std::bind(&XtextFactory::createUntilToken, this);
	// m_ePackage->getTag_UntilToken();
	// std::bind(&XtextFactory::createWildcard, this);
	// m_ePackage->getTag_Wildcard();
	// std::bind(&XtextFactory::createEnumRule, this);
	// m_ePackage->getTag_EnumRule();
	// std::bind(&XtextFactory::createEnumLiteralDeclaration, this);
	// m_ePackage->getTag_EnumLiteralDeclaration();
	// std::bind(&XtextFactory::createAlternatives, this);
	// m_ePackage->getTag_Alternatives();
	// std::bind(&XtextFactory::createUnorderedGroup, this);
	// m_ePackage->getTag_UnorderedGroup();
	// std::bind(&XtextFactory::createGroup, this);
	// m_ePackage->getTag_Group();
	// std::bind(&XtextFactory::createCharacterRange, this);
	// m_ePackage->getTag_CharacterRange();
	// std::bind(&XtextFactory::createCompoundElement, this);
	// m_ePackage->getTag_CompoundElement();
}

const XtextFactory_ptr XtextFactory::_instance()
{
	static XtextFactory __instance;
	return &__instance;
}

Grammar_ptr XtextFactory::createGrammar() const
{
	return new Grammar();
}

AbstractRule_ptr XtextFactory::createAbstractRule() const
{
	return new AbstractRule();
}

AbstractMetamodelDeclaration_ptr XtextFactory::createAbstractMetamodelDeclaration() const
{
	return new AbstractMetamodelDeclaration();
}

GeneratedMetamodel_ptr XtextFactory::createGeneratedMetamodel() const
{
	return new GeneratedMetamodel();
}

ReferencedMetamodel_ptr XtextFactory::createReferencedMetamodel() const
{
	return new ReferencedMetamodel();
}

ParserRule_ptr XtextFactory::createParserRule() const
{
	return new ParserRule();
}

TypeRef_ptr XtextFactory::createTypeRef() const
{
	return new TypeRef();
}

AbstractElement_ptr XtextFactory::createAbstractElement() const
{
	return new AbstractElement();
}

Action_ptr XtextFactory::createAction() const
{
	return new Action();
}

Keyword_ptr XtextFactory::createKeyword() const
{
	return new Keyword();
}

RuleCall_ptr XtextFactory::createRuleCall() const
{
	return new RuleCall();
}

Assignment_ptr XtextFactory::createAssignment() const
{
	return new Assignment();
}

CrossReference_ptr XtextFactory::createCrossReference() const
{
	return new CrossReference();
}

TerminalRule_ptr XtextFactory::createTerminalRule() const
{
	return new TerminalRule();
}

AbstractNegatedToken_ptr XtextFactory::createAbstractNegatedToken() const
{
	return new AbstractNegatedToken();
}

NegatedToken_ptr XtextFactory::createNegatedToken() const
{
	return new NegatedToken();
}

UntilToken_ptr XtextFactory::createUntilToken() const
{
	return new UntilToken();
}

Wildcard_ptr XtextFactory::createWildcard() const
{
	return new Wildcard();
}

EnumRule_ptr XtextFactory::createEnumRule() const
{
	return new EnumRule();
}

EnumLiteralDeclaration_ptr XtextFactory::createEnumLiteralDeclaration() const
{
	return new EnumLiteralDeclaration();
}

Alternatives_ptr XtextFactory::createAlternatives() const
{
	return new Alternatives();
}

UnorderedGroup_ptr XtextFactory::createUnorderedGroup() const
{
	return new UnorderedGroup();
}

Group_ptr XtextFactory::createGroup() const
{
	return new Group();
}

CharacterRange_ptr XtextFactory::createCharacterRange() const
{
	return new CharacterRange();
}

CompoundElement_ptr XtextFactory::createCompoundElement() const
{
	return new CompoundElement();
}

