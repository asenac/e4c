
#include "Container.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Container include) START*/
/*PROTECTED REGION END*/

Container::Container() : 
	m_contains()
{
	/*PROTECTED REGION ID(Container constructor) START*/
	/*PROTECTED REGION END*/
}

Container::~Container()
{
	/*PROTECTED REGION ID(Container destructor) START*/
	/*PROTECTED REGION END*/
}

Container::contains_t Container::getContains() const
{
	return e4c::returned(m_contains);
}


void Container::addContains(idlmm::Contained_ptr contains_)
{
	contains_->setDefinedIn(this);
	m_contains.push_back(std::unique_ptr < idlmm::Contained >(contains_));
}

void Container::addAllContains(const contains_t& contains_)
{
	for (auto i = contains_.begin(); i != contains_.end(); i++)
		addContains(*i);
}



/*PROTECTED REGION ID(idlmm::Container implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Container::eClassImpl() const
{
	return IdlmmPackage::_instance()->getContainer();
}
 
