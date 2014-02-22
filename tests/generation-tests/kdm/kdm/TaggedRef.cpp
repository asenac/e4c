
#include "TaggedRef.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/ModelElement.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::TaggedRef include) START*/
/*PROTECTED REGION END*/

TaggedRef::TaggedRef() :
    m_reference()
{
    /*PROTECTED REGION ID(TaggedRef constructor) START*/
    /*PROTECTED REGION END*/
}

TaggedRef::~TaggedRef()
{
    /*PROTECTED REGION ID(TaggedRef destructor) START*/
    /*PROTECTED REGION END*/
}

TaggedRef::reference_t TaggedRef::getReference() const
{
    return e4c::returned(m_reference);
}

void TaggedRef::setReference(reference_t reference_)
{
    if (m_reference == reference_)
        return;
    m_reference = reference_;
}



/*PROTECTED REGION ID(kdm::kdm::TaggedRef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TaggedRef::eClassImpl() const
{
    return KdmPackage::_instance()->getTaggedRef();
}

