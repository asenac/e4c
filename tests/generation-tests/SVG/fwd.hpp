#ifndef EMF_CPP_SVG_FWD_HPP
#define EMF_CPP_SVG_FWD_HPP


#include <e4c/mapping.hpp>

namespace SVG
{


class SVGPackage;
typedef SVGPackage * SVGPackage_ptr;
class SVGFactory;
typedef SVGFactory * SVGFactory_ptr;

// Data types


// Classes
class Element;
typedef Element* Element_ptr;
class StructuralElement;
typedef StructuralElement* StructuralElement_ptr;
class Image;
typedef Image* Image_ptr;
class Svg;
typedef Svg* Svg_ptr;
class GroupingElement;
typedef GroupingElement* GroupingElement_ptr;
class G;
typedef G* G_ptr;
class Defs;
typedef Defs* Defs_ptr;
class Symbol;
typedef Symbol* Symbol_ptr;
class Use;
typedef Use* Use_ptr;
class GraphicalElement;
typedef GraphicalElement* GraphicalElement_ptr;
class Shape;
typedef Shape* Shape_ptr;
class TextElement;
typedef TextElement* TextElement_ptr;
class Rect;
typedef Rect* Rect_ptr;
class Circle;
typedef Circle* Circle_ptr;
class Ellipse;
typedef Ellipse* Ellipse_ptr;
class Line;
typedef Line* Line_ptr;
class Polyline;
typedef Polyline* Polyline_ptr;
class Polygon;
typedef Polygon* Polygon_ptr;
class Path;
typedef Path* Path_ptr;
class Point;
typedef Point* Point_ptr;
class Marker;
typedef Marker* Marker_ptr;
class Text;
typedef Text* Text_ptr;
class Tspan;
typedef Tspan* Tspan_ptr;
class Tref;
typedef Tref* Tref_ptr;
class Attribute;
typedef Attribute* Attribute_ptr;
class Transform;
typedef Transform* Transform_ptr;
class Scale;
typedef Scale* Scale_ptr;
class Translate;
typedef Translate* Translate_ptr;
class Rotate;
typedef Rotate* Rotate_ptr;
class Visibility;
typedef Visibility* Visibility_ptr;
class FontWeight;
typedef FontWeight* FontWeight_ptr;
class FontStyle;
typedef FontStyle* FontStyle_ptr;
class Dimension;
typedef Dimension* Dimension_ptr;
class Coordinates;
typedef Coordinates* Coordinates_ptr;
class RelativeCoord;
typedef RelativeCoord* RelativeCoord_ptr;
class AbsoluteCoord;
typedef AbsoluteCoord* AbsoluteCoord_ptr;
class ReferencedFile;
typedef ReferencedFile* ReferencedFile_ptr;
class SvgFile;
typedef SvgFile* SvgFile_ptr;


// Structural features
struct Element__owner_tag;
struct Element__target_tag;
struct Element__attribute_tag;
struct Element__position_tag;
struct Element__size_tag;
struct Element__root_tag;
struct Element__fill_tag;
struct Element__viewBox_tag;
struct Element__group_tag;
struct Element__identifier_tag;
struct Element__drawsMarker_tag;
struct Image__referee_tag;
struct Svg__owner_SVG_tag;
struct Svg__children_tag;
struct Svg__namespace_tag;
struct Svg__version_tag;
struct Svg__baseProfile_tag;
struct GroupingElement__groupContent_tag;
struct G__name_tag;
struct Use__use_tag;
struct GraphicalElement__stroke_tag;
struct TextElement__rotate_tag;
struct TextElement__textLength_tag;
struct TextElement__fontSize_tag;
struct Rect__rx_tag;
struct Rect__ry_tag;
struct Line__between_tag;
struct Line__markerEnd_tag;
struct Line__markerStart_tag;
struct Polyline__waypoints_tag;
struct Polyline__strokeDashArray_tag;
struct Polyline__markerEnd_tag;
struct Polyline__markerStart_tag;
struct Polygon__waypoints_tag;
struct Polygon__markerEnd_tag;
struct Polygon__markerStart_tag;
struct Path__pathLength_tag;
struct Path__d_tag;
struct Path__markerEnd_tag;
struct Path__markerStart_tag;
struct Marker__markerUnits_tag;
struct Marker__refX_tag;
struct Marker__refY_tag;
struct Marker__markerWidth_tag;
struct Marker__markerHeight_tag;
struct Marker__orient_tag;
struct Marker__drawing_tag;
struct Text__lengthAdjust_tag;
struct Text__content_tag;
struct Tspan__content_tag;
struct Tref__xlinkHref_tag;
struct Attribute__attOwner_tag;
struct Scale__sx_tag;
struct Scale__sy_tag;
struct Translate__tx_tag;
struct Translate__ty_tag;
struct Rotate__angle_tag;
struct Rotate__cx_tag;
struct Rotate__cy_tag;
struct Visibility__visible_tag;
struct FontWeight__bold_tag;
struct FontStyle__italic_tag;
struct Dimension__width_tag;
struct Dimension__height_tag;
struct Coordinates__x_tag;
struct Coordinates__y_tag;
struct ReferencedFile__referer_tag;
struct ReferencedFile__name_tag;
struct SvgFile__tag_tag;
struct SvgFile__elements_tag;


} // SVG


#endif // EMF_CPP_SVG_FWD_HPP
