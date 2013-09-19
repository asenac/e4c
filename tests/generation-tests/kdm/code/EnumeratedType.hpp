
#ifndef EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
#define EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::EnumeratedType
class EnumeratedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef EnumeratedType_ptr ptr_type;
	
	EnumeratedType();
	virtual ~EnumeratedType();

	typedef boost::ptr_vector < kdm::code::Value > value_t;

	
	// TODO

	
protected:

	value_t m_value;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
