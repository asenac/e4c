
#ifndef EMF_CPP_KDM_UI_DISPLAYS__HPP
#define EMF_CPP_KDM_UI_DISPLAYS__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


// kdm::ui::Displays
class Displays :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef Displays_ptr ptr_type;
	
	Displays();
	virtual ~Displays();

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


#endif // EMF_CPP_KDM_UI_DISPLAYS__HPP
