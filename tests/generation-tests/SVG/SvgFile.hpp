
#ifndef EMF_CPP_SVG_SVGFILE__HPP
#define EMF_CPP_SVG_SVGFILE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/ReferencedFile.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::SvgFile
class SvgFile :  public virtual ::SVG::ReferencedFile
{
public:

	typedef SvgFile_ptr ptr_type;
	
	SvgFile();
	virtual ~SvgFile();

	typedef SVG::Svg_ptr tag_t;
	typedef std::vector < SVG::Element_ptr > elements_t;

	
	// TODO
	// TODO

	
protected:

	tag_t m_tag;
	elements_t m_elements;

};

} // SVG


#endif // EMF_CPP_SVG_SVGFILE__HPP
