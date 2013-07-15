
#ifndef EMF_CPP_KDM_KDM_ATTRIBUTE__HPP
#define EMF_CPP_KDM_KDM_ATTRIBUTE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::Attribute
class Attribute :  public virtual ::kdm::core::Element
{
public:

	typedef Attribute_ptr ptr_type;

	Attribute();
	virtual ~Attribute();

	// Typedefs
	typedef ::e4c::impl::attribute< Attribute__tag_tag > _tag_t;
	typedef ::e4c::impl::attribute< Attribute__value_tag > _value_t;

	
	// Members
	_tag_t tag;
	_value_t value;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_ATTRIBUTE__HPP
