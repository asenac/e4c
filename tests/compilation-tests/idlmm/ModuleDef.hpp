
#ifndef EMF_CPP_IDLMM_MODULEDEF__HPP
#define EMF_CPP_IDLMM_MODULEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Container.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ModuleDef :  public virtual ::idlmm::Container
{
public:

	typedef ModuleDef_ptr ptr_type;
	
	ModuleDef();
	virtual ~ModuleDef();

	typedef ::ecore::EString prefix_t;
	
	void setPrefix(prefix_t _prefix);
	prefix_t getPrefix() const;
	

	/*PROTECTED REGION ID(idlmm::ModuleDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	prefix_t m_prefix;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::ModuleDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_MODULEDEF__HPP
