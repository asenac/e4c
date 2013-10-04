
#ifndef EMF_CPP_KDM_DATA_CATALOG__HPP
#define EMF_CPP_KDM_DATA_CATALOG__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class Catalog :  public virtual ::kdm::data::DataContainer
{
public:

	typedef Catalog_ptr ptr_type;
	
	Catalog();
	virtual ~Catalog();

	
	

	/*PROTECTED REGION ID(kdm::data::Catalog public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::Catalog protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CATALOG__HPP
