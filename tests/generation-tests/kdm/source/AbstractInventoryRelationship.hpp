
#ifndef EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP
#define EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::AbstractInventoryRelationship
class AbstractInventoryRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractInventoryRelationship_ptr ptr_type;
	
	virtual ~AbstractInventoryRelationship();

	
	
	

	
		
protected:
	AbstractInventoryRelationship();

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP
