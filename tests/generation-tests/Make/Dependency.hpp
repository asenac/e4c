
#ifndef EMF_CPP_MAKE_DEPENDENCY__HPP
#define EMF_CPP_MAKE_DEPENDENCY__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Dependency : ::ecore::EObject
{
public:

	typedef Dependency_ptr ptr_type;
	
	virtual ~Dependency();

	
	

	/*PROTECTED REGION ID(Make::Dependency public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Dependency();

	friend class MakePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(Make::Dependency protected) START*/
	/*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_DEPENDENCY__HPP
