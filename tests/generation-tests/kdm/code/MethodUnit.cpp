
#include "MethodUnit.hpp"

using namespace kdm::code;

MethodUnit::MethodUnit() : 
	m_kind(),
    m_export_()
{
}

MethodUnit::~MethodUnit()
{
}

void MethodUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t MethodUnit::getKind() const
{
	return m_kind;
}

void MethodUnit::setExport_(export__t _export_)
{
	m_export_ = _export_;;
}

export__t MethodUnit::getExport_() const
{
	return m_export_;
}



