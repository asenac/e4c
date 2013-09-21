
#ifndef EMF_CPP_C_CPARAMETER__HPP
#define EMF_CPP_C_CPARAMETER__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CTypedElement.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CParameter
class CParameter :  public virtual ::C::CTypedElement
{
public:

	typedef CParameter_ptr ptr_type;
	
	CParameter();
	virtual ~CParameter();

	typedef C::BehavioralFeature_ptr behavioralFeature_t;

	
	behavioralFeature_t getBehavioralFeature() const;


	C::BehavioralFeature_ptr m_behavioralFeature;

		
protected:

};

} // C


#endif // EMF_CPP_C_CPARAMETER__HPP
