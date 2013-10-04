
#include "ExtensionTo.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ExtensionTo include) START*/
/*PROTECTED REGION END*/

ExtensionTo::ExtensionTo() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ExtensionTo constructor) START*/
	/*PROTECTED REGION END*/
}

ExtensionTo::~ExtensionTo()
{
	/*PROTECTED REGION ID(ExtensionTo destructor) START*/
	/*PROTECTED REGION END*/
}

ExtensionTo::to_t ExtensionTo::getTo() const
{
	return e4c::returned(m_to);
}

void ExtensionTo::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ExtensionTo::from_t ExtensionTo::getFrom() const
{
	return e4c::returned(m_from);
}

void ExtensionTo::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::ExtensionTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExtensionTo::eClassImpl() const
{
	return DataPackage::_instance()->getExtensionTo();
}
 
