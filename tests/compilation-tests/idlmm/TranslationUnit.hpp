
#ifndef EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP
#define EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::TranslationUnit
class TranslationUnit :  public virtual ::idlmm::ModelElement
{
public:

	typedef TranslationUnit_ptr ptr_type;
	
	TranslationUnit();
	virtual ~TranslationUnit();

	typedef boost::ptr_vector < idlmm::Contained > contains_t;
	typedef int identifier_t;
	typedef boost::ptr_vector < idlmm::Include > includes_t;

	
	// TODO
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	// TODO

	
protected:

	contains_t m_contains;
	identifier_t m_identifier;
	includes_t m_includes;

};

} // idlmm


#endif // EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP
