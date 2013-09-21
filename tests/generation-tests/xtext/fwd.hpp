#ifndef EMF_CPP_XTEXT_FWD_HPP
#define EMF_CPP_XTEXT_FWD_HPP


#include <e4c/mapping.hpp>

namespace xtext
{


class XtextPackage;
typedef XtextPackage * XtextPackage_ptr;
class XtextFactory;
typedef XtextFactory * XtextFactory_ptr;

// Data types


// Classes
class Grammar;
typedef Grammar* Grammar_ptr;
class AbstractRule;
typedef AbstractRule* AbstractRule_ptr;
class AbstractMetamodelDeclaration;
typedef AbstractMetamodelDeclaration* AbstractMetamodelDeclaration_ptr;
class GeneratedMetamodel;
typedef GeneratedMetamodel* GeneratedMetamodel_ptr;
class ReferencedMetamodel;
typedef ReferencedMetamodel* ReferencedMetamodel_ptr;
class ParserRule;
typedef ParserRule* ParserRule_ptr;
class TypeRef;
typedef TypeRef* TypeRef_ptr;
class AbstractElement;
typedef AbstractElement* AbstractElement_ptr;
class Action;
typedef Action* Action_ptr;
class Keyword;
typedef Keyword* Keyword_ptr;
class RuleCall;
typedef RuleCall* RuleCall_ptr;
class Assignment;
typedef Assignment* Assignment_ptr;
class CrossReference;
typedef CrossReference* CrossReference_ptr;
class TerminalRule;
typedef TerminalRule* TerminalRule_ptr;
class AbstractNegatedToken;
typedef AbstractNegatedToken* AbstractNegatedToken_ptr;
class NegatedToken;
typedef NegatedToken* NegatedToken_ptr;
class UntilToken;
typedef UntilToken* UntilToken_ptr;
class Wildcard;
typedef Wildcard* Wildcard_ptr;
class EnumRule;
typedef EnumRule* EnumRule_ptr;
class EnumLiteralDeclaration;
typedef EnumLiteralDeclaration* EnumLiteralDeclaration_ptr;
class Alternatives;
typedef Alternatives* Alternatives_ptr;
class UnorderedGroup;
typedef UnorderedGroup* UnorderedGroup_ptr;
class Group;
typedef Group* Group_ptr;
class CharacterRange;
typedef CharacterRange* CharacterRange_ptr;
class CompoundElement;
typedef CompoundElement* CompoundElement_ptr;


// Structural features
struct Grammar__name_tag;
struct Grammar__usedGrammars_tag;
struct Grammar__definesHiddenTokens_tag;
struct Grammar__hiddenTokens_tag;
struct Grammar__metamodelDeclarations_tag;
struct Grammar__rules_tag;
struct AbstractRule__name_tag;
struct AbstractRule__type_tag;
struct AbstractRule__alternatives_tag;
struct AbstractMetamodelDeclaration__ePackage_tag;
struct AbstractMetamodelDeclaration__alias_tag;
struct GeneratedMetamodel__name_tag;
struct ParserRule__definesHiddenTokens_tag;
struct ParserRule__hiddenTokens_tag;
struct TypeRef__metamodel_tag;
struct TypeRef__classifier_tag;
struct AbstractElement__cardinality_tag;
struct Action__type_tag;
struct Action__feature_tag;
struct Action__operator_tag;
struct Keyword__value_tag;
struct RuleCall__rule_tag;
struct Assignment__feature_tag;
struct Assignment__operator_tag;
struct Assignment__terminal_tag;
struct CrossReference__type_tag;
struct CrossReference__terminal_tag;
struct AbstractNegatedToken__terminal_tag;
struct EnumLiteralDeclaration__enumLiteral_tag;
struct EnumLiteralDeclaration__literal_tag;
struct CharacterRange__left_tag;
struct CharacterRange__right_tag;
struct CompoundElement__elements_tag;


} // xtext


#endif // EMF_CPP_XTEXT_FWD_HPP
