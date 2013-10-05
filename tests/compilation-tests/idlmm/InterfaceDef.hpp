#ifndef EMF_CPP_IDLMM_INTERFACEDEF__HPP
#define EMF_CPP_IDLMM_INTERFACEDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


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
	void addDerivesFrom(idlmm::InterfaceDef_ptr derivesFrom_);
	void addAllDerivesFrom(const derivesFrom_t& derivesFrom_);
	void removeDerivesFrom(idlmm::InterfaceDef_ptr derivesFrom_);
	void clearDerivesFrom();
	forward_t getForward() const;
	void setForward(forward_t forward_);
	

	/*PROTECTED REGION ID(idlmm::InterfaceDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	isAbstract_t m_isAbstract;
	isCustom_t m_isCustom;
	isTruncatable_t m_isTruncatable;
	std::vector < idlmm::InterfaceDef_ptr > m_derivesFrom;
	idlmm::ForwardDef_ptr m_forward;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::InterfaceDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_INTERFACEDEF__HPP
