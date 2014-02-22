
#include "MethodUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::MethodUnit include) START*/
/*PROTECTED REGION END*/

MethodUnit::MethodUnit() :
    m_kind(),
    m_export_()
{
    /*PROTECTED REGION ID(MethodUnit constructor) START*/
    /*PROTECTED REGION END*/
}

MethodUnit::~MethodUnit()
{
    /*PROTECTED REGION ID(MethodUnit destructor) START*/
    /*PROTECTED REGION END*/
}

void MethodUnit::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

MethodUnit::kind_t MethodUnit::getKind() const
{
    return m_kind;
}

void MethodUnit::setExport_(export__t _export_)
{
    m_export_ = _export_;;
}

MethodUnit::export__t MethodUnit::getExport_() const
{
    return m_export_;
}



/*PROTECTED REGION ID(kdm::code::MethodUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MethodUnit::eClassImpl() const
{
    return CodePackage::_instance()->getMethodUnit();
}

