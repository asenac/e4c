
#ifndef EMF_CPP_KDM_CORE_KDMENTITY__HPP
#define EMF_CPP_KDM_CORE_KDMENTITY__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>


namespace kdm
{
namespace core
{


// kdm::core::KDMEntity
class KDMEntity :  public virtual ::kdm::core::ModelElement
{
public:

	typedef KDMEntity_ptr ptr_type;

	KDMEntity();
	virtual ~KDMEntity();

	// Typedefs
	typedef ::e4c::impl::attribute< KDMEntity__name_tag > _name_t;

	
	// Members
	_name_t name;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_KDMENTITY__HPP
