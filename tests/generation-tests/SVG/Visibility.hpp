
#ifndef EMF_CPP_SVG_VISIBILITY__HPP
#define EMF_CPP_SVG_VISIBILITY__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Visibility
class Visibility :  public virtual ::SVG::Attribute
{
public:

	typedef Visibility_ptr ptr_type;
	
	Visibility();
	virtual ~Visibility();

	typedef ::PrimitiveTypes::Boolean visible_t;

	
	void setVisible(visible_t _visible);
	visible_t getVisible() const;


	visible_t m_visible;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_VISIBILITY__HPP
