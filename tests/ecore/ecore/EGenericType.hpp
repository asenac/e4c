
#ifndef EMF_CPP_ECORE_EGENERICTYPE__HPP
#define EMF_CPP_ECORE_EGENERICTYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

namespace ecore
{


// ecore::EGenericType
class EGenericType : public ::ecore::EObject
{
public:

	typedef EGenericType_ptr ptr_type;

	EGenericType();
	virtual ~EGenericType();

	// Typedefs
	typedef ::e4c::impl::reference< EGenericType__eUpperBound_tag > _eUpperBound_t;
	typedef ::e4c::impl::reference< EGenericType__eTypeArguments_tag > _eTypeArguments_t;
	typedef ::e4c::impl::reference< EGenericType__eRawType_tag > _eRawType_t;
	typedef ::e4c::impl::reference< EGenericType__eLowerBound_tag > _eLowerBound_t;
	typedef ::e4c::impl::reference< EGenericType__eTypeParameter_tag > _eTypeParameter_t;
	typedef ::e4c::impl::reference< EGenericType__eClassifier_tag > _eClassifier_t;

	
	// Members
	_eUpperBound_t eUpperBound;
	_eTypeArguments_t eTypeArguments;
	_eRawType_t eRawType;
	_eLowerBound_t eLowerBound;
	_eTypeParameter_t eTypeParameter;
	_eClassifier_t eClassifier;

};

} // ecore


#endif // EMF_CPP_ECORE_EGENERICTYPE__HPP
