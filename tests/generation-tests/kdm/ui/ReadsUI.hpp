
#ifndef EMF_CPP_KDM_UI_READSUI__HPP
#define EMF_CPP_KDM_UI_READSUI__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


// kdm::ui::ReadsUI
class ReadsUI :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsUI_ptr ptr_type;
	
	ReadsUI();
	virtual ~ReadsUI();

	typedef kdm::ui::UIResource_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_READSUI__HPP
