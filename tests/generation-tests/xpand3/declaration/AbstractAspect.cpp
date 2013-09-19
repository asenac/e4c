
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

void AbstractAspect::setWildparams(wildparams_t _wildparams)
{
	m_wildparams = _wildparams;;
}

wildparams_t AbstractAspect::getWildparams() const
{
	return m_wildparams;
}



