#ifndef EMF_CPP_XPAND3_DECLARATION_FWD_HPP
#define EMF_CPP_XPAND3_DECLARATION_FWD_HPP


#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


class DeclarationPackage;
typedef DeclarationPackage * DeclarationPackage_ptr;
class DeclarationFactory;
typedef DeclarationFactory * DeclarationFactory_ptr;

// Data types


// Classes
class AbstractDeclaration;
typedef AbstractDeclaration* AbstractDeclaration_ptr;
class AbstractNamedDeclaration;
typedef AbstractNamedDeclaration* AbstractNamedDeclaration_ptr;
class Definition;
typedef Definition* Definition_ptr;
class Extension;
typedef Extension* Extension_ptr;
class AbstractAspect;
typedef AbstractAspect* AbstractAspect_ptr;
class ExtensionAspect;
typedef ExtensionAspect* ExtensionAspect_ptr;
class DefinitionAspect;
typedef DefinitionAspect* DefinitionAspect_ptr;
class Check;
typedef Check* Check_ptr;
class CreateExtension;
typedef CreateExtension* CreateExtension_ptr;
class JavaExtension;
typedef JavaExtension* JavaExtension_ptr;


// Structural features
struct AbstractDeclaration__owner_tag;
struct AbstractDeclaration__params_tag;
struct AbstractDeclaration__isPrivate_tag;
struct AbstractDeclaration__guard_tag;
struct AbstractNamedDeclaration__name_tag;
struct Definition__body_tag;
struct Extension__cached_tag;
struct Extension__body_tag;
struct Extension__returnType_tag;
struct AbstractAspect__pointcut_tag;
struct AbstractAspect__wildparams_tag;
struct ExtensionAspect__expression_tag;
struct DefinitionAspect__body_tag;
struct Check__errorSeverity_tag;
struct Check__msg_tag;
struct Check__constraint_tag;
struct Check__feature_tag;
struct CreateExtension__toBeCreated_tag;
struct JavaExtension__javaType_tag;
struct JavaExtension__javaMethod_tag;
struct JavaExtension__javaParamTypes_tag;


} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_FWD_HPP
