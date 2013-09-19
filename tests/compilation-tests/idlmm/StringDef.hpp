
#ifndef EMF_CPP_IDLMM_STRINGDEF__HPP
#define EMF_CPP_IDLMM_STRINGDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::StringDef
class StringDef :  public virtual ::idlmm::IDLType
{
public:

	typedef StringDef_ptr ptr_type;
	
	StringDef();
	virtual ~StringDef();

	typedef std::unique_ptr < idlmm::Expression > bound_t;

	
	// TODO

	
protected:

	bound_t m_bound;

};

} // idlmm


#endif // EMF_CPP_IDLMM_STRINGDEF__HPP
