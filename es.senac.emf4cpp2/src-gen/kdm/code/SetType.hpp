
#ifndef EMF_CPP_KDM_CODE_SETTYPE__HPP
#define EMF_CPP_KDM_CODE_SETTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>


namespace kdm
{
namespace code
{


// kdm::code::SetType
class SetType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef SetType_ptr ptr_type;

	SetType();
	virtual ~SetType();

	// Typedefs
	typedef ::e4c::impl::attribute< SetType__size_tag > _size_t;

	
	// Members
	_size_t size;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SETTYPE__HPP
