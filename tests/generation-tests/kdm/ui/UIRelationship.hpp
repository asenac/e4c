
#ifndef EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
#define EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

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

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::ui::AbstractUIElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
