#ifndef EMF_CPP_KDM_KDM_FACTORY_HPP
#define EMF_CPP_KDM_KDM_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace kdm
{


class KdmFactory : public ::ecore::EFactory
{
public:

    static const KdmFactory_ptr _instance();

    Audit_ptr createAudit() const;
    Segment_ptr createSegment() const;
    Attribute_ptr createAttribute() const;
    Annotation_ptr createAnnotation() const;
    TagDefinition_ptr createTagDefinition() const;
    Stereotype_ptr createStereotype() const;
    ExtensionFamily_ptr createExtensionFamily() const;
    TaggedRef_ptr createTaggedRef() const;
    TaggedValue_ptr createTaggedValue() const;

protected:

    KdmFactory();
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_FACTORY_HPP
