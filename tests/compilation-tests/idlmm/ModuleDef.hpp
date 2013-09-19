
#ifndef EMF_CPP_IDLMM_MODULEDEF__HPP
#define EMF_CPP_IDLMM_MODULEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Container.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ModuleDef
class ModuleDef :  public virtual ::idlmm::Container
{
public:

	typedef ModuleDef_ptr ptr_type;
	
	ModuleDef();
	virtual ~ModuleDef();

	typedef int prefix_t;

	
	void setPrefix(prefix_t _prefix);
	prefix_t getPrefix() const;

	
protected:

	prefix_t m_prefix;

};

} // idlmm


#endif // EMF_CPP_IDLMM_MODULEDEF__HPP
