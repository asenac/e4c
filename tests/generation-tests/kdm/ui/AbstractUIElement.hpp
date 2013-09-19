
#ifndef EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
#define EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


// kdm::ui::AbstractUIElement
class AbstractUIElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractUIElement_ptr ptr_type;
	
	virtual ~AbstractUIElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef boost::ptr_set < kdm::ui::AbstractUIRelationship > UIRelation_t;
	typedef std::vector < kdm::code::AbstractCodeElement_ptr > implementation_t;
	typedef boost::ptr_vector < kdm::action::ActionElement > abstraction_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractUIElement();

	source_t m_source;
	UIRelation_t m_UIRelation;
	implementation_t m_implementation;
	abstraction_t m_abstraction;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
