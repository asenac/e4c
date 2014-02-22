
#include "Audit.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::Audit include) START*/
/*PROTECTED REGION END*/

Audit::Audit() :
    m_description(),
    m_author(),
    m_date()
{
    /*PROTECTED REGION ID(Audit constructor) START*/
    /*PROTECTED REGION END*/
}

Audit::~Audit()
{
    /*PROTECTED REGION ID(Audit destructor) START*/
    /*PROTECTED REGION END*/
}

void Audit::setDescription(description_t _description)
{
    m_description = _description;;
}

Audit::description_t Audit::getDescription() const
{
    return m_description;
}

void Audit::setAuthor(author_t _author)
{
    m_author = _author;;
}

Audit::author_t Audit::getAuthor() const
{
    return m_author;
}

void Audit::setDate(date_t _date)
{
    m_date = _date;;
}

Audit::date_t Audit::getDate() const
{
    return m_date;
}



/*PROTECTED REGION ID(kdm::kdm::Audit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Audit::eClassImpl() const
{
    return KdmPackage::_instance()->getAudit();
}

