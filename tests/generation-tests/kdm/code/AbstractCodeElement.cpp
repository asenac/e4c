
#include "AbstractCodeElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

using namespace kdm::code;

AbstractCodeElement::AbstractCodeElement() : 
	m_source(),
    m_comment(),
    m_codeRelation()
{
}

AbstractCodeElement::~AbstractCodeElement()
{
}

AbstractCodeElement::source_t AbstractCodeElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractCodeElement::comment_t AbstractCodeElement::getComment() const
{
	return e4c::returned(m_comment);
}

AbstractCodeElement::codeRelation_t AbstractCodeElement::getCodeRelation() const
{
	return e4c::returned(m_codeRelation);
}



