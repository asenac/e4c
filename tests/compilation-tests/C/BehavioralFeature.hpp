
#ifndef EMF_CPP_C_BEHAVIORALFEATURE__HPP
#define EMF_CPP_C_BEHAVIORALFEATURE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::BehavioralFeature
class BehavioralFeature
{
public:

	typedef BehavioralFeature_ptr ptr_type;
	
	BehavioralFeature();
	virtual ~BehavioralFeature();

	typedef boost::ptr_set < C::CParameter > parameters_t;

	
	// TODO

	
protected:

	parameters_t m_parameters;

};

} // C


#endif // EMF_CPP_C_BEHAVIORALFEATURE__HPP
