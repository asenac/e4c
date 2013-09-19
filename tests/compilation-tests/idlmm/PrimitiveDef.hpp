
#ifndef EMF_CPP_IDLMM_PRIMITIVEDEF__HPP
#define EMF_CPP_IDLMM_PRIMITIVEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::PrimitiveDef
class PrimitiveDef :  public virtual ::idlmm::IDLType
{
public:

	typedef PrimitiveDef_ptr ptr_type;
	
	PrimitiveDef();
	virtual ~PrimitiveDef();

	typedef int kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;

	
protected:

	kind_t m_kind;

};

} // idlmm


#endif // EMF_CPP_IDLMM_PRIMITIVEDEF__HPP
