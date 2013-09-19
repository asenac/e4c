
#ifndef EMF_CPP_SVG_IMAGE__HPP
#define EMF_CPP_SVG_IMAGE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Image
class Image :  public virtual ::SVG::StructuralElement
{
public:

	typedef Image_ptr ptr_type;
	
	Image();
	virtual ~Image();

	typedef std::vector < SVG::ReferencedFile_ptr > referee_t;

	
	// TODO

	
protected:

	referee_t m_referee;

};

} // SVG


#endif // EMF_CPP_SVG_IMAGE__HPP
