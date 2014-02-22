
#include "GroupingElement.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::GroupingElement include) START*/
/*PROTECTED REGION END*/

GroupingElement::GroupingElement() :
    m_groupContent()
{
    /*PROTECTED REGION ID(GroupingElement constructor) START*/
    /*PROTECTED REGION END*/
}

GroupingElement::~GroupingElement()
{
    /*PROTECTED REGION ID(GroupingElement destructor) START*/
    /*PROTECTED REGION END*/
}

GroupingElement::groupContent_t GroupingElement::getGroupContent() const
{
    return e4c::returned(m_groupContent);
}


void GroupingElement::addGroupContent(SVG::Element_ptr groupContent_)
{
    groupContent_->setGroup(this);
    m_groupContent.push_back(std::unique_ptr < SVG::Element >(groupContent_));
}

void GroupingElement::addAllGroupContent(const groupContent_t& groupContent_)
{
    for (auto i = groupContent_.begin(); i != groupContent_.end(); i++)
        addGroupContent(*i);
}



/*PROTECTED REGION ID(SVG::GroupingElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GroupingElement::eClassImpl() const
{
    return SVGPackage::_instance()->getGroupingElement();
}

