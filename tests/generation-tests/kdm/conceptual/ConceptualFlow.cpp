
#include "ConceptualFlow.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualFlow include) START*/
/*PROTECTED REGION END*/

ConceptualFlow::ConceptualFlow() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ConceptualFlow constructor) START*/
    /*PROTECTED REGION END*/
}

ConceptualFlow::~ConceptualFlow()
{
    /*PROTECTED REGION ID(ConceptualFlow destructor) START*/
    /*PROTECTED REGION END*/
}

ConceptualFlow::to_t ConceptualFlow::getTo() const
{
    return e4c::returned(m_to);
}

void ConceptualFlow::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ConceptualFlow::from_t ConceptualFlow::getFrom() const
{
    return e4c::returned(m_from);
}

void ConceptualFlow::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualFlow::eClassImpl() const
{
    return ConceptualPackage::_instance()->getConceptualFlow();
}

