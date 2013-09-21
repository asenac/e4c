
#include "Model.hpp"
#include <myDsl/Import.hpp>
#include <myDsl/Type.hpp>

using namespace myDsl;

Model::Model() : 
	m_imports(),
    m_elements()
{
}

Model::~Model()
{
}

Model::imports_t Model::getImports() const
{
	return e4c::returned(m_imports);
}

Model::elements_t Model::getElements() const
{
	return e4c::returned(m_elements);
}



