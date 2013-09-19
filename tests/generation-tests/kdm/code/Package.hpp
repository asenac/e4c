
#ifndef EMF_CPP_KDM_CODE_PACKAGE__HPP
#define EMF_CPP_KDM_CODE_PACKAGE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Module.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::Package
class Package :  public virtual ::kdm::code::Module
{
public:

	typedef Package_ptr ptr_type;
	
	Package();
	virtual ~Package();

	
	
	
	
protected:

	
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PACKAGE__HPP
