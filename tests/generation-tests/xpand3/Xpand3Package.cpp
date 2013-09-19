#include "Xpand3Package.hpp"
#include "Xpand3Factory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3;

Xpand3Package::Xpand3Package()
{
	m_eFactoryInstance = Xpand3Factory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
