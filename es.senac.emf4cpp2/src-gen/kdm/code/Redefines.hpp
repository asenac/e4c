
#ifndef EMF_CPP_KDM_CODE_REDEFINES__HPP
#define EMF_CPP_KDM_CODE_REDEFINES__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Redefines
class Redefines :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Redefines_ptr ptr_type;

	Redefines();
	virtual ~Redefines();

	// Typedefs
	typedef ::e4c::impl::reference< Redefines__to_tag > _to_t;
	typedef ::e4c::impl::reference< Redefines__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_REDEFINES__HPP
