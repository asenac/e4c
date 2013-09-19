#include "DeclarationPackage.hpp"
#include "DeclarationFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::declaration;

DeclarationPackage::DeclarationPackage()
{
	m_eFactoryInstance = DeclarationFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
