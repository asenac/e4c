
#ifndef EMF_CPP_C_BEHAVIORALFEATURE__HPP
#define EMF_CPP_C_BEHAVIORALFEATURE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class BehavioralFeature : ::ecore::EObject
{
public:

	typedef BehavioralFeature_ptr ptr_type;
	
	BehavioralFeature();
	virtual ~BehavioralFeature();

	typedef std::set < C::CParameter_ptr > parameters_t;
	
	parameters_t getParameters() const;
	void addParameters(C::CParameter_ptr parameters_);
	void addAllParameters(const parameters_t& parameters_);
	

	/*PROTECTED REGION ID(C::BehavioralFeature public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	std::set < std::unique_ptr < C::CParameter > > m_parameters;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::BehavioralFeature protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_BEHAVIORALFEATURE__HPP
