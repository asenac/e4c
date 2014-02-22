
#include "TagDefinition.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::TagDefinition include) START*/
/*PROTECTED REGION END*/

TagDefinition::TagDefinition() :
    m_tag(),
    m_type()
{
    /*PROTECTED REGION ID(TagDefinition constructor) START*/
    /*PROTECTED REGION END*/
}

TagDefinition::~TagDefinition()
{
    /*PROTECTED REGION ID(TagDefinition destructor) START*/
    /*PROTECTED REGION END*/
}

void TagDefinition::setTag(tag_t _tag)
{
    m_tag = _tag;;
}

TagDefinition::tag_t TagDefinition::getTag() const
{
    return m_tag;
}

void TagDefinition::setType(type_t _type)
{
    m_type = _type;;
}

TagDefinition::type_t TagDefinition::getType() const
{
    return m_type;
}



/*PROTECTED REGION ID(kdm::kdm::TagDefinition implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TagDefinition::eClassImpl() const
{
    return KdmPackage::_instance()->getTagDefinition();
}

