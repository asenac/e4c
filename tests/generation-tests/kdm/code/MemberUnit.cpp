
#include "MemberUnit.hpp"

using namespace kdm::code;

MemberUnit::MemberUnit() : 
	m_export_()
{
}

MemberUnit::~MemberUnit()
{
}

void MemberUnit::setExport_(export__t _export_)
{
	m_export_ = _export_;;
}

MemberUnit::export__t MemberUnit::getExport_() const
{
	return m_export_;
}



