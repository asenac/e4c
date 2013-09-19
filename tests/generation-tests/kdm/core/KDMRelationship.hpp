
#ifndef EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP
#define EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


// kdm::core::KDMRelationship
class KDMRelationship :  public virtual ::kdm::core::ModelElement
{
public:

	typedef KDMRelationship_ptr ptr_type;
	
	virtual ~KDMRelationship();

	
	
	
	
protected:
	KDMRelationship();

	
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP
