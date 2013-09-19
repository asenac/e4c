#ifndef EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP
#define EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/declaration/fwd.hpp>

namespace xpand3
{
namespace declaration
{


class DeclarationPackage : public ::ecore::EPackage
{
public:
    static const DeclarationPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractDeclaration() const;
 	e4c::tag_t getTag_AbstractNamedDeclaration() const;
 	e4c::tag_t getTag_Definition() const;
 	e4c::tag_t getTag_Extension() const;
 	e4c::tag_t getTag_AbstractAspect() const;
 	e4c::tag_t getTag_ExtensionAspect() const;
 	e4c::tag_t getTag_DefinitionAspect() const;
 	e4c::tag_t getTag_Check() const;
 	e4c::tag_t getTag_CreateExtension() const;
 	e4c::tag_t getTag_JavaExtension() const;
 
 	// Structural features
 	e4c::tag_t getTag_AbstractDeclaration__owner() const;
 	e4c::tag_t getTag_AbstractDeclaration__params() const;
 	e4c::tag_t getTag_AbstractDeclaration__isPrivate() const;
 	e4c::tag_t getTag_AbstractDeclaration__guard() const;
 	e4c::tag_t getTag_AbstractNamedDeclaration__name() const;
 	e4c::tag_t getTag_Definition__body() const;
 	e4c::tag_t getTag_Extension__cached() const;
 	e4c::tag_t getTag_Extension__body() const;
 	e4c::tag_t getTag_Extension__returnType() const;
 	e4c::tag_t getTag_AbstractAspect__pointcut() const;
 	e4c::tag_t getTag_AbstractAspect__wildparams() const;
 	e4c::tag_t getTag_ExtensionAspect__expression() const;
 	e4c::tag_t getTag_DefinitionAspect__body() const;
 	e4c::tag_t getTag_Check__errorSeverity() const;
 	e4c::tag_t getTag_Check__msg() const;
 	e4c::tag_t getTag_Check__constraint() const;
 	e4c::tag_t getTag_Check__feature() const;
 	e4c::tag_t getTag_CreateExtension__toBeCreated() const;
 	e4c::tag_t getTag_JavaExtension__javaType() const;
 	e4c::tag_t getTag_JavaExtension__javaMethod() const;
 	e4c::tag_t getTag_JavaExtension__javaParamTypes() const;

protected:
    DeclarationPackage();
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP
