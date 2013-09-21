
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

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::ui::AbstractUIRelationship_ptr > UIRelation_t;
	typedef std::set < kdm::code::AbstractCodeElement_ptr > implementation_t;
	typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;

	
	source_t getSource() const;
	UIRelation_t getUIRelation() const;
	implementation_t getImplementation() const;
	abstraction_t getAbstraction() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::ui::AbstractUIRelationship > > m_UIRelation;
	std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;
	std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;

		
protected:
	AbstractUIElement();

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
