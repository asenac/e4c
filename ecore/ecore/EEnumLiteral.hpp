
#ifndef EMF_CPP_ECORE_EENUMLITERAL__HPP
#define EMF_CPP_ECORE_EENUMLITERAL__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

namespace ecore
{


// ecore::EEnumLiteral
class EEnumLiteral :  public virtual ::ecore::ENamedElement
{
public:

	typedef EEnumLiteral_ptr ptr_type;

	EEnumLiteral();
	virtual ~EEnumLiteral();

	// Typedefs
	typedef ::e4c::impl::attribute< EEnumLiteral__value_tag > _value_t;
	typedef ::e4c::impl::attribute< EEnumLiteral__instance_tag > _instance_t;
	typedef ::e4c::impl::attribute< EEnumLiteral__literal_tag > _literal_t;
	typedef ::e4c::impl::reference< EEnumLiteral__eEnum_tag > _eEnum_t;

	
	// Members
	_value_t value;
	_instance_t instance;
	_literal_t literal;
	_eEnum_t eEnum;

};

} // ecore


#endif // EMF_CPP_ECORE_EENUMLITERAL__HPP
