
#ifndef EMF_CPP_KDM_UI_UIFLOW__HPP
#define EMF_CPP_KDM_UI_UIFLOW__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

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

	typedef kdm::ui::AbstractUIElement_ptr to_t;
	typedef kdm::ui::AbstractUIElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::ui::AbstractUIElement_ptr m_to;
	kdm::ui::AbstractUIElement_ptr m_from;

		
protected:

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIFLOW__HPP
