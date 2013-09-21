
#ifndef EMF_CPP_SVG_GROUPINGELEMENT__HPP
#define EMF_CPP_SVG_GROUPINGELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::GroupingElement
class GroupingElement :  public virtual ::SVG::StructuralElement
{
public:

	typedef GroupingElement_ptr ptr_type;
	
	virtual ~GroupingElement();

	typedef std::vector < SVG::Element_ptr > groupContent_t;

	
	groupContent_t getGroupContent() const;


	std::vector < std::unique_ptr < SVG::Element > > m_groupContent;

		
protected:
	GroupingElement();

};

} // SVG


#endif // EMF_CPP_SVG_GROUPINGELEMENT__HPP
