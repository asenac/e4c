
#include "IndexElement.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::IndexElement include) START*/
/*PROTECTED REGION END*/

IndexElement::IndexElement() : 
	m_implementation()
{
	/*PROTECTED REGION ID(IndexElement constructor) START*/
	/*PROTECTED REGION END*/
}

IndexElement::~IndexElement()
{
	/*PROTECTED REGION ID(IndexElement destructor) START*/
	/*PROTECTED REGION END*/
}

IndexElement::implementation_t IndexElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void IndexElement::addImplementation(kdm::code::ItemUnit_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void IndexElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}



/*PROTECTED REGION ID(kdm::data::IndexElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IndexElement::eClassImpl() const
{
	return DataPackage::_instance()->getIndexElement();
}
 
