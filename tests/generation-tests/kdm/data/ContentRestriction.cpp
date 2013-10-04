
#include "ContentRestriction.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ContentRestriction include) START*/
/*PROTECTED REGION END*/

ContentRestriction::ContentRestriction() : 
	m_kind(),
    m_value()
{
	/*PROTECTED REGION ID(ContentRestriction constructor) START*/
	/*PROTECTED REGION END*/
}

ContentRestriction::~ContentRestriction()
{
	/*PROTECTED REGION ID(ContentRestriction destructor) START*/
	/*PROTECTED REGION END*/
}

void ContentRestriction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

ContentRestriction::kind_t ContentRestriction::getKind() const
{
	return m_kind;
}

void ContentRestriction::setValue(value_t _value)
{
	m_value = _value;;
}

ContentRestriction::value_t ContentRestriction::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(kdm::data::ContentRestriction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ContentRestriction::eClassImpl() const
{
	return DataPackage::_instance()->getContentRestriction();
}
 
