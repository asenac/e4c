
#include "XMLSchema.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::XMLSchema include) START*/
/*PROTECTED REGION END*/

XMLSchema::XMLSchema() :
    m_contentElement()
{
    /*PROTECTED REGION ID(XMLSchema constructor) START*/
    /*PROTECTED REGION END*/
}

XMLSchema::~XMLSchema()
{
    /*PROTECTED REGION ID(XMLSchema destructor) START*/
    /*PROTECTED REGION END*/
}

XMLSchema::contentElement_t XMLSchema::getContentElement() const
{
    return e4c::returned(m_contentElement);
}


void XMLSchema::addContentElement(kdm::data::AbstractContentElement_ptr contentElement_)
{
    m_contentElement.insert(std::unique_ptr < kdm::data::AbstractContentElement >(contentElement_));
}

void XMLSchema::addAllContentElement(const contentElement_t& contentElement_)
{
    for (auto i = contentElement_.begin(); i != contentElement_.end(); i++)
        addContentElement(*i);
}



/*PROTECTED REGION ID(kdm::data::XMLSchema implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr XMLSchema::eClassImpl() const
{
    return DataPackage::_instance()->getXMLSchema();
}

