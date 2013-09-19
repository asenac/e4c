
#include "Audit.hpp"

using namespace kdm::kdm;

Audit::Audit() : 
	m_description(),
    m_author(),
    m_date()
{
}

Audit::~Audit()
{
}

void Audit::setDescription(description_t _description)
{
	m_description = _description;;
}

description_t Audit::getDescription() const
{
	return m_description;
}

void Audit::setAuthor(author_t _author)
{
	m_author = _author;;
}

author_t Audit::getAuthor() const
{
	return m_author;
}

void Audit::setDate(date_t _date)
{
	m_date = _date;;
}

date_t Audit::getDate() const
{
	return m_date;
}



