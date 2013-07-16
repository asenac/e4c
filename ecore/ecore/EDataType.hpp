
#ifndef EMF_CPP_ECORE_EDATATYPE__HPP
#define EMF_CPP_ECORE_EDATATYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

namespace ecore
{


// ecore::EDataType
class EDataType :  public virtual ::ecore::EClassifier
{
public:

	typedef EDataType_ptr ptr_type;

	EDataType();
	virtual ~EDataType();

	// Typedefs
	typedef ::e4c::impl::attribute< EDataType__serializable_tag > _serializable_t;

	
	// Members
	_serializable_t serializable;

};

} // ecore


#endif // EMF_CPP_ECORE_EDATATYPE__HPP
