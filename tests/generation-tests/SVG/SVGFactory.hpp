#ifndef EMF_CPP_SVG_FACTORY_HPP
#define EMF_CPP_SVG_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <SVG/fwd.hpp>

namespace SVG
{


class SVGFactory : public ::ecore::EFactory
{
public:

    static const SVGFactory_ptr _instance();

    Image_ptr createImage() const;
    Svg_ptr createSvg() const;
    G_ptr createG() const;
    Defs_ptr createDefs() const;
    Symbol_ptr createSymbol() const;
    Use_ptr createUse() const;
    Rect_ptr createRect() const;
    Circle_ptr createCircle() const;
    Ellipse_ptr createEllipse() const;
    Line_ptr createLine() const;
    Polyline_ptr createPolyline() const;
    Polygon_ptr createPolygon() const;
    Path_ptr createPath() const;
    Point_ptr createPoint() const;
    Marker_ptr createMarker() const;
    Text_ptr createText() const;
    Tspan_ptr createTspan() const;
    Tref_ptr createTref() const;
    Scale_ptr createScale() const;
    Translate_ptr createTranslate() const;
    Rotate_ptr createRotate() const;
    Visibility_ptr createVisibility() const;
    FontWeight_ptr createFontWeight() const;
    FontStyle_ptr createFontStyle() const;
    Dimension_ptr createDimension() const;
    RelativeCoord_ptr createRelativeCoord() const;
    AbsoluteCoord_ptr createAbsoluteCoord() const;
    SvgFile_ptr createSvgFile() const;

protected:

    SVGFactory();
};

} // SVG


#endif // EMF_CPP_SVG_FACTORY_HPP
