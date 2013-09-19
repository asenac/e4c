
#ifndef EMF_CPP_SVG_META_HPP
#define EMF_CPP_SVG_META_HPP

#include <e4c/definition.hpp>
#include <SVG/fwd.hpp>

#include <PrimitiveTypes/fwd.hpp>

namespace SVG
{



struct Element__owner_tag
{
	typedef Element eClass;
	typedef ::SVG::SvgFile eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::SvgFile__elements_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__target_tag
{
	typedef Element eClass;
	typedef ::SVG::Use eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Use__use_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__attribute_tag
{
	typedef Element eClass;
	typedef ::SVG::Attribute eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Attribute__attOwner_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__position_tag
{
	typedef Element eClass;
	typedef ::SVG::Coordinates eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Element__position_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__size_tag
{
	typedef Element eClass;
	typedef ::SVG::Dimension eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Element__size_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__root_tag
{
	typedef Element eClass;
	typedef ::SVG::Svg eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::SVG::Svg__children_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__fill_tag
{
	typedef Element eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Element__viewBox_tag
{
	typedef Element eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Element__group_tag
{
	typedef Element eClass;
	typedef ::SVG::GroupingElement eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::SVG::GroupingElement__groupContent_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__identifier_tag
{
	typedef Element eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Element__drawsMarker_tag
{
	typedef Element eClass;
	typedef ::SVG::Marker eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::SVG::Marker__drawing_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Image__referee_tag
{
	typedef Image eClass;
	typedef ::SVG::ReferencedFile eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::ReferencedFile__referer_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Svg__owner_SVG_tag
{
	typedef Svg eClass;
	typedef ::SVG::SvgFile eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::SvgFile__tag_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Svg__children_tag
{
	typedef Svg eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__root_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Svg__namespace_tag
{
	typedef Svg eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Svg__version_tag
{
	typedef Svg eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Svg__baseProfile_tag
{
	typedef Svg eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct GroupingElement__groupContent_tag
{
	typedef GroupingElement eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__group_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct G__name_tag
{
	typedef G eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Use__use_tag
{
	typedef Use eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__target_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct GraphicalElement__stroke_tag
{
	typedef GraphicalElement eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TextElement__rotate_tag
{
	typedef TextElement eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TextElement__textLength_tag
{
	typedef TextElement eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TextElement__fontSize_tag
{
	typedef TextElement eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Rect__rx_tag
{
	typedef Rect eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Rect__ry_tag
{
	typedef Rect eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Line__between_tag
{
	typedef Line eClass;
	typedef ::SVG::Point eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Line__between_tag eOpposite;
	static const int upperBound = 2;
	static const int lowerBound = 2;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Line__markerEnd_tag
{
	typedef Line eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Line__markerStart_tag
{
	typedef Line eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Polyline__waypoints_tag
{
	typedef Polyline eClass;
	typedef ::SVG::Point eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Polyline__waypoints_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Polyline__strokeDashArray_tag
{
	typedef Polyline eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Polyline__markerEnd_tag
{
	typedef Polyline eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Polyline__markerStart_tag
{
	typedef Polyline eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Polygon__waypoints_tag
{
	typedef Polygon eClass;
	typedef ::SVG::Point eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Polygon__waypoints_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Polygon__markerEnd_tag
{
	typedef Polygon eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Polygon__markerStart_tag
{
	typedef Polygon eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Path__pathLength_tag
{
	typedef Path eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Path__d_tag
{
	typedef Path eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Path__markerEnd_tag
{
	typedef Path eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Path__markerStart_tag
{
	typedef Path eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__markerUnits_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__refX_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__refY_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__markerWidth_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__markerHeight_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__orient_tag
{
	typedef Marker eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Marker__drawing_tag
{
	typedef Marker eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__drawsMarker_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Text__lengthAdjust_tag
{
	typedef Text eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Text__content_tag
{
	typedef Text eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Tspan__content_tag
{
	typedef Tspan eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Tref__xlinkHref_tag
{
	typedef Tref eClass;
	typedef ::SVG::TextElement eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Tref__xlinkHref_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Attribute__attOwner_tag
{
	typedef Attribute eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__attribute_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Scale__sx_tag
{
	typedef Scale eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Scale__sy_tag
{
	typedef Scale eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Translate__tx_tag
{
	typedef Translate eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Translate__ty_tag
{
	typedef Translate eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Rotate__angle_tag
{
	typedef Rotate eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Rotate__cx_tag
{
	typedef Rotate eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Rotate__cy_tag
{
	typedef Rotate eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Visibility__visible_tag
{
	typedef Visibility eClass;
	typedef ::PrimitiveTypes::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct FontWeight__bold_tag
{
	typedef FontWeight eClass;
	typedef ::PrimitiveTypes::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct FontStyle__italic_tag
{
	typedef FontStyle eClass;
	typedef ::PrimitiveTypes::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Dimension__width_tag
{
	typedef Dimension eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Dimension__height_tag
{
	typedef Dimension eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Coordinates__x_tag
{
	typedef Coordinates eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Coordinates__y_tag
{
	typedef Coordinates eClass;
	typedef ::PrimitiveTypes::Double eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct ReferencedFile__referer_tag
{
	typedef ReferencedFile eClass;
	typedef ::SVG::Image eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Image__referee_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReferencedFile__name_tag
{
	typedef ReferencedFile eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SvgFile__tag_tag
{
	typedef SvgFile eClass;
	typedef ::SVG::Svg eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Svg__owner_SVG_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SvgFile__elements_tag
{
	typedef SvgFile eClass;
	typedef ::SVG::Element eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::SVG::Element__owner_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};


} // SVG


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::SVG::SVGPackage >
{
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement,
	                          ::SVG::Image,
	                          ::SVG::Svg,
	                          ::SVG::GroupingElement,
	                          ::SVG::G,
	                          ::SVG::Defs,
	                          ::SVG::Symbol,
	                          ::SVG::Use,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape,
	                          ::SVG::TextElement,
	                          ::SVG::Rect,
	                          ::SVG::Circle,
	                          ::SVG::Ellipse,
	                          ::SVG::Line,
	                          ::SVG::Polyline,
	                          ::SVG::Polygon,
	                          ::SVG::Path,
	                          ::SVG::Point,
	                          ::SVG::Marker,
	                          ::SVG::Text,
	                          ::SVG::Tspan,
	                          ::SVG::Tref,
	                          ::SVG::Attribute,
	                          ::SVG::Transform,
	                          ::SVG::Scale,
	                          ::SVG::Translate,
	                          ::SVG::Rotate,
	                          ::SVG::Visibility,
	                          ::SVG::FontWeight,
	                          ::SVG::FontStyle,
	                          ::SVG::Dimension,
	                          ::SVG::Coordinates,
	                          ::SVG::RelativeCoord,
	                          ::SVG::AbsoluteCoord,
	                          ::SVG::ReferencedFile,
	                          ::SVG::SvgFile > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::SVG::Element >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Element >
{
	static const char * get()
	{
		return "Element";
	}
};


template < >
struct name< ::SVG::Element__owner_tag >
{
	static const char * get()
	{
		return "owner";
	}
};


template < >
struct name< ::SVG::Element__target_tag >
{
	static const char * get()
	{
		return "target";
	}
};


template < >
struct name< ::SVG::Element__attribute_tag >
{
	static const char * get()
	{
		return "attribute";
	}
};


template < >
struct name< ::SVG::Element__position_tag >
{
	static const char * get()
	{
		return "position";
	}
};


template < >
struct name< ::SVG::Element__size_tag >
{
	static const char * get()
	{
		return "size";
	}
};


template < >
struct name< ::SVG::Element__root_tag >
{
	static const char * get()
	{
		return "root";
	}
};


template < >
struct name< ::SVG::Element__fill_tag >
{
	static const char * get()
	{
		return "fill";
	}
};


template < >
struct name< ::SVG::Element__viewBox_tag >
{
	static const char * get()
	{
		return "viewBox";
	}
};


template < >
struct name< ::SVG::Element__group_tag >
{
	static const char * get()
	{
		return "group";
	}
};


template < >
struct name< ::SVG::Element__identifier_tag >
{
	static const char * get()
	{
		return "identifier";
	}
};


template < >
struct name< ::SVG::Element__drawsMarker_tag >
{
	static const char * get()
	{
		return "drawsMarker";
	}
};


template < >
struct eclass< ::SVG::StructuralElement >
{
	typedef boost::mpl::list< ::SVG::Element > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::StructuralElement >
{
	static const char * get()
	{
		return "StructuralElement";
	}
};


template < >
struct eclass< ::SVG::Image >
{
	typedef boost::mpl::list< ::SVG::StructuralElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Image__referee_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::Image__referee_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Image >
{
	static const char * get()
	{
		return "Image";
	}
};


template < >
struct name< ::SVG::Image__referee_tag >
{
	static const char * get()
	{
		return "referee";
	}
};


template < >
struct eclass< ::SVG::Svg >
{
	typedef boost::mpl::list< ::SVG::StructuralElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Svg__owner_SVG_tag,
	                          ::SVG::Svg__children_tag,
	                          ::SVG::Svg__namespace_tag,
	                          ::SVG::Svg__version_tag,
	                          ::SVG::Svg__baseProfile_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::Svg__owner_SVG_tag,
	                          ::SVG::Svg__children_tag,
	                          ::SVG::Svg__namespace_tag,
	                          ::SVG::Svg__version_tag,
	                          ::SVG::Svg__baseProfile_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Svg >
{
	static const char * get()
	{
		return "Svg";
	}
};


template < >
struct name< ::SVG::Svg__owner_SVG_tag >
{
	static const char * get()
	{
		return "owner_SVG";
	}
};


template < >
struct name< ::SVG::Svg__children_tag >
{
	static const char * get()
	{
		return "children";
	}
};


template < >
struct name< ::SVG::Svg__namespace_tag >
{
	static const char * get()
	{
		return "namespace";
	}
};


template < >
struct name< ::SVG::Svg__version_tag >
{
	static const char * get()
	{
		return "version";
	}
};


template < >
struct name< ::SVG::Svg__baseProfile_tag >
{
	static const char * get()
	{
		return "baseProfile";
	}
};


template < >
struct eclass< ::SVG::GroupingElement >
{
	typedef boost::mpl::list< ::SVG::StructuralElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::GroupingElement__groupContent_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GroupingElement__groupContent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::GroupingElement >
{
	static const char * get()
	{
		return "GroupingElement";
	}
};


template < >
struct name< ::SVG::GroupingElement__groupContent_tag >
{
	static const char * get()
	{
		return "groupContent";
	}
};


template < >
struct eclass< ::SVG::G >
{
	typedef boost::mpl::list< ::SVG::GroupingElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement,
	                          ::SVG::GroupingElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::G__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GroupingElement__groupContent_tag,
	                          ::SVG::G__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::G >
{
	static const char * get()
	{
		return "G";
	}
};


template < >
struct name< ::SVG::G__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::SVG::Defs >
{
	typedef boost::mpl::list< ::SVG::GroupingElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement,
	                          ::SVG::GroupingElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GroupingElement__groupContent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Defs >
{
	static const char * get()
	{
		return "Defs";
	}
};


template < >
struct eclass< ::SVG::Symbol >
{
	typedef boost::mpl::list< ::SVG::GroupingElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement,
	                          ::SVG::GroupingElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GroupingElement__groupContent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Symbol >
{
	static const char * get()
	{
		return "Symbol";
	}
};


template < >
struct eclass< ::SVG::Use >
{
	typedef boost::mpl::list< ::SVG::StructuralElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::StructuralElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Use__use_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::Use__use_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Use >
{
	static const char * get()
	{
		return "Use";
	}
};


template < >
struct name< ::SVG::Use__use_tag >
{
	static const char * get()
	{
		return "use";
	}
};


template < >
struct eclass< ::SVG::GraphicalElement >
{
	typedef boost::mpl::list< ::SVG::Element > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::GraphicalElement__stroke_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::GraphicalElement >
{
	static const char * get()
	{
		return "GraphicalElement";
	}
};


template < >
struct name< ::SVG::GraphicalElement__stroke_tag >
{
	static const char * get()
	{
		return "stroke";
	}
};


template < >
struct eclass< ::SVG::Shape >
{
	typedef boost::mpl::list< ::SVG::GraphicalElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Shape >
{
	static const char * get()
	{
		return "Shape";
	}
};


template < >
struct eclass< ::SVG::TextElement >
{
	typedef boost::mpl::list< ::SVG::GraphicalElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::TextElement__rotate_tag,
	                          ::SVG::TextElement__textLength_tag,
	                          ::SVG::TextElement__fontSize_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::TextElement__rotate_tag,
	                          ::SVG::TextElement__textLength_tag,
	                          ::SVG::TextElement__fontSize_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::TextElement >
{
	static const char * get()
	{
		return "TextElement";
	}
};


template < >
struct name< ::SVG::TextElement__rotate_tag >
{
	static const char * get()
	{
		return "rotate";
	}
};


template < >
struct name< ::SVG::TextElement__textLength_tag >
{
	static const char * get()
	{
		return "textLength";
	}
};


template < >
struct name< ::SVG::TextElement__fontSize_tag >
{
	static const char * get()
	{
		return "fontSize";
	}
};


template < >
struct eclass< ::SVG::Rect >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Rect__rx_tag,
	                          ::SVG::Rect__ry_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Rect__rx_tag,
	                          ::SVG::Rect__ry_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Rect >
{
	static const char * get()
	{
		return "Rect";
	}
};


template < >
struct name< ::SVG::Rect__rx_tag >
{
	static const char * get()
	{
		return "rx";
	}
};


template < >
struct name< ::SVG::Rect__ry_tag >
{
	static const char * get()
	{
		return "ry";
	}
};


template < >
struct eclass< ::SVG::Circle >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Circle >
{
	static const char * get()
	{
		return "Circle";
	}
};


template < >
struct eclass< ::SVG::Ellipse >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Ellipse >
{
	static const char * get()
	{
		return "Ellipse";
	}
};


template < >
struct eclass< ::SVG::Line >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Line__between_tag,
	                          ::SVG::Line__markerEnd_tag,
	                          ::SVG::Line__markerStart_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Line__between_tag,
	                          ::SVG::Line__markerEnd_tag,
	                          ::SVG::Line__markerStart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Line >
{
	static const char * get()
	{
		return "Line";
	}
};


template < >
struct name< ::SVG::Line__between_tag >
{
	static const char * get()
	{
		return "between";
	}
};


template < >
struct name< ::SVG::Line__markerEnd_tag >
{
	static const char * get()
	{
		return "markerEnd";
	}
};


template < >
struct name< ::SVG::Line__markerStart_tag >
{
	static const char * get()
	{
		return "markerStart";
	}
};


template < >
struct eclass< ::SVG::Polyline >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Polyline__waypoints_tag,
	                          ::SVG::Polyline__strokeDashArray_tag,
	                          ::SVG::Polyline__markerEnd_tag,
	                          ::SVG::Polyline__markerStart_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Polyline__waypoints_tag,
	                          ::SVG::Polyline__strokeDashArray_tag,
	                          ::SVG::Polyline__markerEnd_tag,
	                          ::SVG::Polyline__markerStart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Polyline >
{
	static const char * get()
	{
		return "Polyline";
	}
};


template < >
struct name< ::SVG::Polyline__waypoints_tag >
{
	static const char * get()
	{
		return "waypoints";
	}
};


template < >
struct name< ::SVG::Polyline__strokeDashArray_tag >
{
	static const char * get()
	{
		return "strokeDashArray";
	}
};


template < >
struct name< ::SVG::Polyline__markerEnd_tag >
{
	static const char * get()
	{
		return "markerEnd";
	}
};


template < >
struct name< ::SVG::Polyline__markerStart_tag >
{
	static const char * get()
	{
		return "markerStart";
	}
};


template < >
struct eclass< ::SVG::Polygon >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Polygon__waypoints_tag,
	                          ::SVG::Polygon__markerEnd_tag,
	                          ::SVG::Polygon__markerStart_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Polygon__waypoints_tag,
	                          ::SVG::Polygon__markerEnd_tag,
	                          ::SVG::Polygon__markerStart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Polygon >
{
	static const char * get()
	{
		return "Polygon";
	}
};


template < >
struct name< ::SVG::Polygon__waypoints_tag >
{
	static const char * get()
	{
		return "waypoints";
	}
};


template < >
struct name< ::SVG::Polygon__markerEnd_tag >
{
	static const char * get()
	{
		return "markerEnd";
	}
};


template < >
struct name< ::SVG::Polygon__markerStart_tag >
{
	static const char * get()
	{
		return "markerStart";
	}
};


template < >
struct eclass< ::SVG::Path >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Path__pathLength_tag,
	                          ::SVG::Path__d_tag,
	                          ::SVG::Path__markerEnd_tag,
	                          ::SVG::Path__markerStart_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Path__pathLength_tag,
	                          ::SVG::Path__d_tag,
	                          ::SVG::Path__markerEnd_tag,
	                          ::SVG::Path__markerStart_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Path >
{
	static const char * get()
	{
		return "Path";
	}
};


template < >
struct name< ::SVG::Path__pathLength_tag >
{
	static const char * get()
	{
		return "pathLength";
	}
};


template < >
struct name< ::SVG::Path__d_tag >
{
	static const char * get()
	{
		return "d";
	}
};


template < >
struct name< ::SVG::Path__markerEnd_tag >
{
	static const char * get()
	{
		return "markerEnd";
	}
};


template < >
struct name< ::SVG::Path__markerStart_tag >
{
	static const char * get()
	{
		return "markerStart";
	}
};


template < >
struct eclass< ::SVG::Point >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Point >
{
	static const char * get()
	{
		return "Point";
	}
};


template < >
struct eclass< ::SVG::Marker >
{
	typedef boost::mpl::list< ::SVG::Shape > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::Shape > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Marker__markerUnits_tag,
	                          ::SVG::Marker__refX_tag,
	                          ::SVG::Marker__refY_tag,
	                          ::SVG::Marker__markerWidth_tag,
	                          ::SVG::Marker__markerHeight_tag,
	                          ::SVG::Marker__orient_tag,
	                          ::SVG::Marker__drawing_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::Marker__markerUnits_tag,
	                          ::SVG::Marker__refX_tag,
	                          ::SVG::Marker__refY_tag,
	                          ::SVG::Marker__markerWidth_tag,
	                          ::SVG::Marker__markerHeight_tag,
	                          ::SVG::Marker__orient_tag,
	                          ::SVG::Marker__drawing_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Marker >
{
	static const char * get()
	{
		return "Marker";
	}
};


template < >
struct name< ::SVG::Marker__markerUnits_tag >
{
	static const char * get()
	{
		return "markerUnits";
	}
};


template < >
struct name< ::SVG::Marker__refX_tag >
{
	static const char * get()
	{
		return "refX";
	}
};


template < >
struct name< ::SVG::Marker__refY_tag >
{
	static const char * get()
	{
		return "refY";
	}
};


template < >
struct name< ::SVG::Marker__markerWidth_tag >
{
	static const char * get()
	{
		return "markerWidth";
	}
};


template < >
struct name< ::SVG::Marker__markerHeight_tag >
{
	static const char * get()
	{
		return "markerHeight";
	}
};


template < >
struct name< ::SVG::Marker__orient_tag >
{
	static const char * get()
	{
		return "orient";
	}
};


template < >
struct name< ::SVG::Marker__drawing_tag >
{
	static const char * get()
	{
		return "drawing";
	}
};


template < >
struct eclass< ::SVG::Text >
{
	typedef boost::mpl::list< ::SVG::TextElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::TextElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Text__lengthAdjust_tag,
	                          ::SVG::Text__content_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::TextElement__rotate_tag,
	                          ::SVG::TextElement__textLength_tag,
	                          ::SVG::TextElement__fontSize_tag,
	                          ::SVG::Text__lengthAdjust_tag,
	                          ::SVG::Text__content_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Text >
{
	static const char * get()
	{
		return "Text";
	}
};


template < >
struct name< ::SVG::Text__lengthAdjust_tag >
{
	static const char * get()
	{
		return "lengthAdjust";
	}
};


template < >
struct name< ::SVG::Text__content_tag >
{
	static const char * get()
	{
		return "content";
	}
};


template < >
struct eclass< ::SVG::Tspan >
{
	typedef boost::mpl::list< ::SVG::TextElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::TextElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Tspan__content_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::TextElement__rotate_tag,
	                          ::SVG::TextElement__textLength_tag,
	                          ::SVG::TextElement__fontSize_tag,
	                          ::SVG::Tspan__content_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Tspan >
{
	static const char * get()
	{
		return "Tspan";
	}
};


template < >
struct name< ::SVG::Tspan__content_tag >
{
	static const char * get()
	{
		return "content";
	}
};


template < >
struct eclass< ::SVG::Tref >
{
	typedef boost::mpl::list< ::SVG::TextElement > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Element,
	                          ::SVG::GraphicalElement,
	                          ::SVG::TextElement > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Tref__xlinkHref_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Element__owner_tag,
	                          ::SVG::Element__target_tag,
	                          ::SVG::Element__attribute_tag,
	                          ::SVG::Element__position_tag,
	                          ::SVG::Element__size_tag,
	                          ::SVG::Element__root_tag,
	                          ::SVG::Element__fill_tag,
	                          ::SVG::Element__viewBox_tag,
	                          ::SVG::Element__group_tag,
	                          ::SVG::Element__identifier_tag,
	                          ::SVG::Element__drawsMarker_tag,
	                          ::SVG::GraphicalElement__stroke_tag,
	                          ::SVG::TextElement__rotate_tag,
	                          ::SVG::TextElement__textLength_tag,
	                          ::SVG::TextElement__fontSize_tag,
	                          ::SVG::Tref__xlinkHref_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Tref >
{
	static const char * get()
	{
		return "Tref";
	}
};


template < >
struct name< ::SVG::Tref__xlinkHref_tag >
{
	static const char * get()
	{
		return "xlinkHref";
	}
};


template < >
struct eclass< ::SVG::Attribute >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Attribute >
{
	static const char * get()
	{
		return "Attribute";
	}
};


template < >
struct name< ::SVG::Attribute__attOwner_tag >
{
	static const char * get()
	{
		return "attOwner";
	}
};


template < >
struct eclass< ::SVG::Transform >
{
	typedef boost::mpl::list< ::SVG::Attribute > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Transform >
{
	static const char * get()
	{
		return "Transform";
	}
};


template < >
struct eclass< ::SVG::Scale >
{
	typedef boost::mpl::list< ::SVG::Transform > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute,
	                          ::SVG::Transform > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Scale__sx_tag,
	                          ::SVG::Scale__sy_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::Scale__sx_tag,
	                          ::SVG::Scale__sy_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Scale >
{
	static const char * get()
	{
		return "Scale";
	}
};


template < >
struct name< ::SVG::Scale__sx_tag >
{
	static const char * get()
	{
		return "sx";
	}
};


template < >
struct name< ::SVG::Scale__sy_tag >
{
	static const char * get()
	{
		return "sy";
	}
};


template < >
struct eclass< ::SVG::Translate >
{
	typedef boost::mpl::list< ::SVG::Transform > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute,
	                          ::SVG::Transform > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Translate__tx_tag,
	                          ::SVG::Translate__ty_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::Translate__tx_tag,
	                          ::SVG::Translate__ty_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Translate >
{
	static const char * get()
	{
		return "Translate";
	}
};


template < >
struct name< ::SVG::Translate__tx_tag >
{
	static const char * get()
	{
		return "tx";
	}
};


template < >
struct name< ::SVG::Translate__ty_tag >
{
	static const char * get()
	{
		return "ty";
	}
};


template < >
struct eclass< ::SVG::Rotate >
{
	typedef boost::mpl::list< ::SVG::Transform > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute,
	                          ::SVG::Transform > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Rotate__angle_tag,
	                          ::SVG::Rotate__cx_tag,
	                          ::SVG::Rotate__cy_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::Rotate__angle_tag,
	                          ::SVG::Rotate__cx_tag,
	                          ::SVG::Rotate__cy_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Rotate >
{
	static const char * get()
	{
		return "Rotate";
	}
};


template < >
struct name< ::SVG::Rotate__angle_tag >
{
	static const char * get()
	{
		return "angle";
	}
};


template < >
struct name< ::SVG::Rotate__cx_tag >
{
	static const char * get()
	{
		return "cx";
	}
};


template < >
struct name< ::SVG::Rotate__cy_tag >
{
	static const char * get()
	{
		return "cy";
	}
};


template < >
struct eclass< ::SVG::Visibility >
{
	typedef boost::mpl::list< ::SVG::Attribute > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Visibility__visible_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::Visibility__visible_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Visibility >
{
	static const char * get()
	{
		return "Visibility";
	}
};


template < >
struct name< ::SVG::Visibility__visible_tag >
{
	static const char * get()
	{
		return "visible";
	}
};


template < >
struct eclass< ::SVG::FontWeight >
{
	typedef boost::mpl::list< ::SVG::Attribute > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::FontWeight__bold_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::FontWeight__bold_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::FontWeight >
{
	static const char * get()
	{
		return "FontWeight";
	}
};


template < >
struct name< ::SVG::FontWeight__bold_tag >
{
	static const char * get()
	{
		return "bold";
	}
};


template < >
struct eclass< ::SVG::FontStyle >
{
	typedef boost::mpl::list< ::SVG::Attribute > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Attribute > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::FontStyle__italic_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Attribute__attOwner_tag,
	                          ::SVG::FontStyle__italic_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::FontStyle >
{
	static const char * get()
	{
		return "FontStyle";
	}
};


template < >
struct name< ::SVG::FontStyle__italic_tag >
{
	static const char * get()
	{
		return "italic";
	}
};


template < >
struct eclass< ::SVG::Dimension >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Dimension__width_tag,
	                          ::SVG::Dimension__height_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Dimension__width_tag,
	                          ::SVG::Dimension__height_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Dimension >
{
	static const char * get()
	{
		return "Dimension";
	}
};


template < >
struct name< ::SVG::Dimension__width_tag >
{
	static const char * get()
	{
		return "width";
	}
};


template < >
struct name< ::SVG::Dimension__height_tag >
{
	static const char * get()
	{
		return "height";
	}
};


template < >
struct eclass< ::SVG::Coordinates >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::Coordinates__x_tag,
	                          ::SVG::Coordinates__y_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Coordinates__x_tag,
	                          ::SVG::Coordinates__y_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::Coordinates >
{
	static const char * get()
	{
		return "Coordinates";
	}
};


template < >
struct name< ::SVG::Coordinates__x_tag >
{
	static const char * get()
	{
		return "x";
	}
};


template < >
struct name< ::SVG::Coordinates__y_tag >
{
	static const char * get()
	{
		return "y";
	}
};


template < >
struct eclass< ::SVG::RelativeCoord >
{
	typedef boost::mpl::list< ::SVG::Coordinates > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Coordinates > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Coordinates__x_tag,
	                          ::SVG::Coordinates__y_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::RelativeCoord >
{
	static const char * get()
	{
		return "RelativeCoord";
	}
};


template < >
struct eclass< ::SVG::AbsoluteCoord >
{
	typedef boost::mpl::list< ::SVG::Coordinates > eSuperTypes;
	typedef boost::mpl::list< ::SVG::Coordinates > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::Coordinates__x_tag,
	                          ::SVG::Coordinates__y_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::AbsoluteCoord >
{
	static const char * get()
	{
		return "AbsoluteCoord";
	}
};


template < >
struct eclass< ::SVG::ReferencedFile >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::ReferencedFile__referer_tag,
	                          ::SVG::ReferencedFile__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::ReferencedFile__referer_tag,
	                          ::SVG::ReferencedFile__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::ReferencedFile >
{
	static const char * get()
	{
		return "ReferencedFile";
	}
};


template < >
struct name< ::SVG::ReferencedFile__referer_tag >
{
	static const char * get()
	{
		return "referer";
	}
};


template < >
struct name< ::SVG::ReferencedFile__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::SVG::SvgFile >
{
	typedef boost::mpl::list< ::SVG::ReferencedFile > eSuperTypes;
	typedef boost::mpl::list< ::SVG::ReferencedFile > eAllSuperTypes;
	typedef boost::mpl::list< ::SVG::SvgFile__tag_tag,
	                          ::SVG::SvgFile__elements_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::SVG::ReferencedFile__referer_tag,
	                          ::SVG::ReferencedFile__name_tag,
	                          ::SVG::SvgFile__tag_tag,
	                          ::SVG::SvgFile__elements_tag > eAllStructuralFeatures;
};

template < >
struct name< ::SVG::SvgFile >
{
	static const char * get()
	{
		return "SvgFile";
	}
};


template < >
struct name< ::SVG::SvgFile__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct name< ::SVG::SvgFile__elements_tag >
{
	static const char * get()
	{
		return "elements";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_SVG_Meta_HPP
