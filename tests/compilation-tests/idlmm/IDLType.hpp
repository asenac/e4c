
#ifndef EMF_CPP_IDLMM_IDLTYPE__HPP
#define EMF_CPP_IDLMM_IDLTYPE__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::IDLType
class IDLType :  public virtual ::idlmm::ModelElement
{
public:

	typedef IDLType_ptr ptr_type;
	
	virtual ~IDLType();

	typedef ::idlmm::ETypeCode typeCode_t;

	
	void setTypeCode(typeCode_t _typeCode);
	typeCode_t getTypeCode() const;

		
protected:
	IDLType();

	typeCode_t m_typeCode;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_IDLTYPE__HPP
