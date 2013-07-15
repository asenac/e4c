
#ifndef EMF_CPP_KDM_KDM_AUDIT__HPP
#define EMF_CPP_KDM_KDM_AUDIT__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::Audit
class Audit :  public virtual ::kdm::core::Element
{
public:

	typedef Audit_ptr ptr_type;

	Audit();
	virtual ~Audit();

	// Typedefs
	typedef ::e4c::impl::attribute< Audit__description_tag > _description_t;
	typedef ::e4c::impl::attribute< Audit__author_tag > _author_t;
	typedef ::e4c::impl::attribute< Audit__date_tag > _date_t;

	
	// Members
	_description_t description;
	_author_t author;
	_date_t date;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_AUDIT__HPP
