
#include "AbstractElement.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::AbstractElement include) START*/
/*PROTECTED REGION END*/

AbstractElement::AbstractElement() :
    m_cardinality()
{
    /*PROTECTED REGION ID(AbstractElement constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractElement::~AbstractElement()
{
    /*PROTECTED REGION ID(AbstractElement destructor) START*/
    /*PROTECTED REGION END*/
}

void AbstractElement::setCardinality(cardinality_t _cardinality)
{
    m_cardinality = _cardinality;;
}

AbstractElement::cardinality_t AbstractElement::getCardinality() const
{
    return m_cardinality;
}



/*PROTECTED REGION ID(xtext::AbstractElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractElement::eClassImpl() const
{
    return XtextPackage::_instance()->getAbstractElement();
}

