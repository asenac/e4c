
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::AbstractDataRelationship
class AbstractDataRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractDataRelationship_ptr ptr_type;

	AbstractDataRelationship();
	virtual ~AbstractDataRelationship();

	// Typedefs
	
	
	// Members
	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP
