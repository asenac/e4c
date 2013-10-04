
#ifndef EMF_CPP_KDM_DATA_ALLCONTENT__HPP
#define EMF_CPP_KDM_DATA_ALLCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class AllContent :  public virtual ::kdm::data::ComplexContentType
{
public:

	typedef AllContent_ptr ptr_type;
	
	AllContent();
	virtual ~AllContent();

	
	

	/*PROTECTED REGION ID(kdm::data::AllContent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::AllContent protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ALLCONTENT__HPP
