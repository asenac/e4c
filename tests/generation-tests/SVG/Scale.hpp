
#ifndef EMF_CPP_SVG_SCALE__HPP
#define EMF_CPP_SVG_SCALE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Transform.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Scale :  public virtual ::SVG::Transform
{
public:

	typedef Scale_ptr ptr_type;
	
	Scale();
	virtual ~Scale();

	typedef ::PrimitiveTypes::Double sx_t;
	typedef ::PrimitiveTypes::Double sy_t;
	
	void setSx(sx_t _sx);
	sx_t getSx() const;
	void setSy(sy_t _sy);
	sy_t getSy() const;
	

	/*PROTECTED REGION ID(SVG::Scale public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	sx_t m_sx;
	sy_t m_sy;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Scale protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_SCALE__HPP
