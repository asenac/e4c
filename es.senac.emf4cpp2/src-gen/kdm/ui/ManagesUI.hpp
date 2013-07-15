
#ifndef EMF_CPP_KDM_UI_MANAGESUI__HPP
#define EMF_CPP_KDM_UI_MANAGESUI__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::ManagesUI
class ManagesUI :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ManagesUI_ptr ptr_type;

	ManagesUI();
	virtual ~ManagesUI();

	// Typedefs
	typedef ::e4c::impl::reference< ManagesUI__to_tag > _to_t;
	typedef ::e4c::impl::reference< ManagesUI__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_MANAGESUI__HPP
