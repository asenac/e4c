
#ifndef EMF_CPP_KDM_DATA_MANAGESDATA__HPP
#define EMF_CPP_KDM_DATA_MANAGESDATA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ManagesData
class ManagesData :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ManagesData_ptr ptr_type;

	ManagesData();
	virtual ~ManagesData();

	// Typedefs
	typedef ::e4c::impl::reference< ManagesData__to_tag > _to_t;
	typedef ::e4c::impl::reference< ManagesData__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_MANAGESDATA__HPP
