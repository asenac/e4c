
#include "Makefile.hpp"
#include <Make/MakePackage.hpp>
#include <Make/Comment.hpp>
#include <Make/Element.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Makefile include) START*/
/*PROTECTED REGION END*/

Makefile::Makefile() : 
	m_name(),
    m_comment(),
    m_elements()
{
	/*PROTECTED REGION ID(Makefile constructor) START*/
	/*PROTECTED REGION END*/
}

Makefile::~Makefile()
{
	/*PROTECTED REGION ID(Makefile destructor) START*/
	/*PROTECTED REGION END*/
}

void Makefile::setName(name_t _name)
{
	m_name = _name;;
}

Makefile::name_t Makefile::getName() const
{
	return m_name;
}

Makefile::comment_t Makefile::getComment() const
{
	return e4c::returned(m_comment);
}


void Makefile::setComment(comment_t comment_)
{
	m_comment.reset(comment_);
}

Makefile::comment_t Makefile::releaseComment()
{
	return m_comment.release();
}

Makefile::elements_t Makefile::getElements() const
{
	return e4c::returned(m_elements);
}


void Makefile::addElements(Make::Element_ptr elements_)
{
	m_elements.push_back(std::unique_ptr < Make::Element >(elements_));
}

void Makefile::addAllElements(const elements_t& elements_)
{
	for (auto i = elements_.begin(); i != elements_.end(); i++)
		addElements(*i);
}



/*PROTECTED REGION ID(Make::Makefile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Makefile::eClassImpl() const
{
	return MakePackage::_instance()->getMakefile();
}
 
