
#ifndef EMF_CPP_SVG_FONTWEIGHT__HPP
#define EMF_CPP_SVG_FONTWEIGHT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::FontWeight
class FontWeight :  public virtual ::SVG::Attribute
{
public:

	typedef FontWeight_ptr ptr_type;
	
	FontWeight();
	virtual ~FontWeight();

	typedef int bold_t;

	
	void setBold(bold_t _bold);
	bold_t getBold() const;

	
protected:

	bold_t m_bold;

};

} // SVG


#endif // EMF_CPP_SVG_FONTWEIGHT__HPP
