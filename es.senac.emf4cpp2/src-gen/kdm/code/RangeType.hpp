
#ifndef EMF_CPP_KDM_CODE_RANGETYPE__HPP
#define EMF_CPP_KDM_CODE_RANGETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>


namespace kdm
{
namespace code
{


// kdm::code::RangeType
class RangeType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef RangeType_ptr ptr_type;

	RangeType();
	virtual ~RangeType();

	// Typedefs
	typedef ::e4c::impl::attribute< RangeType__lower_tag > _lower_t;
	typedef ::e4c::impl::attribute< RangeType__upper_tag > _upper_t;

	
	// Members
	_lower_t lower;
	_upper_t upper;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_RANGETYPE__HPP
