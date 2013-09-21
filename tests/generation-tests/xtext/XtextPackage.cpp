#include "XtextPackage.hpp"
#include "XtextFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xtext;

XtextPackage::XtextPackage()
{
	m_eFactoryInstance = XtextFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr Grammar_ = ecoreFactory->createEClass();
	Grammar_->setName("Grammar");
	// m_eClassifiers.push_back(Grammar_);
	::ecore::EClass_ptr AbstractRule_ = ecoreFactory->createEClass();
	AbstractRule_->setName("AbstractRule");
	// m_eClassifiers.push_back(AbstractRule_);
	::ecore::EClass_ptr AbstractMetamodelDeclaration_ = ecoreFactory->createEClass();
	AbstractMetamodelDeclaration_->setName("AbstractMetamodelDeclaration");
	// m_eClassifiers.push_back(AbstractMetamodelDeclaration_);
	::ecore::EClass_ptr GeneratedMetamodel_ = ecoreFactory->createEClass();
	GeneratedMetamodel_->setName("GeneratedMetamodel");
	// m_eClassifiers.push_back(GeneratedMetamodel_);
	::ecore::EClass_ptr ReferencedMetamodel_ = ecoreFactory->createEClass();
	ReferencedMetamodel_->setName("ReferencedMetamodel");
	// m_eClassifiers.push_back(ReferencedMetamodel_);
	::ecore::EClass_ptr ParserRule_ = ecoreFactory->createEClass();
	ParserRule_->setName("ParserRule");
	// m_eClassifiers.push_back(ParserRule_);
	::ecore::EClass_ptr TypeRef_ = ecoreFactory->createEClass();
	TypeRef_->setName("TypeRef");
	// m_eClassifiers.push_back(TypeRef_);
	::ecore::EClass_ptr AbstractElement_ = ecoreFactory->createEClass();
	AbstractElement_->setName("AbstractElement");
	// m_eClassifiers.push_back(AbstractElement_);
	::ecore::EClass_ptr Action_ = ecoreFactory->createEClass();
	Action_->setName("Action");
	// m_eClassifiers.push_back(Action_);
	::ecore::EClass_ptr Keyword_ = ecoreFactory->createEClass();
	Keyword_->setName("Keyword");
	// m_eClassifiers.push_back(Keyword_);
	::ecore::EClass_ptr RuleCall_ = ecoreFactory->createEClass();
	RuleCall_->setName("RuleCall");
	// m_eClassifiers.push_back(RuleCall_);
	::ecore::EClass_ptr Assignment_ = ecoreFactory->createEClass();
	Assignment_->setName("Assignment");
	// m_eClassifiers.push_back(Assignment_);
	::ecore::EClass_ptr CrossReference_ = ecoreFactory->createEClass();
	CrossReference_->setName("CrossReference");
	// m_eClassifiers.push_back(CrossReference_);
	::ecore::EClass_ptr TerminalRule_ = ecoreFactory->createEClass();
	TerminalRule_->setName("TerminalRule");
	// m_eClassifiers.push_back(TerminalRule_);
	::ecore::EClass_ptr AbstractNegatedToken_ = ecoreFactory->createEClass();
	AbstractNegatedToken_->setName("AbstractNegatedToken");
	// m_eClassifiers.push_back(AbstractNegatedToken_);
	::ecore::EClass_ptr NegatedToken_ = ecoreFactory->createEClass();
	NegatedToken_->setName("NegatedToken");
	// m_eClassifiers.push_back(NegatedToken_);
	::ecore::EClass_ptr UntilToken_ = ecoreFactory->createEClass();
	UntilToken_->setName("UntilToken");
	// m_eClassifiers.push_back(UntilToken_);
	::ecore::EClass_ptr Wildcard_ = ecoreFactory->createEClass();
	Wildcard_->setName("Wildcard");
	// m_eClassifiers.push_back(Wildcard_);
	::ecore::EClass_ptr EnumRule_ = ecoreFactory->createEClass();
	EnumRule_->setName("EnumRule");
	// m_eClassifiers.push_back(EnumRule_);
	::ecore::EClass_ptr EnumLiteralDeclaration_ = ecoreFactory->createEClass();
	EnumLiteralDeclaration_->setName("EnumLiteralDeclaration");
	// m_eClassifiers.push_back(EnumLiteralDeclaration_);
	::ecore::EClass_ptr Alternatives_ = ecoreFactory->createEClass();
	Alternatives_->setName("Alternatives");
	// m_eClassifiers.push_back(Alternatives_);
	::ecore::EClass_ptr UnorderedGroup_ = ecoreFactory->createEClass();
	UnorderedGroup_->setName("UnorderedGroup");
	// m_eClassifiers.push_back(UnorderedGroup_);
	::ecore::EClass_ptr Group_ = ecoreFactory->createEClass();
	Group_->setName("Group");
	// m_eClassifiers.push_back(Group_);
	::ecore::EClass_ptr CharacterRange_ = ecoreFactory->createEClass();
	CharacterRange_->setName("CharacterRange");
	// m_eClassifiers.push_back(CharacterRange_);
	::ecore::EClass_ptr CompoundElement_ = ecoreFactory->createEClass();
	CompoundElement_->setName("CompoundElement");
	// m_eClassifiers.push_back(CompoundElement_);
	
	
	// GeneratedMetamodel_->addESuperType(AbstractMetamodelDeclaration_);
	// ReferencedMetamodel_->addESuperType(AbstractMetamodelDeclaration_);
	// ParserRule_->addESuperType(AbstractRule_);
	// Action_->addESuperType(AbstractElement_);
	// Keyword_->addESuperType(AbstractElement_);
	// RuleCall_->addESuperType(AbstractElement_);
	// Assignment_->addESuperType(AbstractElement_);
	// CrossReference_->addESuperType(AbstractElement_);
	// TerminalRule_->addESuperType(AbstractRule_);
	// AbstractNegatedToken_->addESuperType(AbstractElement_);
	// NegatedToken_->addESuperType(AbstractNegatedToken_);
	// UntilToken_->addESuperType(AbstractNegatedToken_);
	// Wildcard_->addESuperType(AbstractElement_);
	// EnumRule_->addESuperType(AbstractRule_);
	// EnumLiteralDeclaration_->addESuperType(AbstractElement_);
	// Alternatives_->addESuperType(CompoundElement_);
	// UnorderedGroup_->addESuperType(CompoundElement_);
	// Group_->addESuperType(CompoundElement_);
	// CharacterRange_->addESuperType(AbstractElement_);
	// CompoundElement_->addESuperType(AbstractElement_);
	
	
	
	
}

const XtextPackage_ptr XtextPackage::_instance()
{
	static XtextPackage __instance;
	return &__instance;
}

e4c::tag_t XtextPackage::getTag_Grammar() const
{
	return e4c::tag< Grammar >::get();
}
 
e4c::tag_t XtextPackage::getTag_AbstractRule() const
{
	return e4c::tag< AbstractRule >::get();
}
 
e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration() const
{
	return e4c::tag< AbstractMetamodelDeclaration >::get();
}
 
e4c::tag_t XtextPackage::getTag_GeneratedMetamodel() const
{
	return e4c::tag< GeneratedMetamodel >::get();
}
 
e4c::tag_t XtextPackage::getTag_ReferencedMetamodel() const
{
	return e4c::tag< ReferencedMetamodel >::get();
}
 
e4c::tag_t XtextPackage::getTag_ParserRule() const
{
	return e4c::tag< ParserRule >::get();
}
 
e4c::tag_t XtextPackage::getTag_TypeRef() const
{
	return e4c::tag< TypeRef >::get();
}
 
e4c::tag_t XtextPackage::getTag_AbstractElement() const
{
	return e4c::tag< AbstractElement >::get();
}
 
e4c::tag_t XtextPackage::getTag_Action() const
{
	return e4c::tag< Action >::get();
}
 
e4c::tag_t XtextPackage::getTag_Keyword() const
{
	return e4c::tag< Keyword >::get();
}
 
e4c::tag_t XtextPackage::getTag_RuleCall() const
{
	return e4c::tag< RuleCall >::get();
}
 
e4c::tag_t XtextPackage::getTag_Assignment() const
{
	return e4c::tag< Assignment >::get();
}
 
e4c::tag_t XtextPackage::getTag_CrossReference() const
{
	return e4c::tag< CrossReference >::get();
}
 
e4c::tag_t XtextPackage::getTag_TerminalRule() const
{
	return e4c::tag< TerminalRule >::get();
}
 
e4c::tag_t XtextPackage::getTag_AbstractNegatedToken() const
{
	return e4c::tag< AbstractNegatedToken >::get();
}
 
e4c::tag_t XtextPackage::getTag_NegatedToken() const
{
	return e4c::tag< NegatedToken >::get();
}
 
e4c::tag_t XtextPackage::getTag_UntilToken() const
{
	return e4c::tag< UntilToken >::get();
}
 
e4c::tag_t XtextPackage::getTag_Wildcard() const
{
	return e4c::tag< Wildcard >::get();
}
 
e4c::tag_t XtextPackage::getTag_EnumRule() const
{
	return e4c::tag< EnumRule >::get();
}
 
e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration() const
{
	return e4c::tag< EnumLiteralDeclaration >::get();
}
 
e4c::tag_t XtextPackage::getTag_Alternatives() const
{
	return e4c::tag< Alternatives >::get();
}
 
e4c::tag_t XtextPackage::getTag_UnorderedGroup() const
{
	return e4c::tag< UnorderedGroup >::get();
}
 
e4c::tag_t XtextPackage::getTag_Group() const
{
	return e4c::tag< Group >::get();
}
 
e4c::tag_t XtextPackage::getTag_CharacterRange() const
{
	return e4c::tag< CharacterRange >::get();
}
 
e4c::tag_t XtextPackage::getTag_CompoundElement() const
{
	return e4c::tag< CompoundElement >::get();
}
 
e4c::tag_t XtextPackage::getTag_Grammar__name() const
{
	return e4c::tag< Grammar__name_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__usedGrammars() const
{
	return e4c::tag< Grammar__usedGrammars_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__definesHiddenTokens() const
{
	return e4c::tag< Grammar__definesHiddenTokens_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__hiddenTokens() const
{
	return e4c::tag< Grammar__hiddenTokens_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__metamodelDeclarations() const
{
	return e4c::tag< Grammar__metamodelDeclarations_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__rules() const
{
	return e4c::tag< Grammar__rules_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractRule__name() const
{
	return e4c::tag< AbstractRule__name_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractRule__type() const
{
	return e4c::tag< AbstractRule__type_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractRule__alternatives() const
{
	return e4c::tag< AbstractRule__alternatives_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration__ePackage() const
{
	return e4c::tag< AbstractMetamodelDeclaration__ePackage_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration__alias() const
{
	return e4c::tag< AbstractMetamodelDeclaration__alias_tag >::get();
}

e4c::tag_t XtextPackage::getTag_GeneratedMetamodel__name() const
{
	return e4c::tag< GeneratedMetamodel__name_tag >::get();
}

e4c::tag_t XtextPackage::getTag_ParserRule__definesHiddenTokens() const
{
	return e4c::tag< ParserRule__definesHiddenTokens_tag >::get();
}

e4c::tag_t XtextPackage::getTag_ParserRule__hiddenTokens() const
{
	return e4c::tag< ParserRule__hiddenTokens_tag >::get();
}

e4c::tag_t XtextPackage::getTag_TypeRef__metamodel() const
{
	return e4c::tag< TypeRef__metamodel_tag >::get();
}

e4c::tag_t XtextPackage::getTag_TypeRef__classifier() const
{
	return e4c::tag< TypeRef__classifier_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractElement__cardinality() const
{
	return e4c::tag< AbstractElement__cardinality_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Action__type() const
{
	return e4c::tag< Action__type_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Action__feature() const
{
	return e4c::tag< Action__feature_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Action__operator() const
{
	return e4c::tag< Action__operator_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Keyword__value() const
{
	return e4c::tag< Keyword__value_tag >::get();
}

e4c::tag_t XtextPackage::getTag_RuleCall__rule() const
{
	return e4c::tag< RuleCall__rule_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Assignment__feature() const
{
	return e4c::tag< Assignment__feature_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Assignment__operator() const
{
	return e4c::tag< Assignment__operator_tag >::get();
}

e4c::tag_t XtextPackage::getTag_Assignment__terminal() const
{
	return e4c::tag< Assignment__terminal_tag >::get();
}

e4c::tag_t XtextPackage::getTag_CrossReference__type() const
{
	return e4c::tag< CrossReference__type_tag >::get();
}

e4c::tag_t XtextPackage::getTag_CrossReference__terminal() const
{
	return e4c::tag< CrossReference__terminal_tag >::get();
}

e4c::tag_t XtextPackage::getTag_AbstractNegatedToken__terminal() const
{
	return e4c::tag< AbstractNegatedToken__terminal_tag >::get();
}

e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration__enumLiteral() const
{
	return e4c::tag< EnumLiteralDeclaration__enumLiteral_tag >::get();
}

e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration__literal() const
{
	return e4c::tag< EnumLiteralDeclaration__literal_tag >::get();
}

e4c::tag_t XtextPackage::getTag_CharacterRange__left() const
{
	return e4c::tag< CharacterRange__left_tag >::get();
}

e4c::tag_t XtextPackage::getTag_CharacterRange__right() const
{
	return e4c::tag< CharacterRange__right_tag >::get();
}

e4c::tag_t XtextPackage::getTag_CompoundElement__elements() const
{
	return e4c::tag< CompoundElement__elements_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_xtext()
{
	return ::xtext::XtextPackage::_instance();
}
