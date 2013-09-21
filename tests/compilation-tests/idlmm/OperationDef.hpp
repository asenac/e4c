
#ifndef EMF_CPP_IDLMM_OPERATIONDEF__HPP
#define EMF_CPP_IDLMM_OPERATIONDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class OperationDef :  public virtual ::idlmm::Contained,  public virtual ::idlmm::Typed
{
public:

	typedef OperationDef_ptr ptr_type;
	
	OperationDef();
	virtual ~OperationDef();

	typedef std::vector < idlmm::ParameterDef_ptr > parameters_t;
	typedef ::ecore::EBoolean isOneway_t;
	typedef ::ecore::EString contexts_t;
	typedef std::vector < idlmm::ExceptionDef_ptr > canRaise_t;
	
	parameters_t getParameters() const;
	void addParameters(idlmm::ParameterDef_ptr parameters_);
	void addAllParameters(const parameters_t& parameters_);
	void setIsOneway(isOneway_t _isOneway);
	isOneway_t getIsOneway() const;
	void setContexts(contexts_t _contexts);
	contexts_t getContexts() const;
	canRaise_t getCanRaise() const;
	void addCanRaise(idlmm::ExceptionDef_ptr canRaise_);
	void addAllCanRaise(const canRaise_t& canRaise_);
	
	

	/*PROTECTED REGION ID(idlmm::OperationDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	std::vector < std::unique_ptr < idlmm::ParameterDef > > m_parameters;
	isOneway_t m_isOneway;
	contexts_t m_contexts;
	std::vector < idlmm::ExceptionDef_ptr > m_canRaise;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::OperationDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_OPERATIONDEF__HPP
