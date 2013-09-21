
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

	typedef ::ecore::EString importURI_t;
	typedef idlmm::TranslationUnit_ptr translationUnit_t;

	
	void setImportURI(importURI_t _importURI);
	importURI_t getImportURI() const;
	translationUnit_t getTranslationUnit() const;
	
	void setTranslationUnit(translationUnit_t translationUnit_);

		
protected:

	importURI_t m_importURI;
	idlmm::TranslationUnit_ptr m_translationUnit;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_INCLUDE__HPP
