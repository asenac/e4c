
#ifndef EMF_CPP_IDLMM_FIXEDDEF__HPP
#define EMF_CPP_IDLMM_FIXEDDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::FixedDef
class FixedDef :  public virtual ::idlmm::IDLType
{
public:

	typedef FixedDef_ptr ptr_type;
	
	FixedDef();
	virtual ~FixedDef();

	typedef std::unique_ptr < idlmm::Expression > digits_t;
	typedef std::unique_ptr < idlmm::Expression > scale_t;

	
	// TODO
	// TODO

	
protected:

	digits_t m_digits;
	scale_t m_scale;

};

} // idlmm


#endif // EMF_CPP_IDLMM_FIXEDDEF__HPP
