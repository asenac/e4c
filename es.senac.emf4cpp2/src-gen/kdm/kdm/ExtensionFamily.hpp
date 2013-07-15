
#ifndef EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP
#define EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::ExtensionFamily
class ExtensionFamily :  public virtual ::kdm::core::Element
{
public:

	typedef ExtensionFamily_ptr ptr_type;

	ExtensionFamily();
	virtual ~ExtensionFamily();

	// Typedefs
	typedef ::e4c::impl::reference< ExtensionFamily__stereotype_tag > _stereotype_t;
	typedef ::e4c::impl::attribute< ExtensionFamily__name_tag > _name_t;

	
	// Members
	_stereotype_t stereotype;
	_name_t name;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP
