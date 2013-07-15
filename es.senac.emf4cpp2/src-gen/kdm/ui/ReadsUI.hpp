
#ifndef EMF_CPP_KDM_UI_READSUI__HPP
#define EMF_CPP_KDM_UI_READSUI__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::ReadsUI
class ReadsUI :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsUI_ptr ptr_type;

	ReadsUI();
	virtual ~ReadsUI();

	// Typedefs
	typedef ::e4c::impl::reference< ReadsUI__to_tag > _to_t;
	typedef ::e4c::impl::reference< ReadsUI__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_READSUI__HPP
