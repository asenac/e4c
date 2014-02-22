#include "KdmFactory.hpp"
#include "KdmPackage.hpp"
#include "include.hpp"

using namespace kdm::kdm;

KdmFactory::KdmFactory()
{
    // m_ePackage = KdmPackage::_instance();
    // std::bind(&KdmFactory::createAudit, this);
    // m_ePackage->getTag_Audit();
    // std::bind(&KdmFactory::createSegment, this);
    // m_ePackage->getTag_Segment();
    // std::bind(&KdmFactory::createAttribute, this);
    // m_ePackage->getTag_Attribute();
    // std::bind(&KdmFactory::createAnnotation, this);
    // m_ePackage->getTag_Annotation();
    // std::bind(&KdmFactory::createTagDefinition, this);
    // m_ePackage->getTag_TagDefinition();
    // std::bind(&KdmFactory::createStereotype, this);
    // m_ePackage->getTag_Stereotype();
    // std::bind(&KdmFactory::createExtensionFamily, this);
    // m_ePackage->getTag_ExtensionFamily();
    // std::bind(&KdmFactory::createTaggedRef, this);
    // m_ePackage->getTag_TaggedRef();
    // std::bind(&KdmFactory::createTaggedValue, this);
    // m_ePackage->getTag_TaggedValue();
}

const KdmFactory_ptr KdmFactory::_instance()
{
    static KdmFactory __instance;
    return &__instance;
}

Audit_ptr KdmFactory::createAudit() const
{
    return new Audit();
}

Segment_ptr KdmFactory::createSegment() const
{
    return new Segment();
}

Attribute_ptr KdmFactory::createAttribute() const
{
    return new Attribute();
}

Annotation_ptr KdmFactory::createAnnotation() const
{
    return new Annotation();
}

TagDefinition_ptr KdmFactory::createTagDefinition() const
{
    return new TagDefinition();
}

Stereotype_ptr KdmFactory::createStereotype() const
{
    return new Stereotype();
}

ExtensionFamily_ptr KdmFactory::createExtensionFamily() const
{
    return new ExtensionFamily();
}

TaggedRef_ptr KdmFactory::createTaggedRef() const
{
    return new TaggedRef();
}

TaggedValue_ptr KdmFactory::createTaggedValue() const
{
    return new TaggedValue();
}

