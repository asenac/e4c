
#include "Element.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Comment.hpp>
#include <emof/Tag.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Element include) START*/
/*PROTECTED REGION END*/

Element::Element() :
    m_ownedComment(),
    m_tag()
{
    /*PROTECTED REGION ID(Element constructor) START*/
    /*PROTECTED REGION END*/
}

Element::~Element()
{
    /*PROTECTED REGION ID(Element destructor) START*/
    /*PROTECTED REGION END*/
}

Element::ownedComment_t Element::getOwnedComment() const
{
    return e4c::returned(m_ownedComment);
}


void Element::addOwnedComment(emof::Comment_ptr ownedComment_)
{
    m_ownedComment.insert(std::unique_ptr < emof::Comment >(ownedComment_));
}

void Element::addAllOwnedComment(const ownedComment_t& ownedComment_)
{
    for (auto i = ownedComment_.begin(); i != ownedComment_.end(); i++)
        addOwnedComment(*i);
}

Element::tag_t Element::getTag() const
{
    return e4c::returned(m_tag);
}

void Element::addTag(emof::Tag_ptr tag_)
{
    if (e4c::contains(m_tag, tag_))
        return;
    m_tag.insert(tag_);
    tag_->addElement(this);
}

void Element::addAllTag(const tag_t& tag_)
{
    for (auto i = tag_.begin(); i != tag_.end(); i++)
        addTag(*i);
}



/*PROTECTED REGION ID(emof::Element implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Element::eClassImpl() const
{
    return EmofPackage::_instance()->getElement();
}

