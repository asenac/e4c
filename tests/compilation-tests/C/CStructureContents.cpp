
#include "CStructureContents.hpp"
#include <C/CPackage.hpp>
#include <C/CStructured.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CStructureContents include) START*/
/*PROTECTED REGION END*/

CStructureContents::CStructureContents() :
    m_sc_container()
{
    /*PROTECTED REGION ID(CStructureContents constructor) START*/
    /*PROTECTED REGION END*/
}

CStructureContents::~CStructureContents()
{
    /*PROTECTED REGION ID(CStructureContents destructor) START*/
    /*PROTECTED REGION END*/
}

CStructureContents::sc_container_t CStructureContents::getSc_container() const
{
    return e4c::returned(m_sc_container);
}

void CStructureContents::setSc_container(sc_container_t sc_container_)
{
    m_sc_container = sc_container_;
}



/*PROTECTED REGION ID(C::CStructureContents implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CStructureContents::eClassImpl() const
{
    return CPackage::_instance()->getCStructureContents();
}

