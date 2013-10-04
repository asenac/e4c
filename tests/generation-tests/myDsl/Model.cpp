
#include "Model.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Import.hpp>
#include <myDsl/Type.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::Model include) START*/
/*PROTECTED REGION END*/

Model::Model() : 
	m_imports(),
    m_elements()
{
	/*PROTECTED REGION ID(Model constructor) START*/
	/*PROTECTED REGION END*/
}

Model::~Model()
{
	/*PROTECTED REGION ID(Model destructor) START*/
	/*PROTECTED REGION END*/
}

Model::imports_t Model::getImports() const
{
	return e4c::returned(m_imports);
}


void Model::addImports(myDsl::Import_ptr imports_)
{
	m_imports.push_back(std::unique_ptr < myDsl::Import >(imports_));
}

void Model::addAllImports(const imports_t& imports_)
{
	for (auto i = imports_.begin(); i != imports_.end(); i++)
		addImports(*i);
}

Model::elements_t Model::getElements() const
{
	return e4c::returned(m_elements);
}


void Model::addElements(myDsl::Type_ptr elements_)
{
	m_elements.push_back(std::unique_ptr < myDsl::Type >(elements_));
}

void Model::addAllElements(const elements_t& elements_)
{
	for (auto i = elements_.begin(); i != elements_.end(); i++)
		addElements(*i);
}



/*PROTECTED REGION ID(myDsl::Model implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Model::eClassImpl() const
{
	return MyDslPackage::_instance()->getModel();
}
 
