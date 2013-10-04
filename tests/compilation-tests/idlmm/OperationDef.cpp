
#include "OperationDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/ParameterDef.hpp>
#include <idlmm/ExceptionDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::OperationDef include) START*/
/*PROTECTED REGION END*/

OperationDef::OperationDef() : 
	m_parameters(),
    m_isOneway(),
    m_contexts(),
    m_canRaise()
{
	/*PROTECTED REGION ID(OperationDef constructor) START*/
	/*PROTECTED REGION END*/
}

OperationDef::~OperationDef()
{
	/*PROTECTED REGION ID(OperationDef destructor) START*/
	/*PROTECTED REGION END*/
}

OperationDef::parameters_t OperationDef::getParameters() const
{
	return e4c::returned(m_parameters);
}


void OperationDef::addParameters(idlmm::ParameterDef_ptr parameters_)
{
	m_parameters.push_back(std::unique_ptr < idlmm::ParameterDef >(parameters_));
}

void OperationDef::addAllParameters(const parameters_t& parameters_)
{
	for (auto i = parameters_.begin(); i != parameters_.end(); i++)
		addParameters(*i);
}

void OperationDef::setIsOneway(isOneway_t _isOneway)
{
	m_isOneway = _isOneway;;
}

OperationDef::isOneway_t OperationDef::getIsOneway() const
{
	return m_isOneway;
}

void OperationDef::setContexts(contexts_t _contexts)
{
	m_contexts = _contexts;;
}

OperationDef::contexts_t OperationDef::getContexts() const
{
	return m_contexts;
}

OperationDef::canRaise_t OperationDef::getCanRaise() const
{
	return e4c::returned(m_canRaise);
}

void OperationDef::addCanRaise(idlmm::ExceptionDef_ptr canRaise_)
{
	if (e4c::contains(m_canRaise, canRaise_))
		return;
	m_canRaise.push_back(canRaise_);
}

void OperationDef::addAllCanRaise(const canRaise_t& canRaise_)
{
	for (auto i = canRaise_.begin(); i != canRaise_.end(); i++)
		addCanRaise(*i);
}



/*PROTECTED REGION ID(idlmm::OperationDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OperationDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getOperationDef();
}
 
