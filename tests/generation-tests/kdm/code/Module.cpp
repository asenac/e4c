
#include "Module.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Module include) START*/
/*PROTECTED REGION END*/

Module::Module() : 
	m_codeElement()
{
	/*PROTECTED REGION ID(Module constructor) START*/
	/*PROTECTED REGION END*/
}

Module::~Module()
{
	/*PROTECTED REGION ID(Module destructor) START*/
	/*PROTECTED REGION END*/
}

Module::codeElement_t Module::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void Module::addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_)
{
	m_codeElement.push_back(std::unique_ptr < kdm::code::AbstractCodeElement >(codeElement_));
}

void Module::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::Module implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Module::eClassImpl() const
{
	return CodePackage::_instance()->getModule();
}
 
