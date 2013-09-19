
#ifndef EMF_CPP_XTEXT_META_HPP
#define EMF_CPP_XTEXT_META_HPP

#include <e4c/definition.hpp>
#include <xtext/fwd.hpp>

#include <ecore/fwd.hpp>

namespace xtext
{



struct Grammar__name_tag
{
	typedef Grammar eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Grammar__usedGrammars_tag
{
	typedef Grammar eClass;
	typedef ::xtext::Grammar eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Grammar__usedGrammars_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = false;
};

struct Grammar__definesHiddenTokens_tag
{
	typedef Grammar eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Grammar__hiddenTokens_tag
{
	typedef Grammar eClass;
	typedef ::xtext::AbstractRule eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Grammar__hiddenTokens_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = false;
};

struct Grammar__metamodelDeclarations_tag
{
	typedef Grammar eClass;
	typedef ::xtext::AbstractMetamodelDeclaration eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Grammar__metamodelDeclarations_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Grammar__rules_tag
{
	typedef Grammar eClass;
	typedef ::xtext::AbstractRule eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Grammar__rules_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractRule__name_tag
{
	typedef AbstractRule eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractRule__type_tag
{
	typedef AbstractRule eClass;
	typedef ::xtext::TypeRef eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AbstractRule__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractRule__alternatives_tag
{
	typedef AbstractRule eClass;
	typedef ::xtext::AbstractElement eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AbstractRule__alternatives_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractMetamodelDeclaration__ePackage_tag
{
	typedef AbstractMetamodelDeclaration eClass;
	typedef ::ecore::EPackage eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AbstractMetamodelDeclaration__ePackage_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractMetamodelDeclaration__alias_tag
{
	typedef AbstractMetamodelDeclaration eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct GeneratedMetamodel__name_tag
{
	typedef GeneratedMetamodel eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ParserRule__definesHiddenTokens_tag
{
	typedef ParserRule eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ParserRule__hiddenTokens_tag
{
	typedef ParserRule eClass;
	typedef ::xtext::AbstractRule eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ParserRule__hiddenTokens_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = false;
};

struct TypeRef__metamodel_tag
{
	typedef TypeRef eClass;
	typedef ::xtext::AbstractMetamodelDeclaration eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TypeRef__metamodel_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TypeRef__classifier_tag
{
	typedef TypeRef eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TypeRef__classifier_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractElement__cardinality_tag
{
	typedef AbstractElement eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Action__type_tag
{
	typedef Action eClass;
	typedef ::xtext::TypeRef eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Action__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Action__feature_tag
{
	typedef Action eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Action__operator_tag
{
	typedef Action eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Keyword__value_tag
{
	typedef Keyword eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct RuleCall__rule_tag
{
	typedef RuleCall eClass;
	typedef ::xtext::AbstractRule eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef RuleCall__rule_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Assignment__feature_tag
{
	typedef Assignment eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Assignment__operator_tag
{
	typedef Assignment eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Assignment__terminal_tag
{
	typedef Assignment eClass;
	typedef ::xtext::AbstractElement eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Assignment__terminal_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct CrossReference__type_tag
{
	typedef CrossReference eClass;
	typedef ::xtext::TypeRef eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CrossReference__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct CrossReference__terminal_tag
{
	typedef CrossReference eClass;
	typedef ::xtext::AbstractElement eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CrossReference__terminal_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct AbstractNegatedToken__terminal_tag
{
	typedef AbstractNegatedToken eClass;
	typedef ::xtext::AbstractElement eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AbstractNegatedToken__terminal_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EnumLiteralDeclaration__enumLiteral_tag
{
	typedef EnumLiteralDeclaration eClass;
	typedef ::ecore::EEnumLiteral eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EnumLiteralDeclaration__enumLiteral_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EnumLiteralDeclaration__literal_tag
{
	typedef EnumLiteralDeclaration eClass;
	typedef ::xtext::Keyword eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EnumLiteralDeclaration__literal_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct CharacterRange__left_tag
{
	typedef CharacterRange eClass;
	typedef ::xtext::Keyword eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CharacterRange__left_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct CharacterRange__right_tag
{
	typedef CharacterRange eClass;
	typedef ::xtext::Keyword eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CharacterRange__right_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct CompoundElement__elements_tag
{
	typedef CompoundElement eClass;
	typedef ::xtext::AbstractElement eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CompoundElement__elements_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // xtext


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::xtext::XtextPackage >
{
	typedef boost::mpl::list< ::xtext::Grammar,
	                          ::xtext::AbstractRule,
	                          ::xtext::AbstractMetamodelDeclaration,
	                          ::xtext::GeneratedMetamodel,
	                          ::xtext::ReferencedMetamodel,
	                          ::xtext::ParserRule,
	                          ::xtext::TypeRef,
	                          ::xtext::AbstractElement,
	                          ::xtext::Action,
	                          ::xtext::Keyword,
	                          ::xtext::RuleCall,
	                          ::xtext::Assignment,
	                          ::xtext::CrossReference,
	                          ::xtext::TerminalRule,
	                          ::xtext::AbstractNegatedToken,
	                          ::xtext::NegatedToken,
	                          ::xtext::UntilToken,
	                          ::xtext::Wildcard,
	                          ::xtext::EnumRule,
	                          ::xtext::EnumLiteralDeclaration,
	                          ::xtext::Alternatives,
	                          ::xtext::UnorderedGroup,
	                          ::xtext::Group,
	                          ::xtext::CharacterRange,
	                          ::xtext::CompoundElement > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::xtext::Grammar >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::Grammar__name_tag,
	                          ::xtext::Grammar__usedGrammars_tag,
	                          ::xtext::Grammar__definesHiddenTokens_tag,
	                          ::xtext::Grammar__hiddenTokens_tag,
	                          ::xtext::Grammar__metamodelDeclarations_tag,
	                          ::xtext::Grammar__rules_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::Grammar__name_tag,
	                          ::xtext::Grammar__usedGrammars_tag,
	                          ::xtext::Grammar__definesHiddenTokens_tag,
	                          ::xtext::Grammar__hiddenTokens_tag,
	                          ::xtext::Grammar__metamodelDeclarations_tag,
	                          ::xtext::Grammar__rules_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Grammar >
{
	static const char * get()
	{
		return "Grammar";
	}
};


template < >
struct name< ::xtext::Grammar__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::xtext::Grammar__usedGrammars_tag >
{
	static const char * get()
	{
		return "usedGrammars";
	}
};


template < >
struct name< ::xtext::Grammar__definesHiddenTokens_tag >
{
	static const char * get()
	{
		return "definesHiddenTokens";
	}
};


template < >
struct name< ::xtext::Grammar__hiddenTokens_tag >
{
	static const char * get()
	{
		return "hiddenTokens";
	}
};


template < >
struct name< ::xtext::Grammar__metamodelDeclarations_tag >
{
	static const char * get()
	{
		return "metamodelDeclarations";
	}
};


template < >
struct name< ::xtext::Grammar__rules_tag >
{
	static const char * get()
	{
		return "rules";
	}
};


template < >
struct eclass< ::xtext::AbstractRule >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractRule__name_tag,
	                          ::xtext::AbstractRule__type_tag,
	                          ::xtext::AbstractRule__alternatives_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractRule__name_tag,
	                          ::xtext::AbstractRule__type_tag,
	                          ::xtext::AbstractRule__alternatives_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::AbstractRule >
{
	static const char * get()
	{
		return "AbstractRule";
	}
};


template < >
struct name< ::xtext::AbstractRule__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::xtext::AbstractRule__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::xtext::AbstractRule__alternatives_tag >
{
	static const char * get()
	{
		return "alternatives";
	}
};


template < >
struct eclass< ::xtext::AbstractMetamodelDeclaration >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration__ePackage_tag,
	                          ::xtext::AbstractMetamodelDeclaration__alias_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration__ePackage_tag,
	                          ::xtext::AbstractMetamodelDeclaration__alias_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::AbstractMetamodelDeclaration >
{
	static const char * get()
	{
		return "AbstractMetamodelDeclaration";
	}
};


template < >
struct name< ::xtext::AbstractMetamodelDeclaration__ePackage_tag >
{
	static const char * get()
	{
		return "ePackage";
	}
};


template < >
struct name< ::xtext::AbstractMetamodelDeclaration__alias_tag >
{
	static const char * get()
	{
		return "alias";
	}
};


template < >
struct eclass< ::xtext::GeneratedMetamodel >
{
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::GeneratedMetamodel__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration__ePackage_tag,
	                          ::xtext::AbstractMetamodelDeclaration__alias_tag,
	                          ::xtext::GeneratedMetamodel__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::GeneratedMetamodel >
{
	static const char * get()
	{
		return "GeneratedMetamodel";
	}
};


template < >
struct name< ::xtext::GeneratedMetamodel__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::xtext::ReferencedMetamodel >
{
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractMetamodelDeclaration__ePackage_tag,
	                          ::xtext::AbstractMetamodelDeclaration__alias_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::ReferencedMetamodel >
{
	static const char * get()
	{
		return "ReferencedMetamodel";
	}
};


template < >
struct eclass< ::xtext::ParserRule >
{
	typedef boost::mpl::list< ::xtext::AbstractRule > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractRule > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::ParserRule__definesHiddenTokens_tag,
	                          ::xtext::ParserRule__hiddenTokens_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractRule__name_tag,
	                          ::xtext::AbstractRule__type_tag,
	                          ::xtext::AbstractRule__alternatives_tag,
	                          ::xtext::ParserRule__definesHiddenTokens_tag,
	                          ::xtext::ParserRule__hiddenTokens_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::ParserRule >
{
	static const char * get()
	{
		return "ParserRule";
	}
};


template < >
struct name< ::xtext::ParserRule__definesHiddenTokens_tag >
{
	static const char * get()
	{
		return "definesHiddenTokens";
	}
};


template < >
struct name< ::xtext::ParserRule__hiddenTokens_tag >
{
	static const char * get()
	{
		return "hiddenTokens";
	}
};


template < >
struct eclass< ::xtext::TypeRef >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::TypeRef__metamodel_tag,
	                          ::xtext::TypeRef__classifier_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::TypeRef__metamodel_tag,
	                          ::xtext::TypeRef__classifier_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::TypeRef >
{
	static const char * get()
	{
		return "TypeRef";
	}
};


template < >
struct name< ::xtext::TypeRef__metamodel_tag >
{
	static const char * get()
	{
		return "metamodel";
	}
};


template < >
struct name< ::xtext::TypeRef__classifier_tag >
{
	static const char * get()
	{
		return "classifier";
	}
};


template < >
struct eclass< ::xtext::AbstractElement >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::AbstractElement >
{
	static const char * get()
	{
		return "AbstractElement";
	}
};


template < >
struct name< ::xtext::AbstractElement__cardinality_tag >
{
	static const char * get()
	{
		return "cardinality";
	}
};


template < >
struct eclass< ::xtext::Action >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::Action__type_tag,
	                          ::xtext::Action__feature_tag,
	                          ::xtext::Action__operator_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::Action__type_tag,
	                          ::xtext::Action__feature_tag,
	                          ::xtext::Action__operator_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Action >
{
	static const char * get()
	{
		return "Action";
	}
};


template < >
struct name< ::xtext::Action__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::xtext::Action__feature_tag >
{
	static const char * get()
	{
		return "feature";
	}
};


template < >
struct name< ::xtext::Action__operator_tag >
{
	static const char * get()
	{
		return "operator";
	}
};


template < >
struct eclass< ::xtext::Keyword >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::Keyword__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::Keyword__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Keyword >
{
	static const char * get()
	{
		return "Keyword";
	}
};


template < >
struct name< ::xtext::Keyword__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::xtext::RuleCall >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::RuleCall__rule_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::RuleCall__rule_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::RuleCall >
{
	static const char * get()
	{
		return "RuleCall";
	}
};


template < >
struct name< ::xtext::RuleCall__rule_tag >
{
	static const char * get()
	{
		return "rule";
	}
};


template < >
struct eclass< ::xtext::Assignment >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::Assignment__feature_tag,
	                          ::xtext::Assignment__operator_tag,
	                          ::xtext::Assignment__terminal_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::Assignment__feature_tag,
	                          ::xtext::Assignment__operator_tag,
	                          ::xtext::Assignment__terminal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Assignment >
{
	static const char * get()
	{
		return "Assignment";
	}
};


template < >
struct name< ::xtext::Assignment__feature_tag >
{
	static const char * get()
	{
		return "feature";
	}
};


template < >
struct name< ::xtext::Assignment__operator_tag >
{
	static const char * get()
	{
		return "operator";
	}
};


template < >
struct name< ::xtext::Assignment__terminal_tag >
{
	static const char * get()
	{
		return "terminal";
	}
};


template < >
struct eclass< ::xtext::CrossReference >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::CrossReference__type_tag,
	                          ::xtext::CrossReference__terminal_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CrossReference__type_tag,
	                          ::xtext::CrossReference__terminal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::CrossReference >
{
	static const char * get()
	{
		return "CrossReference";
	}
};


template < >
struct name< ::xtext::CrossReference__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::xtext::CrossReference__terminal_tag >
{
	static const char * get()
	{
		return "terminal";
	}
};


template < >
struct eclass< ::xtext::TerminalRule >
{
	typedef boost::mpl::list< ::xtext::AbstractRule > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractRule > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractRule__name_tag,
	                          ::xtext::AbstractRule__type_tag,
	                          ::xtext::AbstractRule__alternatives_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::TerminalRule >
{
	static const char * get()
	{
		return "TerminalRule";
	}
};


template < >
struct eclass< ::xtext::AbstractNegatedToken >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractNegatedToken__terminal_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::AbstractNegatedToken__terminal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::AbstractNegatedToken >
{
	static const char * get()
	{
		return "AbstractNegatedToken";
	}
};


template < >
struct name< ::xtext::AbstractNegatedToken__terminal_tag >
{
	static const char * get()
	{
		return "terminal";
	}
};


template < >
struct eclass< ::xtext::NegatedToken >
{
	typedef boost::mpl::list< ::xtext::AbstractNegatedToken > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement,
	                          ::xtext::AbstractNegatedToken > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::AbstractNegatedToken__terminal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::NegatedToken >
{
	static const char * get()
	{
		return "NegatedToken";
	}
};


template < >
struct eclass< ::xtext::UntilToken >
{
	typedef boost::mpl::list< ::xtext::AbstractNegatedToken > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement,
	                          ::xtext::AbstractNegatedToken > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::AbstractNegatedToken__terminal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::UntilToken >
{
	static const char * get()
	{
		return "UntilToken";
	}
};


template < >
struct eclass< ::xtext::Wildcard >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Wildcard >
{
	static const char * get()
	{
		return "Wildcard";
	}
};


template < >
struct eclass< ::xtext::EnumRule >
{
	typedef boost::mpl::list< ::xtext::AbstractRule > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractRule > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractRule__name_tag,
	                          ::xtext::AbstractRule__type_tag,
	                          ::xtext::AbstractRule__alternatives_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::EnumRule >
{
	static const char * get()
	{
		return "EnumRule";
	}
};


template < >
struct eclass< ::xtext::EnumLiteralDeclaration >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::EnumLiteralDeclaration__enumLiteral_tag,
	                          ::xtext::EnumLiteralDeclaration__literal_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::EnumLiteralDeclaration__enumLiteral_tag,
	                          ::xtext::EnumLiteralDeclaration__literal_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::EnumLiteralDeclaration >
{
	static const char * get()
	{
		return "EnumLiteralDeclaration";
	}
};


template < >
struct name< ::xtext::EnumLiteralDeclaration__enumLiteral_tag >
{
	static const char * get()
	{
		return "enumLiteral";
	}
};


template < >
struct name< ::xtext::EnumLiteralDeclaration__literal_tag >
{
	static const char * get()
	{
		return "literal";
	}
};


template < >
struct eclass< ::xtext::Alternatives >
{
	typedef boost::mpl::list< ::xtext::CompoundElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement,
	                          ::xtext::CompoundElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CompoundElement__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Alternatives >
{
	static const char * get()
	{
		return "Alternatives";
	}
};


template < >
struct eclass< ::xtext::UnorderedGroup >
{
	typedef boost::mpl::list< ::xtext::CompoundElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement,
	                          ::xtext::CompoundElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CompoundElement__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::UnorderedGroup >
{
	static const char * get()
	{
		return "UnorderedGroup";
	}
};


template < >
struct eclass< ::xtext::Group >
{
	typedef boost::mpl::list< ::xtext::CompoundElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement,
	                          ::xtext::CompoundElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CompoundElement__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::Group >
{
	static const char * get()
	{
		return "Group";
	}
};


template < >
struct eclass< ::xtext::CharacterRange >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::CharacterRange__left_tag,
	                          ::xtext::CharacterRange__right_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CharacterRange__left_tag,
	                          ::xtext::CharacterRange__right_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::CharacterRange >
{
	static const char * get()
	{
		return "CharacterRange";
	}
};


template < >
struct name< ::xtext::CharacterRange__left_tag >
{
	static const char * get()
	{
		return "left";
	}
};


template < >
struct name< ::xtext::CharacterRange__right_tag >
{
	static const char * get()
	{
		return "right";
	}
};


template < >
struct eclass< ::xtext::CompoundElement >
{
	typedef boost::mpl::list< ::xtext::AbstractElement > eSuperTypes;
	typedef boost::mpl::list< ::xtext::AbstractElement > eAllSuperTypes;
	typedef boost::mpl::list< ::xtext::CompoundElement__elements_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::xtext::AbstractElement__cardinality_tag,
	                          ::xtext::CompoundElement__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::xtext::CompoundElement >
{
	static const char * get()
	{
		return "CompoundElement";
	}
};


template < >
struct name< ::xtext::CompoundElement__elements_tag >
{
	static const char * get()
	{
		return "elements";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_XTEXT_Meta_HPP
