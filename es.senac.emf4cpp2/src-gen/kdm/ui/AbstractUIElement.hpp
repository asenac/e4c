
#ifndef EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
#define EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::AbstractUIElement
class AbstractUIElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractUIElement_ptr ptr_type;

	AbstractUIElement();
	virtual ~AbstractUIElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractUIElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractUIElement__UIRelation_tag > _UIRelation_t;
	typedef ::e4c::impl::reference< AbstractUIElement__implementation_tag > _implementation_t;
	typedef ::e4c::impl::reference< AbstractUIElement__abstraction_tag > _abstraction_t;

	
	// Members
	_source_t source;
	_UIRelation_t UIRelation;
	_implementation_t implementation;
	_abstraction_t abstraction;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
