
#ifndef EMF_CPP_KDM_CODE_GENERATEDFROM__HPP
#define EMF_CPP_KDM_CODE_GENERATEDFROM__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::GeneratedFrom
class GeneratedFrom :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef GeneratedFrom_ptr ptr_type;

	GeneratedFrom();
	virtual ~GeneratedFrom();

	// Typedefs
	typedef ::e4c::impl::reference< GeneratedFrom__to_tag > _to_t;
	typedef ::e4c::impl::reference< GeneratedFrom__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_GENERATEDFROM__HPP
