
#ifndef EMF_CPP_KDM_DATA_CATALOG__HPP
#define EMF_CPP_KDM_DATA_CATALOG__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>


namespace kdm
{
namespace data
{


// kdm::data::Catalog
class Catalog :  public virtual ::kdm::data::DataContainer
{
public:

	typedef Catalog_ptr ptr_type;

	Catalog();
	virtual ~Catalog();

	// Typedefs
	
	
	// Members
	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CATALOG__HPP
