
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

	typedef boost::ptr_vector < SVG::Element > groupContent_t;

	
	// TODO

	
protected:
	GroupingElement();

	groupContent_t m_groupContent;

};

} // SVG


#endif // EMF_CPP_SVG_GROUPINGELEMENT__HPP
