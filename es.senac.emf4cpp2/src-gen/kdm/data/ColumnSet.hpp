
#ifndef EMF_CPP_KDM_DATA_COLUMNSET__HPP
#define EMF_CPP_KDM_DATA_COLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ColumnSet
class ColumnSet :  public virtual ::kdm::data::DataContainer
{
public:

	typedef ColumnSet_ptr ptr_type;

	ColumnSet();
	virtual ~ColumnSet();

	// Typedefs
	typedef ::e4c::impl::reference< ColumnSet__itemUnit_tag > _itemUnit_t;

	
	// Members
	_itemUnit_t itemUnit;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COLUMNSET__HPP
