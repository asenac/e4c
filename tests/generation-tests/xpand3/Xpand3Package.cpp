#include "Xpand3Package.hpp"
#include "Xpand3Factory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3;

Xpand3Package::Xpand3Package()
{
	m_eFactoryInstance = Xpand3Factory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr SyntaxElement_ = ecoreFactory->createEClass();
	SyntaxElement_->setName("SyntaxElement");
	// m_eClassifiers.push_back(SyntaxElement_);
	::ecore::EClass_ptr File_ = ecoreFactory->createEClass();
	File_->setName("File");
	// m_eClassifiers.push_back(File_);
	::ecore::EClass_ptr ImportStatement_ = ecoreFactory->createEClass();
	ImportStatement_->setName("ImportStatement");
	// m_eClassifiers.push_back(ImportStatement_);
	::ecore::EClass_ptr Identifier_ = ecoreFactory->createEClass();
	Identifier_->setName("Identifier");
	// m_eClassifiers.push_back(Identifier_);
	::ecore::EClass_ptr DeclaredParameter_ = ecoreFactory->createEClass();
	DeclaredParameter_->setName("DeclaredParameter");
	// m_eClassifiers.push_back(DeclaredParameter_);
	
	
	// File_->addESuperType(SyntaxElement_);
	// ImportStatement_->addESuperType(SyntaxElement_);
	// Identifier_->addESuperType(SyntaxElement_);
	// DeclaredParameter_->addESuperType(SyntaxElement_);
	
	
	
	
}

const Xpand3Package_ptr Xpand3Package::_instance()
{
	static Xpand3Package __instance;
	return &__instance;
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement() const
{
	return e4c::tag< SyntaxElement >::get();
}
 
e4c::tag_t Xpand3Package::getTag_File() const
{
	return e4c::tag< File >::get();
}
 
e4c::tag_t Xpand3Package::getTag_ImportStatement() const
{
	return e4c::tag< ImportStatement >::get();
}
 
e4c::tag_t Xpand3Package::getTag_Identifier() const
{
	return e4c::tag< Identifier >::get();
}
 
e4c::tag_t Xpand3Package::getTag_DeclaredParameter() const
{
	return e4c::tag< DeclaredParameter >::get();
}
 
e4c::tag_t Xpand3Package::getTag_SyntaxElement__line() const
{
	return e4c::tag< SyntaxElement__line_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__start() const
{
	return e4c::tag< SyntaxElement__start_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__end() const
{
	return e4c::tag< SyntaxElement__end_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__fileName() const
{
	return e4c::tag< SyntaxElement__fileName_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_File__imports() const
{
	return e4c::tag< File__imports_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_File__declarations() const
{
	return e4c::tag< File__declarations_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_ImportStatement__importedId() const
{
	return e4c::tag< ImportStatement__importedId_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_ImportStatement__exported() const
{
	return e4c::tag< ImportStatement__exported_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_Identifier__value() const
{
	return e4c::tag< Identifier__value_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_DeclaredParameter__name() const
{
	return e4c::tag< DeclaredParameter__name_tag >::get();
}

e4c::tag_t Xpand3Package::getTag_DeclaredParameter__type() const
{
	return e4c::tag< DeclaredParameter__type_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3()
{
	return ::xpand3::Xpand3Package::_instance();
}
