
#ifndef EMF_CPP_ECORE_ETYPEDELEMENT__HPP
#define EMF_CPP_ECORE_ETYPEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

namespace ecore
{


// ecore::ETypedElement
class ETypedElement :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypedElement_ptr ptr_type;

	ETypedElement();
	virtual ~ETypedElement();

	// Typedefs
	typedef ::e4c::impl::attribute< ETypedElement__ordered_tag > _ordered_t;
	typedef ::e4c::impl::attribute< ETypedElement__unique_tag > _unique_t;
	typedef ::e4c::impl::attribute< ETypedElement__lowerBound_tag > _lowerBound_t;
	typedef ::e4c::impl::attribute< ETypedElement__upperBound_tag > _upperBound_t;
	typedef ::e4c::impl::attribute< ETypedElement__many_tag > _many_t;
	typedef ::e4c::impl::attribute< ETypedElement__required_tag > _required_t;
	typedef ::e4c::impl::reference< ETypedElement__eType_tag > _eType_t;
	typedef ::e4c::impl::reference< ETypedElement__eGenericType_tag > _eGenericType_t;

	
	// Members
	_ordered_t ordered;
	_unique_t unique;
	_lowerBound_t lowerBound;
	_upperBound_t upperBound;
	_many_t many;
	_required_t required;
	_eType_t eType;
	_eGenericType_t eGenericType;

};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEDELEMENT__HPP
