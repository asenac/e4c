
#ifndef EMF_CPP_KDM_UI_DISPLAYS__HPP
#define EMF_CPP_KDM_UI_DISPLAYS__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< Displays__to_tag > _to_t;
	typedef ::e4c::impl::reference< Displays__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_DISPLAYS__HPP
