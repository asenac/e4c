#include "PrimitiveTypesPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace PrimitiveTypes;

PrimitiveTypesPackage::PrimitiveTypesPackage()
{
}

PrimitiveTypesPackage_ptr PrimitiveTypesPackage::_instance()
{
	static PrimitiveTypesPackage __instance;
	return &__instance;
}

e4c::tag_t PrimitiveTypesPackage::getTag_Boolean()
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Integer()
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_String()
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Double()
{
	return e4c::tag< Double >::get();
}
 
extern "C" ::ecore::EPackage_ptr e4c_PrimitiveTypes()
{
	return ::PrimitiveTypes::PrimitiveTypesPackage::_instance();
}
