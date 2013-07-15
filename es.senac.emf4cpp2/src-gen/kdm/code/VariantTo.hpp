
#ifndef EMF_CPP_KDM_CODE_VARIANTTO__HPP
#define EMF_CPP_KDM_CODE_VARIANTTO__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::VariantTo
class VariantTo :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef VariantTo_ptr ptr_type;

	VariantTo();
	virtual ~VariantTo();

	// Typedefs
	typedef ::e4c::impl::reference< VariantTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< VariantTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VARIANTTO__HPP
