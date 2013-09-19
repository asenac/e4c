#ifndef EMF_CPP_XTEXT_PACKAGE_HPP
#define EMF_CPP_XTEXT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xtext/fwd.hpp>

namespace xtext
{


class XtextPackage : public ::ecore::EPackage
{
public:
    static const XtextPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // xtext


#endif // EMF_CPP_XTEXT_PACKAGE_HPP
