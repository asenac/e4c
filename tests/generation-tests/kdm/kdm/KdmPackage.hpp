#ifndef EMF_CPP_KDM_KDM_PACKAGE_HPP
#define EMF_CPP_KDM_KDM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace kdm
{


class KdmPackage : public ::ecore::EPackage
{
public:
    static const KdmPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_PACKAGE_HPP
