#include "EFactory.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EPackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EFactory include) START*/
/*PROTECTED REGION END*/

EFactory::EFactory() :
    m_ePackage()
{
    /*PROTECTED REGION ID(EFactory constructor) START*/
    /*PROTECTED REGION END*/
}

EFactory::~EFactory()
{
    /*PROTECTED REGION ID(EFactory destructor) START*/
    /*PROTECTED REGION END*/
}

EFactory::ePackage_t EFactory::getEPackage() const
{
    return e4c::returned(m_ePackage);
}
void EFactory::setEPackage(ePackage_t ePackage_)
{
    if (m_ePackage == ePackage_)
        return;
    if (m_ePackage)
        m_ePackage->setEFactoryInstance(0);
    m_ePackage = ePackage_;
    if (m_ePackage)
        m_ePackage->setEFactoryInstance(this);
}


ecore::EObject_ptr EFactory::create(ecore::EClass_ptr eClass)
{
    /*PROTECTED REGION ID(ecore::EObject_ptr EFactory::createecore::EClass_ptr eClass) START*/
    return ecore::EObject_ptr();
    /*PROTECTED REGION END*/
}

ecore::EJavaObject EFactory::createFromString(ecore::EDataType_ptr eDataType, ecore::EString literalValue)
{
    /*PROTECTED REGION ID(ecore::EJavaObject EFactory::createFromStringecore::EDataType_ptr eDataType, ecore::EString literalValue) START*/
    return ecore::EJavaObject();
    /*PROTECTED REGION END*/
}

ecore::EString EFactory::convertToString(ecore::EDataType_ptr eDataType, ecore::EJavaObject instanceValue)
{
    /*PROTECTED REGION ID(ecore::EString EFactory::convertToStringecore::EDataType_ptr eDataType, ecore::EJavaObject instanceValue) START*/
    return ecore::EString();
    /*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EFactory implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EFactory::eClassImpl() const
{
    return EcorePackage::_instance()->getEFactory();
}

