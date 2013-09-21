
#include "Property.hpp"
#include <emof/Class.hpp>
#include <emof/Property.hpp>

using namespace emof;

Property::Property() : 
	m_class(),
    m_default(),
    m_isComposite(),
    m_isDerived(),
    m_isId(),
    m_isReadOnly(),
    m_opposite()
{
}

Property::~Property()
{
}

Property::class_t Property::getClass() const
{
	return e4c::returned(m_class);
}

void Property::setDefault(default_t _default)
{
	m_default = _default;;
}

Property::default_t Property::getDefault() const
{
	return m_default;
}

void Property::setIsComposite(isComposite_t _isComposite)
{
	m_isComposite = _isComposite;;
}

Property::isComposite_t Property::getIsComposite() const
{
	return m_isComposite;
}

void Property::setIsDerived(isDerived_t _isDerived)
{
	m_isDerived = _isDerived;;
}

Property::isDerived_t Property::getIsDerived() const
{
	return m_isDerived;
}

void Property::setIsId(isId_t _isId)
{
	m_isId = _isId;;
}

Property::isId_t Property::getIsId() const
{
	return m_isId;
}

void Property::setIsReadOnly(isReadOnly_t _isReadOnly)
{
	m_isReadOnly = _isReadOnly;;
}

Property::isReadOnly_t Property::getIsReadOnly() const
{
	return m_isReadOnly;
}

Property::opposite_t Property::getOpposite() const
{
	return e4c::returned(m_opposite);
}



