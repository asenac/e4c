
#include "Comment.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/NamedElement.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Comment include) START*/
/*PROTECTED REGION END*/

Comment::Comment() :
    m_annotatedElement()
{
    /*PROTECTED REGION ID(Comment constructor) START*/
    /*PROTECTED REGION END*/
}

Comment::~Comment()
{
    /*PROTECTED REGION ID(Comment destructor) START*/
    /*PROTECTED REGION END*/
}

Comment::annotatedElement_t Comment::getAnnotatedElement() const
{
    return e4c::returned(m_annotatedElement);
}

void Comment::addAnnotatedElement(emof::NamedElement_ptr annotatedElement_)
{
    if (e4c::contains(m_annotatedElement, annotatedElement_))
        return;
    m_annotatedElement.insert(annotatedElement_);
}

void Comment::addAllAnnotatedElement(const annotatedElement_t& annotatedElement_)
{
    for (auto i = annotatedElement_.begin(); i != annotatedElement_.end(); i++)
        addAnnotatedElement(*i);
}



/*PROTECTED REGION ID(emof::Comment implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Comment::eClassImpl() const
{
    return EmofPackage::_instance()->getComment();
}

