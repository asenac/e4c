#ifndef EMF_CPP_XTEXT_PACKAGE_HPP
#define EMF_CPP_XTEXT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xtext/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace xtext
{


class XtextPackage : public ::ecore::EPackage
{
public:
    static const XtextPackage_ptr _instance();

     ::ecore::EClass_ptr getGrammar() const;
     ::ecore::EClass_ptr getAbstractRule() const;
     ::ecore::EClass_ptr getAbstractMetamodelDeclaration() const;
     ::ecore::EClass_ptr getGeneratedMetamodel() const;
     ::ecore::EClass_ptr getReferencedMetamodel() const;
     ::ecore::EClass_ptr getParserRule() const;
     ::ecore::EClass_ptr getTypeRef() const;
     ::ecore::EClass_ptr getAbstractElement() const;
     ::ecore::EClass_ptr getAction() const;
     ::ecore::EClass_ptr getKeyword() const;
     ::ecore::EClass_ptr getRuleCall() const;
     ::ecore::EClass_ptr getAssignment() const;
     ::ecore::EClass_ptr getCrossReference() const;
     ::ecore::EClass_ptr getTerminalRule() const;
     ::ecore::EClass_ptr getAbstractNegatedToken() const;
     ::ecore::EClass_ptr getNegatedToken() const;
     ::ecore::EClass_ptr getUntilToken() const;
     ::ecore::EClass_ptr getWildcard() const;
     ::ecore::EClass_ptr getEnumRule() const;
     ::ecore::EClass_ptr getEnumLiteralDeclaration() const;
     ::ecore::EClass_ptr getAlternatives() const;
     ::ecore::EClass_ptr getUnorderedGroup() const;
     ::ecore::EClass_ptr getGroup() const;
     ::ecore::EClass_ptr getCharacterRange() const;
     ::ecore::EClass_ptr getCompoundElement() const;

     ::ecore::EAttribute_ptr getGrammar__name() const;
     ::ecore::EReference_ptr getGrammar__usedGrammars() const;
     ::ecore::EAttribute_ptr getGrammar__definesHiddenTokens() const;
     ::ecore::EReference_ptr getGrammar__hiddenTokens() const;
     ::ecore::EReference_ptr getGrammar__metamodelDeclarations() const;
     ::ecore::EReference_ptr getGrammar__rules() const;
     ::ecore::EAttribute_ptr getAbstractRule__name() const;
     ::ecore::EReference_ptr getAbstractRule__type() const;
     ::ecore::EReference_ptr getAbstractRule__alternatives() const;
     ::ecore::EReference_ptr getAbstractMetamodelDeclaration__ePackage() const;
     ::ecore::EAttribute_ptr getAbstractMetamodelDeclaration__alias() const;
     ::ecore::EAttribute_ptr getGeneratedMetamodel__name() const;
     ::ecore::EAttribute_ptr getParserRule__definesHiddenTokens() const;
     ::ecore::EReference_ptr getParserRule__hiddenTokens() const;
     ::ecore::EReference_ptr getTypeRef__metamodel() const;
     ::ecore::EReference_ptr getTypeRef__classifier() const;
     ::ecore::EAttribute_ptr getAbstractElement__cardinality() const;
     ::ecore::EReference_ptr getAction__type() const;
     ::ecore::EAttribute_ptr getAction__feature() const;
     ::ecore::EAttribute_ptr getAction__operator() const;
     ::ecore::EAttribute_ptr getKeyword__value() const;
     ::ecore::EReference_ptr getRuleCall__rule() const;
     ::ecore::EAttribute_ptr getAssignment__feature() const;
     ::ecore::EAttribute_ptr getAssignment__operator() const;
     ::ecore::EReference_ptr getAssignment__terminal() const;
     ::ecore::EReference_ptr getCrossReference__type() const;
     ::ecore::EReference_ptr getCrossReference__terminal() const;
     ::ecore::EReference_ptr getAbstractNegatedToken__terminal() const;
     ::ecore::EReference_ptr getEnumLiteralDeclaration__enumLiteral() const;
     ::ecore::EReference_ptr getEnumLiteralDeclaration__literal() const;
     ::ecore::EReference_ptr getCharacterRange__left() const;
     ::ecore::EReference_ptr getCharacterRange__right() const;
     ::ecore::EReference_ptr getCompoundElement__elements() const;

     e4c::tag_t getTag_Grammar() const;
     e4c::tag_t getTag_AbstractRule() const;
     e4c::tag_t getTag_AbstractMetamodelDeclaration() const;
     e4c::tag_t getTag_GeneratedMetamodel() const;
     e4c::tag_t getTag_ReferencedMetamodel() const;
     e4c::tag_t getTag_ParserRule() const;
     e4c::tag_t getTag_TypeRef() const;
     e4c::tag_t getTag_AbstractElement() const;
     e4c::tag_t getTag_Action() const;
     e4c::tag_t getTag_Keyword() const;
     e4c::tag_t getTag_RuleCall() const;
     e4c::tag_t getTag_Assignment() const;
     e4c::tag_t getTag_CrossReference() const;
     e4c::tag_t getTag_TerminalRule() const;
     e4c::tag_t getTag_AbstractNegatedToken() const;
     e4c::tag_t getTag_NegatedToken() const;
     e4c::tag_t getTag_UntilToken() const;
     e4c::tag_t getTag_Wildcard() const;
     e4c::tag_t getTag_EnumRule() const;
     e4c::tag_t getTag_EnumLiteralDeclaration() const;
     e4c::tag_t getTag_Alternatives() const;
     e4c::tag_t getTag_UnorderedGroup() const;
     e4c::tag_t getTag_Group() const;
     e4c::tag_t getTag_CharacterRange() const;
     e4c::tag_t getTag_CompoundElement() const;

     e4c::tag_t getTag_Grammar__name() const;
     e4c::tag_t getTag_Grammar__usedGrammars() const;
     e4c::tag_t getTag_Grammar__definesHiddenTokens() const;
     e4c::tag_t getTag_Grammar__hiddenTokens() const;
     e4c::tag_t getTag_Grammar__metamodelDeclarations() const;
     e4c::tag_t getTag_Grammar__rules() const;
     e4c::tag_t getTag_AbstractRule__name() const;
     e4c::tag_t getTag_AbstractRule__type() const;
     e4c::tag_t getTag_AbstractRule__alternatives() const;
     e4c::tag_t getTag_AbstractMetamodelDeclaration__ePackage() const;
     e4c::tag_t getTag_AbstractMetamodelDeclaration__alias() const;
     e4c::tag_t getTag_GeneratedMetamodel__name() const;
     e4c::tag_t getTag_ParserRule__definesHiddenTokens() const;
     e4c::tag_t getTag_ParserRule__hiddenTokens() const;
     e4c::tag_t getTag_TypeRef__metamodel() const;
     e4c::tag_t getTag_TypeRef__classifier() const;
     e4c::tag_t getTag_AbstractElement__cardinality() const;
     e4c::tag_t getTag_Action__type() const;
     e4c::tag_t getTag_Action__feature() const;
     e4c::tag_t getTag_Action__operator() const;
     e4c::tag_t getTag_Keyword__value() const;
     e4c::tag_t getTag_RuleCall__rule() const;
     e4c::tag_t getTag_Assignment__feature() const;
     e4c::tag_t getTag_Assignment__operator() const;
     e4c::tag_t getTag_Assignment__terminal() const;
     e4c::tag_t getTag_CrossReference__type() const;
     e4c::tag_t getTag_CrossReference__terminal() const;
     e4c::tag_t getTag_AbstractNegatedToken__terminal() const;
     e4c::tag_t getTag_EnumLiteralDeclaration__enumLiteral() const;
     e4c::tag_t getTag_EnumLiteralDeclaration__literal() const;
     e4c::tag_t getTag_CharacterRange__left() const;
     e4c::tag_t getTag_CharacterRange__right() const;
     e4c::tag_t getTag_CompoundElement__elements() const;

protected:
    XtextPackage();

     ::ecore::EClass_ptr m_Grammar;
     ::ecore::EClass_ptr m_AbstractRule;
     ::ecore::EClass_ptr m_AbstractMetamodelDeclaration;
     ::ecore::EClass_ptr m_GeneratedMetamodel;
     ::ecore::EClass_ptr m_ReferencedMetamodel;
     ::ecore::EClass_ptr m_ParserRule;
     ::ecore::EClass_ptr m_TypeRef;
     ::ecore::EClass_ptr m_AbstractElement;
     ::ecore::EClass_ptr m_Action;
     ::ecore::EClass_ptr m_Keyword;
     ::ecore::EClass_ptr m_RuleCall;
     ::ecore::EClass_ptr m_Assignment;
     ::ecore::EClass_ptr m_CrossReference;
     ::ecore::EClass_ptr m_TerminalRule;
     ::ecore::EClass_ptr m_AbstractNegatedToken;
     ::ecore::EClass_ptr m_NegatedToken;
     ::ecore::EClass_ptr m_UntilToken;
     ::ecore::EClass_ptr m_Wildcard;
     ::ecore::EClass_ptr m_EnumRule;
     ::ecore::EClass_ptr m_EnumLiteralDeclaration;
     ::ecore::EClass_ptr m_Alternatives;
     ::ecore::EClass_ptr m_UnorderedGroup;
     ::ecore::EClass_ptr m_Group;
     ::ecore::EClass_ptr m_CharacterRange;
     ::ecore::EClass_ptr m_CompoundElement;
     ::ecore::EAttribute_ptr m_Grammar__name;
     ::ecore::EReference_ptr m_Grammar__usedGrammars;
     ::ecore::EAttribute_ptr m_Grammar__definesHiddenTokens;
     ::ecore::EReference_ptr m_Grammar__hiddenTokens;
     ::ecore::EReference_ptr m_Grammar__metamodelDeclarations;
     ::ecore::EReference_ptr m_Grammar__rules;
     ::ecore::EAttribute_ptr m_AbstractRule__name;
     ::ecore::EReference_ptr m_AbstractRule__type;
     ::ecore::EReference_ptr m_AbstractRule__alternatives;
     ::ecore::EReference_ptr m_AbstractMetamodelDeclaration__ePackage;
     ::ecore::EAttribute_ptr m_AbstractMetamodelDeclaration__alias;
     ::ecore::EAttribute_ptr m_GeneratedMetamodel__name;
     ::ecore::EAttribute_ptr m_ParserRule__definesHiddenTokens;
     ::ecore::EReference_ptr m_ParserRule__hiddenTokens;
     ::ecore::EReference_ptr m_TypeRef__metamodel;
     ::ecore::EReference_ptr m_TypeRef__classifier;
     ::ecore::EAttribute_ptr m_AbstractElement__cardinality;
     ::ecore::EReference_ptr m_Action__type;
     ::ecore::EAttribute_ptr m_Action__feature;
     ::ecore::EAttribute_ptr m_Action__operator;
     ::ecore::EAttribute_ptr m_Keyword__value;
     ::ecore::EReference_ptr m_RuleCall__rule;
     ::ecore::EAttribute_ptr m_Assignment__feature;
     ::ecore::EAttribute_ptr m_Assignment__operator;
     ::ecore::EReference_ptr m_Assignment__terminal;
     ::ecore::EReference_ptr m_CrossReference__type;
     ::ecore::EReference_ptr m_CrossReference__terminal;
     ::ecore::EReference_ptr m_AbstractNegatedToken__terminal;
     ::ecore::EReference_ptr m_EnumLiteralDeclaration__enumLiteral;
     ::ecore::EReference_ptr m_EnumLiteralDeclaration__literal;
     ::ecore::EReference_ptr m_CharacterRange__left;
     ::ecore::EReference_ptr m_CharacterRange__right;
     ::ecore::EReference_ptr m_CompoundElement__elements;
};

} // xtext


#endif // EMF_CPP_XTEXT_PACKAGE_HPP
