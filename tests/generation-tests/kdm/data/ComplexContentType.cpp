
#include "ComplexContentType.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ComplexContentType include) START*/
/*PROTECTED REGION END*/

ComplexContentType::ComplexContentType() : 
	m_contentElement()
{
	/*PROTECTED REGION ID(ComplexContentType constructor) START*/
	/*PROTECTED REGION END*/
}

ComplexContentType::~ComplexContentType()
{
	/*PROTECTED REGION ID(ComplexContentType destructor) START*/
	/*PROTECTED REGION END*/
}

ComplexContentType::contentElement_t ComplexContentType::getContentElement() const
{
	return e4c::returned(m_contentElement);
}


void ComplexContentType::addContentElement(kdm::data::AbstractContentElement_ptr contentElement_)
{
	m_contentElement.push_back(std::unique_ptr < kdm::data::AbstractContentElement >(contentElement_));
}

void ComplexContentType::addAllContentElement(const contentElement_t& contentElement_)
{
	for (auto i = contentElement_.begin(); i != contentElement_.end(); i++)
		addContentElement(*i);
}



/*PROTECTED REGION ID(kdm::data::ComplexContentType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ComplexContentType::eClassImpl() const
{
	return DataPackage::_instance()->getComplexContentType();
}
 
