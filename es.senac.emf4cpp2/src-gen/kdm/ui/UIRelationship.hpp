
#ifndef EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
#define EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIRelationship
class UIRelationship :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef UIRelationship_ptr ptr_type;

	UIRelationship();
	virtual ~UIRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< UIRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< UIRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
