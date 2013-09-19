#ifndef EMF_CPP_SVG_PACKAGE_HPP
#define EMF_CPP_SVG_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <SVG/fwd.hpp>

namespace SVG
{


class SVGPackage : public ::ecore::EPackage
{
public:
    static const SVGPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Element() const;
 	e4c::tag_t getTag_StructuralElement() const;
 	e4c::tag_t getTag_Image() const;
 	e4c::tag_t getTag_Svg() const;
 	e4c::tag_t getTag_GroupingElement() const;
 	e4c::tag_t getTag_G() const;
 	e4c::tag_t getTag_Defs() const;
 	e4c::tag_t getTag_Symbol() const;
 	e4c::tag_t getTag_Use() const;
 	e4c::tag_t getTag_GraphicalElement() const;
 	e4c::tag_t getTag_Shape() const;
 	e4c::tag_t getTag_TextElement() const;
 	e4c::tag_t getTag_Rect() const;
 	e4c::tag_t getTag_Circle() const;
 	e4c::tag_t getTag_Ellipse() const;
 	e4c::tag_t getTag_Line() const;
 	e4c::tag_t getTag_Polyline() const;
 	e4c::tag_t getTag_Polygon() const;
 	e4c::tag_t getTag_Path() const;
 	e4c::tag_t getTag_Point() const;
 	e4c::tag_t getTag_Marker() const;
 	e4c::tag_t getTag_Text() const;
 	e4c::tag_t getTag_Tspan() const;
 	e4c::tag_t getTag_Tref() const;
 	e4c::tag_t getTag_Attribute() const;
 	e4c::tag_t getTag_Transform() const;
 	e4c::tag_t getTag_Scale() const;
 	e4c::tag_t getTag_Translate() const;
 	e4c::tag_t getTag_Rotate() const;
 	e4c::tag_t getTag_Visibility() const;
 	e4c::tag_t getTag_FontWeight() const;
 	e4c::tag_t getTag_FontStyle() const;
 	e4c::tag_t getTag_Dimension() const;
 	e4c::tag_t getTag_Coordinates() const;
 	e4c::tag_t getTag_RelativeCoord() const;
 	e4c::tag_t getTag_AbsoluteCoord() const;
 	e4c::tag_t getTag_ReferencedFile() const;
 	e4c::tag_t getTag_SvgFile() const;
 
 	// Structural features
 	e4c::tag_t getTag_Element__owner() const;
 	e4c::tag_t getTag_Element__target() const;
 	e4c::tag_t getTag_Element__attribute() const;
 	e4c::tag_t getTag_Element__position() const;
 	e4c::tag_t getTag_Element__size() const;
 	e4c::tag_t getTag_Element__root() const;
 	e4c::tag_t getTag_Element__fill() const;
 	e4c::tag_t getTag_Element__viewBox() const;
 	e4c::tag_t getTag_Element__group() const;
 	e4c::tag_t getTag_Element__identifier() const;
 	e4c::tag_t getTag_Element__drawsMarker() const;
 	e4c::tag_t getTag_Image__referee() const;
 	e4c::tag_t getTag_Svg__owner_SVG() const;
 	e4c::tag_t getTag_Svg__children() const;
 	e4c::tag_t getTag_Svg__namespace() const;
 	e4c::tag_t getTag_Svg__version() const;
 	e4c::tag_t getTag_Svg__baseProfile() const;
 	e4c::tag_t getTag_GroupingElement__groupContent() const;
 	e4c::tag_t getTag_G__name() const;
 	e4c::tag_t getTag_Use__use() const;
 	e4c::tag_t getTag_GraphicalElement__stroke() const;
 	e4c::tag_t getTag_TextElement__rotate() const;
 	e4c::tag_t getTag_TextElement__textLength() const;
 	e4c::tag_t getTag_TextElement__fontSize() const;
 	e4c::tag_t getTag_Rect__rx() const;
 	e4c::tag_t getTag_Rect__ry() const;
 	e4c::tag_t getTag_Line__between() const;
 	e4c::tag_t getTag_Line__markerEnd() const;
 	e4c::tag_t getTag_Line__markerStart() const;
 	e4c::tag_t getTag_Polyline__waypoints() const;
 	e4c::tag_t getTag_Polyline__strokeDashArray() const;
 	e4c::tag_t getTag_Polyline__markerEnd() const;
 	e4c::tag_t getTag_Polyline__markerStart() const;
 	e4c::tag_t getTag_Polygon__waypoints() const;
 	e4c::tag_t getTag_Polygon__markerEnd() const;
 	e4c::tag_t getTag_Polygon__markerStart() const;
 	e4c::tag_t getTag_Path__pathLength() const;
 	e4c::tag_t getTag_Path__d() const;
 	e4c::tag_t getTag_Path__markerEnd() const;
 	e4c::tag_t getTag_Path__markerStart() const;
 	e4c::tag_t getTag_Marker__markerUnits() const;
 	e4c::tag_t getTag_Marker__refX() const;
 	e4c::tag_t getTag_Marker__refY() const;
 	e4c::tag_t getTag_Marker__markerWidth() const;
 	e4c::tag_t getTag_Marker__markerHeight() const;
 	e4c::tag_t getTag_Marker__orient() const;
 	e4c::tag_t getTag_Marker__drawing() const;
 	e4c::tag_t getTag_Text__lengthAdjust() const;
 	e4c::tag_t getTag_Text__content() const;
 	e4c::tag_t getTag_Tspan__content() const;
 	e4c::tag_t getTag_Tref__xlinkHref() const;
 	e4c::tag_t getTag_Attribute__attOwner() const;
 	e4c::tag_t getTag_Scale__sx() const;
 	e4c::tag_t getTag_Scale__sy() const;
 	e4c::tag_t getTag_Translate__tx() const;
 	e4c::tag_t getTag_Translate__ty() const;
 	e4c::tag_t getTag_Rotate__angle() const;
 	e4c::tag_t getTag_Rotate__cx() const;
 	e4c::tag_t getTag_Rotate__cy() const;
 	e4c::tag_t getTag_Visibility__visible() const;
 	e4c::tag_t getTag_FontWeight__bold() const;
 	e4c::tag_t getTag_FontStyle__italic() const;
 	e4c::tag_t getTag_Dimension__width() const;
 	e4c::tag_t getTag_Dimension__height() const;
 	e4c::tag_t getTag_Coordinates__x() const;
 	e4c::tag_t getTag_Coordinates__y() const;
 	e4c::tag_t getTag_ReferencedFile__referer() const;
 	e4c::tag_t getTag_ReferencedFile__name() const;
 	e4c::tag_t getTag_SvgFile__tag() const;
 	e4c::tag_t getTag_SvgFile__elements() const;

protected:
    SVGPackage();
};

} // SVG


#endif // EMF_CPP_SVG_PACKAGE_HPP
