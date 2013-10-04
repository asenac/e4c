
#include "ExtendedValue.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/TagDefinition.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::ExtendedValue include) START*/
/*PROTECTED REGION END*/

ExtendedValue::ExtendedValue() : 
	m_tag()
{
	/*PROTECTED REGION ID(ExtendedValue constructor) START*/
	/*PROTECTED REGION END*/
}

ExtendedValue::~ExtendedValue()
{
	/*PROTECTED REGION ID(ExtendedValue destructor) START*/
	/*PROTECTED REGION END*/
}

ExtendedValue::tag_t ExtendedValue::getTag() const
{
	return e4c::returned(m_tag);
}

void ExtendedValue::setTag(tag_t tag_)
{
	if (m_tag == tag_)
		return;
	m_tag = tag_;
}



/*PROTECTED REGION ID(kdm::kdm::ExtendedValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExtendedValue::eClassImpl() const
{
	return KdmPackage::_instance()->getExtendedValue();
}
 
