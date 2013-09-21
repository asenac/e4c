
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

	typedef std::vector < kdm::code::ValueElement_ptr > valueElement_t;

	
	valueElement_t getValueElement() const;


	std::vector < std::unique_ptr < kdm::code::ValueElement > > m_valueElement;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUELIST__HPP
