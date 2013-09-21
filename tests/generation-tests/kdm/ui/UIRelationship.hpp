
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

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::ui::AbstractUIElement_ptr m_from;

		
protected:

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
