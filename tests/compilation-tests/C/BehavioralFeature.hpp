
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

	typedef std::set < C::CParameter_ptr > parameters_t;

	
	parameters_t getParameters() const;


	std::set < std::unique_ptr < C::CParameter > > m_parameters;

		
protected:

};

} // C


#endif // EMF_CPP_C_BEHAVIORALFEATURE__HPP
