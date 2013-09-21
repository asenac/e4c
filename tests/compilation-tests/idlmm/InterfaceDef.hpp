
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

	typedef ::ecore::EBoolean isAbstract_t;
	typedef ::ecore::EBoolean isCustom_t;
	typedef ::ecore::EBoolean isTruncatable_t;
	typedef std::vector < idlmm::InterfaceDef_ptr > derivesFrom_t;
	typedef idlmm::ForwardDef_ptr forward_t;

	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	void setIsCustom(isCustom_t _isCustom);
	isCustom_t getIsCustom() const;
	void setIsTruncatable(isTruncatable_t _isTruncatable);
	isTruncatable_t getIsTruncatable() const;
	derivesFrom_t getDerivesFrom() const;
	
	forward_t getForward() const;
	
	void setForward(forward_t forward_);

		
protected:

	isAbstract_t m_isAbstract;
	isCustom_t m_isCustom;
	isTruncatable_t m_isTruncatable;
	std::vector < idlmm::InterfaceDef_ptr > m_derivesFrom;
	idlmm::ForwardDef_ptr m_forward;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_INTERFACEDEF__HPP
