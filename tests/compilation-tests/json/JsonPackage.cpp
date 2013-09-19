#include "JsonPackage.hpp"
#include "JsonFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace json;

JsonPackage::JsonPackage()
{
	m_eFactoryInstance = JsonFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const JsonPackage_ptr JsonPackage::_instance()
{
	static JsonPackage __instance;
	return &__instance;
}

e4c::tag_t JsonPackage::getTag_ObjectValue() const
{
	return e4c::tag< ObjectValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NVPair() const
{
	return e4c::tag< NVPair >::get();
}
 
e4c::tag_t JsonPackage::getTag_Value() const
{
	return e4c::tag< Value >::get();
}
 
e4c::tag_t JsonPackage::getTag_StringValue() const
{
	return e4c::tag< StringValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NumberValue() const
{
	return e4c::tag< NumberValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_BooleanValue() const
{
	return e4c::tag< BooleanValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ArrayValue() const
{
	return e4c::tag< ArrayValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NullValue() const
{
	return e4c::tag< NullValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ObjectValue__members() const
{
	return e4c::tag< ObjectValue__members_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__name() const
{
	return e4c::tag< NVPair__name_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__value() const
{
	return e4c::tag< NVPair__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_StringValue__value() const
{
	return e4c::tag< StringValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NumberValue__value() const
{
	return e4c::tag< NumberValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_BooleanValue__value() const
{
	return e4c::tag< BooleanValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_ArrayValue__values() const
{
	return e4c::tag< ArrayValue__values_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_json()
{
	return ::json::JsonPackage::_instance();
}
