
#ifndef EMF_CPP_IDLMM_STRINGDEF__HPP
#define EMF_CPP_IDLMM_STRINGDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class StringDef :  public virtual ::idlmm::IDLType
{
public:

	typedef StringDef_ptr ptr_type;
	
	StringDef();
	virtual ~StringDef();

	typedef idlmm::Expression_ptr bound_t;

	
	bound_t getBound() const;
	void setBound(bound_t bound_);
	bound_t releaseBound();

		
protected:

	std::unique_ptr < idlmm::Expression > m_bound;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_STRINGDEF__HPP
