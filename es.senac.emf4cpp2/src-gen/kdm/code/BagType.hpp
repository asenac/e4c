
#ifndef EMF_CPP_KDM_CODE_BAGTYPE__HPP
#define EMF_CPP_KDM_CODE_BAGTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>


namespace kdm
{
namespace code
{


// kdm::code::BagType
class BagType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef BagType_ptr ptr_type;

	BagType();
	virtual ~BagType();

	// Typedefs
	typedef ::e4c::impl::attribute< BagType__size_tag > _size_t;

	
	// Members
	_size_t size;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_BAGTYPE__HPP
