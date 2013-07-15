
#ifndef EMF_CPP_KDM_CODE_VALUELIST__HPP
#define EMF_CPP_KDM_CODE_VALUELIST__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ValueElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ValueList
class ValueList :  public virtual ::kdm::code::ValueElement
{
public:

	typedef ValueList_ptr ptr_type;

	ValueList();
	virtual ~ValueList();

	// Typedefs
	typedef ::e4c::impl::reference< ValueList__valueElement_tag > _valueElement_t;

	
	// Members
	_valueElement_t valueElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUELIST__HPP
