
#include "ParameterUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ParameterUnit include) START*/
/*PROTECTED REGION END*/

ParameterUnit::ParameterUnit() :
    m_kind(),
    m_pos()
{
    /*PROTECTED REGION ID(ParameterUnit constructor) START*/
    /*PROTECTED REGION END*/
}

ParameterUnit::~ParameterUnit()
{
    /*PROTECTED REGION ID(ParameterUnit destructor) START*/
    /*PROTECTED REGION END*/
}

void ParameterUnit::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

ParameterUnit::kind_t ParameterUnit::getKind() const
{
    return m_kind;
}

void ParameterUnit::setPos(pos_t _pos)
{
    m_pos = _pos;;
}

ParameterUnit::pos_t ParameterUnit::getPos() const
{
    return m_pos;
}



/*PROTECTED REGION ID(kdm::code::ParameterUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ParameterUnit::eClassImpl() const
{
    return CodePackage::_instance()->getParameterUnit();
}

