
#ifndef EMF_CPP_IDLMM_SEQUENCEDEF__HPP
#define EMF_CPP_IDLMM_SEQUENCEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class SequenceDef :  public virtual ::idlmm::Typed,  public virtual ::idlmm::IDLType
{
public:

	typedef SequenceDef_ptr ptr_type;
	
	SequenceDef();
	virtual ~SequenceDef();

	typedef idlmm::Expression_ptr bound_t;
	
	bound_t getBound() const;
	void setBound(bound_t bound_);
	bound_t releaseBound();
	
		
protected:

	friend class IdlmmPackage;

	std::unique_ptr < idlmm::Expression > m_bound;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_SEQUENCEDEF__HPP
