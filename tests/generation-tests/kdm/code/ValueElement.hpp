
#ifndef EMF_CPP_KDM_CODE_VALUEELEMENT__HPP
#define EMF_CPP_KDM_CODE_VALUEELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::ValueElement
class ValueElement :  public virtual ::kdm::code::DataElement
{
public:

	typedef ValueElement_ptr ptr_type;
	
	virtual ~ValueElement();

	
	
	

	
		
protected:
	ValueElement();

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUEELEMENT__HPP
