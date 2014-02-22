#ifndef EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP
#define EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/declaration/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace xpand3
{
namespace declaration
{


class DeclarationPackage : public ::ecore::EPackage
{
public:
    static const DeclarationPackage_ptr _instance();

     ::ecore::EClass_ptr getAbstractDeclaration() const;
     ::ecore::EClass_ptr getAbstractNamedDeclaration() const;
     ::ecore::EClass_ptr getDefinition() const;
     ::ecore::EClass_ptr getExtension() const;
     ::ecore::EClass_ptr getAbstractAspect() const;
     ::ecore::EClass_ptr getExtensionAspect() const;
     ::ecore::EClass_ptr getDefinitionAspect() const;
     ::ecore::EClass_ptr getCheck() const;
     ::ecore::EClass_ptr getCreateExtension() const;
     ::ecore::EClass_ptr getJavaExtension() const;

     ::ecore::EReference_ptr getAbstractDeclaration__owner() const;
     ::ecore::EReference_ptr getAbstractDeclaration__params() const;
     ::ecore::EAttribute_ptr getAbstractDeclaration__isPrivate() const;
     ::ecore::EReference_ptr getAbstractDeclaration__guard() const;
     ::ecore::EReference_ptr getAbstractNamedDeclaration__name() const;
     ::ecore::EReference_ptr getDefinition__body() const;
     ::ecore::EAttribute_ptr getExtension__cached() const;
     ::ecore::EReference_ptr getExtension__body() const;
     ::ecore::EReference_ptr getExtension__returnType() const;
     ::ecore::EReference_ptr getAbstractAspect__pointcut() const;
     ::ecore::EAttribute_ptr getAbstractAspect__wildparams() const;
     ::ecore::EReference_ptr getExtensionAspect__expression() const;
     ::ecore::EReference_ptr getDefinitionAspect__body() const;
     ::ecore::EAttribute_ptr getCheck__errorSeverity() const;
     ::ecore::EReference_ptr getCheck__msg() const;
     ::ecore::EReference_ptr getCheck__constraint() const;
     ::ecore::EAttribute_ptr getCheck__feature() const;
     ::ecore::EReference_ptr getCreateExtension__toBeCreated() const;
     ::ecore::EReference_ptr getJavaExtension__javaType() const;
     ::ecore::EReference_ptr getJavaExtension__javaMethod() const;
     ::ecore::EReference_ptr getJavaExtension__javaParamTypes() const;

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

     ::ecore::EClass_ptr m_AbstractDeclaration;
     ::ecore::EClass_ptr m_AbstractNamedDeclaration;
     ::ecore::EClass_ptr m_Definition;
     ::ecore::EClass_ptr m_Extension;
     ::ecore::EClass_ptr m_AbstractAspect;
     ::ecore::EClass_ptr m_ExtensionAspect;
     ::ecore::EClass_ptr m_DefinitionAspect;
     ::ecore::EClass_ptr m_Check;
     ::ecore::EClass_ptr m_CreateExtension;
     ::ecore::EClass_ptr m_JavaExtension;
     ::ecore::EReference_ptr m_AbstractDeclaration__owner;
     ::ecore::EReference_ptr m_AbstractDeclaration__params;
     ::ecore::EAttribute_ptr m_AbstractDeclaration__isPrivate;
     ::ecore::EReference_ptr m_AbstractDeclaration__guard;
     ::ecore::EReference_ptr m_AbstractNamedDeclaration__name;
     ::ecore::EReference_ptr m_Definition__body;
     ::ecore::EAttribute_ptr m_Extension__cached;
     ::ecore::EReference_ptr m_Extension__body;
     ::ecore::EReference_ptr m_Extension__returnType;
     ::ecore::EReference_ptr m_AbstractAspect__pointcut;
     ::ecore::EAttribute_ptr m_AbstractAspect__wildparams;
     ::ecore::EReference_ptr m_ExtensionAspect__expression;
     ::ecore::EReference_ptr m_DefinitionAspect__body;
     ::ecore::EAttribute_ptr m_Check__errorSeverity;
     ::ecore::EReference_ptr m_Check__msg;
     ::ecore::EReference_ptr m_Check__constraint;
     ::ecore::EAttribute_ptr m_Check__feature;
     ::ecore::EReference_ptr m_CreateExtension__toBeCreated;
     ::ecore::EReference_ptr m_JavaExtension__javaType;
     ::ecore::EReference_ptr m_JavaExtension__javaMethod;
     ::ecore::EReference_ptr m_JavaExtension__javaParamTypes;
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_PACKAGE_HPP
