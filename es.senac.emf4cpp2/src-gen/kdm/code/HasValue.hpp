
#ifndef EMF_CPP_KDM_CODE_HASVALUE__HPP
#define EMF_CPP_KDM_CODE_HASVALUE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::HasValue
class HasValue :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef HasValue_ptr ptr_type;

	HasValue();
	virtual ~HasValue();

	// Typedefs
	typedef ::e4c::impl::reference< HasValue__to_tag > _to_t;
	typedef ::e4c::impl::reference< HasValue__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_HASVALUE__HPP
