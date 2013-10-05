#ifndef EMF_CPP_IDLMM_IDLTYPE__HPP
#define EMF_CPP_IDLMM_IDLTYPE__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class IDLType :  public virtual ::idlmm::ModelElement
{
public:

	typedef IDLType_ptr ptr_type;
	
	virtual ~IDLType();

	typedef ::idlmm::ETypeCode typeCode_t;
	
	void setTypeCode(typeCode_t _typeCode);
	typeCode_t getTypeCode() const;
	

	/*PROTECTED REGION ID(idlmm::IDLType public) START*/
	/*PROTECTED REGION END*/
		
protected:
	IDLType();

	friend class IdlmmPackage;

	typeCode_t m_typeCode;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::IDLType protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_IDLTYPE__HPP
