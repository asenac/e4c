#include "PrimitiveTypesPackage.hpp"
#include "PrimitiveTypesFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace PrimitiveTypes;

PrimitiveTypesPackage::PrimitiveTypesPackage()
{
	m_eFactoryInstance = PrimitiveTypesFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const PrimitiveTypesPackage_ptr PrimitiveTypesPackage::_instance()
{
	static PrimitiveTypesPackage __instance;
	return &__instance;
}

e4c::tag_t PrimitiveTypesPackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Double() const
{
	return e4c::tag< Double >::get();
}
 

extern "C" ::ecore::EPackage_ptr e4c_PrimitiveTypes()
{
	return ::PrimitiveTypes::PrimitiveTypesPackage::_instance();
}
