
#ifndef EMF_CPP_KDM_KDM_TAGGEDREF__HPP
#define EMF_CPP_KDM_KDM_TAGGEDREF__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/ExtendedValue.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::TaggedRef
class TaggedRef :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedRef_ptr ptr_type;

	TaggedRef();
	virtual ~TaggedRef();

	// Typedefs
	typedef ::e4c::impl::reference< TaggedRef__reference_tag > _reference_t;

	
	// Members
	_reference_t reference;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDREF__HPP
