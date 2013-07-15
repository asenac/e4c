
#ifndef EMF_CPP_KDM_CODE_EXPANDS__HPP
#define EMF_CPP_KDM_CODE_EXPANDS__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Expands
class Expands :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Expands_ptr ptr_type;

	Expands();
	virtual ~Expands();

	// Typedefs
	typedef ::e4c::impl::reference< Expands__to_tag > _to_t;
	typedef ::e4c::impl::reference< Expands__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_EXPANDS__HPP
