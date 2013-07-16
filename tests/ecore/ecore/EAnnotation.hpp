
#ifndef EMF_CPP_ECORE_EANNOTATION__HPP
#define EMF_CPP_ECORE_EANNOTATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

namespace ecore
{


// ecore::EAnnotation
class EAnnotation :  public virtual ::ecore::EModelElement
{
public:

	typedef EAnnotation_ptr ptr_type;

	EAnnotation();
	virtual ~EAnnotation();

	// Typedefs
	typedef ::e4c::impl::attribute< EAnnotation__source_tag > _source_t;
	typedef ::e4c::impl::reference< EAnnotation__details_tag > _details_t;
	typedef ::e4c::impl::reference< EAnnotation__eModelElement_tag > _eModelElement_t;
	typedef ::e4c::impl::reference< EAnnotation__contents_tag > _contents_t;
	typedef ::e4c::impl::reference< EAnnotation__references_tag > _references_t;

	
	// Members
	_source_t source;
	_details_t details;
	_eModelElement_t eModelElement;
	_contents_t contents;
	_references_t references;

};

} // ecore


#endif // EMF_CPP_ECORE_EANNOTATION__HPP
