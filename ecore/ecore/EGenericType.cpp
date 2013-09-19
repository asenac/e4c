
#include "EGenericType.hpp"
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

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



