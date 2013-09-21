
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

	typedef std::set < kdm::source::AbstractInventoryRelationship_ptr > inventoryRelation_t;

	
	inventoryRelation_t getInventoryRelation() const;


	std::set < std::unique_ptr < kdm::source::AbstractInventoryRelationship > > m_inventoryRelation;

		
protected:
	AbstractInventoryElement();

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
