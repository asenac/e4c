#include "SVGFactory.hpp"
#include "SVGPackage.hpp"
#include "include.hpp"

using namespace SVG;

SVGFactory::SVGFactory()
{
	// m_ePackage = SVGPackage::_instance();
	// std::bind(&SVGFactory::createImage, this);
	// m_ePackage->getTag_Image();
	// std::bind(&SVGFactory::createSvg, this);
	// m_ePackage->getTag_Svg();
	// std::bind(&SVGFactory::createG, this);
	// m_ePackage->getTag_G();
	// std::bind(&SVGFactory::createDefs, this);
	// m_ePackage->getTag_Defs();
	// std::bind(&SVGFactory::createSymbol, this);
	// m_ePackage->getTag_Symbol();
	// std::bind(&SVGFactory::createUse, this);
	// m_ePackage->getTag_Use();
	// std::bind(&SVGFactory::createRect, this);
	// m_ePackage->getTag_Rect();
	// std::bind(&SVGFactory::createCircle, this);
	// m_ePackage->getTag_Circle();
	// std::bind(&SVGFactory::createEllipse, this);
	// m_ePackage->getTag_Ellipse();
	// std::bind(&SVGFactory::createLine, this);
	// m_ePackage->getTag_Line();
	// std::bind(&SVGFactory::createPolyline, this);
	// m_ePackage->getTag_Polyline();
	// std::bind(&SVGFactory::createPolygon, this);
	// m_ePackage->getTag_Polygon();
	// std::bind(&SVGFactory::createPath, this);
	// m_ePackage->getTag_Path();
	// std::bind(&SVGFactory::createPoint, this);
	// m_ePackage->getTag_Point();
	// std::bind(&SVGFactory::createMarker, this);
	// m_ePackage->getTag_Marker();
	// std::bind(&SVGFactory::createText, this);
	// m_ePackage->getTag_Text();
	// std::bind(&SVGFactory::createTspan, this);
	// m_ePackage->getTag_Tspan();
	// std::bind(&SVGFactory::createTref, this);
	// m_ePackage->getTag_Tref();
	// std::bind(&SVGFactory::createScale, this);
	// m_ePackage->getTag_Scale();
	// std::bind(&SVGFactory::createTranslate, this);
	// m_ePackage->getTag_Translate();
	// std::bind(&SVGFactory::createRotate, this);
	// m_ePackage->getTag_Rotate();
	// std::bind(&SVGFactory::createVisibility, this);
	// m_ePackage->getTag_Visibility();
	// std::bind(&SVGFactory::createFontWeight, this);
	// m_ePackage->getTag_FontWeight();
	// std::bind(&SVGFactory::createFontStyle, this);
	// m_ePackage->getTag_FontStyle();
	// std::bind(&SVGFactory::createDimension, this);
	// m_ePackage->getTag_Dimension();
	// std::bind(&SVGFactory::createRelativeCoord, this);
	// m_ePackage->getTag_RelativeCoord();
	// std::bind(&SVGFactory::createAbsoluteCoord, this);
	// m_ePackage->getTag_AbsoluteCoord();
	// std::bind(&SVGFactory::createSvgFile, this);
	// m_ePackage->getTag_SvgFile();
}

const SVGFactory_ptr SVGFactory::_instance()
{
	static SVGFactory __instance;
	return &__instance;
}

Image_ptr SVGFactory::createImage() const
{
	return new Image();
}

Svg_ptr SVGFactory::createSvg() const
{
	return new Svg();
}

G_ptr SVGFactory::createG() const
{
	return new G();
}

Defs_ptr SVGFactory::createDefs() const
{
	return new Defs();
}

Symbol_ptr SVGFactory::createSymbol() const
{
	return new Symbol();
}

Use_ptr SVGFactory::createUse() const
{
	return new Use();
}

Rect_ptr SVGFactory::createRect() const
{
	return new Rect();
}

Circle_ptr SVGFactory::createCircle() const
{
	return new Circle();
}

Ellipse_ptr SVGFactory::createEllipse() const
{
	return new Ellipse();
}

Line_ptr SVGFactory::createLine() const
{
	return new Line();
}

Polyline_ptr SVGFactory::createPolyline() const
{
	return new Polyline();
}

Polygon_ptr SVGFactory::createPolygon() const
{
	return new Polygon();
}

Path_ptr SVGFactory::createPath() const
{
	return new Path();
}

Point_ptr SVGFactory::createPoint() const
{
	return new Point();
}

Marker_ptr SVGFactory::createMarker() const
{
	return new Marker();
}

Text_ptr SVGFactory::createText() const
{
	return new Text();
}

Tspan_ptr SVGFactory::createTspan() const
{
	return new Tspan();
}

Tref_ptr SVGFactory::createTref() const
{
	return new Tref();
}

Scale_ptr SVGFactory::createScale() const
{
	return new Scale();
}

Translate_ptr SVGFactory::createTranslate() const
{
	return new Translate();
}

Rotate_ptr SVGFactory::createRotate() const
{
	return new Rotate();
}

Visibility_ptr SVGFactory::createVisibility() const
{
	return new Visibility();
}

FontWeight_ptr SVGFactory::createFontWeight() const
{
	return new FontWeight();
}

FontStyle_ptr SVGFactory::createFontStyle() const
{
	return new FontStyle();
}

Dimension_ptr SVGFactory::createDimension() const
{
	return new Dimension();
}

RelativeCoord_ptr SVGFactory::createRelativeCoord() const
{
	return new RelativeCoord();
}

AbsoluteCoord_ptr SVGFactory::createAbsoluteCoord() const
{
	return new AbsoluteCoord();
}

SvgFile_ptr SVGFactory::createSvgFile() const
{
	return new SvgFile();
}

