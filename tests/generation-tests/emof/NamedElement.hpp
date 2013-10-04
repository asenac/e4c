
#ifndef EMF_CPP_EMOF_NAMEDELEMENT__HPP
#define EMF_CPP_EMOF_NAMEDELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Element.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class NamedElement :  public virtual ::emof::Element
{
public:

	typedef NamedElement_ptr ptr_type;
	
	virtual ~NamedElement();

	typedef ::emof::String name_t;
	
	void setName(name_t _name);
	name_t getName() const;
	

	/*PROTECTED REGION ID(emof::NamedElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	NamedElement();

	friend class EmofPackage;

	name_t m_name;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::NamedElement protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_NAMEDELEMENT__HPP
