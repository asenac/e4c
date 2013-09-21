
#include "Element.hpp"
#include <emof/Comment.hpp>
#include <emof/Tag.hpp>

using namespace emof;

Element::Element() : 
	m_ownedComment(),
    m_tag()
{
}

Element::~Element()
{
}

Element::ownedComment_t Element::getOwnedComment() const
{
	return e4c::returned(m_ownedComment);
}

Element::tag_t Element::getTag() const
{
	return e4c::returned(m_tag);
}



