
#include "TaggedValue.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::TaggedValue include) START*/
/*PROTECTED REGION END*/

TaggedValue::TaggedValue() : 
	m_value()
{
	/*PROTECTED REGION ID(TaggedValue constructor) START*/
	/*PROTECTED REGION END*/
}

TaggedValue::~TaggedValue()
{
	/*PROTECTED REGION ID(TaggedValue destructor) START*/
	/*PROTECTED REGION END*/
}

void TaggedValue::setValue(value_t _value)
{
	m_value = _value;;
}

TaggedValue::value_t TaggedValue::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(kdm::kdm::TaggedValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TaggedValue::eClassImpl() const
{
	return KdmPackage::_instance()->getTaggedValue();
}
 
