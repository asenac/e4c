
#ifndef EMF_CPP_IDLMM_NAMEDELEMENT__HPP
#define EMF_CPP_IDLMM_NAMEDELEMENT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class NamedElement :  public virtual ::idlmm::ModelElement
{
public:

	typedef NamedElement_ptr ptr_type;
	
	virtual ~NamedElement();

	typedef ::ecore::EString identifier_t;
	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	

	/*PROTECTED REGION ID(idlmm::NamedElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	NamedElement();

	friend class IdlmmPackage;

	identifier_t m_identifier;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::NamedElement protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_NAMEDELEMENT__HPP
