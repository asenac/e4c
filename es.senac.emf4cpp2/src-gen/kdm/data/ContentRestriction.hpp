
#ifndef EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP
#define EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ContentRestriction
class ContentRestriction :  public virtual ::kdm::data::AbstractContentElement
{
public:

	typedef ContentRestriction_ptr ptr_type;

	ContentRestriction();
	virtual ~ContentRestriction();

	// Typedefs
	typedef ::e4c::impl::attribute< ContentRestriction__kind_tag > _kind_t;
	typedef ::e4c::impl::attribute< ContentRestriction__value_tag > _value_t;

	
	// Members
	_kind_t kind;
	_value_t value;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTRESTRICTION__HPP
