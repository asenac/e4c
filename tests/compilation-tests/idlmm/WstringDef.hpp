
#ifndef EMF_CPP_IDLMM_WSTRINGDEF__HPP
#define EMF_CPP_IDLMM_WSTRINGDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::WstringDef
class WstringDef :  public virtual ::idlmm::IDLType
{
public:

	typedef WstringDef_ptr ptr_type;
	
	WstringDef();
	virtual ~WstringDef();

	typedef std::unique_ptr < idlmm::Expression > bound_t;

	
	// TODO

	
protected:

	bound_t m_bound;

};

} // idlmm


#endif // EMF_CPP_IDLMM_WSTRINGDEF__HPP
