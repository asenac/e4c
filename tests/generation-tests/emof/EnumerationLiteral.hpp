
#ifndef EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP
#define EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class EnumerationLiteral :  public virtual ::emof::NamedElement
{
public:

	typedef EnumerationLiteral_ptr ptr_type;
	
	EnumerationLiteral();
	virtual ~EnumerationLiteral();

	typedef emof::Enumeration_ptr enumeration_t;
	
	enumeration_t getEnumeration() const;
	

	/*PROTECTED REGION ID(emof::EnumerationLiteral public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	emof::Enumeration_ptr m_enumeration;

	
	friend class ::emof::Enumeration;
	void setEnumeration(enumeration_t enumeration_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::EnumerationLiteral protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP
