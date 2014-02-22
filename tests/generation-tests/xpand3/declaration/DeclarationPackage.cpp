#include "DeclarationPackage.hpp"
#include "DeclarationFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::declaration;

DeclarationPackage::DeclarationPackage()
{
    m_eFactoryInstance = DeclarationFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_AbstractDeclaration = ecoreFactory->createEClass();
    m_AbstractDeclaration->setName("AbstractDeclaration");
    addEClassifiers(m_AbstractDeclaration);
    m_AbstractNamedDeclaration = ecoreFactory->createEClass();
    m_AbstractNamedDeclaration->setName("AbstractNamedDeclaration");
    addEClassifiers(m_AbstractNamedDeclaration);
    m_Definition = ecoreFactory->createEClass();
    m_Definition->setName("Definition");
    addEClassifiers(m_Definition);
    m_Extension = ecoreFactory->createEClass();
    m_Extension->setName("Extension");
    addEClassifiers(m_Extension);
    m_AbstractAspect = ecoreFactory->createEClass();
    m_AbstractAspect->setName("AbstractAspect");
    addEClassifiers(m_AbstractAspect);
    m_ExtensionAspect = ecoreFactory->createEClass();
    m_ExtensionAspect->setName("ExtensionAspect");
    addEClassifiers(m_ExtensionAspect);
    m_DefinitionAspect = ecoreFactory->createEClass();
    m_DefinitionAspect->setName("DefinitionAspect");
    addEClassifiers(m_DefinitionAspect);
    m_Check = ecoreFactory->createEClass();
    m_Check->setName("Check");
    addEClassifiers(m_Check);
    m_CreateExtension = ecoreFactory->createEClass();
    m_CreateExtension->setName("CreateExtension");
    addEClassifiers(m_CreateExtension);
    m_JavaExtension = ecoreFactory->createEClass();
    m_JavaExtension->setName("JavaExtension");
    addEClassifiers(m_JavaExtension);


    {
        m_AbstractDeclaration__owner = ecoreFactory->createEReference();
        m_AbstractDeclaration__owner->setName("owner");
        m_AbstractDeclaration->addEStructuralFeatures(m_AbstractDeclaration__owner);
        m_AbstractDeclaration->addEAllStructuralFeatures(m_AbstractDeclaration__owner);
        m_AbstractDeclaration->addEReferences(m_AbstractDeclaration__owner);
        m_AbstractDeclaration->addEAllReferences(m_AbstractDeclaration__owner);
    }
    {
        m_AbstractDeclaration__params = ecoreFactory->createEReference();
        m_AbstractDeclaration__params->setName("params");
        m_AbstractDeclaration->addEStructuralFeatures(m_AbstractDeclaration__params);
        m_AbstractDeclaration->addEAllStructuralFeatures(m_AbstractDeclaration__params);
        m_AbstractDeclaration->addEReferences(m_AbstractDeclaration__params);
        m_AbstractDeclaration->addEAllReferences(m_AbstractDeclaration__params);
    }
    {
        m_AbstractDeclaration__isPrivate = ecoreFactory->createEAttribute();
        m_AbstractDeclaration__isPrivate->setName("isPrivate");
        m_AbstractDeclaration->addEStructuralFeatures(m_AbstractDeclaration__isPrivate);
        m_AbstractDeclaration->addEAllStructuralFeatures(m_AbstractDeclaration__isPrivate);
        m_AbstractDeclaration->addEAttributes(m_AbstractDeclaration__isPrivate);
        m_AbstractDeclaration->addEAllAttributes(m_AbstractDeclaration__isPrivate);
    }
    {
        m_AbstractDeclaration__guard = ecoreFactory->createEReference();
        m_AbstractDeclaration__guard->setName("guard");
        m_AbstractDeclaration->addEStructuralFeatures(m_AbstractDeclaration__guard);
        m_AbstractDeclaration->addEAllStructuralFeatures(m_AbstractDeclaration__guard);
        m_AbstractDeclaration->addEReferences(m_AbstractDeclaration__guard);
        m_AbstractDeclaration->addEAllReferences(m_AbstractDeclaration__guard);
    }
    {
        m_AbstractNamedDeclaration__name = ecoreFactory->createEReference();
        m_AbstractNamedDeclaration__name->setName("name");
        m_AbstractNamedDeclaration->addEStructuralFeatures(m_AbstractNamedDeclaration__name);
        m_AbstractNamedDeclaration->addEAllStructuralFeatures(m_AbstractNamedDeclaration__name);
        m_AbstractNamedDeclaration->addEReferences(m_AbstractNamedDeclaration__name);
        m_AbstractNamedDeclaration->addEAllReferences(m_AbstractNamedDeclaration__name);
    }
    {
        m_Definition__body = ecoreFactory->createEReference();
        m_Definition__body->setName("body");
        m_Definition->addEStructuralFeatures(m_Definition__body);
        m_Definition->addEAllStructuralFeatures(m_Definition__body);
        m_Definition->addEReferences(m_Definition__body);
        m_Definition->addEAllReferences(m_Definition__body);
    }
    {
        m_Extension__cached = ecoreFactory->createEAttribute();
        m_Extension__cached->setName("cached");
        m_Extension->addEStructuralFeatures(m_Extension__cached);
        m_Extension->addEAllStructuralFeatures(m_Extension__cached);
        m_Extension->addEAttributes(m_Extension__cached);
        m_Extension->addEAllAttributes(m_Extension__cached);
    }
    {
        m_Extension__body = ecoreFactory->createEReference();
        m_Extension__body->setName("body");
        m_Extension->addEStructuralFeatures(m_Extension__body);
        m_Extension->addEAllStructuralFeatures(m_Extension__body);
        m_Extension->addEReferences(m_Extension__body);
        m_Extension->addEAllReferences(m_Extension__body);
    }
    {
        m_Extension__returnType = ecoreFactory->createEReference();
        m_Extension__returnType->setName("returnType");
        m_Extension->addEStructuralFeatures(m_Extension__returnType);
        m_Extension->addEAllStructuralFeatures(m_Extension__returnType);
        m_Extension->addEReferences(m_Extension__returnType);
        m_Extension->addEAllReferences(m_Extension__returnType);
    }
    {
        m_AbstractAspect__pointcut = ecoreFactory->createEReference();
        m_AbstractAspect__pointcut->setName("pointcut");
        m_AbstractAspect->addEStructuralFeatures(m_AbstractAspect__pointcut);
        m_AbstractAspect->addEAllStructuralFeatures(m_AbstractAspect__pointcut);
        m_AbstractAspect->addEReferences(m_AbstractAspect__pointcut);
        m_AbstractAspect->addEAllReferences(m_AbstractAspect__pointcut);
    }
    {
        m_AbstractAspect__wildparams = ecoreFactory->createEAttribute();
        m_AbstractAspect__wildparams->setName("wildparams");
        m_AbstractAspect->addEStructuralFeatures(m_AbstractAspect__wildparams);
        m_AbstractAspect->addEAllStructuralFeatures(m_AbstractAspect__wildparams);
        m_AbstractAspect->addEAttributes(m_AbstractAspect__wildparams);
        m_AbstractAspect->addEAllAttributes(m_AbstractAspect__wildparams);
    }
    {
        m_ExtensionAspect__expression = ecoreFactory->createEReference();
        m_ExtensionAspect__expression->setName("expression");
        m_ExtensionAspect->addEStructuralFeatures(m_ExtensionAspect__expression);
        m_ExtensionAspect->addEAllStructuralFeatures(m_ExtensionAspect__expression);
        m_ExtensionAspect->addEReferences(m_ExtensionAspect__expression);
        m_ExtensionAspect->addEAllReferences(m_ExtensionAspect__expression);
    }
    {
        m_DefinitionAspect__body = ecoreFactory->createEReference();
        m_DefinitionAspect__body->setName("body");
        m_DefinitionAspect->addEStructuralFeatures(m_DefinitionAspect__body);
        m_DefinitionAspect->addEAllStructuralFeatures(m_DefinitionAspect__body);
        m_DefinitionAspect->addEReferences(m_DefinitionAspect__body);
        m_DefinitionAspect->addEAllReferences(m_DefinitionAspect__body);
    }
    {
        m_Check__errorSeverity = ecoreFactory->createEAttribute();
        m_Check__errorSeverity->setName("errorSeverity");
        m_Check->addEStructuralFeatures(m_Check__errorSeverity);
        m_Check->addEAllStructuralFeatures(m_Check__errorSeverity);
        m_Check->addEAttributes(m_Check__errorSeverity);
        m_Check->addEAllAttributes(m_Check__errorSeverity);
    }
    {
        m_Check__msg = ecoreFactory->createEReference();
        m_Check__msg->setName("msg");
        m_Check->addEStructuralFeatures(m_Check__msg);
        m_Check->addEAllStructuralFeatures(m_Check__msg);
        m_Check->addEReferences(m_Check__msg);
        m_Check->addEAllReferences(m_Check__msg);
    }
    {
        m_Check__constraint = ecoreFactory->createEReference();
        m_Check__constraint->setName("constraint");
        m_Check->addEStructuralFeatures(m_Check__constraint);
        m_Check->addEAllStructuralFeatures(m_Check__constraint);
        m_Check->addEReferences(m_Check__constraint);
        m_Check->addEAllReferences(m_Check__constraint);
    }
    {
        m_Check__feature = ecoreFactory->createEAttribute();
        m_Check__feature->setName("feature");
        m_Check->addEStructuralFeatures(m_Check__feature);
        m_Check->addEAllStructuralFeatures(m_Check__feature);
        m_Check->addEAttributes(m_Check__feature);
        m_Check->addEAllAttributes(m_Check__feature);
    }
    {
        m_CreateExtension__toBeCreated = ecoreFactory->createEReference();
        m_CreateExtension__toBeCreated->setName("toBeCreated");
        m_CreateExtension->addEStructuralFeatures(m_CreateExtension__toBeCreated);
        m_CreateExtension->addEAllStructuralFeatures(m_CreateExtension__toBeCreated);
        m_CreateExtension->addEReferences(m_CreateExtension__toBeCreated);
        m_CreateExtension->addEAllReferences(m_CreateExtension__toBeCreated);
    }
    {
        m_JavaExtension__javaType = ecoreFactory->createEReference();
        m_JavaExtension__javaType->setName("javaType");
        m_JavaExtension->addEStructuralFeatures(m_JavaExtension__javaType);
        m_JavaExtension->addEAllStructuralFeatures(m_JavaExtension__javaType);
        m_JavaExtension->addEReferences(m_JavaExtension__javaType);
        m_JavaExtension->addEAllReferences(m_JavaExtension__javaType);
    }
    {
        m_JavaExtension__javaMethod = ecoreFactory->createEReference();
        m_JavaExtension__javaMethod->setName("javaMethod");
        m_JavaExtension->addEStructuralFeatures(m_JavaExtension__javaMethod);
        m_JavaExtension->addEAllStructuralFeatures(m_JavaExtension__javaMethod);
        m_JavaExtension->addEReferences(m_JavaExtension__javaMethod);
        m_JavaExtension->addEAllReferences(m_JavaExtension__javaMethod);
    }
    {
        m_JavaExtension__javaParamTypes = ecoreFactory->createEReference();
        m_JavaExtension__javaParamTypes->setName("javaParamTypes");
        m_JavaExtension->addEStructuralFeatures(m_JavaExtension__javaParamTypes);
        m_JavaExtension->addEAllStructuralFeatures(m_JavaExtension__javaParamTypes);
        m_JavaExtension->addEReferences(m_JavaExtension__javaParamTypes);
        m_JavaExtension->addEAllReferences(m_JavaExtension__javaParamTypes);
    }

    m_AbstractDeclaration->addESuperTypes(m_SyntaxElement);
    m_AbstractDeclaration->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_AbstractDeclaration->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_AbstractDeclaration->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_AbstractDeclaration->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
    m_AbstractNamedDeclaration->addESuperTypes(m_AbstractDeclaration);
    m_AbstractNamedDeclaration->addAllEAllOperations(m_AbstractDeclaration->getEOperations());
    m_AbstractNamedDeclaration->addAllEAllReferences(m_AbstractDeclaration->getEReferences());
    m_AbstractNamedDeclaration->addAllEAllAttributes(m_AbstractDeclaration->getEAttributes());
    m_AbstractNamedDeclaration->addAllEAllStructuralFeatures(m_AbstractDeclaration->getEStructuralFeatures());
    m_Definition->addESuperTypes(m_AbstractNamedDeclaration);
    m_Definition->addAllEAllOperations(m_AbstractNamedDeclaration->getEOperations());
    m_Definition->addAllEAllReferences(m_AbstractNamedDeclaration->getEReferences());
    m_Definition->addAllEAllAttributes(m_AbstractNamedDeclaration->getEAttributes());
    m_Definition->addAllEAllStructuralFeatures(m_AbstractNamedDeclaration->getEStructuralFeatures());
    m_Extension->addESuperTypes(m_AbstractNamedDeclaration);
    m_Extension->addAllEAllOperations(m_AbstractNamedDeclaration->getEOperations());
    m_Extension->addAllEAllReferences(m_AbstractNamedDeclaration->getEReferences());
    m_Extension->addAllEAllAttributes(m_AbstractNamedDeclaration->getEAttributes());
    m_Extension->addAllEAllStructuralFeatures(m_AbstractNamedDeclaration->getEStructuralFeatures());
    m_AbstractAspect->addESuperTypes(m_AbstractDeclaration);
    m_AbstractAspect->addAllEAllOperations(m_AbstractDeclaration->getEOperations());
    m_AbstractAspect->addAllEAllReferences(m_AbstractDeclaration->getEReferences());
    m_AbstractAspect->addAllEAllAttributes(m_AbstractDeclaration->getEAttributes());
    m_AbstractAspect->addAllEAllStructuralFeatures(m_AbstractDeclaration->getEStructuralFeatures());
    m_ExtensionAspect->addESuperTypes(m_AbstractAspect);
    m_ExtensionAspect->addAllEAllOperations(m_AbstractAspect->getEOperations());
    m_ExtensionAspect->addAllEAllReferences(m_AbstractAspect->getEReferences());
    m_ExtensionAspect->addAllEAllAttributes(m_AbstractAspect->getEAttributes());
    m_ExtensionAspect->addAllEAllStructuralFeatures(m_AbstractAspect->getEStructuralFeatures());
    m_DefinitionAspect->addESuperTypes(m_AbstractAspect);
    m_DefinitionAspect->addAllEAllOperations(m_AbstractAspect->getEOperations());
    m_DefinitionAspect->addAllEAllReferences(m_AbstractAspect->getEReferences());
    m_DefinitionAspect->addAllEAllAttributes(m_AbstractAspect->getEAttributes());
    m_DefinitionAspect->addAllEAllStructuralFeatures(m_AbstractAspect->getEStructuralFeatures());
    m_Check->addESuperTypes(m_AbstractDeclaration);
    m_Check->addAllEAllOperations(m_AbstractDeclaration->getEOperations());
    m_Check->addAllEAllReferences(m_AbstractDeclaration->getEReferences());
    m_Check->addAllEAllAttributes(m_AbstractDeclaration->getEAttributes());
    m_Check->addAllEAllStructuralFeatures(m_AbstractDeclaration->getEStructuralFeatures());
    m_CreateExtension->addESuperTypes(m_Extension);
    m_CreateExtension->addAllEAllOperations(m_Extension->getEOperations());
    m_CreateExtension->addAllEAllReferences(m_Extension->getEReferences());
    m_CreateExtension->addAllEAllAttributes(m_Extension->getEAttributes());
    m_CreateExtension->addAllEAllStructuralFeatures(m_Extension->getEStructuralFeatures());
    m_JavaExtension->addESuperTypes(m_AbstractNamedDeclaration);
    m_JavaExtension->addAllEAllOperations(m_AbstractNamedDeclaration->getEOperations());
    m_JavaExtension->addAllEAllReferences(m_AbstractNamedDeclaration->getEReferences());
    m_JavaExtension->addAllEAllAttributes(m_AbstractNamedDeclaration->getEAttributes());
    m_JavaExtension->addAllEAllStructuralFeatures(m_AbstractNamedDeclaration->getEStructuralFeatures());


    m_AbstractDeclaration->addFeatureAccesors(m_AbstractDeclaration__owner,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractDeclaration_ptr >(o)->getOwner()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDeclaration->addFeatureAccesors(m_AbstractDeclaration__params,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractDeclaration_ptr >(o)->getParams()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDeclaration->addFeatureAccesors(m_AbstractDeclaration__isPrivate,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractDeclaration_ptr >(o)->getIsPrivate()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDeclaration->addFeatureAccesors(m_AbstractDeclaration__guard,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractDeclaration_ptr >(o)->getGuard()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractNamedDeclaration->addFeatureAccesors(m_AbstractNamedDeclaration__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractNamedDeclaration_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Definition->addFeatureAccesors(m_Definition__body,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Definition_ptr >(o)->getBody()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Extension->addFeatureAccesors(m_Extension__cached,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Extension_ptr >(o)->getCached()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Extension->addFeatureAccesors(m_Extension__body,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Extension_ptr >(o)->getBody()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Extension->addFeatureAccesors(m_Extension__returnType,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Extension_ptr >(o)->getReturnType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractAspect->addFeatureAccesors(m_AbstractAspect__pointcut,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractAspect_ptr >(o)->getPointcut()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractAspect->addFeatureAccesors(m_AbstractAspect__wildparams,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::AbstractAspect_ptr >(o)->getWildparams()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtensionAspect->addFeatureAccesors(m_ExtensionAspect__expression,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::ExtensionAspect_ptr >(o)->getExpression()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DefinitionAspect->addFeatureAccesors(m_DefinitionAspect__body,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::DefinitionAspect_ptr >(o)->getBody()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Check->addFeatureAccesors(m_Check__errorSeverity,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Check_ptr >(o)->getErrorSeverity()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Check->addFeatureAccesors(m_Check__msg,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Check_ptr >(o)->getMsg()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Check->addFeatureAccesors(m_Check__constraint,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Check_ptr >(o)->getConstraint()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Check->addFeatureAccesors(m_Check__feature,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::Check_ptr >(o)->getFeature()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CreateExtension->addFeatureAccesors(m_CreateExtension__toBeCreated,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::CreateExtension_ptr >(o)->getToBeCreated()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_JavaExtension->addFeatureAccesors(m_JavaExtension__javaType,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::JavaExtension_ptr >(o)->getJavaType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_JavaExtension->addFeatureAccesors(m_JavaExtension__javaMethod,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::JavaExtension_ptr >(o)->getJavaMethod()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_JavaExtension->addFeatureAccesors(m_JavaExtension__javaParamTypes,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::declaration::JavaExtension_ptr >(o)->getJavaParamTypes()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const DeclarationPackage_ptr DeclarationPackage::_instance()
{
    static DeclarationPackage __instance;
    return &__instance;
}

ecore::EClass_ptr DeclarationPackage::getAbstractDeclaration() const
{
    return m_AbstractDeclaration;
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration() const
{
    return e4c::tag< AbstractDeclaration >::get();
}

ecore::EClass_ptr DeclarationPackage::getAbstractNamedDeclaration() const
{
    return m_AbstractNamedDeclaration;
}

e4c::tag_t DeclarationPackage::getTag_AbstractNamedDeclaration() const
{
    return e4c::tag< AbstractNamedDeclaration >::get();
}

ecore::EClass_ptr DeclarationPackage::getDefinition() const
{
    return m_Definition;
}

e4c::tag_t DeclarationPackage::getTag_Definition() const
{
    return e4c::tag< Definition >::get();
}

ecore::EClass_ptr DeclarationPackage::getExtension() const
{
    return m_Extension;
}

e4c::tag_t DeclarationPackage::getTag_Extension() const
{
    return e4c::tag< Extension >::get();
}

ecore::EClass_ptr DeclarationPackage::getAbstractAspect() const
{
    return m_AbstractAspect;
}

e4c::tag_t DeclarationPackage::getTag_AbstractAspect() const
{
    return e4c::tag< AbstractAspect >::get();
}

ecore::EClass_ptr DeclarationPackage::getExtensionAspect() const
{
    return m_ExtensionAspect;
}

e4c::tag_t DeclarationPackage::getTag_ExtensionAspect() const
{
    return e4c::tag< ExtensionAspect >::get();
}

ecore::EClass_ptr DeclarationPackage::getDefinitionAspect() const
{
    return m_DefinitionAspect;
}

e4c::tag_t DeclarationPackage::getTag_DefinitionAspect() const
{
    return e4c::tag< DefinitionAspect >::get();
}

ecore::EClass_ptr DeclarationPackage::getCheck() const
{
    return m_Check;
}

e4c::tag_t DeclarationPackage::getTag_Check() const
{
    return e4c::tag< Check >::get();
}

ecore::EClass_ptr DeclarationPackage::getCreateExtension() const
{
    return m_CreateExtension;
}

e4c::tag_t DeclarationPackage::getTag_CreateExtension() const
{
    return e4c::tag< CreateExtension >::get();
}

ecore::EClass_ptr DeclarationPackage::getJavaExtension() const
{
    return m_JavaExtension;
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension() const
{
    return e4c::tag< JavaExtension >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__owner() const
{
    return e4c::tag< AbstractDeclaration__owner_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__owner() const
{
    return m_AbstractDeclaration__owner;
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__params() const
{
    return e4c::tag< AbstractDeclaration__params_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__params() const
{
    return m_AbstractDeclaration__params;
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__isPrivate() const
{
    return e4c::tag< AbstractDeclaration__isPrivate_tag >::get();
}

ecore::EAttribute_ptr DeclarationPackage::getAbstractDeclaration__isPrivate() const
{
    return m_AbstractDeclaration__isPrivate;
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__guard() const
{
    return e4c::tag< AbstractDeclaration__guard_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__guard() const
{
    return m_AbstractDeclaration__guard;
}

e4c::tag_t DeclarationPackage::getTag_AbstractNamedDeclaration__name() const
{
    return e4c::tag< AbstractNamedDeclaration__name_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getAbstractNamedDeclaration__name() const
{
    return m_AbstractNamedDeclaration__name;
}

e4c::tag_t DeclarationPackage::getTag_Definition__body() const
{
    return e4c::tag< Definition__body_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getDefinition__body() const
{
    return m_Definition__body;
}

e4c::tag_t DeclarationPackage::getTag_Extension__cached() const
{
    return e4c::tag< Extension__cached_tag >::get();
}

ecore::EAttribute_ptr DeclarationPackage::getExtension__cached() const
{
    return m_Extension__cached;
}

e4c::tag_t DeclarationPackage::getTag_Extension__body() const
{
    return e4c::tag< Extension__body_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getExtension__body() const
{
    return m_Extension__body;
}

e4c::tag_t DeclarationPackage::getTag_Extension__returnType() const
{
    return e4c::tag< Extension__returnType_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getExtension__returnType() const
{
    return m_Extension__returnType;
}

e4c::tag_t DeclarationPackage::getTag_AbstractAspect__pointcut() const
{
    return e4c::tag< AbstractAspect__pointcut_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getAbstractAspect__pointcut() const
{
    return m_AbstractAspect__pointcut;
}

e4c::tag_t DeclarationPackage::getTag_AbstractAspect__wildparams() const
{
    return e4c::tag< AbstractAspect__wildparams_tag >::get();
}

ecore::EAttribute_ptr DeclarationPackage::getAbstractAspect__wildparams() const
{
    return m_AbstractAspect__wildparams;
}

e4c::tag_t DeclarationPackage::getTag_ExtensionAspect__expression() const
{
    return e4c::tag< ExtensionAspect__expression_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getExtensionAspect__expression() const
{
    return m_ExtensionAspect__expression;
}

e4c::tag_t DeclarationPackage::getTag_DefinitionAspect__body() const
{
    return e4c::tag< DefinitionAspect__body_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getDefinitionAspect__body() const
{
    return m_DefinitionAspect__body;
}

e4c::tag_t DeclarationPackage::getTag_Check__errorSeverity() const
{
    return e4c::tag< Check__errorSeverity_tag >::get();
}

ecore::EAttribute_ptr DeclarationPackage::getCheck__errorSeverity() const
{
    return m_Check__errorSeverity;
}

e4c::tag_t DeclarationPackage::getTag_Check__msg() const
{
    return e4c::tag< Check__msg_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getCheck__msg() const
{
    return m_Check__msg;
}

e4c::tag_t DeclarationPackage::getTag_Check__constraint() const
{
    return e4c::tag< Check__constraint_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getCheck__constraint() const
{
    return m_Check__constraint;
}

e4c::tag_t DeclarationPackage::getTag_Check__feature() const
{
    return e4c::tag< Check__feature_tag >::get();
}

ecore::EAttribute_ptr DeclarationPackage::getCheck__feature() const
{
    return m_Check__feature;
}

e4c::tag_t DeclarationPackage::getTag_CreateExtension__toBeCreated() const
{
    return e4c::tag< CreateExtension__toBeCreated_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getCreateExtension__toBeCreated() const
{
    return m_CreateExtension__toBeCreated;
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaType() const
{
    return e4c::tag< JavaExtension__javaType_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaType() const
{
    return m_JavaExtension__javaType;
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaMethod() const
{
    return e4c::tag< JavaExtension__javaMethod_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaMethod() const
{
    return m_JavaExtension__javaMethod;
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaParamTypes() const
{
    return e4c::tag< JavaExtension__javaParamTypes_tag >::get();
}

ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaParamTypes() const
{
    return m_JavaExtension__javaParamTypes;
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_declaration()
{
    return ::xpand3::declaration::DeclarationPackage::_instance();
}
