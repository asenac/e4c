
#ifndef EMF_CPP_KDM_DATA_INDEXELEMENT__HPP
#define EMF_CPP_KDM_DATA_INDEXELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>


namespace kdm
{
namespace data
{


// kdm::data::IndexElement
class IndexElement :  public virtual ::kdm::data::DataResource
{
public:

	typedef IndexElement_ptr ptr_type;

	IndexElement();
	virtual ~IndexElement();

	// Typedefs
	typedef ::e4c::impl::reference< IndexElement__implementation_tag > _implementation_t;

	
	// Members
	_implementation_t implementation;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_INDEXELEMENT__HPP
