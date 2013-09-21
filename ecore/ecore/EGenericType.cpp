
#include "EGenericType.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EGenericType include) START*/
/*PROTECTED REGION END*/

EGenericType::EGenericType() : 
	m_eUpperBound(),
    m_eTypeArguments(),
    m_eRawType(),
    m_eLowerBound(),
    m_eTypeParameter(),
    m_eClassifier()
{
}

EGenericType::~EGenericType()
{
}

EGenericType::eUpperBound_t EGenericType::getEUpperBound() const
{
	return e4c::returned(m_eUpperBound);
}


void EGenericType::setEUpperBound(eUpperBound_t eUpperBound_)
{
	m_eUpperBound.reset(eUpperBound_);
}

EGenericType::eUpperBound_t EGenericType::releaseEUpperBound()
{
	return m_eUpperBound.release();
}


EGenericType::eTypeArguments_t EGenericType::getETypeArguments() const
{
	return e4c::returned(m_eTypeArguments);
}


void EGenericType::addETypeArguments(ecore::EGenericType_ptr eTypeArguments_)
{
	m_eTypeArguments.push_back(std::unique_ptr < ecore::EGenericType >(eTypeArguments_));
}

void EGenericType::addAllETypeArguments(const eTypeArguments_t& eTypeArguments_)
{
	for (auto i = eTypeArguments_.begin(); i != eTypeArguments_.end(); i++)
		addETypeArguments(*i);
}


EGenericType::eRawType_t EGenericType::getERawType() const
{
	return e4c::returned(m_eRawType);
}

void EGenericType::setERawType(eRawType_t eRawType_)
{
	m_eRawType = eRawType_;
	
}


EGenericType::eLowerBound_t EGenericType::getELowerBound() const
{
	return e4c::returned(m_eLowerBound);
}


void EGenericType::setELowerBound(eLowerBound_t eLowerBound_)
{
	m_eLowerBound.reset(eLowerBound_);
}

EGenericType::eLowerBound_t EGenericType::releaseELowerBound()
{
	return m_eLowerBound.release();
}


EGenericType::eTypeParameter_t EGenericType::getETypeParameter() const
{
	return e4c::returned(m_eTypeParameter);
}

void EGenericType::setETypeParameter(eTypeParameter_t eTypeParameter_)
{
	m_eTypeParameter = eTypeParameter_;
	
}


EGenericType::eClassifier_t EGenericType::getEClassifier() const
{
	return e4c::returned(m_eClassifier);
}

void EGenericType::setEClassifier(eClassifier_t eClassifier_)
{
	m_eClassifier = eClassifier_;
	
}





/*PROTECTED REGION ID(ecore::EGenericType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EGenericType::eClassImpl() const
{
	return EcorePackage::_instance()->getEGenericType();
}
 
