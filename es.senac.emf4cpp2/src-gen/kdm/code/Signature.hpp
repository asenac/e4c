
#ifndef EMF_CPP_KDM_CODE_SIGNATURE__HPP
#define EMF_CPP_KDM_CODE_SIGNATURE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Signature
class Signature :  public virtual ::kdm::code::Datatype
{
public:

	typedef Signature_ptr ptr_type;

	Signature();
	virtual ~Signature();

	// Typedefs
	typedef ::e4c::impl::reference< Signature__parameterUnit_tag > _parameterUnit_t;

	
	// Members
	_parameterUnit_t parameterUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SIGNATURE__HPP
