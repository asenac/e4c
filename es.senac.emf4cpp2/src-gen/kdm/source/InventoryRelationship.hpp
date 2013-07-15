
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYRELATIONSHIP__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYRELATIONSHIP__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>


namespace kdm
{
namespace source
{


// kdm::source::InventoryRelationship
class InventoryRelationship :  public virtual ::kdm::source::AbstractInventoryRelationship
{
public:

	typedef InventoryRelationship_ptr ptr_type;

	InventoryRelationship();
	virtual ~InventoryRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< InventoryRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< InventoryRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYRELATIONSHIP__HPP
