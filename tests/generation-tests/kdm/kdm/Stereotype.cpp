
#include "Stereotype.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/TagDefinition.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::Stereotype include) START*/
/*PROTECTED REGION END*/

Stereotype::Stereotype() : 
	m_tag(),
    m_name(),
    m_type()
{
	/*PROTECTED REGION ID(Stereotype constructor) START*/
	/*PROTECTED REGION END*/
}

Stereotype::~Stereotype()
{
	/*PROTECTED REGION ID(Stereotype destructor) START*/
	/*PROTECTED REGION END*/
}

Stereotype::tag_t Stereotype::getTag() const
{
	return e4c::returned(m_tag);
}


void Stereotype::addTag(kdm::kdm::TagDefinition_ptr tag_)
{
	m_tag.insert(std::unique_ptr < kdm::kdm::TagDefinition >(tag_));
}

void Stereotype::addAllTag(const tag_t& tag_)
{
	for (auto i = tag_.begin(); i != tag_.end(); i++)
		addTag(*i);
}

void Stereotype::setName(name_t _name)
{
	m_name = _name;;
}

Stereotype::name_t Stereotype::getName() const
{
	return m_name;
}

void Stereotype::setType(type_t _type)
{
	m_type = _type;;
}

Stereotype::type_t Stereotype::getType() const
{
	return m_type;
}



/*PROTECTED REGION ID(kdm::kdm::Stereotype implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Stereotype::eClassImpl() const
{
	return KdmPackage::_instance()->getStereotype();
}
 
