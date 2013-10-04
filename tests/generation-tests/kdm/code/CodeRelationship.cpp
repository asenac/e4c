
#include "CodeRelationship.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CodeRelationship include) START*/
/*PROTECTED REGION END*/

CodeRelationship::CodeRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(CodeRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

CodeRelationship::~CodeRelationship()
{
	/*PROTECTED REGION ID(CodeRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

CodeRelationship::to_t CodeRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void CodeRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

CodeRelationship::from_t CodeRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void CodeRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::CodeRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CodeRelationship::eClassImpl() const
{
	return CodePackage::_instance()->getCodeRelationship();
}
 
