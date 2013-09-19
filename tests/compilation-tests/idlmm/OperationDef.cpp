
#include "OperationDef.hpp"
#include <idlmm/ParameterDef.hpp>
#include <idlmm/ExceptionDef.hpp>

using namespace idlmm;

OperationDef::OperationDef() : 
	m_parameters(),
    m_isOneway(),
    m_contexts(),
    m_canRaise()
{
}

OperationDef::~OperationDef()
{
}

void OperationDef::setIsOneway(isOneway_t _isOneway)
{
	m_isOneway = _isOneway;;
}

isOneway_t OperationDef::getIsOneway() const
{
	return m_isOneway;
}

void OperationDef::setContexts(contexts_t _contexts)
{
	m_contexts = _contexts;;
}

contexts_t OperationDef::getContexts() const
{
	return m_contexts;
}



