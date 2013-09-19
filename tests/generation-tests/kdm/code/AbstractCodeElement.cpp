
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



