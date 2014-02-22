
#include "DataEvent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataEvent include) START*/
/*PROTECTED REGION END*/

DataEvent::DataEvent() :
    m_kind()
{
    /*PROTECTED REGION ID(DataEvent constructor) START*/
    /*PROTECTED REGION END*/
}

DataEvent::~DataEvent()
{
    /*PROTECTED REGION ID(DataEvent destructor) START*/
    /*PROTECTED REGION END*/
}

void DataEvent::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

DataEvent::kind_t DataEvent::getKind() const
{
    return m_kind;
}



/*PROTECTED REGION ID(kdm::data::DataEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataEvent::eClassImpl() const
{
    return DataPackage::_instance()->getDataEvent();
}

