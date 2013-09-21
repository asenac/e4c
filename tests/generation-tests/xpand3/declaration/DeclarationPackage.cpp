#include "DeclarationPackage.hpp"
#include "DeclarationFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::declaration;

DeclarationPackage::DeclarationPackage()
{
	m_eFactoryInstance = DeclarationFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr AbstractDeclaration_ = ecoreFactory->createEClass();
	AbstractDeclaration_->setName("AbstractDeclaration");
	// m_eClassifiers.push_back(AbstractDeclaration_);
	::ecore::EClass_ptr AbstractNamedDeclaration_ = ecoreFactory->createEClass();
	AbstractNamedDeclaration_->setName("AbstractNamedDeclaration");
	// m_eClassifiers.push_back(AbstractNamedDeclaration_);
	::ecore::EClass_ptr Definition_ = ecoreFactory->createEClass();
	Definition_->setName("Definition");
	// m_eClassifiers.push_back(Definition_);
	::ecore::EClass_ptr Extension_ = ecoreFactory->createEClass();
	Extension_->setName("Extension");
	// m_eClassifiers.push_back(Extension_);
	::ecore::EClass_ptr AbstractAspect_ = ecoreFactory->createEClass();
	AbstractAspect_->setName("AbstractAspect");
	// m_eClassifiers.push_back(AbstractAspect_);
	::ecore::EClass_ptr ExtensionAspect_ = ecoreFactory->createEClass();
	ExtensionAspect_->setName("ExtensionAspect");
	// m_eClassifiers.push_back(ExtensionAspect_);
	::ecore::EClass_ptr DefinitionAspect_ = ecoreFactory->createEClass();
	DefinitionAspect_->setName("DefinitionAspect");
	// m_eClassifiers.push_back(DefinitionAspect_);
	::ecore::EClass_ptr Check_ = ecoreFactory->createEClass();
	Check_->setName("Check");
	// m_eClassifiers.push_back(Check_);
	::ecore::EClass_ptr CreateExtension_ = ecoreFactory->createEClass();
	CreateExtension_->setName("CreateExtension");
	// m_eClassifiers.push_back(CreateExtension_);
	::ecore::EClass_ptr JavaExtension_ = ecoreFactory->createEClass();
	JavaExtension_->setName("JavaExtension");
	// m_eClassifiers.push_back(JavaExtension_);
	
	
	// AbstractDeclaration_->addESuperType(SyntaxElement_);
	// AbstractNamedDeclaration_->addESuperType(AbstractDeclaration_);
	// Definition_->addESuperType(AbstractNamedDeclaration_);
	// Extension_->addESuperType(AbstractNamedDeclaration_);
	// AbstractAspect_->addESuperType(AbstractDeclaration_);
	// ExtensionAspect_->addESuperType(AbstractAspect_);
	// DefinitionAspect_->addESuperType(AbstractAspect_);
	// Check_->addESuperType(AbstractDeclaration_);
	// CreateExtension_->addESuperType(Extension_);
	// JavaExtension_->addESuperType(AbstractNamedDeclaration_);
	
	
	
	
}

const DeclarationPackage_ptr DeclarationPackage::_instance()
{
	static DeclarationPackage __instance;
	return &__instance;
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration() const
{
	return e4c::tag< AbstractDeclaration >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_AbstractNamedDeclaration() const
{
	return e4c::tag< AbstractNamedDeclaration >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_Definition() const
{
	return e4c::tag< Definition >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_Extension() const
{
	return e4c::tag< Extension >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_AbstractAspect() const
{
	return e4c::tag< AbstractAspect >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_ExtensionAspect() const
{
	return e4c::tag< ExtensionAspect >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_DefinitionAspect() const
{
	return e4c::tag< DefinitionAspect >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_Check() const
{
	return e4c::tag< Check >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_CreateExtension() const
{
	return e4c::tag< CreateExtension >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_JavaExtension() const
{
	return e4c::tag< JavaExtension >::get();
}
 
e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__owner() const
{
	return e4c::tag< AbstractDeclaration__owner_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__params() const
{
	return e4c::tag< AbstractDeclaration__params_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__isPrivate() const
{
	return e4c::tag< AbstractDeclaration__isPrivate_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractDeclaration__guard() const
{
	return e4c::tag< AbstractDeclaration__guard_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractNamedDeclaration__name() const
{
	return e4c::tag< AbstractNamedDeclaration__name_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Definition__body() const
{
	return e4c::tag< Definition__body_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Extension__cached() const
{
	return e4c::tag< Extension__cached_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Extension__body() const
{
	return e4c::tag< Extension__body_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Extension__returnType() const
{
	return e4c::tag< Extension__returnType_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractAspect__pointcut() const
{
	return e4c::tag< AbstractAspect__pointcut_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_AbstractAspect__wildparams() const
{
	return e4c::tag< AbstractAspect__wildparams_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_ExtensionAspect__expression() const
{
	return e4c::tag< ExtensionAspect__expression_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_DefinitionAspect__body() const
{
	return e4c::tag< DefinitionAspect__body_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Check__errorSeverity() const
{
	return e4c::tag< Check__errorSeverity_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Check__msg() const
{
	return e4c::tag< Check__msg_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Check__constraint() const
{
	return e4c::tag< Check__constraint_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_Check__feature() const
{
	return e4c::tag< Check__feature_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_CreateExtension__toBeCreated() const
{
	return e4c::tag< CreateExtension__toBeCreated_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaType() const
{
	return e4c::tag< JavaExtension__javaType_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaMethod() const
{
	return e4c::tag< JavaExtension__javaMethod_tag >::get();
}

e4c::tag_t DeclarationPackage::getTag_JavaExtension__javaParamTypes() const
{
	return e4c::tag< JavaExtension__javaParamTypes_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_declaration()
{
	return ::xpand3::declaration::DeclarationPackage::_instance();
}
