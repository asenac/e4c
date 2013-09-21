
#include "StructureModel.hpp"
#include <kdm/structure/AbstractStructureElement.hpp>

using namespace kdm::structure;

StructureModel::StructureModel() : 
	m_structureElement()
{
}

StructureModel::~StructureModel()
{
}

StructureModel::structureElement_t StructureModel::getStructureElement() const
{
	return e4c::returned(m_structureElement);
}



