
#ifndef EMF_CPP_KDM_CODE_IMPLEMENTS__HPP
#define EMF_CPP_KDM_CODE_IMPLEMENTS__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< Implements__to_tag > _to_t;
	typedef ::e4c::impl::reference< Implements__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_IMPLEMENTS__HPP
