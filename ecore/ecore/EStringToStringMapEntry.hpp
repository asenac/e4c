
#ifndef EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
#define EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

namespace ecore
{


// ecore::EStringToStringMapEntry
class EStringToStringMapEntry : public virtual ::ecore::EObject
{
public:

	typedef EStringToStringMapEntry_ptr ptr_type;

	EStringToStringMapEntry();
	virtual ~EStringToStringMapEntry();

	// Typedefs
	typedef ::e4c::impl::attribute< EStringToStringMapEntry__key_tag > _key_t;
	typedef ::e4c::impl::attribute< EStringToStringMapEntry__value_tag > _value_t;

	
	// Members
	_key_t key;
	_value_t value;

};

} // ecore


#endif // EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
