
#include "CStructureContents.hpp"
#include <C/CStructured.hpp>

using namespace C;

CStructureContents::CStructureContents() : 
	m_sc_container()
{
}

CStructureContents::~CStructureContents()
{
}

CStructureContents::sc_container_t CStructureContents::getSc_container() const
{
	return e4c::returned(m_sc_container);
}



