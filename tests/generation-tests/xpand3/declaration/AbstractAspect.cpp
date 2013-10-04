
#include "AbstractAspect.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::AbstractAspect include) START*/
/*PROTECTED REGION END*/

AbstractAspect::AbstractAspect() : 
	m_pointcut(),
    m_wildparams()
{
	/*PROTECTED REGION ID(AbstractAspect constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractAspect::~AbstractAspect()
{
	/*PROTECTED REGION ID(AbstractAspect destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractAspect::pointcut_t AbstractAspect::getPointcut() const
{
	return e4c::returned(m_pointcut);
}


void AbstractAspect::setPointcut(pointcut_t pointcut_)
{
	m_pointcut.reset(pointcut_);
}

AbstractAspect::pointcut_t AbstractAspect::releasePointcut()
{
	return m_pointcut.release();
}

void AbstractAspect::setWildparams(wildparams_t _wildparams)
{
	m_wildparams = _wildparams;;
}

AbstractAspect::wildparams_t AbstractAspect::getWildparams() const
{
	return m_wildparams;
}



/*PROTECTED REGION ID(xpand3::declaration::AbstractAspect implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractAspect::eClassImpl() const
{
	return DeclarationPackage::_instance()->getAbstractAspect();
}
 
