
#ifndef EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP
#define EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>


namespace kdm
{
namespace data
{


// kdm::data::RelationalTable
class RelationalTable :  public virtual ::kdm::data::ColumnSet
{
public:

	typedef RelationalTable_ptr ptr_type;

	RelationalTable();
	virtual ~RelationalTable();

	// Typedefs
	
	
	// Members
	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP
