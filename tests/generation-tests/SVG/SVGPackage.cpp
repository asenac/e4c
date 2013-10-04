#include "SVGPackage.hpp"
#include "SVGFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace SVG;

SVGPackage::SVGPackage()
{
	m_eFactoryInstance = SVGFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_Element = ecoreFactory->createEClass();
	m_Element->setName("Element");
	addEClassifiers(m_Element);
	m_StructuralElement = ecoreFactory->createEClass();
	m_StructuralElement->setName("StructuralElement");
	addEClassifiers(m_StructuralElement);
	m_Image = ecoreFactory->createEClass();
	m_Image->setName("Image");
	addEClassifiers(m_Image);
	m_Svg = ecoreFactory->createEClass();
	m_Svg->setName("Svg");
	addEClassifiers(m_Svg);
	m_GroupingElement = ecoreFactory->createEClass();
	m_GroupingElement->setName("GroupingElement");
	addEClassifiers(m_GroupingElement);
	m_G = ecoreFactory->createEClass();
	m_G->setName("G");
	addEClassifiers(m_G);
	m_Defs = ecoreFactory->createEClass();
	m_Defs->setName("Defs");
	addEClassifiers(m_Defs);
	m_Symbol = ecoreFactory->createEClass();
	m_Symbol->setName("Symbol");
	addEClassifiers(m_Symbol);
	m_Use = ecoreFactory->createEClass();
	m_Use->setName("Use");
	addEClassifiers(m_Use);
	m_GraphicalElement = ecoreFactory->createEClass();
	m_GraphicalElement->setName("GraphicalElement");
	addEClassifiers(m_GraphicalElement);
	m_Shape = ecoreFactory->createEClass();
	m_Shape->setName("Shape");
	addEClassifiers(m_Shape);
	m_TextElement = ecoreFactory->createEClass();
	m_TextElement->setName("TextElement");
	addEClassifiers(m_TextElement);
	m_Rect = ecoreFactory->createEClass();
	m_Rect->setName("Rect");
	addEClassifiers(m_Rect);
	m_Circle = ecoreFactory->createEClass();
	m_Circle->setName("Circle");
	addEClassifiers(m_Circle);
	m_Ellipse = ecoreFactory->createEClass();
	m_Ellipse->setName("Ellipse");
	addEClassifiers(m_Ellipse);
	m_Line = ecoreFactory->createEClass();
	m_Line->setName("Line");
	addEClassifiers(m_Line);
	m_Polyline = ecoreFactory->createEClass();
	m_Polyline->setName("Polyline");
	addEClassifiers(m_Polyline);
	m_Polygon = ecoreFactory->createEClass();
	m_Polygon->setName("Polygon");
	addEClassifiers(m_Polygon);
	m_Path = ecoreFactory->createEClass();
	m_Path->setName("Path");
	addEClassifiers(m_Path);
	m_Point = ecoreFactory->createEClass();
	m_Point->setName("Point");
	addEClassifiers(m_Point);
	m_Marker = ecoreFactory->createEClass();
	m_Marker->setName("Marker");
	addEClassifiers(m_Marker);
	m_Text = ecoreFactory->createEClass();
	m_Text->setName("Text");
	addEClassifiers(m_Text);
	m_Tspan = ecoreFactory->createEClass();
	m_Tspan->setName("Tspan");
	addEClassifiers(m_Tspan);
	m_Tref = ecoreFactory->createEClass();
	m_Tref->setName("Tref");
	addEClassifiers(m_Tref);
	m_Attribute = ecoreFactory->createEClass();
	m_Attribute->setName("Attribute");
	addEClassifiers(m_Attribute);
	m_Transform = ecoreFactory->createEClass();
	m_Transform->setName("Transform");
	addEClassifiers(m_Transform);
	m_Scale = ecoreFactory->createEClass();
	m_Scale->setName("Scale");
	addEClassifiers(m_Scale);
	m_Translate = ecoreFactory->createEClass();
	m_Translate->setName("Translate");
	addEClassifiers(m_Translate);
	m_Rotate = ecoreFactory->createEClass();
	m_Rotate->setName("Rotate");
	addEClassifiers(m_Rotate);
	m_Visibility = ecoreFactory->createEClass();
	m_Visibility->setName("Visibility");
	addEClassifiers(m_Visibility);
	m_FontWeight = ecoreFactory->createEClass();
	m_FontWeight->setName("FontWeight");
	addEClassifiers(m_FontWeight);
	m_FontStyle = ecoreFactory->createEClass();
	m_FontStyle->setName("FontStyle");
	addEClassifiers(m_FontStyle);
	m_Dimension = ecoreFactory->createEClass();
	m_Dimension->setName("Dimension");
	addEClassifiers(m_Dimension);
	m_Coordinates = ecoreFactory->createEClass();
	m_Coordinates->setName("Coordinates");
	addEClassifiers(m_Coordinates);
	m_RelativeCoord = ecoreFactory->createEClass();
	m_RelativeCoord->setName("RelativeCoord");
	addEClassifiers(m_RelativeCoord);
	m_AbsoluteCoord = ecoreFactory->createEClass();
	m_AbsoluteCoord->setName("AbsoluteCoord");
	addEClassifiers(m_AbsoluteCoord);
	m_ReferencedFile = ecoreFactory->createEClass();
	m_ReferencedFile->setName("ReferencedFile");
	addEClassifiers(m_ReferencedFile);
	m_SvgFile = ecoreFactory->createEClass();
	m_SvgFile->setName("SvgFile");
	addEClassifiers(m_SvgFile);

	
    {
        m_Element__owner = ecoreFactory->createEReference();
        m_Element__owner->setName("owner");
        m_Element->addEStructuralFeatures(m_Element__owner);
        m_Element->addEAllStructuralFeatures(m_Element__owner);
        m_Element->addEReferences(m_Element__owner);
        m_Element->addEAllReferences(m_Element__owner);
    }
    {
        m_Element__target = ecoreFactory->createEReference();
        m_Element__target->setName("target");
        m_Element->addEStructuralFeatures(m_Element__target);
        m_Element->addEAllStructuralFeatures(m_Element__target);
        m_Element->addEReferences(m_Element__target);
        m_Element->addEAllReferences(m_Element__target);
    }
    {
        m_Element__attribute = ecoreFactory->createEReference();
        m_Element__attribute->setName("attribute");
        m_Element->addEStructuralFeatures(m_Element__attribute);
        m_Element->addEAllStructuralFeatures(m_Element__attribute);
        m_Element->addEReferences(m_Element__attribute);
        m_Element->addEAllReferences(m_Element__attribute);
    }
    {
        m_Element__position = ecoreFactory->createEReference();
        m_Element__position->setName("position");
        m_Element->addEStructuralFeatures(m_Element__position);
        m_Element->addEAllStructuralFeatures(m_Element__position);
        m_Element->addEReferences(m_Element__position);
        m_Element->addEAllReferences(m_Element__position);
    }
    {
        m_Element__size = ecoreFactory->createEReference();
        m_Element__size->setName("size");
        m_Element->addEStructuralFeatures(m_Element__size);
        m_Element->addEAllStructuralFeatures(m_Element__size);
        m_Element->addEReferences(m_Element__size);
        m_Element->addEAllReferences(m_Element__size);
    }
    {
        m_Element__root = ecoreFactory->createEReference();
        m_Element__root->setName("root");
        m_Element->addEStructuralFeatures(m_Element__root);
        m_Element->addEAllStructuralFeatures(m_Element__root);
        m_Element->addEReferences(m_Element__root);
        m_Element->addEAllReferences(m_Element__root);
    }
    {
        m_Element__fill = ecoreFactory->createEAttribute();
        m_Element__fill->setName("fill");
        m_Element->addEStructuralFeatures(m_Element__fill);
        m_Element->addEAllStructuralFeatures(m_Element__fill);
        m_Element->addEAttributes(m_Element__fill);
        m_Element->addEAllAttributes(m_Element__fill);
    }
    {
        m_Element__viewBox = ecoreFactory->createEAttribute();
        m_Element__viewBox->setName("viewBox");
        m_Element->addEStructuralFeatures(m_Element__viewBox);
        m_Element->addEAllStructuralFeatures(m_Element__viewBox);
        m_Element->addEAttributes(m_Element__viewBox);
        m_Element->addEAllAttributes(m_Element__viewBox);
    }
    {
        m_Element__group = ecoreFactory->createEReference();
        m_Element__group->setName("group");
        m_Element->addEStructuralFeatures(m_Element__group);
        m_Element->addEAllStructuralFeatures(m_Element__group);
        m_Element->addEReferences(m_Element__group);
        m_Element->addEAllReferences(m_Element__group);
    }
    {
        m_Element__identifier = ecoreFactory->createEAttribute();
        m_Element__identifier->setName("identifier");
        m_Element->addEStructuralFeatures(m_Element__identifier);
        m_Element->addEAllStructuralFeatures(m_Element__identifier);
        m_Element->addEAttributes(m_Element__identifier);
        m_Element->addEAllAttributes(m_Element__identifier);
    }
    {
        m_Element__drawsMarker = ecoreFactory->createEReference();
        m_Element__drawsMarker->setName("drawsMarker");
        m_Element->addEStructuralFeatures(m_Element__drawsMarker);
        m_Element->addEAllStructuralFeatures(m_Element__drawsMarker);
        m_Element->addEReferences(m_Element__drawsMarker);
        m_Element->addEAllReferences(m_Element__drawsMarker);
    }
    {
        m_Image__referee = ecoreFactory->createEReference();
        m_Image__referee->setName("referee");
        m_Image->addEStructuralFeatures(m_Image__referee);
        m_Image->addEAllStructuralFeatures(m_Image__referee);
        m_Image->addEReferences(m_Image__referee);
        m_Image->addEAllReferences(m_Image__referee);
    }
    {
        m_Svg__owner_SVG = ecoreFactory->createEReference();
        m_Svg__owner_SVG->setName("owner_SVG");
        m_Svg->addEStructuralFeatures(m_Svg__owner_SVG);
        m_Svg->addEAllStructuralFeatures(m_Svg__owner_SVG);
        m_Svg->addEReferences(m_Svg__owner_SVG);
        m_Svg->addEAllReferences(m_Svg__owner_SVG);
    }
    {
        m_Svg__children = ecoreFactory->createEReference();
        m_Svg__children->setName("children");
        m_Svg->addEStructuralFeatures(m_Svg__children);
        m_Svg->addEAllStructuralFeatures(m_Svg__children);
        m_Svg->addEReferences(m_Svg__children);
        m_Svg->addEAllReferences(m_Svg__children);
    }
    {
        m_Svg__namespace = ecoreFactory->createEAttribute();
        m_Svg__namespace->setName("namespace");
        m_Svg->addEStructuralFeatures(m_Svg__namespace);
        m_Svg->addEAllStructuralFeatures(m_Svg__namespace);
        m_Svg->addEAttributes(m_Svg__namespace);
        m_Svg->addEAllAttributes(m_Svg__namespace);
    }
    {
        m_Svg__version = ecoreFactory->createEAttribute();
        m_Svg__version->setName("version");
        m_Svg->addEStructuralFeatures(m_Svg__version);
        m_Svg->addEAllStructuralFeatures(m_Svg__version);
        m_Svg->addEAttributes(m_Svg__version);
        m_Svg->addEAllAttributes(m_Svg__version);
    }
    {
        m_Svg__baseProfile = ecoreFactory->createEAttribute();
        m_Svg__baseProfile->setName("baseProfile");
        m_Svg->addEStructuralFeatures(m_Svg__baseProfile);
        m_Svg->addEAllStructuralFeatures(m_Svg__baseProfile);
        m_Svg->addEAttributes(m_Svg__baseProfile);
        m_Svg->addEAllAttributes(m_Svg__baseProfile);
    }
    {
        m_GroupingElement__groupContent = ecoreFactory->createEReference();
        m_GroupingElement__groupContent->setName("groupContent");
        m_GroupingElement->addEStructuralFeatures(m_GroupingElement__groupContent);
        m_GroupingElement->addEAllStructuralFeatures(m_GroupingElement__groupContent);
        m_GroupingElement->addEReferences(m_GroupingElement__groupContent);
        m_GroupingElement->addEAllReferences(m_GroupingElement__groupContent);
    }
    {
        m_G__name = ecoreFactory->createEAttribute();
        m_G__name->setName("name");
        m_G->addEStructuralFeatures(m_G__name);
        m_G->addEAllStructuralFeatures(m_G__name);
        m_G->addEAttributes(m_G__name);
        m_G->addEAllAttributes(m_G__name);
    }
    {
        m_Use__use = ecoreFactory->createEReference();
        m_Use__use->setName("use");
        m_Use->addEStructuralFeatures(m_Use__use);
        m_Use->addEAllStructuralFeatures(m_Use__use);
        m_Use->addEReferences(m_Use__use);
        m_Use->addEAllReferences(m_Use__use);
    }
    {
        m_GraphicalElement__stroke = ecoreFactory->createEAttribute();
        m_GraphicalElement__stroke->setName("stroke");
        m_GraphicalElement->addEStructuralFeatures(m_GraphicalElement__stroke);
        m_GraphicalElement->addEAllStructuralFeatures(m_GraphicalElement__stroke);
        m_GraphicalElement->addEAttributes(m_GraphicalElement__stroke);
        m_GraphicalElement->addEAllAttributes(m_GraphicalElement__stroke);
    }
    {
        m_TextElement__rotate = ecoreFactory->createEAttribute();
        m_TextElement__rotate->setName("rotate");
        m_TextElement->addEStructuralFeatures(m_TextElement__rotate);
        m_TextElement->addEAllStructuralFeatures(m_TextElement__rotate);
        m_TextElement->addEAttributes(m_TextElement__rotate);
        m_TextElement->addEAllAttributes(m_TextElement__rotate);
    }
    {
        m_TextElement__textLength = ecoreFactory->createEAttribute();
        m_TextElement__textLength->setName("textLength");
        m_TextElement->addEStructuralFeatures(m_TextElement__textLength);
        m_TextElement->addEAllStructuralFeatures(m_TextElement__textLength);
        m_TextElement->addEAttributes(m_TextElement__textLength);
        m_TextElement->addEAllAttributes(m_TextElement__textLength);
    }
    {
        m_TextElement__fontSize = ecoreFactory->createEAttribute();
        m_TextElement__fontSize->setName("fontSize");
        m_TextElement->addEStructuralFeatures(m_TextElement__fontSize);
        m_TextElement->addEAllStructuralFeatures(m_TextElement__fontSize);
        m_TextElement->addEAttributes(m_TextElement__fontSize);
        m_TextElement->addEAllAttributes(m_TextElement__fontSize);
    }
    {
        m_Rect__rx = ecoreFactory->createEAttribute();
        m_Rect__rx->setName("rx");
        m_Rect->addEStructuralFeatures(m_Rect__rx);
        m_Rect->addEAllStructuralFeatures(m_Rect__rx);
        m_Rect->addEAttributes(m_Rect__rx);
        m_Rect->addEAllAttributes(m_Rect__rx);
    }
    {
        m_Rect__ry = ecoreFactory->createEAttribute();
        m_Rect__ry->setName("ry");
        m_Rect->addEStructuralFeatures(m_Rect__ry);
        m_Rect->addEAllStructuralFeatures(m_Rect__ry);
        m_Rect->addEAttributes(m_Rect__ry);
        m_Rect->addEAllAttributes(m_Rect__ry);
    }
    {
        m_Line__between = ecoreFactory->createEReference();
        m_Line__between->setName("between");
        m_Line->addEStructuralFeatures(m_Line__between);
        m_Line->addEAllStructuralFeatures(m_Line__between);
        m_Line->addEReferences(m_Line__between);
        m_Line->addEAllReferences(m_Line__between);
    }
    {
        m_Line__markerEnd = ecoreFactory->createEAttribute();
        m_Line__markerEnd->setName("markerEnd");
        m_Line->addEStructuralFeatures(m_Line__markerEnd);
        m_Line->addEAllStructuralFeatures(m_Line__markerEnd);
        m_Line->addEAttributes(m_Line__markerEnd);
        m_Line->addEAllAttributes(m_Line__markerEnd);
    }
    {
        m_Line__markerStart = ecoreFactory->createEAttribute();
        m_Line__markerStart->setName("markerStart");
        m_Line->addEStructuralFeatures(m_Line__markerStart);
        m_Line->addEAllStructuralFeatures(m_Line__markerStart);
        m_Line->addEAttributes(m_Line__markerStart);
        m_Line->addEAllAttributes(m_Line__markerStart);
    }
    {
        m_Polyline__waypoints = ecoreFactory->createEReference();
        m_Polyline__waypoints->setName("waypoints");
        m_Polyline->addEStructuralFeatures(m_Polyline__waypoints);
        m_Polyline->addEAllStructuralFeatures(m_Polyline__waypoints);
        m_Polyline->addEReferences(m_Polyline__waypoints);
        m_Polyline->addEAllReferences(m_Polyline__waypoints);
    }
    {
        m_Polyline__strokeDashArray = ecoreFactory->createEAttribute();
        m_Polyline__strokeDashArray->setName("strokeDashArray");
        m_Polyline->addEStructuralFeatures(m_Polyline__strokeDashArray);
        m_Polyline->addEAllStructuralFeatures(m_Polyline__strokeDashArray);
        m_Polyline->addEAttributes(m_Polyline__strokeDashArray);
        m_Polyline->addEAllAttributes(m_Polyline__strokeDashArray);
    }
    {
        m_Polyline__markerEnd = ecoreFactory->createEAttribute();
        m_Polyline__markerEnd->setName("markerEnd");
        m_Polyline->addEStructuralFeatures(m_Polyline__markerEnd);
        m_Polyline->addEAllStructuralFeatures(m_Polyline__markerEnd);
        m_Polyline->addEAttributes(m_Polyline__markerEnd);
        m_Polyline->addEAllAttributes(m_Polyline__markerEnd);
    }
    {
        m_Polyline__markerStart = ecoreFactory->createEAttribute();
        m_Polyline__markerStart->setName("markerStart");
        m_Polyline->addEStructuralFeatures(m_Polyline__markerStart);
        m_Polyline->addEAllStructuralFeatures(m_Polyline__markerStart);
        m_Polyline->addEAttributes(m_Polyline__markerStart);
        m_Polyline->addEAllAttributes(m_Polyline__markerStart);
    }
    {
        m_Polygon__waypoints = ecoreFactory->createEReference();
        m_Polygon__waypoints->setName("waypoints");
        m_Polygon->addEStructuralFeatures(m_Polygon__waypoints);
        m_Polygon->addEAllStructuralFeatures(m_Polygon__waypoints);
        m_Polygon->addEReferences(m_Polygon__waypoints);
        m_Polygon->addEAllReferences(m_Polygon__waypoints);
    }
    {
        m_Polygon__markerEnd = ecoreFactory->createEAttribute();
        m_Polygon__markerEnd->setName("markerEnd");
        m_Polygon->addEStructuralFeatures(m_Polygon__markerEnd);
        m_Polygon->addEAllStructuralFeatures(m_Polygon__markerEnd);
        m_Polygon->addEAttributes(m_Polygon__markerEnd);
        m_Polygon->addEAllAttributes(m_Polygon__markerEnd);
    }
    {
        m_Polygon__markerStart = ecoreFactory->createEAttribute();
        m_Polygon__markerStart->setName("markerStart");
        m_Polygon->addEStructuralFeatures(m_Polygon__markerStart);
        m_Polygon->addEAllStructuralFeatures(m_Polygon__markerStart);
        m_Polygon->addEAttributes(m_Polygon__markerStart);
        m_Polygon->addEAllAttributes(m_Polygon__markerStart);
    }
    {
        m_Path__pathLength = ecoreFactory->createEAttribute();
        m_Path__pathLength->setName("pathLength");
        m_Path->addEStructuralFeatures(m_Path__pathLength);
        m_Path->addEAllStructuralFeatures(m_Path__pathLength);
        m_Path->addEAttributes(m_Path__pathLength);
        m_Path->addEAllAttributes(m_Path__pathLength);
    }
    {
        m_Path__d = ecoreFactory->createEAttribute();
        m_Path__d->setName("d");
        m_Path->addEStructuralFeatures(m_Path__d);
        m_Path->addEAllStructuralFeatures(m_Path__d);
        m_Path->addEAttributes(m_Path__d);
        m_Path->addEAllAttributes(m_Path__d);
    }
    {
        m_Path__markerEnd = ecoreFactory->createEAttribute();
        m_Path__markerEnd->setName("markerEnd");
        m_Path->addEStructuralFeatures(m_Path__markerEnd);
        m_Path->addEAllStructuralFeatures(m_Path__markerEnd);
        m_Path->addEAttributes(m_Path__markerEnd);
        m_Path->addEAllAttributes(m_Path__markerEnd);
    }
    {
        m_Path__markerStart = ecoreFactory->createEAttribute();
        m_Path__markerStart->setName("markerStart");
        m_Path->addEStructuralFeatures(m_Path__markerStart);
        m_Path->addEAllStructuralFeatures(m_Path__markerStart);
        m_Path->addEAttributes(m_Path__markerStart);
        m_Path->addEAllAttributes(m_Path__markerStart);
    }
    {
        m_Marker__markerUnits = ecoreFactory->createEAttribute();
        m_Marker__markerUnits->setName("markerUnits");
        m_Marker->addEStructuralFeatures(m_Marker__markerUnits);
        m_Marker->addEAllStructuralFeatures(m_Marker__markerUnits);
        m_Marker->addEAttributes(m_Marker__markerUnits);
        m_Marker->addEAllAttributes(m_Marker__markerUnits);
    }
    {
        m_Marker__refX = ecoreFactory->createEAttribute();
        m_Marker__refX->setName("refX");
        m_Marker->addEStructuralFeatures(m_Marker__refX);
        m_Marker->addEAllStructuralFeatures(m_Marker__refX);
        m_Marker->addEAttributes(m_Marker__refX);
        m_Marker->addEAllAttributes(m_Marker__refX);
    }
    {
        m_Marker__refY = ecoreFactory->createEAttribute();
        m_Marker__refY->setName("refY");
        m_Marker->addEStructuralFeatures(m_Marker__refY);
        m_Marker->addEAllStructuralFeatures(m_Marker__refY);
        m_Marker->addEAttributes(m_Marker__refY);
        m_Marker->addEAllAttributes(m_Marker__refY);
    }
    {
        m_Marker__markerWidth = ecoreFactory->createEAttribute();
        m_Marker__markerWidth->setName("markerWidth");
        m_Marker->addEStructuralFeatures(m_Marker__markerWidth);
        m_Marker->addEAllStructuralFeatures(m_Marker__markerWidth);
        m_Marker->addEAttributes(m_Marker__markerWidth);
        m_Marker->addEAllAttributes(m_Marker__markerWidth);
    }
    {
        m_Marker__markerHeight = ecoreFactory->createEAttribute();
        m_Marker__markerHeight->setName("markerHeight");
        m_Marker->addEStructuralFeatures(m_Marker__markerHeight);
        m_Marker->addEAllStructuralFeatures(m_Marker__markerHeight);
        m_Marker->addEAttributes(m_Marker__markerHeight);
        m_Marker->addEAllAttributes(m_Marker__markerHeight);
    }
    {
        m_Marker__orient = ecoreFactory->createEAttribute();
        m_Marker__orient->setName("orient");
        m_Marker->addEStructuralFeatures(m_Marker__orient);
        m_Marker->addEAllStructuralFeatures(m_Marker__orient);
        m_Marker->addEAttributes(m_Marker__orient);
        m_Marker->addEAllAttributes(m_Marker__orient);
    }
    {
        m_Marker__drawing = ecoreFactory->createEReference();
        m_Marker__drawing->setName("drawing");
        m_Marker->addEStructuralFeatures(m_Marker__drawing);
        m_Marker->addEAllStructuralFeatures(m_Marker__drawing);
        m_Marker->addEReferences(m_Marker__drawing);
        m_Marker->addEAllReferences(m_Marker__drawing);
    }
    {
        m_Text__lengthAdjust = ecoreFactory->createEAttribute();
        m_Text__lengthAdjust->setName("lengthAdjust");
        m_Text->addEStructuralFeatures(m_Text__lengthAdjust);
        m_Text->addEAllStructuralFeatures(m_Text__lengthAdjust);
        m_Text->addEAttributes(m_Text__lengthAdjust);
        m_Text->addEAllAttributes(m_Text__lengthAdjust);
    }
    {
        m_Text__content = ecoreFactory->createEAttribute();
        m_Text__content->setName("content");
        m_Text->addEStructuralFeatures(m_Text__content);
        m_Text->addEAllStructuralFeatures(m_Text__content);
        m_Text->addEAttributes(m_Text__content);
        m_Text->addEAllAttributes(m_Text__content);
    }
    {
        m_Tspan__content = ecoreFactory->createEAttribute();
        m_Tspan__content->setName("content");
        m_Tspan->addEStructuralFeatures(m_Tspan__content);
        m_Tspan->addEAllStructuralFeatures(m_Tspan__content);
        m_Tspan->addEAttributes(m_Tspan__content);
        m_Tspan->addEAllAttributes(m_Tspan__content);
    }
    {
        m_Tref__xlinkHref = ecoreFactory->createEReference();
        m_Tref__xlinkHref->setName("xlinkHref");
        m_Tref->addEStructuralFeatures(m_Tref__xlinkHref);
        m_Tref->addEAllStructuralFeatures(m_Tref__xlinkHref);
        m_Tref->addEReferences(m_Tref__xlinkHref);
        m_Tref->addEAllReferences(m_Tref__xlinkHref);
    }
    {
        m_Attribute__attOwner = ecoreFactory->createEReference();
        m_Attribute__attOwner->setName("attOwner");
        m_Attribute->addEStructuralFeatures(m_Attribute__attOwner);
        m_Attribute->addEAllStructuralFeatures(m_Attribute__attOwner);
        m_Attribute->addEReferences(m_Attribute__attOwner);
        m_Attribute->addEAllReferences(m_Attribute__attOwner);
    }
    {
        m_Scale__sx = ecoreFactory->createEAttribute();
        m_Scale__sx->setName("sx");
        m_Scale->addEStructuralFeatures(m_Scale__sx);
        m_Scale->addEAllStructuralFeatures(m_Scale__sx);
        m_Scale->addEAttributes(m_Scale__sx);
        m_Scale->addEAllAttributes(m_Scale__sx);
    }
    {
        m_Scale__sy = ecoreFactory->createEAttribute();
        m_Scale__sy->setName("sy");
        m_Scale->addEStructuralFeatures(m_Scale__sy);
        m_Scale->addEAllStructuralFeatures(m_Scale__sy);
        m_Scale->addEAttributes(m_Scale__sy);
        m_Scale->addEAllAttributes(m_Scale__sy);
    }
    {
        m_Translate__tx = ecoreFactory->createEAttribute();
        m_Translate__tx->setName("tx");
        m_Translate->addEStructuralFeatures(m_Translate__tx);
        m_Translate->addEAllStructuralFeatures(m_Translate__tx);
        m_Translate->addEAttributes(m_Translate__tx);
        m_Translate->addEAllAttributes(m_Translate__tx);
    }
    {
        m_Translate__ty = ecoreFactory->createEAttribute();
        m_Translate__ty->setName("ty");
        m_Translate->addEStructuralFeatures(m_Translate__ty);
        m_Translate->addEAllStructuralFeatures(m_Translate__ty);
        m_Translate->addEAttributes(m_Translate__ty);
        m_Translate->addEAllAttributes(m_Translate__ty);
    }
    {
        m_Rotate__angle = ecoreFactory->createEAttribute();
        m_Rotate__angle->setName("angle");
        m_Rotate->addEStructuralFeatures(m_Rotate__angle);
        m_Rotate->addEAllStructuralFeatures(m_Rotate__angle);
        m_Rotate->addEAttributes(m_Rotate__angle);
        m_Rotate->addEAllAttributes(m_Rotate__angle);
    }
    {
        m_Rotate__cx = ecoreFactory->createEAttribute();
        m_Rotate__cx->setName("cx");
        m_Rotate->addEStructuralFeatures(m_Rotate__cx);
        m_Rotate->addEAllStructuralFeatures(m_Rotate__cx);
        m_Rotate->addEAttributes(m_Rotate__cx);
        m_Rotate->addEAllAttributes(m_Rotate__cx);
    }
    {
        m_Rotate__cy = ecoreFactory->createEAttribute();
        m_Rotate__cy->setName("cy");
        m_Rotate->addEStructuralFeatures(m_Rotate__cy);
        m_Rotate->addEAllStructuralFeatures(m_Rotate__cy);
        m_Rotate->addEAttributes(m_Rotate__cy);
        m_Rotate->addEAllAttributes(m_Rotate__cy);
    }
    {
        m_Visibility__visible = ecoreFactory->createEAttribute();
        m_Visibility__visible->setName("visible");
        m_Visibility->addEStructuralFeatures(m_Visibility__visible);
        m_Visibility->addEAllStructuralFeatures(m_Visibility__visible);
        m_Visibility->addEAttributes(m_Visibility__visible);
        m_Visibility->addEAllAttributes(m_Visibility__visible);
    }
    {
        m_FontWeight__bold = ecoreFactory->createEAttribute();
        m_FontWeight__bold->setName("bold");
        m_FontWeight->addEStructuralFeatures(m_FontWeight__bold);
        m_FontWeight->addEAllStructuralFeatures(m_FontWeight__bold);
        m_FontWeight->addEAttributes(m_FontWeight__bold);
        m_FontWeight->addEAllAttributes(m_FontWeight__bold);
    }
    {
        m_FontStyle__italic = ecoreFactory->createEAttribute();
        m_FontStyle__italic->setName("italic");
        m_FontStyle->addEStructuralFeatures(m_FontStyle__italic);
        m_FontStyle->addEAllStructuralFeatures(m_FontStyle__italic);
        m_FontStyle->addEAttributes(m_FontStyle__italic);
        m_FontStyle->addEAllAttributes(m_FontStyle__italic);
    }
    {
        m_Dimension__width = ecoreFactory->createEAttribute();
        m_Dimension__width->setName("width");
        m_Dimension->addEStructuralFeatures(m_Dimension__width);
        m_Dimension->addEAllStructuralFeatures(m_Dimension__width);
        m_Dimension->addEAttributes(m_Dimension__width);
        m_Dimension->addEAllAttributes(m_Dimension__width);
    }
    {
        m_Dimension__height = ecoreFactory->createEAttribute();
        m_Dimension__height->setName("height");
        m_Dimension->addEStructuralFeatures(m_Dimension__height);
        m_Dimension->addEAllStructuralFeatures(m_Dimension__height);
        m_Dimension->addEAttributes(m_Dimension__height);
        m_Dimension->addEAllAttributes(m_Dimension__height);
    }
    {
        m_Coordinates__x = ecoreFactory->createEAttribute();
        m_Coordinates__x->setName("x");
        m_Coordinates->addEStructuralFeatures(m_Coordinates__x);
        m_Coordinates->addEAllStructuralFeatures(m_Coordinates__x);
        m_Coordinates->addEAttributes(m_Coordinates__x);
        m_Coordinates->addEAllAttributes(m_Coordinates__x);
    }
    {
        m_Coordinates__y = ecoreFactory->createEAttribute();
        m_Coordinates__y->setName("y");
        m_Coordinates->addEStructuralFeatures(m_Coordinates__y);
        m_Coordinates->addEAllStructuralFeatures(m_Coordinates__y);
        m_Coordinates->addEAttributes(m_Coordinates__y);
        m_Coordinates->addEAllAttributes(m_Coordinates__y);
    }
    {
        m_ReferencedFile__referer = ecoreFactory->createEReference();
        m_ReferencedFile__referer->setName("referer");
        m_ReferencedFile->addEStructuralFeatures(m_ReferencedFile__referer);
        m_ReferencedFile->addEAllStructuralFeatures(m_ReferencedFile__referer);
        m_ReferencedFile->addEReferences(m_ReferencedFile__referer);
        m_ReferencedFile->addEAllReferences(m_ReferencedFile__referer);
    }
    {
        m_ReferencedFile__name = ecoreFactory->createEAttribute();
        m_ReferencedFile__name->setName("name");
        m_ReferencedFile->addEStructuralFeatures(m_ReferencedFile__name);
        m_ReferencedFile->addEAllStructuralFeatures(m_ReferencedFile__name);
        m_ReferencedFile->addEAttributes(m_ReferencedFile__name);
        m_ReferencedFile->addEAllAttributes(m_ReferencedFile__name);
    }
    {
        m_SvgFile__tag = ecoreFactory->createEReference();
        m_SvgFile__tag->setName("tag");
        m_SvgFile->addEStructuralFeatures(m_SvgFile__tag);
        m_SvgFile->addEAllStructuralFeatures(m_SvgFile__tag);
        m_SvgFile->addEReferences(m_SvgFile__tag);
        m_SvgFile->addEAllReferences(m_SvgFile__tag);
    }
    {
        m_SvgFile__elements = ecoreFactory->createEReference();
        m_SvgFile__elements->setName("elements");
        m_SvgFile->addEStructuralFeatures(m_SvgFile__elements);
        m_SvgFile->addEAllStructuralFeatures(m_SvgFile__elements);
        m_SvgFile->addEReferences(m_SvgFile__elements);
        m_SvgFile->addEAllReferences(m_SvgFile__elements);
    }
	
	m_StructuralElement->addESuperTypes(m_Element);
	m_StructuralElement->addAllEAllOperations(m_Element->getEOperations());
	m_StructuralElement->addAllEAllReferences(m_Element->getEReferences());
	m_StructuralElement->addAllEAllAttributes(m_Element->getEAttributes());
	m_StructuralElement->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_Image->addESuperTypes(m_StructuralElement);
	m_Image->addAllEAllOperations(m_StructuralElement->getEOperations());
	m_Image->addAllEAllReferences(m_StructuralElement->getEReferences());
	m_Image->addAllEAllAttributes(m_StructuralElement->getEAttributes());
	m_Image->addAllEAllStructuralFeatures(m_StructuralElement->getEStructuralFeatures());
	m_Svg->addESuperTypes(m_StructuralElement);
	m_Svg->addAllEAllOperations(m_StructuralElement->getEOperations());
	m_Svg->addAllEAllReferences(m_StructuralElement->getEReferences());
	m_Svg->addAllEAllAttributes(m_StructuralElement->getEAttributes());
	m_Svg->addAllEAllStructuralFeatures(m_StructuralElement->getEStructuralFeatures());
	m_GroupingElement->addESuperTypes(m_StructuralElement);
	m_GroupingElement->addAllEAllOperations(m_StructuralElement->getEOperations());
	m_GroupingElement->addAllEAllReferences(m_StructuralElement->getEReferences());
	m_GroupingElement->addAllEAllAttributes(m_StructuralElement->getEAttributes());
	m_GroupingElement->addAllEAllStructuralFeatures(m_StructuralElement->getEStructuralFeatures());
	m_G->addESuperTypes(m_GroupingElement);
	m_G->addAllEAllOperations(m_GroupingElement->getEOperations());
	m_G->addAllEAllReferences(m_GroupingElement->getEReferences());
	m_G->addAllEAllAttributes(m_GroupingElement->getEAttributes());
	m_G->addAllEAllStructuralFeatures(m_GroupingElement->getEStructuralFeatures());
	m_Defs->addESuperTypes(m_GroupingElement);
	m_Defs->addAllEAllOperations(m_GroupingElement->getEOperations());
	m_Defs->addAllEAllReferences(m_GroupingElement->getEReferences());
	m_Defs->addAllEAllAttributes(m_GroupingElement->getEAttributes());
	m_Defs->addAllEAllStructuralFeatures(m_GroupingElement->getEStructuralFeatures());
	m_Symbol->addESuperTypes(m_GroupingElement);
	m_Symbol->addAllEAllOperations(m_GroupingElement->getEOperations());
	m_Symbol->addAllEAllReferences(m_GroupingElement->getEReferences());
	m_Symbol->addAllEAllAttributes(m_GroupingElement->getEAttributes());
	m_Symbol->addAllEAllStructuralFeatures(m_GroupingElement->getEStructuralFeatures());
	m_Use->addESuperTypes(m_StructuralElement);
	m_Use->addAllEAllOperations(m_StructuralElement->getEOperations());
	m_Use->addAllEAllReferences(m_StructuralElement->getEReferences());
	m_Use->addAllEAllAttributes(m_StructuralElement->getEAttributes());
	m_Use->addAllEAllStructuralFeatures(m_StructuralElement->getEStructuralFeatures());
	m_GraphicalElement->addESuperTypes(m_Element);
	m_GraphicalElement->addAllEAllOperations(m_Element->getEOperations());
	m_GraphicalElement->addAllEAllReferences(m_Element->getEReferences());
	m_GraphicalElement->addAllEAllAttributes(m_Element->getEAttributes());
	m_GraphicalElement->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_Shape->addESuperTypes(m_GraphicalElement);
	m_Shape->addAllEAllOperations(m_GraphicalElement->getEOperations());
	m_Shape->addAllEAllReferences(m_GraphicalElement->getEReferences());
	m_Shape->addAllEAllAttributes(m_GraphicalElement->getEAttributes());
	m_Shape->addAllEAllStructuralFeatures(m_GraphicalElement->getEStructuralFeatures());
	m_TextElement->addESuperTypes(m_GraphicalElement);
	m_TextElement->addAllEAllOperations(m_GraphicalElement->getEOperations());
	m_TextElement->addAllEAllReferences(m_GraphicalElement->getEReferences());
	m_TextElement->addAllEAllAttributes(m_GraphicalElement->getEAttributes());
	m_TextElement->addAllEAllStructuralFeatures(m_GraphicalElement->getEStructuralFeatures());
	m_Rect->addESuperTypes(m_Shape);
	m_Rect->addAllEAllOperations(m_Shape->getEOperations());
	m_Rect->addAllEAllReferences(m_Shape->getEReferences());
	m_Rect->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Rect->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Circle->addESuperTypes(m_Shape);
	m_Circle->addAllEAllOperations(m_Shape->getEOperations());
	m_Circle->addAllEAllReferences(m_Shape->getEReferences());
	m_Circle->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Circle->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Ellipse->addESuperTypes(m_Shape);
	m_Ellipse->addAllEAllOperations(m_Shape->getEOperations());
	m_Ellipse->addAllEAllReferences(m_Shape->getEReferences());
	m_Ellipse->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Ellipse->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Line->addESuperTypes(m_Shape);
	m_Line->addAllEAllOperations(m_Shape->getEOperations());
	m_Line->addAllEAllReferences(m_Shape->getEReferences());
	m_Line->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Line->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Polyline->addESuperTypes(m_Shape);
	m_Polyline->addAllEAllOperations(m_Shape->getEOperations());
	m_Polyline->addAllEAllReferences(m_Shape->getEReferences());
	m_Polyline->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Polyline->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Polygon->addESuperTypes(m_Shape);
	m_Polygon->addAllEAllOperations(m_Shape->getEOperations());
	m_Polygon->addAllEAllReferences(m_Shape->getEReferences());
	m_Polygon->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Polygon->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Path->addESuperTypes(m_Shape);
	m_Path->addAllEAllOperations(m_Shape->getEOperations());
	m_Path->addAllEAllReferences(m_Shape->getEReferences());
	m_Path->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Path->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Point->addESuperTypes(m_Shape);
	m_Point->addAllEAllOperations(m_Shape->getEOperations());
	m_Point->addAllEAllReferences(m_Shape->getEReferences());
	m_Point->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Point->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Marker->addESuperTypes(m_Shape);
	m_Marker->addAllEAllOperations(m_Shape->getEOperations());
	m_Marker->addAllEAllReferences(m_Shape->getEReferences());
	m_Marker->addAllEAllAttributes(m_Shape->getEAttributes());
	m_Marker->addAllEAllStructuralFeatures(m_Shape->getEStructuralFeatures());
	m_Text->addESuperTypes(m_TextElement);
	m_Text->addAllEAllOperations(m_TextElement->getEOperations());
	m_Text->addAllEAllReferences(m_TextElement->getEReferences());
	m_Text->addAllEAllAttributes(m_TextElement->getEAttributes());
	m_Text->addAllEAllStructuralFeatures(m_TextElement->getEStructuralFeatures());
	m_Tspan->addESuperTypes(m_TextElement);
	m_Tspan->addAllEAllOperations(m_TextElement->getEOperations());
	m_Tspan->addAllEAllReferences(m_TextElement->getEReferences());
	m_Tspan->addAllEAllAttributes(m_TextElement->getEAttributes());
	m_Tspan->addAllEAllStructuralFeatures(m_TextElement->getEStructuralFeatures());
	m_Tref->addESuperTypes(m_TextElement);
	m_Tref->addAllEAllOperations(m_TextElement->getEOperations());
	m_Tref->addAllEAllReferences(m_TextElement->getEReferences());
	m_Tref->addAllEAllAttributes(m_TextElement->getEAttributes());
	m_Tref->addAllEAllStructuralFeatures(m_TextElement->getEStructuralFeatures());
	m_Transform->addESuperTypes(m_Attribute);
	m_Transform->addAllEAllOperations(m_Attribute->getEOperations());
	m_Transform->addAllEAllReferences(m_Attribute->getEReferences());
	m_Transform->addAllEAllAttributes(m_Attribute->getEAttributes());
	m_Transform->addAllEAllStructuralFeatures(m_Attribute->getEStructuralFeatures());
	m_Scale->addESuperTypes(m_Transform);
	m_Scale->addAllEAllOperations(m_Transform->getEOperations());
	m_Scale->addAllEAllReferences(m_Transform->getEReferences());
	m_Scale->addAllEAllAttributes(m_Transform->getEAttributes());
	m_Scale->addAllEAllStructuralFeatures(m_Transform->getEStructuralFeatures());
	m_Translate->addESuperTypes(m_Transform);
	m_Translate->addAllEAllOperations(m_Transform->getEOperations());
	m_Translate->addAllEAllReferences(m_Transform->getEReferences());
	m_Translate->addAllEAllAttributes(m_Transform->getEAttributes());
	m_Translate->addAllEAllStructuralFeatures(m_Transform->getEStructuralFeatures());
	m_Rotate->addESuperTypes(m_Transform);
	m_Rotate->addAllEAllOperations(m_Transform->getEOperations());
	m_Rotate->addAllEAllReferences(m_Transform->getEReferences());
	m_Rotate->addAllEAllAttributes(m_Transform->getEAttributes());
	m_Rotate->addAllEAllStructuralFeatures(m_Transform->getEStructuralFeatures());
	m_Visibility->addESuperTypes(m_Attribute);
	m_Visibility->addAllEAllOperations(m_Attribute->getEOperations());
	m_Visibility->addAllEAllReferences(m_Attribute->getEReferences());
	m_Visibility->addAllEAllAttributes(m_Attribute->getEAttributes());
	m_Visibility->addAllEAllStructuralFeatures(m_Attribute->getEStructuralFeatures());
	m_FontWeight->addESuperTypes(m_Attribute);
	m_FontWeight->addAllEAllOperations(m_Attribute->getEOperations());
	m_FontWeight->addAllEAllReferences(m_Attribute->getEReferences());
	m_FontWeight->addAllEAllAttributes(m_Attribute->getEAttributes());
	m_FontWeight->addAllEAllStructuralFeatures(m_Attribute->getEStructuralFeatures());
	m_FontStyle->addESuperTypes(m_Attribute);
	m_FontStyle->addAllEAllOperations(m_Attribute->getEOperations());
	m_FontStyle->addAllEAllReferences(m_Attribute->getEReferences());
	m_FontStyle->addAllEAllAttributes(m_Attribute->getEAttributes());
	m_FontStyle->addAllEAllStructuralFeatures(m_Attribute->getEStructuralFeatures());
	m_RelativeCoord->addESuperTypes(m_Coordinates);
	m_RelativeCoord->addAllEAllOperations(m_Coordinates->getEOperations());
	m_RelativeCoord->addAllEAllReferences(m_Coordinates->getEReferences());
	m_RelativeCoord->addAllEAllAttributes(m_Coordinates->getEAttributes());
	m_RelativeCoord->addAllEAllStructuralFeatures(m_Coordinates->getEStructuralFeatures());
	m_AbsoluteCoord->addESuperTypes(m_Coordinates);
	m_AbsoluteCoord->addAllEAllOperations(m_Coordinates->getEOperations());
	m_AbsoluteCoord->addAllEAllReferences(m_Coordinates->getEReferences());
	m_AbsoluteCoord->addAllEAllAttributes(m_Coordinates->getEAttributes());
	m_AbsoluteCoord->addAllEAllStructuralFeatures(m_Coordinates->getEStructuralFeatures());
	m_SvgFile->addESuperTypes(m_ReferencedFile);
	m_SvgFile->addAllEAllOperations(m_ReferencedFile->getEOperations());
	m_SvgFile->addAllEAllReferences(m_ReferencedFile->getEReferences());
	m_SvgFile->addAllEAllAttributes(m_ReferencedFile->getEAttributes());
	m_SvgFile->addAllEAllStructuralFeatures(m_ReferencedFile->getEStructuralFeatures());
	
	
	m_Element->addFeatureAccesors(m_Element__owner, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getOwner()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__target, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getTarget()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__attribute, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getAttribute()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__position, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getPosition()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__size, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__root, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getRoot()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__fill, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getFill()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__viewBox, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getViewBox()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__group, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getGroup()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__identifier, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getIdentifier()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__drawsMarker, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Element_ptr >(o)->getDrawsMarker()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Image->addFeatureAccesors(m_Image__referee, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Image_ptr >(o)->getReferee()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Svg->addFeatureAccesors(m_Svg__owner_SVG, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Svg_ptr >(o)->getOwner_SVG()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Svg->addFeatureAccesors(m_Svg__children, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Svg_ptr >(o)->getChildren()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Svg->addFeatureAccesors(m_Svg__namespace, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Svg_ptr >(o)->getNamespace()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Svg->addFeatureAccesors(m_Svg__version, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Svg_ptr >(o)->getVersion()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Svg->addFeatureAccesors(m_Svg__baseProfile, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Svg_ptr >(o)->getBaseProfile()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_GroupingElement->addFeatureAccesors(m_GroupingElement__groupContent, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::GroupingElement_ptr >(o)->getGroupContent()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_G->addFeatureAccesors(m_G__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::G_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Use->addFeatureAccesors(m_Use__use, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Use_ptr >(o)->getUse()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_GraphicalElement->addFeatureAccesors(m_GraphicalElement__stroke, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::GraphicalElement_ptr >(o)->getStroke()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TextElement->addFeatureAccesors(m_TextElement__rotate, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::TextElement_ptr >(o)->getRotate()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TextElement->addFeatureAccesors(m_TextElement__textLength, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::TextElement_ptr >(o)->getTextLength()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TextElement->addFeatureAccesors(m_TextElement__fontSize, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::TextElement_ptr >(o)->getFontSize()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Rect->addFeatureAccesors(m_Rect__rx, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Rect_ptr >(o)->getRx()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Rect->addFeatureAccesors(m_Rect__ry, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Rect_ptr >(o)->getRy()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Line->addFeatureAccesors(m_Line__between, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Line_ptr >(o)->getBetween()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Line->addFeatureAccesors(m_Line__markerEnd, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Line_ptr >(o)->getMarkerEnd()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Line->addFeatureAccesors(m_Line__markerStart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Line_ptr >(o)->getMarkerStart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polyline->addFeatureAccesors(m_Polyline__waypoints, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polyline_ptr >(o)->getWaypoints()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polyline->addFeatureAccesors(m_Polyline__strokeDashArray, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polyline_ptr >(o)->getStrokeDashArray()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polyline->addFeatureAccesors(m_Polyline__markerEnd, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polyline_ptr >(o)->getMarkerEnd()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polyline->addFeatureAccesors(m_Polyline__markerStart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polyline_ptr >(o)->getMarkerStart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polygon->addFeatureAccesors(m_Polygon__waypoints, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polygon_ptr >(o)->getWaypoints()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polygon->addFeatureAccesors(m_Polygon__markerEnd, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polygon_ptr >(o)->getMarkerEnd()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Polygon->addFeatureAccesors(m_Polygon__markerStart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Polygon_ptr >(o)->getMarkerStart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Path->addFeatureAccesors(m_Path__pathLength, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Path_ptr >(o)->getPathLength()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Path->addFeatureAccesors(m_Path__d, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Path_ptr >(o)->getD()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Path->addFeatureAccesors(m_Path__markerEnd, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Path_ptr >(o)->getMarkerEnd()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Path->addFeatureAccesors(m_Path__markerStart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Path_ptr >(o)->getMarkerStart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__markerUnits, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getMarkerUnits()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__refX, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getRefX()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__refY, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getRefY()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__markerWidth, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getMarkerWidth()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__markerHeight, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getMarkerHeight()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__orient, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getOrient()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Marker->addFeatureAccesors(m_Marker__drawing, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Marker_ptr >(o)->getDrawing()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Text->addFeatureAccesors(m_Text__lengthAdjust, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Text_ptr >(o)->getLengthAdjust()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Text->addFeatureAccesors(m_Text__content, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Text_ptr >(o)->getContent()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Tspan->addFeatureAccesors(m_Tspan__content, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Tspan_ptr >(o)->getContent()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Tref->addFeatureAccesors(m_Tref__xlinkHref, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Tref_ptr >(o)->getXlinkHref()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Attribute->addFeatureAccesors(m_Attribute__attOwner, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Attribute_ptr >(o)->getAttOwner()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Scale->addFeatureAccesors(m_Scale__sx, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Scale_ptr >(o)->getSx()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Scale->addFeatureAccesors(m_Scale__sy, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Scale_ptr >(o)->getSy()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Translate->addFeatureAccesors(m_Translate__tx, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Translate_ptr >(o)->getTx()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Translate->addFeatureAccesors(m_Translate__ty, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Translate_ptr >(o)->getTy()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Rotate->addFeatureAccesors(m_Rotate__angle, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Rotate_ptr >(o)->getAngle()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Rotate->addFeatureAccesors(m_Rotate__cx, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Rotate_ptr >(o)->getCx()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Rotate->addFeatureAccesors(m_Rotate__cy, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Rotate_ptr >(o)->getCy()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Visibility->addFeatureAccesors(m_Visibility__visible, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Visibility_ptr >(o)->getVisible()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_FontWeight->addFeatureAccesors(m_FontWeight__bold, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::FontWeight_ptr >(o)->getBold()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_FontStyle->addFeatureAccesors(m_FontStyle__italic, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::FontStyle_ptr >(o)->getItalic()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Dimension->addFeatureAccesors(m_Dimension__width, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Dimension_ptr >(o)->getWidth()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Dimension->addFeatureAccesors(m_Dimension__height, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Dimension_ptr >(o)->getHeight()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Coordinates->addFeatureAccesors(m_Coordinates__x, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Coordinates_ptr >(o)->getX()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Coordinates->addFeatureAccesors(m_Coordinates__y, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::Coordinates_ptr >(o)->getY()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReferencedFile->addFeatureAccesors(m_ReferencedFile__referer, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::ReferencedFile_ptr >(o)->getReferer()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReferencedFile->addFeatureAccesors(m_ReferencedFile__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::ReferencedFile_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SvgFile->addFeatureAccesors(m_SvgFile__tag, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::SvgFile_ptr >(o)->getTag()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SvgFile->addFeatureAccesors(m_SvgFile__elements, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< SVG::SvgFile_ptr >(o)->getElements()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const SVGPackage_ptr SVGPackage::_instance()
{
	static SVGPackage __instance;
	return &__instance;
}

ecore::EClass_ptr SVGPackage::getElement() const
{
	return m_Element;
}
  	
e4c::tag_t SVGPackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
ecore::EClass_ptr SVGPackage::getStructuralElement() const
{
	return m_StructuralElement;
}
  	
e4c::tag_t SVGPackage::getTag_StructuralElement() const
{
	return e4c::tag< StructuralElement >::get();
}
 
ecore::EClass_ptr SVGPackage::getImage() const
{
	return m_Image;
}
  	
e4c::tag_t SVGPackage::getTag_Image() const
{
	return e4c::tag< Image >::get();
}
 
ecore::EClass_ptr SVGPackage::getSvg() const
{
	return m_Svg;
}
  	
e4c::tag_t SVGPackage::getTag_Svg() const
{
	return e4c::tag< Svg >::get();
}
 
ecore::EClass_ptr SVGPackage::getGroupingElement() const
{
	return m_GroupingElement;
}
  	
e4c::tag_t SVGPackage::getTag_GroupingElement() const
{
	return e4c::tag< GroupingElement >::get();
}
 
ecore::EClass_ptr SVGPackage::getG() const
{
	return m_G;
}
  	
e4c::tag_t SVGPackage::getTag_G() const
{
	return e4c::tag< G >::get();
}
 
ecore::EClass_ptr SVGPackage::getDefs() const
{
	return m_Defs;
}
  	
e4c::tag_t SVGPackage::getTag_Defs() const
{
	return e4c::tag< Defs >::get();
}
 
ecore::EClass_ptr SVGPackage::getSymbol() const
{
	return m_Symbol;
}
  	
e4c::tag_t SVGPackage::getTag_Symbol() const
{
	return e4c::tag< Symbol >::get();
}
 
ecore::EClass_ptr SVGPackage::getUse() const
{
	return m_Use;
}
  	
e4c::tag_t SVGPackage::getTag_Use() const
{
	return e4c::tag< Use >::get();
}
 
ecore::EClass_ptr SVGPackage::getGraphicalElement() const
{
	return m_GraphicalElement;
}
  	
e4c::tag_t SVGPackage::getTag_GraphicalElement() const
{
	return e4c::tag< GraphicalElement >::get();
}
 
ecore::EClass_ptr SVGPackage::getShape() const
{
	return m_Shape;
}
  	
e4c::tag_t SVGPackage::getTag_Shape() const
{
	return e4c::tag< Shape >::get();
}
 
ecore::EClass_ptr SVGPackage::getTextElement() const
{
	return m_TextElement;
}
  	
e4c::tag_t SVGPackage::getTag_TextElement() const
{
	return e4c::tag< TextElement >::get();
}
 
ecore::EClass_ptr SVGPackage::getRect() const
{
	return m_Rect;
}
  	
e4c::tag_t SVGPackage::getTag_Rect() const
{
	return e4c::tag< Rect >::get();
}
 
ecore::EClass_ptr SVGPackage::getCircle() const
{
	return m_Circle;
}
  	
e4c::tag_t SVGPackage::getTag_Circle() const
{
	return e4c::tag< Circle >::get();
}
 
ecore::EClass_ptr SVGPackage::getEllipse() const
{
	return m_Ellipse;
}
  	
e4c::tag_t SVGPackage::getTag_Ellipse() const
{
	return e4c::tag< Ellipse >::get();
}
 
ecore::EClass_ptr SVGPackage::getLine() const
{
	return m_Line;
}
  	
e4c::tag_t SVGPackage::getTag_Line() const
{
	return e4c::tag< Line >::get();
}
 
ecore::EClass_ptr SVGPackage::getPolyline() const
{
	return m_Polyline;
}
  	
e4c::tag_t SVGPackage::getTag_Polyline() const
{
	return e4c::tag< Polyline >::get();
}
 
ecore::EClass_ptr SVGPackage::getPolygon() const
{
	return m_Polygon;
}
  	
e4c::tag_t SVGPackage::getTag_Polygon() const
{
	return e4c::tag< Polygon >::get();
}
 
ecore::EClass_ptr SVGPackage::getPath() const
{
	return m_Path;
}
  	
e4c::tag_t SVGPackage::getTag_Path() const
{
	return e4c::tag< Path >::get();
}
 
ecore::EClass_ptr SVGPackage::getPoint() const
{
	return m_Point;
}
  	
e4c::tag_t SVGPackage::getTag_Point() const
{
	return e4c::tag< Point >::get();
}
 
ecore::EClass_ptr SVGPackage::getMarker() const
{
	return m_Marker;
}
  	
e4c::tag_t SVGPackage::getTag_Marker() const
{
	return e4c::tag< Marker >::get();
}
 
ecore::EClass_ptr SVGPackage::getText() const
{
	return m_Text;
}
  	
e4c::tag_t SVGPackage::getTag_Text() const
{
	return e4c::tag< Text >::get();
}
 
ecore::EClass_ptr SVGPackage::getTspan() const
{
	return m_Tspan;
}
  	
e4c::tag_t SVGPackage::getTag_Tspan() const
{
	return e4c::tag< Tspan >::get();
}
 
ecore::EClass_ptr SVGPackage::getTref() const
{
	return m_Tref;
}
  	
e4c::tag_t SVGPackage::getTag_Tref() const
{
	return e4c::tag< Tref >::get();
}
 
ecore::EClass_ptr SVGPackage::getAttribute() const
{
	return m_Attribute;
}
  	
e4c::tag_t SVGPackage::getTag_Attribute() const
{
	return e4c::tag< Attribute >::get();
}
 
ecore::EClass_ptr SVGPackage::getTransform() const
{
	return m_Transform;
}
  	
e4c::tag_t SVGPackage::getTag_Transform() const
{
	return e4c::tag< Transform >::get();
}
 
ecore::EClass_ptr SVGPackage::getScale() const
{
	return m_Scale;
}
  	
e4c::tag_t SVGPackage::getTag_Scale() const
{
	return e4c::tag< Scale >::get();
}
 
ecore::EClass_ptr SVGPackage::getTranslate() const
{
	return m_Translate;
}
  	
e4c::tag_t SVGPackage::getTag_Translate() const
{
	return e4c::tag< Translate >::get();
}
 
ecore::EClass_ptr SVGPackage::getRotate() const
{
	return m_Rotate;
}
  	
e4c::tag_t SVGPackage::getTag_Rotate() const
{
	return e4c::tag< Rotate >::get();
}
 
ecore::EClass_ptr SVGPackage::getVisibility() const
{
	return m_Visibility;
}
  	
e4c::tag_t SVGPackage::getTag_Visibility() const
{
	return e4c::tag< Visibility >::get();
}
 
ecore::EClass_ptr SVGPackage::getFontWeight() const
{
	return m_FontWeight;
}
  	
e4c::tag_t SVGPackage::getTag_FontWeight() const
{
	return e4c::tag< FontWeight >::get();
}
 
ecore::EClass_ptr SVGPackage::getFontStyle() const
{
	return m_FontStyle;
}
  	
e4c::tag_t SVGPackage::getTag_FontStyle() const
{
	return e4c::tag< FontStyle >::get();
}
 
ecore::EClass_ptr SVGPackage::getDimension() const
{
	return m_Dimension;
}
  	
e4c::tag_t SVGPackage::getTag_Dimension() const
{
	return e4c::tag< Dimension >::get();
}
 
ecore::EClass_ptr SVGPackage::getCoordinates() const
{
	return m_Coordinates;
}
  	
e4c::tag_t SVGPackage::getTag_Coordinates() const
{
	return e4c::tag< Coordinates >::get();
}
 
ecore::EClass_ptr SVGPackage::getRelativeCoord() const
{
	return m_RelativeCoord;
}
  	
e4c::tag_t SVGPackage::getTag_RelativeCoord() const
{
	return e4c::tag< RelativeCoord >::get();
}
 
ecore::EClass_ptr SVGPackage::getAbsoluteCoord() const
{
	return m_AbsoluteCoord;
}
  	
e4c::tag_t SVGPackage::getTag_AbsoluteCoord() const
{
	return e4c::tag< AbsoluteCoord >::get();
}
 
ecore::EClass_ptr SVGPackage::getReferencedFile() const
{
	return m_ReferencedFile;
}
  	
e4c::tag_t SVGPackage::getTag_ReferencedFile() const
{
	return e4c::tag< ReferencedFile >::get();
}
 
ecore::EClass_ptr SVGPackage::getSvgFile() const
{
	return m_SvgFile;
}
  	
e4c::tag_t SVGPackage::getTag_SvgFile() const
{
	return e4c::tag< SvgFile >::get();
}
 
e4c::tag_t SVGPackage::getTag_Element__owner() const
{
	return e4c::tag< Element__owner_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__owner() const
{
	return m_Element__owner;
}

e4c::tag_t SVGPackage::getTag_Element__target() const
{
	return e4c::tag< Element__target_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__target() const
{
	return m_Element__target;
}

e4c::tag_t SVGPackage::getTag_Element__attribute() const
{
	return e4c::tag< Element__attribute_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__attribute() const
{
	return m_Element__attribute;
}

e4c::tag_t SVGPackage::getTag_Element__position() const
{
	return e4c::tag< Element__position_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__position() const
{
	return m_Element__position;
}

e4c::tag_t SVGPackage::getTag_Element__size() const
{
	return e4c::tag< Element__size_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__size() const
{
	return m_Element__size;
}

e4c::tag_t SVGPackage::getTag_Element__root() const
{
	return e4c::tag< Element__root_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__root() const
{
	return m_Element__root;
}

e4c::tag_t SVGPackage::getTag_Element__fill() const
{
	return e4c::tag< Element__fill_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getElement__fill() const
{
	return m_Element__fill;
}

e4c::tag_t SVGPackage::getTag_Element__viewBox() const
{
	return e4c::tag< Element__viewBox_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getElement__viewBox() const
{
	return m_Element__viewBox;
}

e4c::tag_t SVGPackage::getTag_Element__group() const
{
	return e4c::tag< Element__group_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__group() const
{
	return m_Element__group;
}

e4c::tag_t SVGPackage::getTag_Element__identifier() const
{
	return e4c::tag< Element__identifier_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getElement__identifier() const
{
	return m_Element__identifier;
}

e4c::tag_t SVGPackage::getTag_Element__drawsMarker() const
{
	return e4c::tag< Element__drawsMarker_tag >::get();
}

ecore::EReference_ptr SVGPackage::getElement__drawsMarker() const
{
	return m_Element__drawsMarker;
}

e4c::tag_t SVGPackage::getTag_Image__referee() const
{
	return e4c::tag< Image__referee_tag >::get();
}

ecore::EReference_ptr SVGPackage::getImage__referee() const
{
	return m_Image__referee;
}

e4c::tag_t SVGPackage::getTag_Svg__owner_SVG() const
{
	return e4c::tag< Svg__owner_SVG_tag >::get();
}

ecore::EReference_ptr SVGPackage::getSvg__owner_SVG() const
{
	return m_Svg__owner_SVG;
}

e4c::tag_t SVGPackage::getTag_Svg__children() const
{
	return e4c::tag< Svg__children_tag >::get();
}

ecore::EReference_ptr SVGPackage::getSvg__children() const
{
	return m_Svg__children;
}

e4c::tag_t SVGPackage::getTag_Svg__namespace() const
{
	return e4c::tag< Svg__namespace_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getSvg__namespace() const
{
	return m_Svg__namespace;
}

e4c::tag_t SVGPackage::getTag_Svg__version() const
{
	return e4c::tag< Svg__version_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getSvg__version() const
{
	return m_Svg__version;
}

e4c::tag_t SVGPackage::getTag_Svg__baseProfile() const
{
	return e4c::tag< Svg__baseProfile_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getSvg__baseProfile() const
{
	return m_Svg__baseProfile;
}

e4c::tag_t SVGPackage::getTag_GroupingElement__groupContent() const
{
	return e4c::tag< GroupingElement__groupContent_tag >::get();
}

ecore::EReference_ptr SVGPackage::getGroupingElement__groupContent() const
{
	return m_GroupingElement__groupContent;
}

e4c::tag_t SVGPackage::getTag_G__name() const
{
	return e4c::tag< G__name_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getG__name() const
{
	return m_G__name;
}

e4c::tag_t SVGPackage::getTag_Use__use() const
{
	return e4c::tag< Use__use_tag >::get();
}

ecore::EReference_ptr SVGPackage::getUse__use() const
{
	return m_Use__use;
}

e4c::tag_t SVGPackage::getTag_GraphicalElement__stroke() const
{
	return e4c::tag< GraphicalElement__stroke_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getGraphicalElement__stroke() const
{
	return m_GraphicalElement__stroke;
}

e4c::tag_t SVGPackage::getTag_TextElement__rotate() const
{
	return e4c::tag< TextElement__rotate_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTextElement__rotate() const
{
	return m_TextElement__rotate;
}

e4c::tag_t SVGPackage::getTag_TextElement__textLength() const
{
	return e4c::tag< TextElement__textLength_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTextElement__textLength() const
{
	return m_TextElement__textLength;
}

e4c::tag_t SVGPackage::getTag_TextElement__fontSize() const
{
	return e4c::tag< TextElement__fontSize_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTextElement__fontSize() const
{
	return m_TextElement__fontSize;
}

e4c::tag_t SVGPackage::getTag_Rect__rx() const
{
	return e4c::tag< Rect__rx_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getRect__rx() const
{
	return m_Rect__rx;
}

e4c::tag_t SVGPackage::getTag_Rect__ry() const
{
	return e4c::tag< Rect__ry_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getRect__ry() const
{
	return m_Rect__ry;
}

e4c::tag_t SVGPackage::getTag_Line__between() const
{
	return e4c::tag< Line__between_tag >::get();
}

ecore::EReference_ptr SVGPackage::getLine__between() const
{
	return m_Line__between;
}

e4c::tag_t SVGPackage::getTag_Line__markerEnd() const
{
	return e4c::tag< Line__markerEnd_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getLine__markerEnd() const
{
	return m_Line__markerEnd;
}

e4c::tag_t SVGPackage::getTag_Line__markerStart() const
{
	return e4c::tag< Line__markerStart_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getLine__markerStart() const
{
	return m_Line__markerStart;
}

e4c::tag_t SVGPackage::getTag_Polyline__waypoints() const
{
	return e4c::tag< Polyline__waypoints_tag >::get();
}

ecore::EReference_ptr SVGPackage::getPolyline__waypoints() const
{
	return m_Polyline__waypoints;
}

e4c::tag_t SVGPackage::getTag_Polyline__strokeDashArray() const
{
	return e4c::tag< Polyline__strokeDashArray_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPolyline__strokeDashArray() const
{
	return m_Polyline__strokeDashArray;
}

e4c::tag_t SVGPackage::getTag_Polyline__markerEnd() const
{
	return e4c::tag< Polyline__markerEnd_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPolyline__markerEnd() const
{
	return m_Polyline__markerEnd;
}

e4c::tag_t SVGPackage::getTag_Polyline__markerStart() const
{
	return e4c::tag< Polyline__markerStart_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPolyline__markerStart() const
{
	return m_Polyline__markerStart;
}

e4c::tag_t SVGPackage::getTag_Polygon__waypoints() const
{
	return e4c::tag< Polygon__waypoints_tag >::get();
}

ecore::EReference_ptr SVGPackage::getPolygon__waypoints() const
{
	return m_Polygon__waypoints;
}

e4c::tag_t SVGPackage::getTag_Polygon__markerEnd() const
{
	return e4c::tag< Polygon__markerEnd_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPolygon__markerEnd() const
{
	return m_Polygon__markerEnd;
}

e4c::tag_t SVGPackage::getTag_Polygon__markerStart() const
{
	return e4c::tag< Polygon__markerStart_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPolygon__markerStart() const
{
	return m_Polygon__markerStart;
}

e4c::tag_t SVGPackage::getTag_Path__pathLength() const
{
	return e4c::tag< Path__pathLength_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPath__pathLength() const
{
	return m_Path__pathLength;
}

e4c::tag_t SVGPackage::getTag_Path__d() const
{
	return e4c::tag< Path__d_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPath__d() const
{
	return m_Path__d;
}

e4c::tag_t SVGPackage::getTag_Path__markerEnd() const
{
	return e4c::tag< Path__markerEnd_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPath__markerEnd() const
{
	return m_Path__markerEnd;
}

e4c::tag_t SVGPackage::getTag_Path__markerStart() const
{
	return e4c::tag< Path__markerStart_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getPath__markerStart() const
{
	return m_Path__markerStart;
}

e4c::tag_t SVGPackage::getTag_Marker__markerUnits() const
{
	return e4c::tag< Marker__markerUnits_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__markerUnits() const
{
	return m_Marker__markerUnits;
}

e4c::tag_t SVGPackage::getTag_Marker__refX() const
{
	return e4c::tag< Marker__refX_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__refX() const
{
	return m_Marker__refX;
}

e4c::tag_t SVGPackage::getTag_Marker__refY() const
{
	return e4c::tag< Marker__refY_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__refY() const
{
	return m_Marker__refY;
}

e4c::tag_t SVGPackage::getTag_Marker__markerWidth() const
{
	return e4c::tag< Marker__markerWidth_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__markerWidth() const
{
	return m_Marker__markerWidth;
}

e4c::tag_t SVGPackage::getTag_Marker__markerHeight() const
{
	return e4c::tag< Marker__markerHeight_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__markerHeight() const
{
	return m_Marker__markerHeight;
}

e4c::tag_t SVGPackage::getTag_Marker__orient() const
{
	return e4c::tag< Marker__orient_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getMarker__orient() const
{
	return m_Marker__orient;
}

e4c::tag_t SVGPackage::getTag_Marker__drawing() const
{
	return e4c::tag< Marker__drawing_tag >::get();
}

ecore::EReference_ptr SVGPackage::getMarker__drawing() const
{
	return m_Marker__drawing;
}

e4c::tag_t SVGPackage::getTag_Text__lengthAdjust() const
{
	return e4c::tag< Text__lengthAdjust_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getText__lengthAdjust() const
{
	return m_Text__lengthAdjust;
}

e4c::tag_t SVGPackage::getTag_Text__content() const
{
	return e4c::tag< Text__content_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getText__content() const
{
	return m_Text__content;
}

e4c::tag_t SVGPackage::getTag_Tspan__content() const
{
	return e4c::tag< Tspan__content_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTspan__content() const
{
	return m_Tspan__content;
}

e4c::tag_t SVGPackage::getTag_Tref__xlinkHref() const
{
	return e4c::tag< Tref__xlinkHref_tag >::get();
}

ecore::EReference_ptr SVGPackage::getTref__xlinkHref() const
{
	return m_Tref__xlinkHref;
}

e4c::tag_t SVGPackage::getTag_Attribute__attOwner() const
{
	return e4c::tag< Attribute__attOwner_tag >::get();
}

ecore::EReference_ptr SVGPackage::getAttribute__attOwner() const
{
	return m_Attribute__attOwner;
}

e4c::tag_t SVGPackage::getTag_Scale__sx() const
{
	return e4c::tag< Scale__sx_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getScale__sx() const
{
	return m_Scale__sx;
}

e4c::tag_t SVGPackage::getTag_Scale__sy() const
{
	return e4c::tag< Scale__sy_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getScale__sy() const
{
	return m_Scale__sy;
}

e4c::tag_t SVGPackage::getTag_Translate__tx() const
{
	return e4c::tag< Translate__tx_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTranslate__tx() const
{
	return m_Translate__tx;
}

e4c::tag_t SVGPackage::getTag_Translate__ty() const
{
	return e4c::tag< Translate__ty_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getTranslate__ty() const
{
	return m_Translate__ty;
}

e4c::tag_t SVGPackage::getTag_Rotate__angle() const
{
	return e4c::tag< Rotate__angle_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getRotate__angle() const
{
	return m_Rotate__angle;
}

e4c::tag_t SVGPackage::getTag_Rotate__cx() const
{
	return e4c::tag< Rotate__cx_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getRotate__cx() const
{
	return m_Rotate__cx;
}

e4c::tag_t SVGPackage::getTag_Rotate__cy() const
{
	return e4c::tag< Rotate__cy_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getRotate__cy() const
{
	return m_Rotate__cy;
}

e4c::tag_t SVGPackage::getTag_Visibility__visible() const
{
	return e4c::tag< Visibility__visible_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getVisibility__visible() const
{
	return m_Visibility__visible;
}

e4c::tag_t SVGPackage::getTag_FontWeight__bold() const
{
	return e4c::tag< FontWeight__bold_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getFontWeight__bold() const
{
	return m_FontWeight__bold;
}

e4c::tag_t SVGPackage::getTag_FontStyle__italic() const
{
	return e4c::tag< FontStyle__italic_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getFontStyle__italic() const
{
	return m_FontStyle__italic;
}

e4c::tag_t SVGPackage::getTag_Dimension__width() const
{
	return e4c::tag< Dimension__width_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getDimension__width() const
{
	return m_Dimension__width;
}

e4c::tag_t SVGPackage::getTag_Dimension__height() const
{
	return e4c::tag< Dimension__height_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getDimension__height() const
{
	return m_Dimension__height;
}

e4c::tag_t SVGPackage::getTag_Coordinates__x() const
{
	return e4c::tag< Coordinates__x_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getCoordinates__x() const
{
	return m_Coordinates__x;
}

e4c::tag_t SVGPackage::getTag_Coordinates__y() const
{
	return e4c::tag< Coordinates__y_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getCoordinates__y() const
{
	return m_Coordinates__y;
}

e4c::tag_t SVGPackage::getTag_ReferencedFile__referer() const
{
	return e4c::tag< ReferencedFile__referer_tag >::get();
}

ecore::EReference_ptr SVGPackage::getReferencedFile__referer() const
{
	return m_ReferencedFile__referer;
}

e4c::tag_t SVGPackage::getTag_ReferencedFile__name() const
{
	return e4c::tag< ReferencedFile__name_tag >::get();
}

ecore::EAttribute_ptr SVGPackage::getReferencedFile__name() const
{
	return m_ReferencedFile__name;
}

e4c::tag_t SVGPackage::getTag_SvgFile__tag() const
{
	return e4c::tag< SvgFile__tag_tag >::get();
}

ecore::EReference_ptr SVGPackage::getSvgFile__tag() const
{
	return m_SvgFile__tag;
}

e4c::tag_t SVGPackage::getTag_SvgFile__elements() const
{
	return e4c::tag< SvgFile__elements_tag >::get();
}

ecore::EReference_ptr SVGPackage::getSvgFile__elements() const
{
	return m_SvgFile__elements;
}


extern "C" ::ecore::EPackage_ptr e4c_SVG()
{
	return ::SVG::SVGPackage::_instance();
}
