
#ifndef EMF_CPP_KDM_KDM_KDMMODEL__HPP
#define EMF_CPP_KDM_KDM_KDMMODEL__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/KDMFramework.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::KDMModel
class KDMModel :  public virtual ::kdm::kdm::KDMFramework
{
public:

	typedef KDMModel_ptr ptr_type;
	
	virtual ~KDMModel();

	
	
	
	
protected:
	KDMModel();

	
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMMODEL__HPP
