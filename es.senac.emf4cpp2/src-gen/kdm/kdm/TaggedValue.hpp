
#ifndef EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP
#define EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/ExtendedValue.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::TaggedValue
class TaggedValue :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedValue_ptr ptr_type;

	TaggedValue();
	virtual ~TaggedValue();

	// Typedefs
	typedef ::e4c::impl::attribute< TaggedValue__value_tag > _value_t;

	
	// Members
	_value_t value;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP
