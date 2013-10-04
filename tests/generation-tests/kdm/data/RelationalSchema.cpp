
#include "RelationalSchema.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::RelationalSchema include) START*/
/*PROTECTED REGION END*/

RelationalSchema::RelationalSchema() : 
	m_codeElement()
{
	/*PROTECTED REGION ID(RelationalSchema constructor) START*/
	/*PROTECTED REGION END*/
}

RelationalSchema::~RelationalSchema()
{
	/*PROTECTED REGION ID(RelationalSchema destructor) START*/
	/*PROTECTED REGION END*/
}

RelationalSchema::codeElement_t RelationalSchema::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void RelationalSchema::addCodeElement(kdm::code::CodeItem_ptr codeElement_)
{
	m_codeElement.insert(std::unique_ptr < kdm::code::CodeItem >(codeElement_));
}

void RelationalSchema::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::data::RelationalSchema implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RelationalSchema::eClassImpl() const
{
	return DataPackage::_instance()->getRelationalSchema();
}
 
