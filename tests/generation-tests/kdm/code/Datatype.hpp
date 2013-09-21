
#ifndef EMF_CPP_KDM_CODE_DATATYPE__HPP
#define EMF_CPP_KDM_CODE_DATATYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::Datatype
class Datatype :  public virtual ::kdm::code::CodeItem
{
public:

	typedef Datatype_ptr ptr_type;
	
	virtual ~Datatype();

	
	
	

	
		
protected:
	Datatype();

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATATYPE__HPP
