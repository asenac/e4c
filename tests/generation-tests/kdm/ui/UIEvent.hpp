
#ifndef EMF_CPP_KDM_UI_UIEVENT__HPP
#define EMF_CPP_KDM_UI_UIEVENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIEvent :  public virtual ::kdm::ui::AbstractUIElement
{
public:

	typedef UIEvent_ptr ptr_type;
	
	UIEvent();
	virtual ~UIEvent();

	typedef ::kdm::core::String kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(kdm::ui::UIEvent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class UiPackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::UIEvent protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIEVENT__HPP
