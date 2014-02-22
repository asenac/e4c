#include "DeclarationFactory.hpp"
#include "DeclarationPackage.hpp"
#include "include.hpp"

using namespace xpand3::declaration;

DeclarationFactory::DeclarationFactory()
{
    // m_ePackage = DeclarationPackage::_instance();
    // std::bind(&DeclarationFactory::createDefinition, this);
    // m_ePackage->getTag_Definition();
    // std::bind(&DeclarationFactory::createExtension, this);
    // m_ePackage->getTag_Extension();
    // std::bind(&DeclarationFactory::createExtensionAspect, this);
    // m_ePackage->getTag_ExtensionAspect();
    // std::bind(&DeclarationFactory::createDefinitionAspect, this);
    // m_ePackage->getTag_DefinitionAspect();
    // std::bind(&DeclarationFactory::createCheck, this);
    // m_ePackage->getTag_Check();
    // std::bind(&DeclarationFactory::createCreateExtension, this);
    // m_ePackage->getTag_CreateExtension();
    // std::bind(&DeclarationFactory::createJavaExtension, this);
    // m_ePackage->getTag_JavaExtension();
}

const DeclarationFactory_ptr DeclarationFactory::_instance()
{
    static DeclarationFactory __instance;
    return &__instance;
}

Definition_ptr DeclarationFactory::createDefinition() const
{
    return new Definition();
}

Extension_ptr DeclarationFactory::createExtension() const
{
    return new Extension();
}

ExtensionAspect_ptr DeclarationFactory::createExtensionAspect() const
{
    return new ExtensionAspect();
}

DefinitionAspect_ptr DeclarationFactory::createDefinitionAspect() const
{
    return new DefinitionAspect();
}

Check_ptr DeclarationFactory::createCheck() const
{
    return new Check();
}

CreateExtension_ptr DeclarationFactory::createCreateExtension() const
{
    return new CreateExtension();
}

JavaExtension_ptr DeclarationFactory::createJavaExtension() const
{
    return new JavaExtension();
}

