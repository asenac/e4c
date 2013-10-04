
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


class UIFlow :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef UIFlow_ptr ptr_type;
	
	UIFlow();
	virtual ~UIFlow();

	typedef kdm::ui::AbstractUIElement_ptr to_t;
	typedef kdm::ui::AbstractUIElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::ui::UIFlow public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class UiPackage;

	kdm::ui::AbstractUIElement_ptr m_to;
	kdm::ui::AbstractUIElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::UIFlow protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIFLOW__HPP
