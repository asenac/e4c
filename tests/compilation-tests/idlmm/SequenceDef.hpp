
#ifndef EMF_CPP_IDLMM_SEQUENCEDEF__HPP
#define EMF_CPP_IDLMM_SEQUENCEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::SequenceDef
class SequenceDef :  public virtual ::idlmm::Typed,  public virtual ::idlmm::IDLType
{
public:

	typedef SequenceDef_ptr ptr_type;
	
	SequenceDef();
	virtual ~SequenceDef();

	typedef std::unique_ptr < idlmm::Expression > bound_t;

	
	// TODO

	
protected:

	bound_t m_bound;

};

} // idlmm


#endif // EMF_CPP_IDLMM_SEQUENCEDEF__HPP
