
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


class AbstractContentElement :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef AbstractContentElement_ptr ptr_type;
	
	virtual ~AbstractContentElement();

	
	

	/*PROTECTED REGION ID(kdm::data::AbstractContentElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractContentElement();

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::AbstractContentElement protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTCONTENTELEMENT__HPP
