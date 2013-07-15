
#ifndef EMF_CPP_KDM_CODE_INCLUDES__HPP
#define EMF_CPP_KDM_CODE_INCLUDES__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Includes
class Includes :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Includes_ptr ptr_type;

	Includes();
	virtual ~Includes();

	// Typedefs
	typedef ::e4c::impl::reference< Includes__to_tag > _to_t;
	typedef ::e4c::impl::reference< Includes__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INCLUDES__HPP
