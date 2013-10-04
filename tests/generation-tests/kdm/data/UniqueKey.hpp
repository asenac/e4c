
#ifndef EMF_CPP_KDM_DATA_UNIQUEKEY__HPP
#define EMF_CPP_KDM_DATA_UNIQUEKEY__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/IndexElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class UniqueKey :  public virtual ::kdm::data::IndexElement
{
public:

	typedef UniqueKey_ptr ptr_type;
	
	UniqueKey();
	virtual ~UniqueKey();

	
	

	/*PROTECTED REGION ID(kdm::data::UniqueKey public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::UniqueKey protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_UNIQUEKEY__HPP
