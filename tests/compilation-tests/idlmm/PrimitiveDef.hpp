#ifndef EMF_CPP_IDLMM_PRIMITIVEDEF__HPP
#define EMF_CPP_IDLMM_PRIMITIVEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class PrimitiveDef :  public virtual ::idlmm::IDLType
{
public:

	typedef PrimitiveDef_ptr ptr_type;
	
	PrimitiveDef();
	virtual ~PrimitiveDef();

	typedef ::idlmm::PrimitiveKind kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(idlmm::PrimitiveDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::PrimitiveDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_PRIMITIVEDEF__HPP
