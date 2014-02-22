#include "KdmPackage.hpp"
#include "KdmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::kdm;

KdmPackage::KdmPackage()
{
    m_eFactoryInstance = KdmFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_KDMFramework = ecoreFactory->createEClass();
    m_KDMFramework->setName("KDMFramework");
    addEClassifiers(m_KDMFramework);
    m_KDMModel = ecoreFactory->createEClass();
    m_KDMModel->setName("KDMModel");
    addEClassifiers(m_KDMModel);
    m_Audit = ecoreFactory->createEClass();
    m_Audit->setName("Audit");
    addEClassifiers(m_Audit);
    m_Segment = ecoreFactory->createEClass();
    m_Segment->setName("Segment");
    addEClassifiers(m_Segment);
    m_Attribute = ecoreFactory->createEClass();
    m_Attribute->setName("Attribute");
    addEClassifiers(m_Attribute);
    m_Annotation = ecoreFactory->createEClass();
    m_Annotation->setName("Annotation");
    addEClassifiers(m_Annotation);
    m_TagDefinition = ecoreFactory->createEClass();
    m_TagDefinition->setName("TagDefinition");
    addEClassifiers(m_TagDefinition);
    m_ExtendedValue = ecoreFactory->createEClass();
    m_ExtendedValue->setName("ExtendedValue");
    addEClassifiers(m_ExtendedValue);
    m_Stereotype = ecoreFactory->createEClass();
    m_Stereotype->setName("Stereotype");
    addEClassifiers(m_Stereotype);
    m_ExtensionFamily = ecoreFactory->createEClass();
    m_ExtensionFamily->setName("ExtensionFamily");
    addEClassifiers(m_ExtensionFamily);
    m_TaggedRef = ecoreFactory->createEClass();
    m_TaggedRef->setName("TaggedRef");
    addEClassifiers(m_TaggedRef);
    m_TaggedValue = ecoreFactory->createEClass();
    m_TaggedValue->setName("TaggedValue");
    addEClassifiers(m_TaggedValue);


    {
        m_KDMFramework__audit = ecoreFactory->createEReference();
        m_KDMFramework__audit->setName("audit");
        m_KDMFramework->addEStructuralFeatures(m_KDMFramework__audit);
        m_KDMFramework->addEAllStructuralFeatures(m_KDMFramework__audit);
        m_KDMFramework->addEReferences(m_KDMFramework__audit);
        m_KDMFramework->addEAllReferences(m_KDMFramework__audit);
    }
    {
        m_KDMFramework__extensionFamily = ecoreFactory->createEReference();
        m_KDMFramework__extensionFamily->setName("extensionFamily");
        m_KDMFramework->addEStructuralFeatures(m_KDMFramework__extensionFamily);
        m_KDMFramework->addEAllStructuralFeatures(m_KDMFramework__extensionFamily);
        m_KDMFramework->addEReferences(m_KDMFramework__extensionFamily);
        m_KDMFramework->addEAllReferences(m_KDMFramework__extensionFamily);
    }
    {
        m_KDMFramework__name = ecoreFactory->createEAttribute();
        m_KDMFramework__name->setName("name");
        m_KDMFramework->addEStructuralFeatures(m_KDMFramework__name);
        m_KDMFramework->addEAllStructuralFeatures(m_KDMFramework__name);
        m_KDMFramework->addEAttributes(m_KDMFramework__name);
        m_KDMFramework->addEAllAttributes(m_KDMFramework__name);
    }
    {
        m_Audit__description = ecoreFactory->createEAttribute();
        m_Audit__description->setName("description");
        m_Audit->addEStructuralFeatures(m_Audit__description);
        m_Audit->addEAllStructuralFeatures(m_Audit__description);
        m_Audit->addEAttributes(m_Audit__description);
        m_Audit->addEAllAttributes(m_Audit__description);
    }
    {
        m_Audit__author = ecoreFactory->createEAttribute();
        m_Audit__author->setName("author");
        m_Audit->addEStructuralFeatures(m_Audit__author);
        m_Audit->addEAllStructuralFeatures(m_Audit__author);
        m_Audit->addEAttributes(m_Audit__author);
        m_Audit->addEAllAttributes(m_Audit__author);
    }
    {
        m_Audit__date = ecoreFactory->createEAttribute();
        m_Audit__date->setName("date");
        m_Audit->addEStructuralFeatures(m_Audit__date);
        m_Audit->addEAllStructuralFeatures(m_Audit__date);
        m_Audit->addEAttributes(m_Audit__date);
        m_Audit->addEAllAttributes(m_Audit__date);
    }
    {
        m_Segment__segment = ecoreFactory->createEReference();
        m_Segment__segment->setName("segment");
        m_Segment->addEStructuralFeatures(m_Segment__segment);
        m_Segment->addEAllStructuralFeatures(m_Segment__segment);
        m_Segment->addEReferences(m_Segment__segment);
        m_Segment->addEAllReferences(m_Segment__segment);
    }
    {
        m_Segment__model = ecoreFactory->createEReference();
        m_Segment__model->setName("model");
        m_Segment->addEStructuralFeatures(m_Segment__model);
        m_Segment->addEAllStructuralFeatures(m_Segment__model);
        m_Segment->addEReferences(m_Segment__model);
        m_Segment->addEAllReferences(m_Segment__model);
    }
    {
        m_Attribute__tag = ecoreFactory->createEAttribute();
        m_Attribute__tag->setName("tag");
        m_Attribute->addEStructuralFeatures(m_Attribute__tag);
        m_Attribute->addEAllStructuralFeatures(m_Attribute__tag);
        m_Attribute->addEAttributes(m_Attribute__tag);
        m_Attribute->addEAllAttributes(m_Attribute__tag);
    }
    {
        m_Attribute__value = ecoreFactory->createEAttribute();
        m_Attribute__value->setName("value");
        m_Attribute->addEStructuralFeatures(m_Attribute__value);
        m_Attribute->addEAllStructuralFeatures(m_Attribute__value);
        m_Attribute->addEAttributes(m_Attribute__value);
        m_Attribute->addEAllAttributes(m_Attribute__value);
    }
    {
        m_Annotation__text = ecoreFactory->createEAttribute();
        m_Annotation__text->setName("text");
        m_Annotation->addEStructuralFeatures(m_Annotation__text);
        m_Annotation->addEAllStructuralFeatures(m_Annotation__text);
        m_Annotation->addEAttributes(m_Annotation__text);
        m_Annotation->addEAllAttributes(m_Annotation__text);
    }
    {
        m_TagDefinition__tag = ecoreFactory->createEAttribute();
        m_TagDefinition__tag->setName("tag");
        m_TagDefinition->addEStructuralFeatures(m_TagDefinition__tag);
        m_TagDefinition->addEAllStructuralFeatures(m_TagDefinition__tag);
        m_TagDefinition->addEAttributes(m_TagDefinition__tag);
        m_TagDefinition->addEAllAttributes(m_TagDefinition__tag);
    }
    {
        m_TagDefinition__type = ecoreFactory->createEAttribute();
        m_TagDefinition__type->setName("type");
        m_TagDefinition->addEStructuralFeatures(m_TagDefinition__type);
        m_TagDefinition->addEAllStructuralFeatures(m_TagDefinition__type);
        m_TagDefinition->addEAttributes(m_TagDefinition__type);
        m_TagDefinition->addEAllAttributes(m_TagDefinition__type);
    }
    {
        m_ExtendedValue__tag = ecoreFactory->createEReference();
        m_ExtendedValue__tag->setName("tag");
        m_ExtendedValue->addEStructuralFeatures(m_ExtendedValue__tag);
        m_ExtendedValue->addEAllStructuralFeatures(m_ExtendedValue__tag);
        m_ExtendedValue->addEReferences(m_ExtendedValue__tag);
        m_ExtendedValue->addEAllReferences(m_ExtendedValue__tag);
    }
    {
        m_Stereotype__tag = ecoreFactory->createEReference();
        m_Stereotype__tag->setName("tag");
        m_Stereotype->addEStructuralFeatures(m_Stereotype__tag);
        m_Stereotype->addEAllStructuralFeatures(m_Stereotype__tag);
        m_Stereotype->addEReferences(m_Stereotype__tag);
        m_Stereotype->addEAllReferences(m_Stereotype__tag);
    }
    {
        m_Stereotype__name = ecoreFactory->createEAttribute();
        m_Stereotype__name->setName("name");
        m_Stereotype->addEStructuralFeatures(m_Stereotype__name);
        m_Stereotype->addEAllStructuralFeatures(m_Stereotype__name);
        m_Stereotype->addEAttributes(m_Stereotype__name);
        m_Stereotype->addEAllAttributes(m_Stereotype__name);
    }
    {
        m_Stereotype__type = ecoreFactory->createEAttribute();
        m_Stereotype__type->setName("type");
        m_Stereotype->addEStructuralFeatures(m_Stereotype__type);
        m_Stereotype->addEAllStructuralFeatures(m_Stereotype__type);
        m_Stereotype->addEAttributes(m_Stereotype__type);
        m_Stereotype->addEAllAttributes(m_Stereotype__type);
    }
    {
        m_ExtensionFamily__stereotype = ecoreFactory->createEReference();
        m_ExtensionFamily__stereotype->setName("stereotype");
        m_ExtensionFamily->addEStructuralFeatures(m_ExtensionFamily__stereotype);
        m_ExtensionFamily->addEAllStructuralFeatures(m_ExtensionFamily__stereotype);
        m_ExtensionFamily->addEReferences(m_ExtensionFamily__stereotype);
        m_ExtensionFamily->addEAllReferences(m_ExtensionFamily__stereotype);
    }
    {
        m_ExtensionFamily__name = ecoreFactory->createEAttribute();
        m_ExtensionFamily__name->setName("name");
        m_ExtensionFamily->addEStructuralFeatures(m_ExtensionFamily__name);
        m_ExtensionFamily->addEAllStructuralFeatures(m_ExtensionFamily__name);
        m_ExtensionFamily->addEAttributes(m_ExtensionFamily__name);
        m_ExtensionFamily->addEAllAttributes(m_ExtensionFamily__name);
    }
    {
        m_TaggedRef__reference = ecoreFactory->createEReference();
        m_TaggedRef__reference->setName("reference");
        m_TaggedRef->addEStructuralFeatures(m_TaggedRef__reference);
        m_TaggedRef->addEAllStructuralFeatures(m_TaggedRef__reference);
        m_TaggedRef->addEReferences(m_TaggedRef__reference);
        m_TaggedRef->addEAllReferences(m_TaggedRef__reference);
    }
    {
        m_TaggedValue__value = ecoreFactory->createEAttribute();
        m_TaggedValue__value->setName("value");
        m_TaggedValue->addEStructuralFeatures(m_TaggedValue__value);
        m_TaggedValue->addEAllStructuralFeatures(m_TaggedValue__value);
        m_TaggedValue->addEAttributes(m_TaggedValue__value);
        m_TaggedValue->addEAllAttributes(m_TaggedValue__value);
    }

    m_KDMFramework->addESuperTypes(m_ModelElement);
    m_KDMFramework->addAllEAllOperations(m_ModelElement->getEOperations());
    m_KDMFramework->addAllEAllReferences(m_ModelElement->getEReferences());
    m_KDMFramework->addAllEAllAttributes(m_ModelElement->getEAttributes());
    m_KDMFramework->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
    m_KDMModel->addESuperTypes(m_KDMFramework);
    m_KDMModel->addAllEAllOperations(m_KDMFramework->getEOperations());
    m_KDMModel->addAllEAllReferences(m_KDMFramework->getEReferences());
    m_KDMModel->addAllEAllAttributes(m_KDMFramework->getEAttributes());
    m_KDMModel->addAllEAllStructuralFeatures(m_KDMFramework->getEStructuralFeatures());
    m_Audit->addESuperTypes(m_Element);
    m_Audit->addAllEAllOperations(m_Element->getEOperations());
    m_Audit->addAllEAllReferences(m_Element->getEReferences());
    m_Audit->addAllEAllAttributes(m_Element->getEAttributes());
    m_Audit->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_Segment->addESuperTypes(m_KDMFramework);
    m_Segment->addAllEAllOperations(m_KDMFramework->getEOperations());
    m_Segment->addAllEAllReferences(m_KDMFramework->getEReferences());
    m_Segment->addAllEAllAttributes(m_KDMFramework->getEAttributes());
    m_Segment->addAllEAllStructuralFeatures(m_KDMFramework->getEStructuralFeatures());
    m_Attribute->addESuperTypes(m_Element);
    m_Attribute->addAllEAllOperations(m_Element->getEOperations());
    m_Attribute->addAllEAllReferences(m_Element->getEReferences());
    m_Attribute->addAllEAllAttributes(m_Element->getEAttributes());
    m_Attribute->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_Annotation->addESuperTypes(m_Element);
    m_Annotation->addAllEAllOperations(m_Element->getEOperations());
    m_Annotation->addAllEAllReferences(m_Element->getEReferences());
    m_Annotation->addAllEAllAttributes(m_Element->getEAttributes());
    m_Annotation->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_TagDefinition->addESuperTypes(m_Element);
    m_TagDefinition->addAllEAllOperations(m_Element->getEOperations());
    m_TagDefinition->addAllEAllReferences(m_Element->getEReferences());
    m_TagDefinition->addAllEAllAttributes(m_Element->getEAttributes());
    m_TagDefinition->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_ExtendedValue->addESuperTypes(m_Element);
    m_ExtendedValue->addAllEAllOperations(m_Element->getEOperations());
    m_ExtendedValue->addAllEAllReferences(m_Element->getEReferences());
    m_ExtendedValue->addAllEAllAttributes(m_Element->getEAttributes());
    m_ExtendedValue->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_Stereotype->addESuperTypes(m_Element);
    m_Stereotype->addAllEAllOperations(m_Element->getEOperations());
    m_Stereotype->addAllEAllReferences(m_Element->getEReferences());
    m_Stereotype->addAllEAllAttributes(m_Element->getEAttributes());
    m_Stereotype->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_ExtensionFamily->addESuperTypes(m_Element);
    m_ExtensionFamily->addAllEAllOperations(m_Element->getEOperations());
    m_ExtensionFamily->addAllEAllReferences(m_Element->getEReferences());
    m_ExtensionFamily->addAllEAllAttributes(m_Element->getEAttributes());
    m_ExtensionFamily->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_TaggedRef->addESuperTypes(m_ExtendedValue);
    m_TaggedRef->addAllEAllOperations(m_ExtendedValue->getEOperations());
    m_TaggedRef->addAllEAllReferences(m_ExtendedValue->getEReferences());
    m_TaggedRef->addAllEAllAttributes(m_ExtendedValue->getEAttributes());
    m_TaggedRef->addAllEAllStructuralFeatures(m_ExtendedValue->getEStructuralFeatures());
    m_TaggedValue->addESuperTypes(m_ExtendedValue);
    m_TaggedValue->addAllEAllOperations(m_ExtendedValue->getEOperations());
    m_TaggedValue->addAllEAllReferences(m_ExtendedValue->getEReferences());
    m_TaggedValue->addAllEAllAttributes(m_ExtendedValue->getEAttributes());
    m_TaggedValue->addAllEAllStructuralFeatures(m_ExtendedValue->getEStructuralFeatures());


    m_KDMFramework->addFeatureAccesors(m_KDMFramework__audit,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::KDMFramework_ptr >(o)->getAudit()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_KDMFramework->addFeatureAccesors(m_KDMFramework__extensionFamily,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::KDMFramework_ptr >(o)->getExtensionFamily()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_KDMFramework->addFeatureAccesors(m_KDMFramework__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::KDMFramework_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Audit->addFeatureAccesors(m_Audit__description,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Audit_ptr >(o)->getDescription()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Audit->addFeatureAccesors(m_Audit__author,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Audit_ptr >(o)->getAuthor()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Audit->addFeatureAccesors(m_Audit__date,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Audit_ptr >(o)->getDate()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Segment->addFeatureAccesors(m_Segment__segment,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Segment_ptr >(o)->getSegment()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Segment->addFeatureAccesors(m_Segment__model,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Segment_ptr >(o)->getModel()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Attribute->addFeatureAccesors(m_Attribute__tag,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Attribute_ptr >(o)->getTag()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Attribute->addFeatureAccesors(m_Attribute__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Attribute_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Annotation->addFeatureAccesors(m_Annotation__text,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Annotation_ptr >(o)->getText()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TagDefinition->addFeatureAccesors(m_TagDefinition__tag,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::TagDefinition_ptr >(o)->getTag()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TagDefinition->addFeatureAccesors(m_TagDefinition__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::TagDefinition_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtendedValue->addFeatureAccesors(m_ExtendedValue__tag,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::ExtendedValue_ptr >(o)->getTag()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Stereotype->addFeatureAccesors(m_Stereotype__tag,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Stereotype_ptr >(o)->getTag()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Stereotype->addFeatureAccesors(m_Stereotype__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Stereotype_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Stereotype->addFeatureAccesors(m_Stereotype__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::Stereotype_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtensionFamily->addFeatureAccesors(m_ExtensionFamily__stereotype,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::ExtensionFamily_ptr >(o)->getStereotype()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtensionFamily->addFeatureAccesors(m_ExtensionFamily__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::ExtensionFamily_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TaggedRef->addFeatureAccesors(m_TaggedRef__reference,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::TaggedRef_ptr >(o)->getReference()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TaggedValue->addFeatureAccesors(m_TaggedValue__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::kdm::TaggedValue_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const KdmPackage_ptr KdmPackage::_instance()
{
    static KdmPackage __instance;
    return &__instance;
}

ecore::EClass_ptr KdmPackage::getKDMFramework() const
{
    return m_KDMFramework;
}

e4c::tag_t KdmPackage::getTag_KDMFramework() const
{
    return e4c::tag< KDMFramework >::get();
}

ecore::EClass_ptr KdmPackage::getKDMModel() const
{
    return m_KDMModel;
}

e4c::tag_t KdmPackage::getTag_KDMModel() const
{
    return e4c::tag< KDMModel >::get();
}

ecore::EClass_ptr KdmPackage::getAudit() const
{
    return m_Audit;
}

e4c::tag_t KdmPackage::getTag_Audit() const
{
    return e4c::tag< Audit >::get();
}

ecore::EClass_ptr KdmPackage::getSegment() const
{
    return m_Segment;
}

e4c::tag_t KdmPackage::getTag_Segment() const
{
    return e4c::tag< Segment >::get();
}

ecore::EClass_ptr KdmPackage::getAttribute() const
{
    return m_Attribute;
}

e4c::tag_t KdmPackage::getTag_Attribute() const
{
    return e4c::tag< Attribute >::get();
}

ecore::EClass_ptr KdmPackage::getAnnotation() const
{
    return m_Annotation;
}

e4c::tag_t KdmPackage::getTag_Annotation() const
{
    return e4c::tag< Annotation >::get();
}

ecore::EClass_ptr KdmPackage::getTagDefinition() const
{
    return m_TagDefinition;
}

e4c::tag_t KdmPackage::getTag_TagDefinition() const
{
    return e4c::tag< TagDefinition >::get();
}

ecore::EClass_ptr KdmPackage::getExtendedValue() const
{
    return m_ExtendedValue;
}

e4c::tag_t KdmPackage::getTag_ExtendedValue() const
{
    return e4c::tag< ExtendedValue >::get();
}

ecore::EClass_ptr KdmPackage::getStereotype() const
{
    return m_Stereotype;
}

e4c::tag_t KdmPackage::getTag_Stereotype() const
{
    return e4c::tag< Stereotype >::get();
}

ecore::EClass_ptr KdmPackage::getExtensionFamily() const
{
    return m_ExtensionFamily;
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily() const
{
    return e4c::tag< ExtensionFamily >::get();
}

ecore::EClass_ptr KdmPackage::getTaggedRef() const
{
    return m_TaggedRef;
}

e4c::tag_t KdmPackage::getTag_TaggedRef() const
{
    return e4c::tag< TaggedRef >::get();
}

ecore::EClass_ptr KdmPackage::getTaggedValue() const
{
    return m_TaggedValue;
}

e4c::tag_t KdmPackage::getTag_TaggedValue() const
{
    return e4c::tag< TaggedValue >::get();
}

e4c::tag_t KdmPackage::getTag_KDMFramework__audit() const
{
    return e4c::tag< KDMFramework__audit_tag >::get();
}

ecore::EReference_ptr KdmPackage::getKDMFramework__audit() const
{
    return m_KDMFramework__audit;
}

e4c::tag_t KdmPackage::getTag_KDMFramework__extensionFamily() const
{
    return e4c::tag< KDMFramework__extensionFamily_tag >::get();
}

ecore::EReference_ptr KdmPackage::getKDMFramework__extensionFamily() const
{
    return m_KDMFramework__extensionFamily;
}

e4c::tag_t KdmPackage::getTag_KDMFramework__name() const
{
    return e4c::tag< KDMFramework__name_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getKDMFramework__name() const
{
    return m_KDMFramework__name;
}

e4c::tag_t KdmPackage::getTag_Audit__description() const
{
    return e4c::tag< Audit__description_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAudit__description() const
{
    return m_Audit__description;
}

e4c::tag_t KdmPackage::getTag_Audit__author() const
{
    return e4c::tag< Audit__author_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAudit__author() const
{
    return m_Audit__author;
}

e4c::tag_t KdmPackage::getTag_Audit__date() const
{
    return e4c::tag< Audit__date_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAudit__date() const
{
    return m_Audit__date;
}

e4c::tag_t KdmPackage::getTag_Segment__segment() const
{
    return e4c::tag< Segment__segment_tag >::get();
}

ecore::EReference_ptr KdmPackage::getSegment__segment() const
{
    return m_Segment__segment;
}

e4c::tag_t KdmPackage::getTag_Segment__model() const
{
    return e4c::tag< Segment__model_tag >::get();
}

ecore::EReference_ptr KdmPackage::getSegment__model() const
{
    return m_Segment__model;
}

e4c::tag_t KdmPackage::getTag_Attribute__tag() const
{
    return e4c::tag< Attribute__tag_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAttribute__tag() const
{
    return m_Attribute__tag;
}

e4c::tag_t KdmPackage::getTag_Attribute__value() const
{
    return e4c::tag< Attribute__value_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAttribute__value() const
{
    return m_Attribute__value;
}

e4c::tag_t KdmPackage::getTag_Annotation__text() const
{
    return e4c::tag< Annotation__text_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getAnnotation__text() const
{
    return m_Annotation__text;
}

e4c::tag_t KdmPackage::getTag_TagDefinition__tag() const
{
    return e4c::tag< TagDefinition__tag_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getTagDefinition__tag() const
{
    return m_TagDefinition__tag;
}

e4c::tag_t KdmPackage::getTag_TagDefinition__type() const
{
    return e4c::tag< TagDefinition__type_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getTagDefinition__type() const
{
    return m_TagDefinition__type;
}

e4c::tag_t KdmPackage::getTag_ExtendedValue__tag() const
{
    return e4c::tag< ExtendedValue__tag_tag >::get();
}

ecore::EReference_ptr KdmPackage::getExtendedValue__tag() const
{
    return m_ExtendedValue__tag;
}

e4c::tag_t KdmPackage::getTag_Stereotype__tag() const
{
    return e4c::tag< Stereotype__tag_tag >::get();
}

ecore::EReference_ptr KdmPackage::getStereotype__tag() const
{
    return m_Stereotype__tag;
}

e4c::tag_t KdmPackage::getTag_Stereotype__name() const
{
    return e4c::tag< Stereotype__name_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getStereotype__name() const
{
    return m_Stereotype__name;
}

e4c::tag_t KdmPackage::getTag_Stereotype__type() const
{
    return e4c::tag< Stereotype__type_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getStereotype__type() const
{
    return m_Stereotype__type;
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__stereotype() const
{
    return e4c::tag< ExtensionFamily__stereotype_tag >::get();
}

ecore::EReference_ptr KdmPackage::getExtensionFamily__stereotype() const
{
    return m_ExtensionFamily__stereotype;
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__name() const
{
    return e4c::tag< ExtensionFamily__name_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getExtensionFamily__name() const
{
    return m_ExtensionFamily__name;
}

e4c::tag_t KdmPackage::getTag_TaggedRef__reference() const
{
    return e4c::tag< TaggedRef__reference_tag >::get();
}

ecore::EReference_ptr KdmPackage::getTaggedRef__reference() const
{
    return m_TaggedRef__reference;
}

e4c::tag_t KdmPackage::getTag_TaggedValue__value() const
{
    return e4c::tag< TaggedValue__value_tag >::get();
}

ecore::EAttribute_ptr KdmPackage::getTaggedValue__value() const
{
    return m_TaggedValue__value;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_kdm()
{
    return ::kdm::kdm::KdmPackage::_instance();
}
