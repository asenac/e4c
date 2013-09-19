
#ifndef EMF_CPP_KDM_CODE_SIGNATURE__HPP
#define EMF_CPP_KDM_CODE_SIGNATURE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_vector < kdm::code::ParameterUnit > parameterUnit_t;

	
	// TODO

	
protected:

	parameterUnit_t m_parameterUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SIGNATURE__HPP
