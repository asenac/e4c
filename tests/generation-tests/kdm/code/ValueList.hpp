
#ifndef EMF_CPP_KDM_CODE_VALUELIST__HPP
#define EMF_CPP_KDM_CODE_VALUELIST__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ValueElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_vector < kdm::code::ValueElement > valueElement_t;

	
	// TODO

	
protected:

	valueElement_t m_valueElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUELIST__HPP
