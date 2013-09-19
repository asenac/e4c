
#ifndef EMF_CPP_SVG_ELEMENT__HPP
#define EMF_CPP_SVG_ELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Element
class Element
{
public:

	typedef Element_ptr ptr_type;
	
	virtual ~Element();

	typedef std::vector < SVG::SvgFile_ptr > owner_t;
	typedef std::vector < SVG::Use_ptr > target_t;
	typedef std::vector < SVG::Attribute_ptr > attribute_t;
	typedef std::unique_ptr < SVG::Coordinates > position_t;
	typedef std::unique_ptr < SVG::Dimension > size_t;
	typedef SVG::Svg_ptr root_t;
	typedef int fill_t;
	typedef int viewBox_t;
	typedef SVG::GroupingElement_ptr group_t;
	typedef int identifier_t;
	typedef SVG::Marker_ptr drawsMarker_t;

	
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	void setFill(fill_t _fill);
	fill_t getFill() const;
	void setViewBox(viewBox_t _viewBox);
	viewBox_t getViewBox() const;
	// TODO
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	// TODO

	
protected:
	Element();

	owner_t m_owner;
	target_t m_target;
	attribute_t m_attribute;
	position_t m_position;
	size_t m_size;
	root_t m_root;
	fill_t m_fill;
	viewBox_t m_viewBox;
	group_t m_group;
	identifier_t m_identifier;
	drawsMarker_t m_drawsMarker;

};

} // SVG


#endif // EMF_CPP_SVG_ELEMENT__HPP
