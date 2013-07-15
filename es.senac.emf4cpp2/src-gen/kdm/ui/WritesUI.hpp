
#ifndef EMF_CPP_KDM_UI_WRITESUI__HPP
#define EMF_CPP_KDM_UI_WRITESUI__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::WritesUI
class WritesUI :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef WritesUI_ptr ptr_type;

	WritesUI();
	virtual ~WritesUI();

	// Typedefs
	typedef ::e4c::impl::reference< WritesUI__to_tag > _to_t;
	typedef ::e4c::impl::reference< WritesUI__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_WRITESUI__HPP
