
#ifndef EMF_CPP_KDM_DATA_EXTENSIONTO__HPP
#define EMF_CPP_KDM_DATA_EXTENSIONTO__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ExtensionTo
class ExtensionTo :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef ExtensionTo_ptr ptr_type;

	ExtensionTo();
	virtual ~ExtensionTo();

	// Typedefs
	typedef ::e4c::impl::reference< ExtensionTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< ExtensionTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_EXTENSIONTO__HPP
