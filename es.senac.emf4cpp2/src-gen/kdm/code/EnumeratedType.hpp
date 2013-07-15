
#ifndef EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
#define EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::EnumeratedType
class EnumeratedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef EnumeratedType_ptr ptr_type;

	EnumeratedType();
	virtual ~EnumeratedType();

	// Typedefs
	typedef ::e4c::impl::reference< EnumeratedType__value_tag > _value_t;

	
	// Members
	_value_t value;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
