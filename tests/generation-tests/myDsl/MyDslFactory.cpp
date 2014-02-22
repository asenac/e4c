#include "MyDslFactory.hpp"
#include "MyDslPackage.hpp"
#include "include.hpp"

using namespace myDsl;

MyDslFactory::MyDslFactory()
{
    // m_ePackage = MyDslPackage::_instance();
    // std::bind(&MyDslFactory::createModel, this);
    // m_ePackage->getTag_Model();
    // std::bind(&MyDslFactory::createImport, this);
    // m_ePackage->getTag_Import();
    // std::bind(&MyDslFactory::createType, this);
    // m_ePackage->getTag_Type();
    // std::bind(&MyDslFactory::createSimpleType, this);
    // m_ePackage->getTag_SimpleType();
    // std::bind(&MyDslFactory::createEntity, this);
    // m_ePackage->getTag_Entity();
    // std::bind(&MyDslFactory::createProperty, this);
    // m_ePackage->getTag_Property();
}

const MyDslFactory_ptr MyDslFactory::_instance()
{
    static MyDslFactory __instance;
    return &__instance;
}

Model_ptr MyDslFactory::createModel() const
{
    return new Model();
}

Import_ptr MyDslFactory::createImport() const
{
    return new Import();
}

Type_ptr MyDslFactory::createType() const
{
    return new Type();
}

SimpleType_ptr MyDslFactory::createSimpleType() const
{
    return new SimpleType();
}

Entity_ptr MyDslFactory::createEntity() const
{
    return new Entity();
}

Property_ptr MyDslFactory::createProperty() const
{
    return new Property();
}

