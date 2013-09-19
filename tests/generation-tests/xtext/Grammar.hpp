
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

	typedef int name_t;
	typedef std::set < xtext::Grammar_ptr > usedGrammars_t;
	typedef int definesHiddenTokens_t;
	typedef std::set < xtext::AbstractRule_ptr > hiddenTokens_t;
	typedef boost::ptr_vector < xtext::AbstractMetamodelDeclaration > metamodelDeclarations_t;
	typedef boost::ptr_vector < xtext::AbstractRule > rules_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO
	void setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens);
	definesHiddenTokens_t getDefinesHiddenTokens() const;
	// TODO
	// TODO
	// TODO

	
protected:

	name_t m_name;
	usedGrammars_t m_usedGrammars;
	definesHiddenTokens_t m_definesHiddenTokens;
	hiddenTokens_t m_hiddenTokens;
	metamodelDeclarations_t m_metamodelDeclarations;
	rules_t m_rules;

};

} // xtext


#endif // EMF_CPP_XTEXT_GRAMMAR__HPP
