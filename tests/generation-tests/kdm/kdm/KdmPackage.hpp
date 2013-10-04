#ifndef EMF_CPP_KDM_KDM_PACKAGE_HPP
#define EMF_CPP_KDM_KDM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/kdm/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace kdm
{


class KdmPackage : public ::ecore::EPackage
{
public:
    static const KdmPackage_ptr _instance();

 	::ecore::EClass_ptr getKDMFramework() const;
 	::ecore::EClass_ptr getKDMModel() const;
 	::ecore::EClass_ptr getAudit() const;
 	::ecore::EClass_ptr getSegment() const;
 	::ecore::EClass_ptr getAttribute() const;
 	::ecore::EClass_ptr getAnnotation() const;
 	::ecore::EClass_ptr getTagDefinition() const;
 	::ecore::EClass_ptr getExtendedValue() const;
 	::ecore::EClass_ptr getStereotype() const;
 	::ecore::EClass_ptr getExtensionFamily() const;
 	::ecore::EClass_ptr getTaggedRef() const;
 	::ecore::EClass_ptr getTaggedValue() const;
 	
 	::ecore::EReference_ptr getKDMFramework__audit() const;
 	::ecore::EReference_ptr getKDMFramework__extensionFamily() const;
 	::ecore::EAttribute_ptr getKDMFramework__name() const;
 	::ecore::EAttribute_ptr getAudit__description() const;
 	::ecore::EAttribute_ptr getAudit__author() const;
 	::ecore::EAttribute_ptr getAudit__date() const;
 	::ecore::EReference_ptr getSegment__segment() const;
 	::ecore::EReference_ptr getSegment__model() const;
 	::ecore::EAttribute_ptr getAttribute__tag() const;
 	::ecore::EAttribute_ptr getAttribute__value() const;
 	::ecore::EAttribute_ptr getAnnotation__text() const;
 	::ecore::EAttribute_ptr getTagDefinition__tag() const;
 	::ecore::EAttribute_ptr getTagDefinition__type() const;
 	::ecore::EReference_ptr getExtendedValue__tag() const;
 	::ecore::EReference_ptr getStereotype__tag() const;
 	::ecore::EAttribute_ptr getStereotype__name() const;
 	::ecore::EAttribute_ptr getStereotype__type() const;
 	::ecore::EReference_ptr getExtensionFamily__stereotype() const;
 	::ecore::EAttribute_ptr getExtensionFamily__name() const;
 	::ecore::EReference_ptr getTaggedRef__reference() const;
 	::ecore::EAttribute_ptr getTaggedValue__value() const;

 	e4c::tag_t getTag_KDMFramework() const;
 	e4c::tag_t getTag_KDMModel() const;
 	e4c::tag_t getTag_Audit() const;
 	e4c::tag_t getTag_Segment() const;
 	e4c::tag_t getTag_Attribute() const;
 	e4c::tag_t getTag_Annotation() const;
 	e4c::tag_t getTag_TagDefinition() const;
 	e4c::tag_t getTag_ExtendedValue() const;
 	e4c::tag_t getTag_Stereotype() const;
 	e4c::tag_t getTag_ExtensionFamily() const;
 	e4c::tag_t getTag_TaggedRef() const;
 	e4c::tag_t getTag_TaggedValue() const;
 
 	e4c::tag_t getTag_KDMFramework__audit() const;
 	e4c::tag_t getTag_KDMFramework__extensionFamily() const;
 	e4c::tag_t getTag_KDMFramework__name() const;
 	e4c::tag_t getTag_Audit__description() const;
 	e4c::tag_t getTag_Audit__author() const;
 	e4c::tag_t getTag_Audit__date() const;
 	e4c::tag_t getTag_Segment__segment() const;
 	e4c::tag_t getTag_Segment__model() const;
 	e4c::tag_t getTag_Attribute__tag() const;
 	e4c::tag_t getTag_Attribute__value() const;
 	e4c::tag_t getTag_Annotation__text() const;
 	e4c::tag_t getTag_TagDefinition__tag() const;
 	e4c::tag_t getTag_TagDefinition__type() const;
 	e4c::tag_t getTag_ExtendedValue__tag() const;
 	e4c::tag_t getTag_Stereotype__tag() const;
 	e4c::tag_t getTag_Stereotype__name() const;
 	e4c::tag_t getTag_Stereotype__type() const;
 	e4c::tag_t getTag_ExtensionFamily__stereotype() const;
 	e4c::tag_t getTag_ExtensionFamily__name() const;
 	e4c::tag_t getTag_TaggedRef__reference() const;
 	e4c::tag_t getTag_TaggedValue__value() const;

protected:
    KdmPackage();
    
 	::ecore::EClass_ptr m_KDMFramework;
 	::ecore::EClass_ptr m_KDMModel;
 	::ecore::EClass_ptr m_Audit;
 	::ecore::EClass_ptr m_Segment;
 	::ecore::EClass_ptr m_Attribute;
 	::ecore::EClass_ptr m_Annotation;
 	::ecore::EClass_ptr m_TagDefinition;
 	::ecore::EClass_ptr m_ExtendedValue;
 	::ecore::EClass_ptr m_Stereotype;
 	::ecore::EClass_ptr m_ExtensionFamily;
 	::ecore::EClass_ptr m_TaggedRef;
 	::ecore::EClass_ptr m_TaggedValue;
 	::ecore::EReference_ptr m_KDMFramework__audit;
 	::ecore::EReference_ptr m_KDMFramework__extensionFamily;
 	::ecore::EAttribute_ptr m_KDMFramework__name;
 	::ecore::EAttribute_ptr m_Audit__description;
 	::ecore::EAttribute_ptr m_Audit__author;
 	::ecore::EAttribute_ptr m_Audit__date;
 	::ecore::EReference_ptr m_Segment__segment;
 	::ecore::EReference_ptr m_Segment__model;
 	::ecore::EAttribute_ptr m_Attribute__tag;
 	::ecore::EAttribute_ptr m_Attribute__value;
 	::ecore::EAttribute_ptr m_Annotation__text;
 	::ecore::EAttribute_ptr m_TagDefinition__tag;
 	::ecore::EAttribute_ptr m_TagDefinition__type;
 	::ecore::EReference_ptr m_ExtendedValue__tag;
 	::ecore::EReference_ptr m_Stereotype__tag;
 	::ecore::EAttribute_ptr m_Stereotype__name;
 	::ecore::EAttribute_ptr m_Stereotype__type;
 	::ecore::EReference_ptr m_ExtensionFamily__stereotype;
 	::ecore::EAttribute_ptr m_ExtensionFamily__name;
 	::ecore::EReference_ptr m_TaggedRef__reference;
 	::ecore::EAttribute_ptr m_TaggedValue__value;
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_PACKAGE_HPP
