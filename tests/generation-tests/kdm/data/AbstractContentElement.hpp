
#ifndef EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::AbstractContentElement
class AbstractContentElement :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef AbstractContentElement_ptr ptr_type;
	
	virtual ~AbstractContentElement();

	
	
	
	
protected:
	AbstractContentElement();

	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP
