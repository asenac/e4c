
#ifndef EMF_CPP_SVG_TRANSFORM__HPP
#define EMF_CPP_SVG_TRANSFORM__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Transform
class Transform :  public virtual ::SVG::Attribute
{
public:

	typedef Transform_ptr ptr_type;
	
	virtual ~Transform();

	
	
	
	
protected:
	Transform();

	
};

} // SVG


#endif // EMF_CPP_SVG_TRANSFORM__HPP
