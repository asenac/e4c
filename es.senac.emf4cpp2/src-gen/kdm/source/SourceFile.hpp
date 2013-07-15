
#ifndef EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>


namespace kdm
{
namespace source
{


// kdm::source::SourceFile
class SourceFile :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef SourceFile_ptr ptr_type;

	SourceFile();
	virtual ~SourceFile();

	// Typedefs
	typedef ::e4c::impl::attribute< SourceFile__language_tag > _language_t;
	typedef ::e4c::impl::attribute< SourceFile__encoding_tag > _encoding_t;

	
	// Members
	_language_t language;
	_encoding_t encoding;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP
