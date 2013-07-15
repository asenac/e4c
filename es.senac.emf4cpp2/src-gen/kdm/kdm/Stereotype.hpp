
#ifndef EMF_CPP_KDM_KDM_STEREOTYPE__HPP
#define EMF_CPP_KDM_KDM_STEREOTYPE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::Stereotype
class Stereotype :  public virtual ::kdm::core::Element
{
public:

	typedef Stereotype_ptr ptr_type;

	Stereotype();
	virtual ~Stereotype();

	// Typedefs
	typedef ::e4c::impl::reference< Stereotype__tag_tag > _tag_t;
	typedef ::e4c::impl::attribute< Stereotype__name_tag > _name_t;
	typedef ::e4c::impl::attribute< Stereotype__type_tag > _type_t;

	
	// Members
	_tag_t tag;
	_name_t name;
	_type_t type;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_STEREOTYPE__HPP
