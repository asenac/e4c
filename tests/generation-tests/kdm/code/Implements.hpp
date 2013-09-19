
#ifndef EMF_CPP_KDM_CODE_IMPLEMENTS__HPP
#define EMF_CPP_KDM_CODE_IMPLEMENTS__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::Implements
class Implements :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Implements_ptr ptr_type;
	
	Implements();
	virtual ~Implements();

	typedef kdm::code::CodeItem_ptr to_t;
	typedef kdm::code::CodeItem_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_IMPLEMENTS__HPP
