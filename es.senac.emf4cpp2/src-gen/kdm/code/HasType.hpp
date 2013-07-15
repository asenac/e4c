
#ifndef EMF_CPP_KDM_CODE_HASTYPE__HPP
#define EMF_CPP_KDM_CODE_HASTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::HasType
class HasType :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef HasType_ptr ptr_type;

	HasType();
	virtual ~HasType();

	// Typedefs
	typedef ::e4c::impl::reference< HasType__to_tag > _to_t;
	typedef ::e4c::impl::reference< HasType__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_HASTYPE__HPP
