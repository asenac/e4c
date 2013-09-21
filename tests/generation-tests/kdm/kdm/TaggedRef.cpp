
#include "TaggedRef.hpp"
#include <kdm/core/ModelElement.hpp>

using namespace kdm::kdm;

TaggedRef::TaggedRef() : 
	m_reference()
{
}

TaggedRef::~TaggedRef()
{
}

TaggedRef::reference_t TaggedRef::getReference() const
{
	return e4c::returned(m_reference);
}



