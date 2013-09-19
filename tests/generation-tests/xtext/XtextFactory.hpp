#ifndef EMF_CPP_XTEXT_FACTORY_HPP
#define EMF_CPP_XTEXT_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xtext/fwd.hpp>

namespace xtext
{


class XtextFactory : public ::ecore::EFactory
{
public:

    static const XtextFactory_ptr _instance();

    Grammar_ptr createGrammar() const;
    AbstractRule_ptr createAbstractRule() const;
    AbstractMetamodelDeclaration_ptr createAbstractMetamodelDeclaration() const;
    GeneratedMetamodel_ptr createGeneratedMetamodel() const;
    ReferencedMetamodel_ptr createReferencedMetamodel() const;
    ParserRule_ptr createParserRule() const;
    TypeRef_ptr createTypeRef() const;
    AbstractElement_ptr createAbstractElement() const;
    Action_ptr createAction() const;
    Keyword_ptr createKeyword() const;
    RuleCall_ptr createRuleCall() const;
    Assignment_ptr createAssignment() const;
    CrossReference_ptr createCrossReference() const;
    TerminalRule_ptr createTerminalRule() const;
    AbstractNegatedToken_ptr createAbstractNegatedToken() const;
    NegatedToken_ptr createNegatedToken() const;
    UntilToken_ptr createUntilToken() const;
    Wildcard_ptr createWildcard() const;
    EnumRule_ptr createEnumRule() const;
    EnumLiteralDeclaration_ptr createEnumLiteralDeclaration() const;
    Alternatives_ptr createAlternatives() const;
    UnorderedGroup_ptr createUnorderedGroup() const;
    Group_ptr createGroup() const;
    CharacterRange_ptr createCharacterRange() const;
    CompoundElement_ptr createCompoundElement() const;

protected:

    XtextFactory();
};

} // xtext


#endif // EMF_CPP_XTEXT_FACTORY_HPP
