
#ifndef EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP
#define EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::AbstractUIRelationship
class AbstractUIRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractUIRelationship_ptr ptr_type;

	AbstractUIRelationship();
	virtual ~AbstractUIRelationship();

	// Typedefs
	
	
	// Members
	
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP
