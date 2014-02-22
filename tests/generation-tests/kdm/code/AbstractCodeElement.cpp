
#include "AbstractCodeElement.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::AbstractCodeElement include) START*/
/*PROTECTED REGION END*/

AbstractCodeElement::AbstractCodeElement() :
    m_source(),
    m_comment(),
    m_codeRelation()
{
    /*PROTECTED REGION ID(AbstractCodeElement constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractCodeElement::~AbstractCodeElement()
{
    /*PROTECTED REGION ID(AbstractCodeElement destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractCodeElement::source_t AbstractCodeElement::getSource() const
{
    return e4c::returned(m_source);
}


void AbstractCodeElement::addSource(kdm::source::SourceRef_ptr source_)
{
    m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractCodeElement::addAllSource(const source_t& source_)
{
    for (auto i = source_.begin(); i != source_.end(); i++)
        addSource(*i);
}

AbstractCodeElement::comment_t AbstractCodeElement::getComment() const
{
    return e4c::returned(m_comment);
}


void AbstractCodeElement::addComment(kdm::code::CommentUnit_ptr comment_)
{
    m_comment.insert(std::unique_ptr < kdm::code::CommentUnit >(comment_));
}

void AbstractCodeElement::addAllComment(const comment_t& comment_)
{
    for (auto i = comment_.begin(); i != comment_.end(); i++)
        addComment(*i);
}

AbstractCodeElement::codeRelation_t AbstractCodeElement::getCodeRelation() const
{
    return e4c::returned(m_codeRelation);
}


void AbstractCodeElement::addCodeRelation(kdm::code::AbstractCodeRelationship_ptr codeRelation_)
{
    m_codeRelation.insert(std::unique_ptr < kdm::code::AbstractCodeRelationship >(codeRelation_));
}

void AbstractCodeElement::addAllCodeRelation(const codeRelation_t& codeRelation_)
{
    for (auto i = codeRelation_.begin(); i != codeRelation_.end(); i++)
        addCodeRelation(*i);
}



/*PROTECTED REGION ID(kdm::code::AbstractCodeElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractCodeElement::eClassImpl() const
{
    return CodePackage::_instance()->getAbstractCodeElement();
}

