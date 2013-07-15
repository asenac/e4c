
#ifndef EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
#define EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace source
{


// kdm::source::AbstractInventoryElement
class AbstractInventoryElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractInventoryElement_ptr ptr_type;

	AbstractInventoryElement();
	virtual ~AbstractInventoryElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractInventoryElement__inventoryRelation_tag > _inventoryRelation_t;

	
	// Members
	_inventoryRelation_t inventoryRelation;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
