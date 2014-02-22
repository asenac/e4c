
#include "MemberUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::MemberUnit include) START*/
/*PROTECTED REGION END*/

MemberUnit::MemberUnit() :
    m_export_()
{
    /*PROTECTED REGION ID(MemberUnit constructor) START*/
    /*PROTECTED REGION END*/
}

MemberUnit::~MemberUnit()
{
    /*PROTECTED REGION ID(MemberUnit destructor) START*/
    /*PROTECTED REGION END*/
}

void MemberUnit::setExport_(export__t _export_)
{
    m_export_ = _export_;;
}

MemberUnit::export__t MemberUnit::getExport_() const
{
    return m_export_;
}



/*PROTECTED REGION ID(kdm::code::MemberUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MemberUnit::eClassImpl() const
{
    return CodePackage::_instance()->getMemberUnit();
}

