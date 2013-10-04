
#include "SimpleContentType.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::SimpleContentType include) START*/
/*PROTECTED REGION END*/

SimpleContentType::SimpleContentType() : 
	m_type(),
    m_kind()
{
	/*PROTECTED REGION ID(SimpleContentType constructor) START*/
	/*PROTECTED REGION END*/
}

SimpleContentType::~SimpleContentType()
{
	/*PROTECTED REGION ID(SimpleContentType destructor) START*/
	/*PROTECTED REGION END*/
}

SimpleContentType::type_t SimpleContentType::getType() const
{
	return e4c::returned(m_type);
}

void SimpleContentType::addType(kdm::data::ComplexContentType_ptr type_)
{
	if (e4c::contains(m_type, type_))
		return;
	m_type.insert(type_);
}

void SimpleContentType::addAllType(const type_t& type_)
{
	for (auto i = type_.begin(); i != type_.end(); i++)
		addType(*i);
}

void SimpleContentType::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

SimpleContentType::kind_t SimpleContentType::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(kdm::data::SimpleContentType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SimpleContentType::eClassImpl() const
{
	return DataPackage::_instance()->getSimpleContentType();
}
 
