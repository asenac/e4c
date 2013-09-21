
#ifndef EMF_CPP_IDLMM_OPERATIONDEF__HPP
#define EMF_CPP_IDLMM_OPERATIONDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::OperationDef
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
	void setIsOneway(isOneway_t _isOneway);
	isOneway_t getIsOneway() const;
	void setContexts(contexts_t _contexts);
	contexts_t getContexts() const;
	canRaise_t getCanRaise() const;
	

		
protected:

	std::vector < std::unique_ptr < idlmm::ParameterDef > > m_parameters;
	isOneway_t m_isOneway;
	contexts_t m_contexts;
	std::vector < idlmm::ExceptionDef_ptr > m_canRaise;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_OPERATIONDEF__HPP
