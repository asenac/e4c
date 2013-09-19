
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

	typedef boost::ptr_vector < idlmm::ParameterDef > parameters_t;
	typedef int isOneway_t;
	typedef int contexts_t;
	typedef std::set < idlmm::ExceptionDef_ptr > canRaise_t;

	
	// TODO
	void setIsOneway(isOneway_t _isOneway);
	isOneway_t getIsOneway() const;
	void setContexts(contexts_t _contexts);
	contexts_t getContexts() const;
	// TODO

	
protected:

	parameters_t m_parameters;
	isOneway_t m_isOneway;
	contexts_t m_contexts;
	canRaise_t m_canRaise;

};

} // idlmm


#endif // EMF_CPP_IDLMM_OPERATIONDEF__HPP
