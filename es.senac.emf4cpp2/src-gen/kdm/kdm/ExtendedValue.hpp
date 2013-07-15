
#ifndef EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP
#define EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::ExtendedValue
class ExtendedValue :  public virtual ::kdm::core::Element
{
public:

	typedef ExtendedValue_ptr ptr_type;

	ExtendedValue();
	virtual ~ExtendedValue();

	// Typedefs
	typedef ::e4c::impl::reference< ExtendedValue__tag_tag > _tag_t;

	
	// Members
	_tag_t tag;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP
