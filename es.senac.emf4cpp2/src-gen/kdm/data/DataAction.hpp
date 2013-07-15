
#ifndef EMF_CPP_KDM_DATA_DATAACTION__HPP
#define EMF_CPP_KDM_DATA_DATAACTION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DataAction
class DataAction :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef DataAction_ptr ptr_type;

	DataAction();
	virtual ~DataAction();

	// Typedefs
	typedef ::e4c::impl::attribute< DataAction__kind_tag > _kind_t;
	typedef ::e4c::impl::reference< DataAction__implementation_tag > _implementation_t;
	typedef ::e4c::impl::reference< DataAction__dataElement_tag > _dataElement_t;

	
	// Members
	_kind_t kind;
	_implementation_t implementation;
	_dataElement_t dataElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAACTION__HPP
