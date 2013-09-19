
#ifndef EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
#define EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::AbstractInventoryElement
class AbstractInventoryElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractInventoryElement_ptr ptr_type;
	
	virtual ~AbstractInventoryElement();

	typedef boost::ptr_set < kdm::source::AbstractInventoryRelationship > inventoryRelation_t;

	
	// TODO

	
protected:
	AbstractInventoryElement();

	inventoryRelation_t m_inventoryRelation;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
