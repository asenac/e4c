
#ifndef EMF_CPP_ECORE_EOPERATION__HPP
#define EMF_CPP_ECORE_EOPERATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

namespace ecore
{


// ecore::EOperation
class EOperation :  public virtual ::ecore::ETypedElement
{
public:

	typedef EOperation_ptr ptr_type;

	EOperation();
	virtual ~EOperation();

	// Typedefs
	typedef ::e4c::impl::reference< EOperation__eContainingClass_tag > _eContainingClass_t;
	typedef ::e4c::impl::reference< EOperation__eTypeParameters_tag > _eTypeParameters_t;
	typedef ::e4c::impl::reference< EOperation__eParameters_tag > _eParameters_t;
	typedef ::e4c::impl::reference< EOperation__eExceptions_tag > _eExceptions_t;
	typedef ::e4c::impl::reference< EOperation__eGenericExceptions_tag > _eGenericExceptions_t;

	
	// Members
	_eContainingClass_t eContainingClass;
	_eTypeParameters_t eTypeParameters;
	_eParameters_t eParameters;
	_eExceptions_t eExceptions;
	_eGenericExceptions_t eGenericExceptions;

};

} // ecore


#endif // EMF_CPP_ECORE_EOPERATION__HPP
