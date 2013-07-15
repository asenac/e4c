
#ifndef EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
#define EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::CompositeType
class CompositeType :  public virtual ::kdm::code::Datatype
{
public:

	typedef CompositeType_ptr ptr_type;

	CompositeType();
	virtual ~CompositeType();

	// Typedefs
	typedef ::e4c::impl::reference< CompositeType__itemUnit_tag > _itemUnit_t;

	
	// Members
	_itemUnit_t itemUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPOSITETYPE__HPP
