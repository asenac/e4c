
#ifndef EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP
#define EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class TranslationUnit :  public virtual ::idlmm::ModelElement
{
public:

	typedef TranslationUnit_ptr ptr_type;
	
	TranslationUnit();
	virtual ~TranslationUnit();

	typedef std::vector < idlmm::Contained_ptr > contains_t;
	typedef ::ecore::EString identifier_t;
	typedef std::vector < idlmm::Include_ptr > includes_t;

	
	contains_t getContains() const;
	void addContains(idlmm::Contained_ptr contains_);
	void addAllContains(const contains_t& contains_);
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	includes_t getIncludes() const;
	void addIncludes(idlmm::Include_ptr includes_);
	void addAllIncludes(const includes_t& includes_);

		
protected:

	std::vector < std::unique_ptr < idlmm::Contained > > m_contains;
	identifier_t m_identifier;
	std::vector < std::unique_ptr < idlmm::Include > > m_includes;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_TRANSLATIONUNIT__HPP
