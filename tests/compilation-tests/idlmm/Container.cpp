
#include "Container.hpp"
#include <idlmm/Contained.hpp>

using namespace idlmm;

Container::Container() : 
	m_contains()
{
}

Container::~Container()
{
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





