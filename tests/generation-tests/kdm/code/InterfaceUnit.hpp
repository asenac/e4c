
#ifndef EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
#define EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::InterfaceUnit
class InterfaceUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef InterfaceUnit_ptr ptr_type;
	
	InterfaceUnit();
	virtual ~InterfaceUnit();

	typedef boost::ptr_vector < kdm::code::CodeItem > codeElement_t;

	
	// TODO

	
protected:

	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
