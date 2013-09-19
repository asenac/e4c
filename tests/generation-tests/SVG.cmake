


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-SVG SHARED
	SVG/SVGPackage.cpp
	SVG/SVGFactory.cpp
	SVG/Element.cpp
	SVG/StructuralElement.cpp
	SVG/Image.cpp
	SVG/Svg.cpp
	SVG/GroupingElement.cpp
	SVG/G.cpp
	SVG/Defs.cpp
	SVG/Symbol.cpp
	SVG/Use.cpp
	SVG/GraphicalElement.cpp
	SVG/Shape.cpp
	SVG/TextElement.cpp
	SVG/Rect.cpp
	SVG/Circle.cpp
	SVG/Ellipse.cpp
	SVG/Line.cpp
	SVG/Polyline.cpp
	SVG/Polygon.cpp
	SVG/Path.cpp
	SVG/Point.cpp
	SVG/Marker.cpp
	SVG/Text.cpp
	SVG/Tspan.cpp
	SVG/Tref.cpp
	SVG/Attribute.cpp
	SVG/Transform.cpp
	SVG/Scale.cpp
	SVG/Translate.cpp
	SVG/Rotate.cpp
	SVG/Visibility.cpp
	SVG/FontWeight.cpp
	SVG/FontStyle.cpp
	SVG/Dimension.cpp
	SVG/Coordinates.cpp
	SVG/RelativeCoord.cpp
	SVG/AbsoluteCoord.cpp
	SVG/ReferencedFile.cpp
	SVG/SvgFile.cpp
	)
	
target_link_libraries(e4c-SVG e4c)

