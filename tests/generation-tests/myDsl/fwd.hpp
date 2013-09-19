#ifndef EMF_CPP_MYDSL_FWD_HPP
#define EMF_CPP_MYDSL_FWD_HPP


namespace myDsl
{


class MyDslPackage;
typedef MyDslPackage * MyDslPackage_ptr;
class MyDslFactory;
typedef MyDslFactory * MyDslFactory_ptr;

// Data types


// Classes
class Model;
typedef Model* Model_ptr;
class Import;
typedef Import* Import_ptr;
class Type;
typedef Type* Type_ptr;
class SimpleType;
typedef SimpleType* SimpleType_ptr;
class Entity;
typedef Entity* Entity_ptr;
class Property;
typedef Property* Property_ptr;


// Structural features
struct Model__imports_tag;
struct Model__elements_tag;
struct Import__importURI_tag;
struct Type__name_tag;
struct Entity__extends_tag;
struct Entity__properties_tag;
struct Property__name_tag;
struct Property__type_tag;
struct Property__many_tag;


} // myDsl


#endif // EMF_CPP_MYDSL_FWD_HPP
