
#ifndef EMF_CPP_KDM_CODE_EXTENDS__HPP
#define EMF_CPP_KDM_CODE_EXTENDS__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Extends
class Extends :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Extends_ptr ptr_type;

	Extends();
	virtual ~Extends();

	// Typedefs
	typedef ::e4c::impl::reference< Extends__to_tag > _to_t;
	typedef ::e4c::impl::reference< Extends__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_EXTENDS__HPP
