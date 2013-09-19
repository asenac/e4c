
#ifndef EMF_CPP_SVG_USE__HPP
#define EMF_CPP_SVG_USE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Use
class Use :  public virtual ::SVG::StructuralElement
{
public:

	typedef Use_ptr ptr_type;
	
	Use();
	virtual ~Use();

	typedef std::vector < SVG::Element_ptr > use_t;

	
	// TODO

	
protected:

	use_t m_use;

};

} // SVG


#endif // EMF_CPP_SVG_USE__HPP
