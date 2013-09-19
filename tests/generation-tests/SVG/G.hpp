
#ifndef EMF_CPP_SVG_G__HPP
#define EMF_CPP_SVG_G__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GroupingElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::G
class G :  public virtual ::SVG::GroupingElement
{
public:

	typedef G_ptr ptr_type;
	
	G();
	virtual ~G();

	typedef int name_t;

	
	void setName(name_t _name);
	name_t getName() const;

	
protected:

	name_t m_name;

};

} // SVG


#endif // EMF_CPP_SVG_G__HPP
