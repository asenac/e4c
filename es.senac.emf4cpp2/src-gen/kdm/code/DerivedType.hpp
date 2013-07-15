
#ifndef EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::DerivedType
class DerivedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DerivedType_ptr ptr_type;

	DerivedType();
	virtual ~DerivedType();

	// Typedefs
	typedef ::e4c::impl::reference< DerivedType__itemUnit_tag > _itemUnit_t;

	
	// Members
	_itemUnit_t itemUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
