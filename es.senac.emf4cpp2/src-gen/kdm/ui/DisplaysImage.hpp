
#ifndef EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
#define EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::DisplaysImage
class DisplaysImage :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef DisplaysImage_ptr ptr_type;

	DisplaysImage();
	virtual ~DisplaysImage();

	// Typedefs
	typedef ::e4c::impl::reference< DisplaysImage__to_tag > _to_t;
	typedef ::e4c::impl::reference< DisplaysImage__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
