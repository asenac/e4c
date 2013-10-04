
#include "ObjectValue.hpp"
#include <json/JsonPackage.hpp>
#include <json/NVPair.hpp>

using namespace json;

/*PROTECTED REGION ID(json::ObjectValue include) START*/
/*PROTECTED REGION END*/

ObjectValue::ObjectValue() : 
	m_members()
{
	/*PROTECTED REGION ID(ObjectValue constructor) START*/
	/*PROTECTED REGION END*/
}

ObjectValue::~ObjectValue()
{
	/*PROTECTED REGION ID(ObjectValue destructor) START*/
	/*PROTECTED REGION END*/
}

ObjectValue::members_t ObjectValue::getMembers() const
{
	return e4c::returned(m_members);
}


void ObjectValue::addMembers(json::NVPair_ptr members_)
{
	m_members.push_back(std::unique_ptr < json::NVPair >(members_));
}

void ObjectValue::addAllMembers(const members_t& members_)
{
	for (auto i = members_.begin(); i != members_.end(); i++)
		addMembers(*i);
}



/*PROTECTED REGION ID(json::ObjectValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ObjectValue::eClassImpl() const
{
	return JsonPackage::_instance()->getObjectValue();
}
 
