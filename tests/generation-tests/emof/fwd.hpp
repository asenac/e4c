#ifndef EMF_CPP_EMOF_FWD_HPP
#define EMF_CPP_EMOF_FWD_HPP


namespace emof
{


class EmofPackage;
typedef EmofPackage * EmofPackage_ptr;
class EmofFactory;
typedef EmofFactory * EmofFactory_ptr;

// Data types
typedef int Boolean;
typedef int Integer;
typedef int Real;
typedef int String;
typedef int UnlimitedNatural;


// Classes
class Class;
typedef Class* Class_ptr;
class Comment;
typedef Comment* Comment_ptr;
class DataType;
typedef DataType* DataType_ptr;
class Element;
typedef Element* Element_ptr;
class Enumeration;
typedef Enumeration* Enumeration_ptr;
class EnumerationLiteral;
typedef EnumerationLiteral* EnumerationLiteral_ptr;
class Extent;
typedef Extent* Extent_ptr;
class MultiplicityElement;
typedef MultiplicityElement* MultiplicityElement_ptr;
class NamedElement;
typedef NamedElement* NamedElement_ptr;
class Object;
typedef Object* Object_ptr;
class Operation;
typedef Operation* Operation_ptr;
class Package;
typedef Package* Package_ptr;
class Parameter;
typedef Parameter* Parameter_ptr;
class PrimitiveType;
typedef PrimitiveType* PrimitiveType_ptr;
class Property;
typedef Property* Property_ptr;
class Tag;
typedef Tag* Tag_ptr;
class Type;
typedef Type* Type_ptr;
class TypedElement;
typedef TypedElement* TypedElement_ptr;
class URIExtent;
typedef URIExtent* URIExtent_ptr;


// Structural features
struct Class__isAbstract_tag;
struct Class__ownedAttribute_tag;
struct Class__ownedOperation_tag;
struct Class__superClass_tag;
struct Comment__annotatedElement_tag;
struct Element__ownedComment_tag;
struct Element__tag_tag;
struct Enumeration__ownedLiteral_tag;
struct EnumerationLiteral__enumeration_tag;
struct MultiplicityElement__isOrdered_tag;
struct MultiplicityElement__isUnique_tag;
struct MultiplicityElement__lower_tag;
struct MultiplicityElement__upper_tag;
struct NamedElement__name_tag;
struct Operation__class_tag;
struct Operation__ownedParameter_tag;
struct Operation__raisedException_tag;
struct Package__nestedPackage_tag;
struct Package__ownedType_tag;
struct Package__uri_tag;
struct Parameter__operation_tag;
struct Property__class_tag;
struct Property__default_tag;
struct Property__isComposite_tag;
struct Property__isDerived_tag;
struct Property__isId_tag;
struct Property__isReadOnly_tag;
struct Property__opposite_tag;
struct Tag__element_tag;
struct Tag__name_tag;
struct Tag__value_tag;
struct Type__package_tag;
struct TypedElement__type_tag;


} // emof


#endif // EMF_CPP_EMOF_FWD_HPP
