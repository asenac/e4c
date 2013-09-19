#ifndef EMF_CPP_KDM_KDM_FWD_HPP
#define EMF_CPP_KDM_KDM_FWD_HPP


namespace kdm
{
namespace kdm
{


class KdmPackage;
typedef KdmPackage * KdmPackage_ptr;
class KdmFactory;
typedef KdmFactory * KdmFactory_ptr;

// Data types


// Classes
class KDMFramework;
typedef KDMFramework* KDMFramework_ptr;
class KDMModel;
typedef KDMModel* KDMModel_ptr;
class Audit;
typedef Audit* Audit_ptr;
class Segment;
typedef Segment* Segment_ptr;
class Attribute;
typedef Attribute* Attribute_ptr;
class Annotation;
typedef Annotation* Annotation_ptr;
class TagDefinition;
typedef TagDefinition* TagDefinition_ptr;
class ExtendedValue;
typedef ExtendedValue* ExtendedValue_ptr;
class Stereotype;
typedef Stereotype* Stereotype_ptr;
class ExtensionFamily;
typedef ExtensionFamily* ExtensionFamily_ptr;
class TaggedRef;
typedef TaggedRef* TaggedRef_ptr;
class TaggedValue;
typedef TaggedValue* TaggedValue_ptr;


// Structural features
struct KDMFramework__audit_tag;
struct KDMFramework__extensionFamily_tag;
struct KDMFramework__name_tag;
struct Audit__description_tag;
struct Audit__author_tag;
struct Audit__date_tag;
struct Segment__segment_tag;
struct Segment__model_tag;
struct Attribute__tag_tag;
struct Attribute__value_tag;
struct Annotation__text_tag;
struct TagDefinition__tag_tag;
struct TagDefinition__type_tag;
struct ExtendedValue__tag_tag;
struct Stereotype__tag_tag;
struct Stereotype__name_tag;
struct Stereotype__type_tag;
struct ExtensionFamily__stereotype_tag;
struct ExtensionFamily__name_tag;
struct TaggedRef__reference_tag;
struct TaggedValue__value_tag;


} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_FWD_HPP
