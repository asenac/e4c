
#ifndef EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>


namespace kdm
{
namespace data
{


// kdm::data::AbstractContentElement
class AbstractContentElement :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef AbstractContentElement_ptr ptr_type;

	AbstractContentElement();
	virtual ~AbstractContentElement();

	// Typedefs
	
	
	// Members
	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP
