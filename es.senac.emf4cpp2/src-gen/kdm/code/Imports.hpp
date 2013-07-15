
#ifndef EMF_CPP_KDM_CODE_IMPORTS__HPP
#define EMF_CPP_KDM_CODE_IMPORTS__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Imports
class Imports :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Imports_ptr ptr_type;

	Imports();
	virtual ~Imports();

	// Typedefs
	typedef ::e4c::impl::reference< Imports__to_tag > _to_t;
	typedef ::e4c::impl::reference< Imports__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_IMPORTS__HPP
