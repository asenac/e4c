
#ifndef EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace source
{


// kdm::source::SourceRegion
class SourceRegion :  public virtual ::kdm::core::Element
{
public:

	typedef SourceRegion_ptr ptr_type;

	SourceRegion();
	virtual ~SourceRegion();

	// Typedefs
	typedef ::e4c::impl::reference< SourceRegion__file_tag > _file_t;
	typedef ::e4c::impl::attribute< SourceRegion__startLine_tag > _startLine_t;
	typedef ::e4c::impl::attribute< SourceRegion__startPosition_tag > _startPosition_t;
	typedef ::e4c::impl::attribute< SourceRegion__endLine_tag > _endLine_t;
	typedef ::e4c::impl::attribute< SourceRegion__endPosition_tag > _endPosition_t;
	typedef ::e4c::impl::attribute< SourceRegion__language_tag > _language_t;
	typedef ::e4c::impl::attribute< SourceRegion__path_tag > _path_t;

	
	// Members
	_file_t file;
	_startLine_t startLine;
	_startPosition_t startPosition;
	_endLine_t endLine;
	_endPosition_t endPosition;
	_language_t language;
	_path_t path;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP
