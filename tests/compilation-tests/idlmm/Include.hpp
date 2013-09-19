
#ifndef EMF_CPP_IDLMM_INCLUDE__HPP
#define EMF_CPP_IDLMM_INCLUDE__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::Include
class Include :  public virtual ::idlmm::ModelElement
{
public:

	typedef Include_ptr ptr_type;
	
	Include();
	virtual ~Include();

	typedef int importURI_t;
	typedef idlmm::TranslationUnit_ptr translationUnit_t;

	
	void setImportURI(importURI_t _importURI);
	importURI_t getImportURI() const;
	// TODO

	
protected:

	importURI_t m_importURI;
	translationUnit_t m_translationUnit;

};

} // idlmm


#endif // EMF_CPP_IDLMM_INCLUDE__HPP
