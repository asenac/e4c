
#ifndef EMF_CPP_KDM_CODE_IMPLEMENTATIONOF__HPP
#define EMF_CPP_KDM_CODE_IMPLEMENTATIONOF__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ImplementationOf
class ImplementationOf :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef ImplementationOf_ptr ptr_type;

	ImplementationOf();
	virtual ~ImplementationOf();

	// Typedefs
	typedef ::e4c::impl::reference< ImplementationOf__to_tag > _to_t;
	typedef ::e4c::impl::reference< ImplementationOf__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_IMPLEMENTATIONOF__HPP
