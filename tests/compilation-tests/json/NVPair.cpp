
#include "NVPair.hpp"
#include <json/JsonPackage.hpp>
#include <json/Value.hpp>

using namespace json;

/*PROTECTED REGION ID(json::NVPair include) START*/
/*PROTECTED REGION END*/

NVPair::NVPair() :
    m_name(),
    m_value()
{
    /*PROTECTED REGION ID(NVPair constructor) START*/
    /*PROTECTED REGION END*/
}

NVPair::~NVPair()
{
    /*PROTECTED REGION ID(NVPair destructor) START*/
    /*PROTECTED REGION END*/
}

void NVPair::setName(name_t _name)
{
    m_name = _name;;
}

NVPair::name_t NVPair::getName() const
{
    return m_name;
}

NVPair::value_t NVPair::getValue() const
{
    return e4c::returned(m_value);
}


void NVPair::setValue(value_t value_)
{
    m_value.reset(value_);
}

NVPair::value_t NVPair::releaseValue()
{
    return m_value.release();
}



/*PROTECTED REGION ID(json::NVPair implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NVPair::eClassImpl() const
{
    return JsonPackage::_instance()->getNVPair();
}

