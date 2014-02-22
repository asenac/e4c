
#include "StructureModel.hpp"
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::StructureModel include) START*/
/*PROTECTED REGION END*/

StructureModel::StructureModel() :
    m_structureElement()
{
    /*PROTECTED REGION ID(StructureModel constructor) START*/
    /*PROTECTED REGION END*/
}

StructureModel::~StructureModel()
{
    /*PROTECTED REGION ID(StructureModel destructor) START*/
    /*PROTECTED REGION END*/
}

StructureModel::structureElement_t StructureModel::getStructureElement() const
{
    return e4c::returned(m_structureElement);
}


void StructureModel::addStructureElement(kdm::structure::AbstractStructureElement_ptr structureElement_)
{
    m_structureElement.insert(std::unique_ptr < kdm::structure::AbstractStructureElement >(structureElement_));
}

void StructureModel::addAllStructureElement(const structureElement_t& structureElement_)
{
    for (auto i = structureElement_.begin(); i != structureElement_.end(); i++)
        addStructureElement(*i);
}



/*PROTECTED REGION ID(kdm::structure::StructureModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StructureModel::eClassImpl() const
{
    return StructurePackage::_instance()->getStructureModel();
}

