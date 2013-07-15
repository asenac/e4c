
#ifndef EMF_CPP_KDM_SOURCE_SOURCEREF__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEREF__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace source
{


// kdm::source::SourceRef
class SourceRef :  public virtual ::kdm::core::Element
{
public:

	typedef SourceRef_ptr ptr_type;

	SourceRef();
	virtual ~SourceRef();

	// Typedefs
	typedef ::e4c::impl::reference< SourceRef__region_tag > _region_t;
	typedef ::e4c::impl::attribute< SourceRef__language_tag > _language_t;
	typedef ::e4c::impl::attribute< SourceRef__snippet_tag > _snippet_t;

	
	// Members
	_region_t region;
	_language_t language;
	_snippet_t snippet;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEREF__HPP
