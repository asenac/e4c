
#ifndef EMF_CPP_KDM_UI_UIFLOW__HPP
#define EMF_CPP_KDM_UI_UIFLOW__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIFlow
class UIFlow :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef UIFlow_ptr ptr_type;

	UIFlow();
	virtual ~UIFlow();

	// Typedefs
	typedef ::e4c::impl::reference< UIFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< UIFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIFLOW__HPP
