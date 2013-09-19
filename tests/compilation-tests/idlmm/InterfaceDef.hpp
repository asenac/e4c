
#ifndef EMF_CPP_IDLMM_INTERFACEDEF__HPP
#define EMF_CPP_IDLMM_INTERFACEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::InterfaceDef
class InterfaceDef :  public virtual ::idlmm::Container,  public virtual ::idlmm::TypedefDef
{
public:

	typedef InterfaceDef_ptr ptr_type;
	
	InterfaceDef();
	virtual ~InterfaceDef();

	typedef int isAbstract_t;
	typedef int isCustom_t;
	typedef int isTruncatable_t;
	typedef std::set < idlmm::InterfaceDef_ptr > derivesFrom_t;
	typedef idlmm::ForwardDef_ptr forward_t;

	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	void setIsCustom(isCustom_t _isCustom);
	isCustom_t getIsCustom() const;
	void setIsTruncatable(isTruncatable_t _isTruncatable);
	isTruncatable_t getIsTruncatable() const;
	// TODO
	// TODO

	
protected:

	isAbstract_t m_isAbstract;
	isCustom_t m_isCustom;
	isTruncatable_t m_isTruncatable;
	derivesFrom_t m_derivesFrom;
	forward_t m_forward;

};

} // idlmm


#endif // EMF_CPP_IDLMM_INTERFACEDEF__HPP
