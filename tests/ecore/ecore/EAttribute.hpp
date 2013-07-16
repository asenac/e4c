
#ifndef EMF_CPP_ECORE_EATTRIBUTE__HPP
#define EMF_CPP_ECORE_EATTRIBUTE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EStructuralFeature.hpp>

namespace ecore
{


// ecore::EAttribute
class EAttribute :  public virtual ::ecore::EStructuralFeature
{
public:

	typedef EAttribute_ptr ptr_type;

	EAttribute();
	virtual ~EAttribute();

	// Typedefs
	typedef ::e4c::impl::attribute< EAttribute__iD_tag > _iD_t;
	typedef ::e4c::impl::reference< EAttribute__eAttributeType_tag > _eAttributeType_t;

	
	// Members
	_iD_t iD;
	_eAttributeType_t eAttributeType;

};

} // ecore


#endif // EMF_CPP_ECORE_EATTRIBUTE__HPP
