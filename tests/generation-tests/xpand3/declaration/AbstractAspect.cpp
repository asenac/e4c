
#include "AbstractAspect.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

AbstractAspect::AbstractAspect() : 
	m_pointcut(),
    m_wildparams()
{
}

AbstractAspect::~AbstractAspect()
{
}

AbstractAspect::pointcut_t AbstractAspect::getPointcut() const
{
	return e4c::returned(m_pointcut);
}

void AbstractAspect::setWildparams(wildparams_t _wildparams)
{
	m_wildparams = _wildparams;;
}

AbstractAspect::wildparams_t AbstractAspect::getWildparams() const
{
	return m_wildparams;
}



