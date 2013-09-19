
#ifndef EMF_CPP_KDM_CODE_COMPUTATIONALOBJECT__HPP
#define EMF_CPP_KDM_CODE_COMPUTATIONALOBJECT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::ComputationalObject
class ComputationalObject :  public virtual ::kdm::code::CodeItem
{
public:

	typedef ComputationalObject_ptr ptr_type;
	
	virtual ~ComputationalObject();

	
	
	
	
protected:
	ComputationalObject();

	
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPUTATIONALOBJECT__HPP
