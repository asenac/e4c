#ifndef EMF_CPP_KDM_KDM_PACKAGE_HPP
#define EMF_CPP_KDM_KDM_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace kdm
{


class KdmPackage : public ::ecore::EPackage
{
public:
    static KdmPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_KDMFramework();
 	e4c::tag_t getTag_KDMModel();
 	e4c::tag_t getTag_Audit();
 	e4c::tag_t getTag_Segment();
 	e4c::tag_t getTag_Attribute();
 	e4c::tag_t getTag_Annotation();
 	e4c::tag_t getTag_TagDefinition();
 	e4c::tag_t getTag_ExtendedValue();
 	e4c::tag_t getTag_Stereotype();
 	e4c::tag_t getTag_ExtensionFamily();
 	e4c::tag_t getTag_TaggedRef();
 	e4c::tag_t getTag_TaggedValue();
 
 	// Structural features
 	e4c::tag_t getTag_KDMFramework__audit();
 	e4c::tag_t getTag_KDMFramework__extensionFamily();
 	e4c::tag_t getTag_KDMFramework__name();
 	e4c::tag_t getTag_Audit__description();
 	e4c::tag_t getTag_Audit__author();
 	e4c::tag_t getTag_Audit__date();
 	e4c::tag_t getTag_Segment__segment();
 	e4c::tag_t getTag_Segment__model();
 	e4c::tag_t getTag_Attribute__tag();
 	e4c::tag_t getTag_Attribute__value();
 	e4c::tag_t getTag_Annotation__text();
 	e4c::tag_t getTag_TagDefinition__tag();
 	e4c::tag_t getTag_TagDefinition__type();
 	e4c::tag_t getTag_ExtendedValue__tag();
 	e4c::tag_t getTag_Stereotype__tag();
 	e4c::tag_t getTag_Stereotype__name();
 	e4c::tag_t getTag_Stereotype__type();
 	e4c::tag_t getTag_ExtensionFamily__stereotype();
 	e4c::tag_t getTag_ExtensionFamily__name();
 	e4c::tag_t getTag_TaggedRef__reference();
 	e4c::tag_t getTag_TaggedValue__value();

protected:
    KdmPackage();
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_PACKAGE_HPP
