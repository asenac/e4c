
#ifndef EMF_CPP_KDM_DATA_HASCONTENT__HPP
#define EMF_CPP_KDM_DATA_HASCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::HasContent
class HasContent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef HasContent_ptr ptr_type;

	HasContent();
	virtual ~HasContent();

	// Typedefs
	typedef ::e4c::impl::reference< HasContent__to_tag > _to_t;
	typedef ::e4c::impl::reference< HasContent__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_HASCONTENT__HPP
