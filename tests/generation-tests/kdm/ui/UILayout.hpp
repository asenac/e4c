
#ifndef EMF_CPP_KDM_UI_UILAYOUT__HPP
#define EMF_CPP_KDM_UI_UILAYOUT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

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

	typedef kdm::ui::UIResource_ptr to_t;
	typedef kdm::ui::UIResource_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UILAYOUT__HPP
