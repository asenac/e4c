
#ifndef EMF_CPP_KDM_UI_UIMODEL__HPP
#define EMF_CPP_KDM_UI_UIMODEL__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIModel
class UIModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef UIModel_ptr ptr_type;

	UIModel();
	virtual ~UIModel();

	// Typedefs
	typedef ::e4c::impl::reference< UIModel__UIElement_tag > _UIElement_t;

	
	// Members
	_UIElement_t UIElement;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIMODEL__HPP
