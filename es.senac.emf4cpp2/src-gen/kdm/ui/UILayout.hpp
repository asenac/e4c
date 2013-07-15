
#ifndef EMF_CPP_KDM_UI_UILAYOUT__HPP
#define EMF_CPP_KDM_UI_UILAYOUT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UILayout
class UILayout :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef UILayout_ptr ptr_type;

	UILayout();
	virtual ~UILayout();

	// Typedefs
	typedef ::e4c::impl::reference< UILayout__to_tag > _to_t;
	typedef ::e4c::impl::reference< UILayout__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UILAYOUT__HPP
