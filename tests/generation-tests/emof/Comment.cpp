
#include "Comment.hpp"
#include <emof/NamedElement.hpp>

using namespace emof;

Comment::Comment() : 
	m_annotatedElement()
{
}

Comment::~Comment()
{
}

Comment::annotatedElement_t Comment::getAnnotatedElement() const
{
	return e4c::returned(m_annotatedElement);
}



