
#include "StorableUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::StorableUnit include) START*/
/*PROTECTED REGION END*/

StorableUnit::StorableUnit() :
    m_kind()
{
    /*PROTECTED REGION ID(StorableUnit constructor) START*/
    /*PROTECTED REGION END*/
}

StorableUnit::~StorableUnit()
{
    /*PROTECTED REGION ID(StorableUnit destructor) START*/
    /*PROTECTED REGION END*/
}

void StorableUnit::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

StorableUnit::kind_t StorableUnit::getKind() const
{
    return m_kind;
}



/*PROTECTED REGION ID(kdm::code::StorableUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StorableUnit::eClassImpl() const
{
    return CodePackage::_instance()->getStorableUnit();
}

