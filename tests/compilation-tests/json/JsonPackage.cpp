#include "JsonPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace json;

JsonPackage::JsonPackage()
{
}

JsonPackage_ptr JsonPackage::_instance()
{
	static JsonPackage __instance;
	return &__instance;
}

e4c::tag_t JsonPackage::getTag_ObjectValue()
{
	return e4c::tag< ObjectValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NVPair()
{
	return e4c::tag< NVPair >::get();
}
 
e4c::tag_t JsonPackage::getTag_Value()
{
	return e4c::tag< Value >::get();
}
 
e4c::tag_t JsonPackage::getTag_StringValue()
{
	return e4c::tag< StringValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NumberValue()
{
	return e4c::tag< NumberValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_BooleanValue()
{
	return e4c::tag< BooleanValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ArrayValue()
{
	return e4c::tag< ArrayValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NullValue()
{
	return e4c::tag< NullValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ObjectValue__members()
{
	return e4c::tag< ObjectValue__members_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__name()
{
	return e4c::tag< NVPair__name_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__value()
{
	return e4c::tag< NVPair__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_StringValue__value()
{
	return e4c::tag< StringValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NumberValue__value()
{
	return e4c::tag< NumberValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_BooleanValue__value()
{
	return e4c::tag< BooleanValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_ArrayValue__values()
{
	return e4c::tag< ArrayValue__values_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_json()
{
	return ::json::JsonPackage::_instance();
}
