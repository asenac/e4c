
#ifndef EMF_CPP_EMOF_TYPEDELEMENT__HPP
#define EMF_CPP_EMOF_TYPEDELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class TypedElement :  public virtual ::emof::NamedElement
{
public:

	typedef TypedElement_ptr ptr_type;
	
	virtual ~TypedElement();

	typedef emof::Type_ptr type_t;
	
	type_t getType() const;
	void setType(type_t type_);
	

	/*PROTECTED REGION ID(emof::TypedElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	TypedElement();

	friend class EmofPackage;

	emof::Type_ptr m_type;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::TypedElement protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_TYPEDELEMENT__HPP
