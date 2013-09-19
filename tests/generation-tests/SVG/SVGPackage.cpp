#include "SVGPackage.hpp"
#include "SVGFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace SVG;

SVGPackage::SVGPackage()
{
	m_eFactoryInstance = SVGFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const SVGPackage_ptr SVGPackage::_instance()
{
	static SVGPackage __instance;
	return &__instance;
}

e4c::tag_t SVGPackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t SVGPackage::getTag_StructuralElement() const
{
	return e4c::tag< StructuralElement >::get();
}
 
e4c::tag_t SVGPackage::getTag_Image() const
{
	return e4c::tag< Image >::get();
}
 
e4c::tag_t SVGPackage::getTag_Svg() const
{
	return e4c::tag< Svg >::get();
}
 
e4c::tag_t SVGPackage::getTag_GroupingElement() const
{
	return e4c::tag< GroupingElement >::get();
}
 
e4c::tag_t SVGPackage::getTag_G() const
{
	return e4c::tag< G >::get();
}
 
e4c::tag_t SVGPackage::getTag_Defs() const
{
	return e4c::tag< Defs >::get();
}
 
e4c::tag_t SVGPackage::getTag_Symbol() const
{
	return e4c::tag< Symbol >::get();
}
 
e4c::tag_t SVGPackage::getTag_Use() const
{
	return e4c::tag< Use >::get();
}
 
e4c::tag_t SVGPackage::getTag_GraphicalElement() const
{
	return e4c::tag< GraphicalElement >::get();
}
 
e4c::tag_t SVGPackage::getTag_Shape() const
{
	return e4c::tag< Shape >::get();
}
 
e4c::tag_t SVGPackage::getTag_TextElement() const
{
	return e4c::tag< TextElement >::get();
}
 
e4c::tag_t SVGPackage::getTag_Rect() const
{
	return e4c::tag< Rect >::get();
}
 
e4c::tag_t SVGPackage::getTag_Circle() const
{
	return e4c::tag< Circle >::get();
}
 
e4c::tag_t SVGPackage::getTag_Ellipse() const
{
	return e4c::tag< Ellipse >::get();
}
 
e4c::tag_t SVGPackage::getTag_Line() const
{
	return e4c::tag< Line >::get();
}
 
e4c::tag_t SVGPackage::getTag_Polyline() const
{
	return e4c::tag< Polyline >::get();
}
 
e4c::tag_t SVGPackage::getTag_Polygon() const
{
	return e4c::tag< Polygon >::get();
}
 
e4c::tag_t SVGPackage::getTag_Path() const
{
	return e4c::tag< Path >::get();
}
 
e4c::tag_t SVGPackage::getTag_Point() const
{
	return e4c::tag< Point >::get();
}
 
e4c::tag_t SVGPackage::getTag_Marker() const
{
	return e4c::tag< Marker >::get();
}
 
e4c::tag_t SVGPackage::getTag_Text() const
{
	return e4c::tag< Text >::get();
}
 
e4c::tag_t SVGPackage::getTag_Tspan() const
{
	return e4c::tag< Tspan >::get();
}
 
e4c::tag_t SVGPackage::getTag_Tref() const
{
	return e4c::tag< Tref >::get();
}
 
e4c::tag_t SVGPackage::getTag_Attribute() const
{
	return e4c::tag< Attribute >::get();
}
 
e4c::tag_t SVGPackage::getTag_Transform() const
{
	return e4c::tag< Transform >::get();
}
 
e4c::tag_t SVGPackage::getTag_Scale() const
{
	return e4c::tag< Scale >::get();
}
 
e4c::tag_t SVGPackage::getTag_Translate() const
{
	return e4c::tag< Translate >::get();
}
 
e4c::tag_t SVGPackage::getTag_Rotate() const
{
	return e4c::tag< Rotate >::get();
}
 
e4c::tag_t SVGPackage::getTag_Visibility() const
{
	return e4c::tag< Visibility >::get();
}
 
e4c::tag_t SVGPackage::getTag_FontWeight() const
{
	return e4c::tag< FontWeight >::get();
}
 
e4c::tag_t SVGPackage::getTag_FontStyle() const
{
	return e4c::tag< FontStyle >::get();
}
 
e4c::tag_t SVGPackage::getTag_Dimension() const
{
	return e4c::tag< Dimension >::get();
}
 
e4c::tag_t SVGPackage::getTag_Coordinates() const
{
	return e4c::tag< Coordinates >::get();
}
 
e4c::tag_t SVGPackage::getTag_RelativeCoord() const
{
	return e4c::tag< RelativeCoord >::get();
}
 
e4c::tag_t SVGPackage::getTag_AbsoluteCoord() const
{
	return e4c::tag< AbsoluteCoord >::get();
}
 
e4c::tag_t SVGPackage::getTag_ReferencedFile() const
{
	return e4c::tag< ReferencedFile >::get();
}
 
e4c::tag_t SVGPackage::getTag_SvgFile() const
{
	return e4c::tag< SvgFile >::get();
}
 
e4c::tag_t SVGPackage::getTag_Element__owner() const
{
	return e4c::tag< Element__owner_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__target() const
{
	return e4c::tag< Element__target_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__attribute() const
{
	return e4c::tag< Element__attribute_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__position() const
{
	return e4c::tag< Element__position_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__size() const
{
	return e4c::tag< Element__size_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__root() const
{
	return e4c::tag< Element__root_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__fill() const
{
	return e4c::tag< Element__fill_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__viewBox() const
{
	return e4c::tag< Element__viewBox_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__group() const
{
	return e4c::tag< Element__group_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__identifier() const
{
	return e4c::tag< Element__identifier_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Element__drawsMarker() const
{
	return e4c::tag< Element__drawsMarker_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Image__referee() const
{
	return e4c::tag< Image__referee_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Svg__owner_SVG() const
{
	return e4c::tag< Svg__owner_SVG_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Svg__children() const
{
	return e4c::tag< Svg__children_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Svg__namespace() const
{
	return e4c::tag< Svg__namespace_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Svg__version() const
{
	return e4c::tag< Svg__version_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Svg__baseProfile() const
{
	return e4c::tag< Svg__baseProfile_tag >::get();
}

e4c::tag_t SVGPackage::getTag_GroupingElement__groupContent() const
{
	return e4c::tag< GroupingElement__groupContent_tag >::get();
}

e4c::tag_t SVGPackage::getTag_G__name() const
{
	return e4c::tag< G__name_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Use__use() const
{
	return e4c::tag< Use__use_tag >::get();
}

e4c::tag_t SVGPackage::getTag_GraphicalElement__stroke() const
{
	return e4c::tag< GraphicalElement__stroke_tag >::get();
}

e4c::tag_t SVGPackage::getTag_TextElement__rotate() const
{
	return e4c::tag< TextElement__rotate_tag >::get();
}

e4c::tag_t SVGPackage::getTag_TextElement__textLength() const
{
	return e4c::tag< TextElement__textLength_tag >::get();
}

e4c::tag_t SVGPackage::getTag_TextElement__fontSize() const
{
	return e4c::tag< TextElement__fontSize_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Rect__rx() const
{
	return e4c::tag< Rect__rx_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Rect__ry() const
{
	return e4c::tag< Rect__ry_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Line__between() const
{
	return e4c::tag< Line__between_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Line__markerEnd() const
{
	return e4c::tag< Line__markerEnd_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Line__markerStart() const
{
	return e4c::tag< Line__markerStart_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polyline__waypoints() const
{
	return e4c::tag< Polyline__waypoints_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polyline__strokeDashArray() const
{
	return e4c::tag< Polyline__strokeDashArray_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polyline__markerEnd() const
{
	return e4c::tag< Polyline__markerEnd_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polyline__markerStart() const
{
	return e4c::tag< Polyline__markerStart_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polygon__waypoints() const
{
	return e4c::tag< Polygon__waypoints_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polygon__markerEnd() const
{
	return e4c::tag< Polygon__markerEnd_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Polygon__markerStart() const
{
	return e4c::tag< Polygon__markerStart_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Path__pathLength() const
{
	return e4c::tag< Path__pathLength_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Path__d() const
{
	return e4c::tag< Path__d_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Path__markerEnd() const
{
	return e4c::tag< Path__markerEnd_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Path__markerStart() const
{
	return e4c::tag< Path__markerStart_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__markerUnits() const
{
	return e4c::tag< Marker__markerUnits_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__refX() const
{
	return e4c::tag< Marker__refX_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__refY() const
{
	return e4c::tag< Marker__refY_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__markerWidth() const
{
	return e4c::tag< Marker__markerWidth_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__markerHeight() const
{
	return e4c::tag< Marker__markerHeight_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__orient() const
{
	return e4c::tag< Marker__orient_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Marker__drawing() const
{
	return e4c::tag< Marker__drawing_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Text__lengthAdjust() const
{
	return e4c::tag< Text__lengthAdjust_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Text__content() const
{
	return e4c::tag< Text__content_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Tspan__content() const
{
	return e4c::tag< Tspan__content_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Tref__xlinkHref() const
{
	return e4c::tag< Tref__xlinkHref_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Attribute__attOwner() const
{
	return e4c::tag< Attribute__attOwner_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Scale__sx() const
{
	return e4c::tag< Scale__sx_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Scale__sy() const
{
	return e4c::tag< Scale__sy_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Translate__tx() const
{
	return e4c::tag< Translate__tx_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Translate__ty() const
{
	return e4c::tag< Translate__ty_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Rotate__angle() const
{
	return e4c::tag< Rotate__angle_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Rotate__cx() const
{
	return e4c::tag< Rotate__cx_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Rotate__cy() const
{
	return e4c::tag< Rotate__cy_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Visibility__visible() const
{
	return e4c::tag< Visibility__visible_tag >::get();
}

e4c::tag_t SVGPackage::getTag_FontWeight__bold() const
{
	return e4c::tag< FontWeight__bold_tag >::get();
}

e4c::tag_t SVGPackage::getTag_FontStyle__italic() const
{
	return e4c::tag< FontStyle__italic_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Dimension__width() const
{
	return e4c::tag< Dimension__width_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Dimension__height() const
{
	return e4c::tag< Dimension__height_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Coordinates__x() const
{
	return e4c::tag< Coordinates__x_tag >::get();
}

e4c::tag_t SVGPackage::getTag_Coordinates__y() const
{
	return e4c::tag< Coordinates__y_tag >::get();
}

e4c::tag_t SVGPackage::getTag_ReferencedFile__referer() const
{
	return e4c::tag< ReferencedFile__referer_tag >::get();
}

e4c::tag_t SVGPackage::getTag_ReferencedFile__name() const
{
	return e4c::tag< ReferencedFile__name_tag >::get();
}

e4c::tag_t SVGPackage::getTag_SvgFile__tag() const
{
	return e4c::tag< SvgFile__tag_tag >::get();
}

e4c::tag_t SVGPackage::getTag_SvgFile__elements() const
{
	return e4c::tag< SvgFile__elements_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_SVG()
{
	return ::SVG::SVGPackage::_instance();
}
