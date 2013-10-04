
#include "AbstractDataElement.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::AbstractDataElement include) START*/
/*PROTECTED REGION END*/

AbstractDataElement::AbstractDataElement() : 
	m_source(),
    m_dataRelation(),
    m_abstraction()
{
	/*PROTECTED REGION ID(AbstractDataElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractDataElement::~AbstractDataElement()
{
	/*PROTECTED REGION ID(AbstractDataElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractDataElement::source_t AbstractDataElement::getSource() const
{
	return e4c::returned(m_source);
}


void AbstractDataElement::addSource(kdm::source::SourceRef_ptr source_)
{
	m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractDataElement::addAllSource(const source_t& source_)
{
	for (auto i = source_.begin(); i != source_.end(); i++)
		addSource(*i);
}

AbstractDataElement::dataRelation_t AbstractDataElement::getDataRelation() const
{
	return e4c::returned(m_dataRelation);
}


void AbstractDataElement::addDataRelation(kdm::data::AbstractDataRelationship_ptr dataRelation_)
{
	m_dataRelation.insert(std::unique_ptr < kdm::data::AbstractDataRelationship >(dataRelation_));
}

void AbstractDataElement::addAllDataRelation(const dataRelation_t& dataRelation_)
{
	for (auto i = dataRelation_.begin(); i != dataRelation_.end(); i++)
		addDataRelation(*i);
}

AbstractDataElement::abstraction_t AbstractDataElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}


void AbstractDataElement::addAbstraction(kdm::action::ActionElement_ptr abstraction_)
{
	m_abstraction.push_back(std::unique_ptr < kdm::action::ActionElement >(abstraction_));
}

void AbstractDataElement::addAllAbstraction(const abstraction_t& abstraction_)
{
	for (auto i = abstraction_.begin(); i != abstraction_.end(); i++)
		addAbstraction(*i);
}



/*PROTECTED REGION ID(kdm::data::AbstractDataElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractDataElement::eClassImpl() const
{
	return DataPackage::_instance()->getAbstractDataElement();
}
 
