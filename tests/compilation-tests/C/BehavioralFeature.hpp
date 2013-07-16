
#ifndef EMF_CPP_C_BEHAVIORALFEATURE__HPP
#define EMF_CPP_C_BEHAVIORALFEATURE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

namespace C
{


// C::BehavioralFeature
class BehavioralFeature : public virtual ::ecore::EObject
{
public:

	typedef BehavioralFeature_ptr ptr_type;

	BehavioralFeature();
	virtual ~BehavioralFeature();

	// Typedefs
	typedef ::e4c::impl::reference< BehavioralFeature__parameters_tag > _parameters_t;

	
	// Members
	_parameters_t parameters;

};

} // C


#endif // EMF_CPP_C_BEHAVIORALFEATURE__HPP
