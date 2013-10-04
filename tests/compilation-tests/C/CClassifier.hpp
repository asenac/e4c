
#ifndef EMF_CPP_C_CCLASSIFIER__HPP
#define EMF_CPP_C_CCLASSIFIER__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CClassifier : ::ecore::EObject
{
public:

	typedef CClassifier_ptr ptr_type;
	
	CClassifier();
	virtual ~CClassifier();

	
	

	/*PROTECTED REGION ID(C::CClassifier public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CClassifier protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CCLASSIFIER__HPP
