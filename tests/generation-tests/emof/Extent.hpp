
#ifndef EMF_CPP_EMOF_EXTENT__HPP
#define EMF_CPP_EMOF_EXTENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Object.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Extent :  public virtual ::emof::Object
{
public:

	typedef Extent_ptr ptr_type;
	
	Extent();
	virtual ~Extent();

	
	

	/*PROTECTED REGION ID(emof::Extent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Extent protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_EXTENT__HPP
