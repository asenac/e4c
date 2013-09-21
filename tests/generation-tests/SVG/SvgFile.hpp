
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
	typedef std::set < SVG::Element_ptr > elements_t;

	
	tag_t getTag() const;
	elements_t getElements() const;


	SVG::Svg_ptr m_tag;
	std::set < SVG::Element_ptr > m_elements;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_SVGFILE__HPP
