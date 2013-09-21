
#ifndef EMF_CPP_XTEXT_GRAMMAR__HPP
#define EMF_CPP_XTEXT_GRAMMAR__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::Grammar
class Grammar
{
public:

	typedef Grammar_ptr ptr_type;
	
	Grammar();
	virtual ~Grammar();

	typedef ::ecore::EString name_t;
	typedef std::vector < xtext::Grammar_ptr > usedGrammars_t;
	typedef ::ecore::EBoolean definesHiddenTokens_t;
	typedef std::vector < xtext::AbstractRule_ptr > hiddenTokens_t;
	typedef std::vector < xtext::AbstractMetamodelDeclaration_ptr > metamodelDeclarations_t;
	typedef std::vector < xtext::AbstractRule_ptr > rules_t;

	
	void setName(name_t _name);
	name_t getName() const;
	usedGrammars_t getUsedGrammars() const;
	void setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens);
	definesHiddenTokens_t getDefinesHiddenTokens() const;
	hiddenTokens_t getHiddenTokens() const;
	metamodelDeclarations_t getMetamodelDeclarations() const;
	rules_t getRules() const;


	name_t m_name;
	std::vector < xtext::Grammar_ptr > m_usedGrammars;
	definesHiddenTokens_t m_definesHiddenTokens;
	std::vector < xtext::AbstractRule_ptr > m_hiddenTokens;
	std::vector < std::unique_ptr < xtext::AbstractMetamodelDeclaration > > m_metamodelDeclarations;
	std::vector < std::unique_ptr < xtext::AbstractRule > > m_rules;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_GRAMMAR__HPP
