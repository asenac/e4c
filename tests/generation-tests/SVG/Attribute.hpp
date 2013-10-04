
#ifndef EMF_CPP_SVG_ATTRIBUTE__HPP
#define EMF_CPP_SVG_ATTRIBUTE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Attribute : ::ecore::EObject
{
public:

	typedef Attribute_ptr ptr_type;
	
	virtual ~Attribute();

	typedef std::set < SVG::Element_ptr > attOwner_t;
	
	attOwner_t getAttOwner() const;
	void addAttOwner(SVG::Element_ptr attOwner_);
	void addAllAttOwner(const attOwner_t& attOwner_);
	

	/*PROTECTED REGION ID(SVG::Attribute public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Attribute();

	friend class SVGPackage;

	std::set < SVG::Element_ptr > m_attOwner;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Attribute protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_ATTRIBUTE__HPP
