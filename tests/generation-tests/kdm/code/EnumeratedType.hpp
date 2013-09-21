
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

	typedef std::vector < kdm::code::Value_ptr > value_t;

	
	value_t getValue() const;


	std::vector < std::unique_ptr < kdm::code::Value > > m_value;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ENUMERATEDTYPE__HPP
