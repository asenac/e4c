
#ifndef EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP
#define EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>


namespace kdm
{
namespace data
{


// kdm::data::RelationalView
class RelationalView :  public virtual ::kdm::data::ColumnSet
{
public:

	typedef RelationalView_ptr ptr_type;

	RelationalView();
	virtual ~RelationalView();

	// Typedefs
	
	
	// Members
	
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP
