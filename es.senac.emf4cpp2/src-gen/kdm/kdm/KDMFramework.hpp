
#ifndef EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
#define EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/ModelElement.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::KDMFramework
class KDMFramework :  public virtual ::kdm::core::ModelElement
{
public:

	typedef KDMFramework_ptr ptr_type;

	KDMFramework();
	virtual ~KDMFramework();

	// Typedefs
	typedef ::e4c::impl::reference< KDMFramework__audit_tag > _audit_t;
	typedef ::e4c::impl::reference< KDMFramework__extensionFamily_tag > _extensionFamily_t;
	typedef ::e4c::impl::attribute< KDMFramework__name_tag > _name_t;

	
	// Members
	_audit_t audit;
	_extensionFamily_t extensionFamily;
	_name_t name;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
