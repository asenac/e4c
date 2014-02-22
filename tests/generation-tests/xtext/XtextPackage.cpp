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



    m_Grammar = ecoreFactory->createEClass();
    m_Grammar->setName("Grammar");
    addEClassifiers(m_Grammar);
    m_AbstractRule = ecoreFactory->createEClass();
    m_AbstractRule->setName("AbstractRule");
    addEClassifiers(m_AbstractRule);
    m_AbstractMetamodelDeclaration = ecoreFactory->createEClass();
    m_AbstractMetamodelDeclaration->setName("AbstractMetamodelDeclaration");
    addEClassifiers(m_AbstractMetamodelDeclaration);
    m_GeneratedMetamodel = ecoreFactory->createEClass();
    m_GeneratedMetamodel->setName("GeneratedMetamodel");
    addEClassifiers(m_GeneratedMetamodel);
    m_ReferencedMetamodel = ecoreFactory->createEClass();
    m_ReferencedMetamodel->setName("ReferencedMetamodel");
    addEClassifiers(m_ReferencedMetamodel);
    m_ParserRule = ecoreFactory->createEClass();
    m_ParserRule->setName("ParserRule");
    addEClassifiers(m_ParserRule);
    m_TypeRef = ecoreFactory->createEClass();
    m_TypeRef->setName("TypeRef");
    addEClassifiers(m_TypeRef);
    m_AbstractElement = ecoreFactory->createEClass();
    m_AbstractElement->setName("AbstractElement");
    addEClassifiers(m_AbstractElement);
    m_Action = ecoreFactory->createEClass();
    m_Action->setName("Action");
    addEClassifiers(m_Action);
    m_Keyword = ecoreFactory->createEClass();
    m_Keyword->setName("Keyword");
    addEClassifiers(m_Keyword);
    m_RuleCall = ecoreFactory->createEClass();
    m_RuleCall->setName("RuleCall");
    addEClassifiers(m_RuleCall);
    m_Assignment = ecoreFactory->createEClass();
    m_Assignment->setName("Assignment");
    addEClassifiers(m_Assignment);
    m_CrossReference = ecoreFactory->createEClass();
    m_CrossReference->setName("CrossReference");
    addEClassifiers(m_CrossReference);
    m_TerminalRule = ecoreFactory->createEClass();
    m_TerminalRule->setName("TerminalRule");
    addEClassifiers(m_TerminalRule);
    m_AbstractNegatedToken = ecoreFactory->createEClass();
    m_AbstractNegatedToken->setName("AbstractNegatedToken");
    addEClassifiers(m_AbstractNegatedToken);
    m_NegatedToken = ecoreFactory->createEClass();
    m_NegatedToken->setName("NegatedToken");
    addEClassifiers(m_NegatedToken);
    m_UntilToken = ecoreFactory->createEClass();
    m_UntilToken->setName("UntilToken");
    addEClassifiers(m_UntilToken);
    m_Wildcard = ecoreFactory->createEClass();
    m_Wildcard->setName("Wildcard");
    addEClassifiers(m_Wildcard);
    m_EnumRule = ecoreFactory->createEClass();
    m_EnumRule->setName("EnumRule");
    addEClassifiers(m_EnumRule);
    m_EnumLiteralDeclaration = ecoreFactory->createEClass();
    m_EnumLiteralDeclaration->setName("EnumLiteralDeclaration");
    addEClassifiers(m_EnumLiteralDeclaration);
    m_Alternatives = ecoreFactory->createEClass();
    m_Alternatives->setName("Alternatives");
    addEClassifiers(m_Alternatives);
    m_UnorderedGroup = ecoreFactory->createEClass();
    m_UnorderedGroup->setName("UnorderedGroup");
    addEClassifiers(m_UnorderedGroup);
    m_Group = ecoreFactory->createEClass();
    m_Group->setName("Group");
    addEClassifiers(m_Group);
    m_CharacterRange = ecoreFactory->createEClass();
    m_CharacterRange->setName("CharacterRange");
    addEClassifiers(m_CharacterRange);
    m_CompoundElement = ecoreFactory->createEClass();
    m_CompoundElement->setName("CompoundElement");
    addEClassifiers(m_CompoundElement);


    {
        m_Grammar__name = ecoreFactory->createEAttribute();
        m_Grammar__name->setName("name");
        m_Grammar->addEStructuralFeatures(m_Grammar__name);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__name);
        m_Grammar->addEAttributes(m_Grammar__name);
        m_Grammar->addEAllAttributes(m_Grammar__name);
    }
    {
        m_Grammar__usedGrammars = ecoreFactory->createEReference();
        m_Grammar__usedGrammars->setName("usedGrammars");
        m_Grammar->addEStructuralFeatures(m_Grammar__usedGrammars);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__usedGrammars);
        m_Grammar->addEReferences(m_Grammar__usedGrammars);
        m_Grammar->addEAllReferences(m_Grammar__usedGrammars);
    }
    {
        m_Grammar__definesHiddenTokens = ecoreFactory->createEAttribute();
        m_Grammar__definesHiddenTokens->setName("definesHiddenTokens");
        m_Grammar->addEStructuralFeatures(m_Grammar__definesHiddenTokens);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__definesHiddenTokens);
        m_Grammar->addEAttributes(m_Grammar__definesHiddenTokens);
        m_Grammar->addEAllAttributes(m_Grammar__definesHiddenTokens);
    }
    {
        m_Grammar__hiddenTokens = ecoreFactory->createEReference();
        m_Grammar__hiddenTokens->setName("hiddenTokens");
        m_Grammar->addEStructuralFeatures(m_Grammar__hiddenTokens);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__hiddenTokens);
        m_Grammar->addEReferences(m_Grammar__hiddenTokens);
        m_Grammar->addEAllReferences(m_Grammar__hiddenTokens);
    }
    {
        m_Grammar__metamodelDeclarations = ecoreFactory->createEReference();
        m_Grammar__metamodelDeclarations->setName("metamodelDeclarations");
        m_Grammar->addEStructuralFeatures(m_Grammar__metamodelDeclarations);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__metamodelDeclarations);
        m_Grammar->addEReferences(m_Grammar__metamodelDeclarations);
        m_Grammar->addEAllReferences(m_Grammar__metamodelDeclarations);
    }
    {
        m_Grammar__rules = ecoreFactory->createEReference();
        m_Grammar__rules->setName("rules");
        m_Grammar->addEStructuralFeatures(m_Grammar__rules);
        m_Grammar->addEAllStructuralFeatures(m_Grammar__rules);
        m_Grammar->addEReferences(m_Grammar__rules);
        m_Grammar->addEAllReferences(m_Grammar__rules);
    }
    {
        m_AbstractRule__name = ecoreFactory->createEAttribute();
        m_AbstractRule__name->setName("name");
        m_AbstractRule->addEStructuralFeatures(m_AbstractRule__name);
        m_AbstractRule->addEAllStructuralFeatures(m_AbstractRule__name);
        m_AbstractRule->addEAttributes(m_AbstractRule__name);
        m_AbstractRule->addEAllAttributes(m_AbstractRule__name);
    }
    {
        m_AbstractRule__type = ecoreFactory->createEReference();
        m_AbstractRule__type->setName("type");
        m_AbstractRule->addEStructuralFeatures(m_AbstractRule__type);
        m_AbstractRule->addEAllStructuralFeatures(m_AbstractRule__type);
        m_AbstractRule->addEReferences(m_AbstractRule__type);
        m_AbstractRule->addEAllReferences(m_AbstractRule__type);
    }
    {
        m_AbstractRule__alternatives = ecoreFactory->createEReference();
        m_AbstractRule__alternatives->setName("alternatives");
        m_AbstractRule->addEStructuralFeatures(m_AbstractRule__alternatives);
        m_AbstractRule->addEAllStructuralFeatures(m_AbstractRule__alternatives);
        m_AbstractRule->addEReferences(m_AbstractRule__alternatives);
        m_AbstractRule->addEAllReferences(m_AbstractRule__alternatives);
    }
    {
        m_AbstractMetamodelDeclaration__ePackage = ecoreFactory->createEReference();
        m_AbstractMetamodelDeclaration__ePackage->setName("ePackage");
        m_AbstractMetamodelDeclaration->addEStructuralFeatures(m_AbstractMetamodelDeclaration__ePackage);
        m_AbstractMetamodelDeclaration->addEAllStructuralFeatures(m_AbstractMetamodelDeclaration__ePackage);
        m_AbstractMetamodelDeclaration->addEReferences(m_AbstractMetamodelDeclaration__ePackage);
        m_AbstractMetamodelDeclaration->addEAllReferences(m_AbstractMetamodelDeclaration__ePackage);
    }
    {
        m_AbstractMetamodelDeclaration__alias = ecoreFactory->createEAttribute();
        m_AbstractMetamodelDeclaration__alias->setName("alias");
        m_AbstractMetamodelDeclaration->addEStructuralFeatures(m_AbstractMetamodelDeclaration__alias);
        m_AbstractMetamodelDeclaration->addEAllStructuralFeatures(m_AbstractMetamodelDeclaration__alias);
        m_AbstractMetamodelDeclaration->addEAttributes(m_AbstractMetamodelDeclaration__alias);
        m_AbstractMetamodelDeclaration->addEAllAttributes(m_AbstractMetamodelDeclaration__alias);
    }
    {
        m_GeneratedMetamodel__name = ecoreFactory->createEAttribute();
        m_GeneratedMetamodel__name->setName("name");
        m_GeneratedMetamodel->addEStructuralFeatures(m_GeneratedMetamodel__name);
        m_GeneratedMetamodel->addEAllStructuralFeatures(m_GeneratedMetamodel__name);
        m_GeneratedMetamodel->addEAttributes(m_GeneratedMetamodel__name);
        m_GeneratedMetamodel->addEAllAttributes(m_GeneratedMetamodel__name);
    }
    {
        m_ParserRule__definesHiddenTokens = ecoreFactory->createEAttribute();
        m_ParserRule__definesHiddenTokens->setName("definesHiddenTokens");
        m_ParserRule->addEStructuralFeatures(m_ParserRule__definesHiddenTokens);
        m_ParserRule->addEAllStructuralFeatures(m_ParserRule__definesHiddenTokens);
        m_ParserRule->addEAttributes(m_ParserRule__definesHiddenTokens);
        m_ParserRule->addEAllAttributes(m_ParserRule__definesHiddenTokens);
    }
    {
        m_ParserRule__hiddenTokens = ecoreFactory->createEReference();
        m_ParserRule__hiddenTokens->setName("hiddenTokens");
        m_ParserRule->addEStructuralFeatures(m_ParserRule__hiddenTokens);
        m_ParserRule->addEAllStructuralFeatures(m_ParserRule__hiddenTokens);
        m_ParserRule->addEReferences(m_ParserRule__hiddenTokens);
        m_ParserRule->addEAllReferences(m_ParserRule__hiddenTokens);
    }
    {
        m_TypeRef__metamodel = ecoreFactory->createEReference();
        m_TypeRef__metamodel->setName("metamodel");
        m_TypeRef->addEStructuralFeatures(m_TypeRef__metamodel);
        m_TypeRef->addEAllStructuralFeatures(m_TypeRef__metamodel);
        m_TypeRef->addEReferences(m_TypeRef__metamodel);
        m_TypeRef->addEAllReferences(m_TypeRef__metamodel);
    }
    {
        m_TypeRef__classifier = ecoreFactory->createEReference();
        m_TypeRef__classifier->setName("classifier");
        m_TypeRef->addEStructuralFeatures(m_TypeRef__classifier);
        m_TypeRef->addEAllStructuralFeatures(m_TypeRef__classifier);
        m_TypeRef->addEReferences(m_TypeRef__classifier);
        m_TypeRef->addEAllReferences(m_TypeRef__classifier);
    }
    {
        m_AbstractElement__cardinality = ecoreFactory->createEAttribute();
        m_AbstractElement__cardinality->setName("cardinality");
        m_AbstractElement->addEStructuralFeatures(m_AbstractElement__cardinality);
        m_AbstractElement->addEAllStructuralFeatures(m_AbstractElement__cardinality);
        m_AbstractElement->addEAttributes(m_AbstractElement__cardinality);
        m_AbstractElement->addEAllAttributes(m_AbstractElement__cardinality);
    }
    {
        m_Action__type = ecoreFactory->createEReference();
        m_Action__type->setName("type");
        m_Action->addEStructuralFeatures(m_Action__type);
        m_Action->addEAllStructuralFeatures(m_Action__type);
        m_Action->addEReferences(m_Action__type);
        m_Action->addEAllReferences(m_Action__type);
    }
    {
        m_Action__feature = ecoreFactory->createEAttribute();
        m_Action__feature->setName("feature");
        m_Action->addEStructuralFeatures(m_Action__feature);
        m_Action->addEAllStructuralFeatures(m_Action__feature);
        m_Action->addEAttributes(m_Action__feature);
        m_Action->addEAllAttributes(m_Action__feature);
    }
    {
        m_Action__operator = ecoreFactory->createEAttribute();
        m_Action__operator->setName("operator");
        m_Action->addEStructuralFeatures(m_Action__operator);
        m_Action->addEAllStructuralFeatures(m_Action__operator);
        m_Action->addEAttributes(m_Action__operator);
        m_Action->addEAllAttributes(m_Action__operator);
    }
    {
        m_Keyword__value = ecoreFactory->createEAttribute();
        m_Keyword__value->setName("value");
        m_Keyword->addEStructuralFeatures(m_Keyword__value);
        m_Keyword->addEAllStructuralFeatures(m_Keyword__value);
        m_Keyword->addEAttributes(m_Keyword__value);
        m_Keyword->addEAllAttributes(m_Keyword__value);
    }
    {
        m_RuleCall__rule = ecoreFactory->createEReference();
        m_RuleCall__rule->setName("rule");
        m_RuleCall->addEStructuralFeatures(m_RuleCall__rule);
        m_RuleCall->addEAllStructuralFeatures(m_RuleCall__rule);
        m_RuleCall->addEReferences(m_RuleCall__rule);
        m_RuleCall->addEAllReferences(m_RuleCall__rule);
    }
    {
        m_Assignment__feature = ecoreFactory->createEAttribute();
        m_Assignment__feature->setName("feature");
        m_Assignment->addEStructuralFeatures(m_Assignment__feature);
        m_Assignment->addEAllStructuralFeatures(m_Assignment__feature);
        m_Assignment->addEAttributes(m_Assignment__feature);
        m_Assignment->addEAllAttributes(m_Assignment__feature);
    }
    {
        m_Assignment__operator = ecoreFactory->createEAttribute();
        m_Assignment__operator->setName("operator");
        m_Assignment->addEStructuralFeatures(m_Assignment__operator);
        m_Assignment->addEAllStructuralFeatures(m_Assignment__operator);
        m_Assignment->addEAttributes(m_Assignment__operator);
        m_Assignment->addEAllAttributes(m_Assignment__operator);
    }
    {
        m_Assignment__terminal = ecoreFactory->createEReference();
        m_Assignment__terminal->setName("terminal");
        m_Assignment->addEStructuralFeatures(m_Assignment__terminal);
        m_Assignment->addEAllStructuralFeatures(m_Assignment__terminal);
        m_Assignment->addEReferences(m_Assignment__terminal);
        m_Assignment->addEAllReferences(m_Assignment__terminal);
    }
    {
        m_CrossReference__type = ecoreFactory->createEReference();
        m_CrossReference__type->setName("type");
        m_CrossReference->addEStructuralFeatures(m_CrossReference__type);
        m_CrossReference->addEAllStructuralFeatures(m_CrossReference__type);
        m_CrossReference->addEReferences(m_CrossReference__type);
        m_CrossReference->addEAllReferences(m_CrossReference__type);
    }
    {
        m_CrossReference__terminal = ecoreFactory->createEReference();
        m_CrossReference__terminal->setName("terminal");
        m_CrossReference->addEStructuralFeatures(m_CrossReference__terminal);
        m_CrossReference->addEAllStructuralFeatures(m_CrossReference__terminal);
        m_CrossReference->addEReferences(m_CrossReference__terminal);
        m_CrossReference->addEAllReferences(m_CrossReference__terminal);
    }
    {
        m_AbstractNegatedToken__terminal = ecoreFactory->createEReference();
        m_AbstractNegatedToken__terminal->setName("terminal");
        m_AbstractNegatedToken->addEStructuralFeatures(m_AbstractNegatedToken__terminal);
        m_AbstractNegatedToken->addEAllStructuralFeatures(m_AbstractNegatedToken__terminal);
        m_AbstractNegatedToken->addEReferences(m_AbstractNegatedToken__terminal);
        m_AbstractNegatedToken->addEAllReferences(m_AbstractNegatedToken__terminal);
    }
    {
        m_EnumLiteralDeclaration__enumLiteral = ecoreFactory->createEReference();
        m_EnumLiteralDeclaration__enumLiteral->setName("enumLiteral");
        m_EnumLiteralDeclaration->addEStructuralFeatures(m_EnumLiteralDeclaration__enumLiteral);
        m_EnumLiteralDeclaration->addEAllStructuralFeatures(m_EnumLiteralDeclaration__enumLiteral);
        m_EnumLiteralDeclaration->addEReferences(m_EnumLiteralDeclaration__enumLiteral);
        m_EnumLiteralDeclaration->addEAllReferences(m_EnumLiteralDeclaration__enumLiteral);
    }
    {
        m_EnumLiteralDeclaration__literal = ecoreFactory->createEReference();
        m_EnumLiteralDeclaration__literal->setName("literal");
        m_EnumLiteralDeclaration->addEStructuralFeatures(m_EnumLiteralDeclaration__literal);
        m_EnumLiteralDeclaration->addEAllStructuralFeatures(m_EnumLiteralDeclaration__literal);
        m_EnumLiteralDeclaration->addEReferences(m_EnumLiteralDeclaration__literal);
        m_EnumLiteralDeclaration->addEAllReferences(m_EnumLiteralDeclaration__literal);
    }
    {
        m_CharacterRange__left = ecoreFactory->createEReference();
        m_CharacterRange__left->setName("left");
        m_CharacterRange->addEStructuralFeatures(m_CharacterRange__left);
        m_CharacterRange->addEAllStructuralFeatures(m_CharacterRange__left);
        m_CharacterRange->addEReferences(m_CharacterRange__left);
        m_CharacterRange->addEAllReferences(m_CharacterRange__left);
    }
    {
        m_CharacterRange__right = ecoreFactory->createEReference();
        m_CharacterRange__right->setName("right");
        m_CharacterRange->addEStructuralFeatures(m_CharacterRange__right);
        m_CharacterRange->addEAllStructuralFeatures(m_CharacterRange__right);
        m_CharacterRange->addEReferences(m_CharacterRange__right);
        m_CharacterRange->addEAllReferences(m_CharacterRange__right);
    }
    {
        m_CompoundElement__elements = ecoreFactory->createEReference();
        m_CompoundElement__elements->setName("elements");
        m_CompoundElement->addEStructuralFeatures(m_CompoundElement__elements);
        m_CompoundElement->addEAllStructuralFeatures(m_CompoundElement__elements);
        m_CompoundElement->addEReferences(m_CompoundElement__elements);
        m_CompoundElement->addEAllReferences(m_CompoundElement__elements);
    }

    m_GeneratedMetamodel->addESuperTypes(m_AbstractMetamodelDeclaration);
    m_GeneratedMetamodel->addAllEAllOperations(m_AbstractMetamodelDeclaration->getEOperations());
    m_GeneratedMetamodel->addAllEAllReferences(m_AbstractMetamodelDeclaration->getEReferences());
    m_GeneratedMetamodel->addAllEAllAttributes(m_AbstractMetamodelDeclaration->getEAttributes());
    m_GeneratedMetamodel->addAllEAllStructuralFeatures(m_AbstractMetamodelDeclaration->getEStructuralFeatures());
    m_ReferencedMetamodel->addESuperTypes(m_AbstractMetamodelDeclaration);
    m_ReferencedMetamodel->addAllEAllOperations(m_AbstractMetamodelDeclaration->getEOperations());
    m_ReferencedMetamodel->addAllEAllReferences(m_AbstractMetamodelDeclaration->getEReferences());
    m_ReferencedMetamodel->addAllEAllAttributes(m_AbstractMetamodelDeclaration->getEAttributes());
    m_ReferencedMetamodel->addAllEAllStructuralFeatures(m_AbstractMetamodelDeclaration->getEStructuralFeatures());
    m_ParserRule->addESuperTypes(m_AbstractRule);
    m_ParserRule->addAllEAllOperations(m_AbstractRule->getEOperations());
    m_ParserRule->addAllEAllReferences(m_AbstractRule->getEReferences());
    m_ParserRule->addAllEAllAttributes(m_AbstractRule->getEAttributes());
    m_ParserRule->addAllEAllStructuralFeatures(m_AbstractRule->getEStructuralFeatures());
    m_Action->addESuperTypes(m_AbstractElement);
    m_Action->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_Action->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_Action->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_Action->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_Keyword->addESuperTypes(m_AbstractElement);
    m_Keyword->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_Keyword->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_Keyword->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_Keyword->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_RuleCall->addESuperTypes(m_AbstractElement);
    m_RuleCall->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_RuleCall->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_RuleCall->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_RuleCall->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_Assignment->addESuperTypes(m_AbstractElement);
    m_Assignment->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_Assignment->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_Assignment->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_Assignment->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_CrossReference->addESuperTypes(m_AbstractElement);
    m_CrossReference->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_CrossReference->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_CrossReference->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_CrossReference->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_TerminalRule->addESuperTypes(m_AbstractRule);
    m_TerminalRule->addAllEAllOperations(m_AbstractRule->getEOperations());
    m_TerminalRule->addAllEAllReferences(m_AbstractRule->getEReferences());
    m_TerminalRule->addAllEAllAttributes(m_AbstractRule->getEAttributes());
    m_TerminalRule->addAllEAllStructuralFeatures(m_AbstractRule->getEStructuralFeatures());
    m_AbstractNegatedToken->addESuperTypes(m_AbstractElement);
    m_AbstractNegatedToken->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_AbstractNegatedToken->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_AbstractNegatedToken->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_AbstractNegatedToken->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_NegatedToken->addESuperTypes(m_AbstractNegatedToken);
    m_NegatedToken->addAllEAllOperations(m_AbstractNegatedToken->getEOperations());
    m_NegatedToken->addAllEAllReferences(m_AbstractNegatedToken->getEReferences());
    m_NegatedToken->addAllEAllAttributes(m_AbstractNegatedToken->getEAttributes());
    m_NegatedToken->addAllEAllStructuralFeatures(m_AbstractNegatedToken->getEStructuralFeatures());
    m_UntilToken->addESuperTypes(m_AbstractNegatedToken);
    m_UntilToken->addAllEAllOperations(m_AbstractNegatedToken->getEOperations());
    m_UntilToken->addAllEAllReferences(m_AbstractNegatedToken->getEReferences());
    m_UntilToken->addAllEAllAttributes(m_AbstractNegatedToken->getEAttributes());
    m_UntilToken->addAllEAllStructuralFeatures(m_AbstractNegatedToken->getEStructuralFeatures());
    m_Wildcard->addESuperTypes(m_AbstractElement);
    m_Wildcard->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_Wildcard->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_Wildcard->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_Wildcard->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_EnumRule->addESuperTypes(m_AbstractRule);
    m_EnumRule->addAllEAllOperations(m_AbstractRule->getEOperations());
    m_EnumRule->addAllEAllReferences(m_AbstractRule->getEReferences());
    m_EnumRule->addAllEAllAttributes(m_AbstractRule->getEAttributes());
    m_EnumRule->addAllEAllStructuralFeatures(m_AbstractRule->getEStructuralFeatures());
    m_EnumLiteralDeclaration->addESuperTypes(m_AbstractElement);
    m_EnumLiteralDeclaration->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_EnumLiteralDeclaration->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_EnumLiteralDeclaration->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_EnumLiteralDeclaration->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_Alternatives->addESuperTypes(m_CompoundElement);
    m_Alternatives->addAllEAllOperations(m_CompoundElement->getEOperations());
    m_Alternatives->addAllEAllReferences(m_CompoundElement->getEReferences());
    m_Alternatives->addAllEAllAttributes(m_CompoundElement->getEAttributes());
    m_Alternatives->addAllEAllStructuralFeatures(m_CompoundElement->getEStructuralFeatures());
    m_UnorderedGroup->addESuperTypes(m_CompoundElement);
    m_UnorderedGroup->addAllEAllOperations(m_CompoundElement->getEOperations());
    m_UnorderedGroup->addAllEAllReferences(m_CompoundElement->getEReferences());
    m_UnorderedGroup->addAllEAllAttributes(m_CompoundElement->getEAttributes());
    m_UnorderedGroup->addAllEAllStructuralFeatures(m_CompoundElement->getEStructuralFeatures());
    m_Group->addESuperTypes(m_CompoundElement);
    m_Group->addAllEAllOperations(m_CompoundElement->getEOperations());
    m_Group->addAllEAllReferences(m_CompoundElement->getEReferences());
    m_Group->addAllEAllAttributes(m_CompoundElement->getEAttributes());
    m_Group->addAllEAllStructuralFeatures(m_CompoundElement->getEStructuralFeatures());
    m_CharacterRange->addESuperTypes(m_AbstractElement);
    m_CharacterRange->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_CharacterRange->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_CharacterRange->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_CharacterRange->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());
    m_CompoundElement->addESuperTypes(m_AbstractElement);
    m_CompoundElement->addAllEAllOperations(m_AbstractElement->getEOperations());
    m_CompoundElement->addAllEAllReferences(m_AbstractElement->getEReferences());
    m_CompoundElement->addAllEAllAttributes(m_AbstractElement->getEAttributes());
    m_CompoundElement->addAllEAllStructuralFeatures(m_AbstractElement->getEStructuralFeatures());


    m_Grammar->addFeatureAccesors(m_Grammar__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Grammar->addFeatureAccesors(m_Grammar__usedGrammars,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getUsedGrammars()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Grammar->addFeatureAccesors(m_Grammar__definesHiddenTokens,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getDefinesHiddenTokens()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Grammar->addFeatureAccesors(m_Grammar__hiddenTokens,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getHiddenTokens()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Grammar->addFeatureAccesors(m_Grammar__metamodelDeclarations,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getMetamodelDeclarations()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Grammar->addFeatureAccesors(m_Grammar__rules,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Grammar_ptr >(o)->getRules()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractRule->addFeatureAccesors(m_AbstractRule__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractRule_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractRule->addFeatureAccesors(m_AbstractRule__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractRule_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractRule->addFeatureAccesors(m_AbstractRule__alternatives,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractRule_ptr >(o)->getAlternatives()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractMetamodelDeclaration->addFeatureAccesors(m_AbstractMetamodelDeclaration__ePackage,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractMetamodelDeclaration_ptr >(o)->getEPackage()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractMetamodelDeclaration->addFeatureAccesors(m_AbstractMetamodelDeclaration__alias,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractMetamodelDeclaration_ptr >(o)->getAlias()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_GeneratedMetamodel->addFeatureAccesors(m_GeneratedMetamodel__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::GeneratedMetamodel_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ParserRule->addFeatureAccesors(m_ParserRule__definesHiddenTokens,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::ParserRule_ptr >(o)->getDefinesHiddenTokens()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ParserRule->addFeatureAccesors(m_ParserRule__hiddenTokens,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::ParserRule_ptr >(o)->getHiddenTokens()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TypeRef->addFeatureAccesors(m_TypeRef__metamodel,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::TypeRef_ptr >(o)->getMetamodel()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TypeRef->addFeatureAccesors(m_TypeRef__classifier,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::TypeRef_ptr >(o)->getClassifier()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractElement->addFeatureAccesors(m_AbstractElement__cardinality,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractElement_ptr >(o)->getCardinality()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Action->addFeatureAccesors(m_Action__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Action_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Action->addFeatureAccesors(m_Action__feature,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Action_ptr >(o)->getFeature()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Action->addFeatureAccesors(m_Action__operator,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Action_ptr >(o)->getOperator()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Keyword->addFeatureAccesors(m_Keyword__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Keyword_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_RuleCall->addFeatureAccesors(m_RuleCall__rule,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::RuleCall_ptr >(o)->getRule()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Assignment->addFeatureAccesors(m_Assignment__feature,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Assignment_ptr >(o)->getFeature()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Assignment->addFeatureAccesors(m_Assignment__operator,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Assignment_ptr >(o)->getOperator()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Assignment->addFeatureAccesors(m_Assignment__terminal,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::Assignment_ptr >(o)->getTerminal()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CrossReference->addFeatureAccesors(m_CrossReference__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::CrossReference_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CrossReference->addFeatureAccesors(m_CrossReference__terminal,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::CrossReference_ptr >(o)->getTerminal()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractNegatedToken->addFeatureAccesors(m_AbstractNegatedToken__terminal,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::AbstractNegatedToken_ptr >(o)->getTerminal()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_EnumLiteralDeclaration->addFeatureAccesors(m_EnumLiteralDeclaration__enumLiteral,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::EnumLiteralDeclaration_ptr >(o)->getEnumLiteral()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_EnumLiteralDeclaration->addFeatureAccesors(m_EnumLiteralDeclaration__literal,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::EnumLiteralDeclaration_ptr >(o)->getLiteral()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CharacterRange->addFeatureAccesors(m_CharacterRange__left,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::CharacterRange_ptr >(o)->getLeft()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CharacterRange->addFeatureAccesors(m_CharacterRange__right,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::CharacterRange_ptr >(o)->getRight()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CompoundElement->addFeatureAccesors(m_CompoundElement__elements,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xtext::CompoundElement_ptr >(o)->getElements()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const XtextPackage_ptr XtextPackage::_instance()
{
    static XtextPackage __instance;
    return &__instance;
}

ecore::EClass_ptr XtextPackage::getGrammar() const
{
    return m_Grammar;
}

e4c::tag_t XtextPackage::getTag_Grammar() const
{
    return e4c::tag< Grammar >::get();
}

ecore::EClass_ptr XtextPackage::getAbstractRule() const
{
    return m_AbstractRule;
}

e4c::tag_t XtextPackage::getTag_AbstractRule() const
{
    return e4c::tag< AbstractRule >::get();
}

ecore::EClass_ptr XtextPackage::getAbstractMetamodelDeclaration() const
{
    return m_AbstractMetamodelDeclaration;
}

e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration() const
{
    return e4c::tag< AbstractMetamodelDeclaration >::get();
}

ecore::EClass_ptr XtextPackage::getGeneratedMetamodel() const
{
    return m_GeneratedMetamodel;
}

e4c::tag_t XtextPackage::getTag_GeneratedMetamodel() const
{
    return e4c::tag< GeneratedMetamodel >::get();
}

ecore::EClass_ptr XtextPackage::getReferencedMetamodel() const
{
    return m_ReferencedMetamodel;
}

e4c::tag_t XtextPackage::getTag_ReferencedMetamodel() const
{
    return e4c::tag< ReferencedMetamodel >::get();
}

ecore::EClass_ptr XtextPackage::getParserRule() const
{
    return m_ParserRule;
}

e4c::tag_t XtextPackage::getTag_ParserRule() const
{
    return e4c::tag< ParserRule >::get();
}

ecore::EClass_ptr XtextPackage::getTypeRef() const
{
    return m_TypeRef;
}

e4c::tag_t XtextPackage::getTag_TypeRef() const
{
    return e4c::tag< TypeRef >::get();
}

ecore::EClass_ptr XtextPackage::getAbstractElement() const
{
    return m_AbstractElement;
}

e4c::tag_t XtextPackage::getTag_AbstractElement() const
{
    return e4c::tag< AbstractElement >::get();
}

ecore::EClass_ptr XtextPackage::getAction() const
{
    return m_Action;
}

e4c::tag_t XtextPackage::getTag_Action() const
{
    return e4c::tag< Action >::get();
}

ecore::EClass_ptr XtextPackage::getKeyword() const
{
    return m_Keyword;
}

e4c::tag_t XtextPackage::getTag_Keyword() const
{
    return e4c::tag< Keyword >::get();
}

ecore::EClass_ptr XtextPackage::getRuleCall() const
{
    return m_RuleCall;
}

e4c::tag_t XtextPackage::getTag_RuleCall() const
{
    return e4c::tag< RuleCall >::get();
}

ecore::EClass_ptr XtextPackage::getAssignment() const
{
    return m_Assignment;
}

e4c::tag_t XtextPackage::getTag_Assignment() const
{
    return e4c::tag< Assignment >::get();
}

ecore::EClass_ptr XtextPackage::getCrossReference() const
{
    return m_CrossReference;
}

e4c::tag_t XtextPackage::getTag_CrossReference() const
{
    return e4c::tag< CrossReference >::get();
}

ecore::EClass_ptr XtextPackage::getTerminalRule() const
{
    return m_TerminalRule;
}

e4c::tag_t XtextPackage::getTag_TerminalRule() const
{
    return e4c::tag< TerminalRule >::get();
}

ecore::EClass_ptr XtextPackage::getAbstractNegatedToken() const
{
    return m_AbstractNegatedToken;
}

e4c::tag_t XtextPackage::getTag_AbstractNegatedToken() const
{
    return e4c::tag< AbstractNegatedToken >::get();
}

ecore::EClass_ptr XtextPackage::getNegatedToken() const
{
    return m_NegatedToken;
}

e4c::tag_t XtextPackage::getTag_NegatedToken() const
{
    return e4c::tag< NegatedToken >::get();
}

ecore::EClass_ptr XtextPackage::getUntilToken() const
{
    return m_UntilToken;
}

e4c::tag_t XtextPackage::getTag_UntilToken() const
{
    return e4c::tag< UntilToken >::get();
}

ecore::EClass_ptr XtextPackage::getWildcard() const
{
    return m_Wildcard;
}

e4c::tag_t XtextPackage::getTag_Wildcard() const
{
    return e4c::tag< Wildcard >::get();
}

ecore::EClass_ptr XtextPackage::getEnumRule() const
{
    return m_EnumRule;
}

e4c::tag_t XtextPackage::getTag_EnumRule() const
{
    return e4c::tag< EnumRule >::get();
}

ecore::EClass_ptr XtextPackage::getEnumLiteralDeclaration() const
{
    return m_EnumLiteralDeclaration;
}

e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration() const
{
    return e4c::tag< EnumLiteralDeclaration >::get();
}

ecore::EClass_ptr XtextPackage::getAlternatives() const
{
    return m_Alternatives;
}

e4c::tag_t XtextPackage::getTag_Alternatives() const
{
    return e4c::tag< Alternatives >::get();
}

ecore::EClass_ptr XtextPackage::getUnorderedGroup() const
{
    return m_UnorderedGroup;
}

e4c::tag_t XtextPackage::getTag_UnorderedGroup() const
{
    return e4c::tag< UnorderedGroup >::get();
}

ecore::EClass_ptr XtextPackage::getGroup() const
{
    return m_Group;
}

e4c::tag_t XtextPackage::getTag_Group() const
{
    return e4c::tag< Group >::get();
}

ecore::EClass_ptr XtextPackage::getCharacterRange() const
{
    return m_CharacterRange;
}

e4c::tag_t XtextPackage::getTag_CharacterRange() const
{
    return e4c::tag< CharacterRange >::get();
}

ecore::EClass_ptr XtextPackage::getCompoundElement() const
{
    return m_CompoundElement;
}

e4c::tag_t XtextPackage::getTag_CompoundElement() const
{
    return e4c::tag< CompoundElement >::get();
}

e4c::tag_t XtextPackage::getTag_Grammar__name() const
{
    return e4c::tag< Grammar__name_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getGrammar__name() const
{
    return m_Grammar__name;
}

e4c::tag_t XtextPackage::getTag_Grammar__usedGrammars() const
{
    return e4c::tag< Grammar__usedGrammars_tag >::get();
}

ecore::EReference_ptr XtextPackage::getGrammar__usedGrammars() const
{
    return m_Grammar__usedGrammars;
}

e4c::tag_t XtextPackage::getTag_Grammar__definesHiddenTokens() const
{
    return e4c::tag< Grammar__definesHiddenTokens_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getGrammar__definesHiddenTokens() const
{
    return m_Grammar__definesHiddenTokens;
}

e4c::tag_t XtextPackage::getTag_Grammar__hiddenTokens() const
{
    return e4c::tag< Grammar__hiddenTokens_tag >::get();
}

ecore::EReference_ptr XtextPackage::getGrammar__hiddenTokens() const
{
    return m_Grammar__hiddenTokens;
}

e4c::tag_t XtextPackage::getTag_Grammar__metamodelDeclarations() const
{
    return e4c::tag< Grammar__metamodelDeclarations_tag >::get();
}

ecore::EReference_ptr XtextPackage::getGrammar__metamodelDeclarations() const
{
    return m_Grammar__metamodelDeclarations;
}

e4c::tag_t XtextPackage::getTag_Grammar__rules() const
{
    return e4c::tag< Grammar__rules_tag >::get();
}

ecore::EReference_ptr XtextPackage::getGrammar__rules() const
{
    return m_Grammar__rules;
}

e4c::tag_t XtextPackage::getTag_AbstractRule__name() const
{
    return e4c::tag< AbstractRule__name_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAbstractRule__name() const
{
    return m_AbstractRule__name;
}

e4c::tag_t XtextPackage::getTag_AbstractRule__type() const
{
    return e4c::tag< AbstractRule__type_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAbstractRule__type() const
{
    return m_AbstractRule__type;
}

e4c::tag_t XtextPackage::getTag_AbstractRule__alternatives() const
{
    return e4c::tag< AbstractRule__alternatives_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAbstractRule__alternatives() const
{
    return m_AbstractRule__alternatives;
}

e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration__ePackage() const
{
    return e4c::tag< AbstractMetamodelDeclaration__ePackage_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAbstractMetamodelDeclaration__ePackage() const
{
    return m_AbstractMetamodelDeclaration__ePackage;
}

e4c::tag_t XtextPackage::getTag_AbstractMetamodelDeclaration__alias() const
{
    return e4c::tag< AbstractMetamodelDeclaration__alias_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAbstractMetamodelDeclaration__alias() const
{
    return m_AbstractMetamodelDeclaration__alias;
}

e4c::tag_t XtextPackage::getTag_GeneratedMetamodel__name() const
{
    return e4c::tag< GeneratedMetamodel__name_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getGeneratedMetamodel__name() const
{
    return m_GeneratedMetamodel__name;
}

e4c::tag_t XtextPackage::getTag_ParserRule__definesHiddenTokens() const
{
    return e4c::tag< ParserRule__definesHiddenTokens_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getParserRule__definesHiddenTokens() const
{
    return m_ParserRule__definesHiddenTokens;
}

e4c::tag_t XtextPackage::getTag_ParserRule__hiddenTokens() const
{
    return e4c::tag< ParserRule__hiddenTokens_tag >::get();
}

ecore::EReference_ptr XtextPackage::getParserRule__hiddenTokens() const
{
    return m_ParserRule__hiddenTokens;
}

e4c::tag_t XtextPackage::getTag_TypeRef__metamodel() const
{
    return e4c::tag< TypeRef__metamodel_tag >::get();
}

ecore::EReference_ptr XtextPackage::getTypeRef__metamodel() const
{
    return m_TypeRef__metamodel;
}

e4c::tag_t XtextPackage::getTag_TypeRef__classifier() const
{
    return e4c::tag< TypeRef__classifier_tag >::get();
}

ecore::EReference_ptr XtextPackage::getTypeRef__classifier() const
{
    return m_TypeRef__classifier;
}

e4c::tag_t XtextPackage::getTag_AbstractElement__cardinality() const
{
    return e4c::tag< AbstractElement__cardinality_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAbstractElement__cardinality() const
{
    return m_AbstractElement__cardinality;
}

e4c::tag_t XtextPackage::getTag_Action__type() const
{
    return e4c::tag< Action__type_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAction__type() const
{
    return m_Action__type;
}

e4c::tag_t XtextPackage::getTag_Action__feature() const
{
    return e4c::tag< Action__feature_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAction__feature() const
{
    return m_Action__feature;
}

e4c::tag_t XtextPackage::getTag_Action__operator() const
{
    return e4c::tag< Action__operator_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAction__operator() const
{
    return m_Action__operator;
}

e4c::tag_t XtextPackage::getTag_Keyword__value() const
{
    return e4c::tag< Keyword__value_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getKeyword__value() const
{
    return m_Keyword__value;
}

e4c::tag_t XtextPackage::getTag_RuleCall__rule() const
{
    return e4c::tag< RuleCall__rule_tag >::get();
}

ecore::EReference_ptr XtextPackage::getRuleCall__rule() const
{
    return m_RuleCall__rule;
}

e4c::tag_t XtextPackage::getTag_Assignment__feature() const
{
    return e4c::tag< Assignment__feature_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAssignment__feature() const
{
    return m_Assignment__feature;
}

e4c::tag_t XtextPackage::getTag_Assignment__operator() const
{
    return e4c::tag< Assignment__operator_tag >::get();
}

ecore::EAttribute_ptr XtextPackage::getAssignment__operator() const
{
    return m_Assignment__operator;
}

e4c::tag_t XtextPackage::getTag_Assignment__terminal() const
{
    return e4c::tag< Assignment__terminal_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAssignment__terminal() const
{
    return m_Assignment__terminal;
}

e4c::tag_t XtextPackage::getTag_CrossReference__type() const
{
    return e4c::tag< CrossReference__type_tag >::get();
}

ecore::EReference_ptr XtextPackage::getCrossReference__type() const
{
    return m_CrossReference__type;
}

e4c::tag_t XtextPackage::getTag_CrossReference__terminal() const
{
    return e4c::tag< CrossReference__terminal_tag >::get();
}

ecore::EReference_ptr XtextPackage::getCrossReference__terminal() const
{
    return m_CrossReference__terminal;
}

e4c::tag_t XtextPackage::getTag_AbstractNegatedToken__terminal() const
{
    return e4c::tag< AbstractNegatedToken__terminal_tag >::get();
}

ecore::EReference_ptr XtextPackage::getAbstractNegatedToken__terminal() const
{
    return m_AbstractNegatedToken__terminal;
}

e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration__enumLiteral() const
{
    return e4c::tag< EnumLiteralDeclaration__enumLiteral_tag >::get();
}

ecore::EReference_ptr XtextPackage::getEnumLiteralDeclaration__enumLiteral() const
{
    return m_EnumLiteralDeclaration__enumLiteral;
}

e4c::tag_t XtextPackage::getTag_EnumLiteralDeclaration__literal() const
{
    return e4c::tag< EnumLiteralDeclaration__literal_tag >::get();
}

ecore::EReference_ptr XtextPackage::getEnumLiteralDeclaration__literal() const
{
    return m_EnumLiteralDeclaration__literal;
}

e4c::tag_t XtextPackage::getTag_CharacterRange__left() const
{
    return e4c::tag< CharacterRange__left_tag >::get();
}

ecore::EReference_ptr XtextPackage::getCharacterRange__left() const
{
    return m_CharacterRange__left;
}

e4c::tag_t XtextPackage::getTag_CharacterRange__right() const
{
    return e4c::tag< CharacterRange__right_tag >::get();
}

ecore::EReference_ptr XtextPackage::getCharacterRange__right() const
{
    return m_CharacterRange__right;
}

e4c::tag_t XtextPackage::getTag_CompoundElement__elements() const
{
    return e4c::tag< CompoundElement__elements_tag >::get();
}

ecore::EReference_ptr XtextPackage::getCompoundElement__elements() const
{
    return m_CompoundElement__elements;
}


extern "C" ::ecore::EPackage_ptr e4c_xtext()
{
    return ::xtext::XtextPackage::_instance();
}
