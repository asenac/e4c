
#ifndef EMF_CPP_EMOF_OBJECT__HPP
#define EMF_CPP_EMOF_OBJECT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Object : ::ecore::EObject
{
public:

	typedef Object_ptr ptr_type;
	
	Object();
	virtual ~Object();

	
	

	/*PROTECTED REGION ID(emof::Object public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Object protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_OBJECT__HPP
