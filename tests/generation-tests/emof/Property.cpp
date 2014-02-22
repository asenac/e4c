
#include "Property.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Class.hpp>
#include <emof/Property.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Property include) START*/
/*PROTECTED REGION END*/

Property::Property() :
    m_class(),
    m_default(),
    m_isComposite(),
    m_isDerived(),
    m_isId(),
    m_isReadOnly(),
    m_opposite()
{
    /*PROTECTED REGION ID(Property constructor) START*/
    /*PROTECTED REGION END*/
}

Property::~Property()
{
    /*PROTECTED REGION ID(Property destructor) START*/
    /*PROTECTED REGION END*/
}

Property::class_t Property::getClass() const
{
    return e4c::returned(m_class);
}

void Property::setClass(class_t class_)
{
    m_class = class_;
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

void Property::setOpposite(opposite_t opposite_)
{
    if (m_opposite == opposite_)
        return;
    m_opposite = opposite_;
}



/*PROTECTED REGION ID(emof::Property implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Property::eClassImpl() const
{
    return EmofPackage::_instance()->getProperty();
}

