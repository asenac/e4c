
#ifndef EMF_CPP_EMOF_URIEXTENT__HPP
#define EMF_CPP_EMOF_URIEXTENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Extent.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class URIExtent :  public virtual ::emof::Extent
{
public:

	typedef URIExtent_ptr ptr_type;
	
	URIExtent();
	virtual ~URIExtent();

	
	

	/*PROTECTED REGION ID(emof::URIExtent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::URIExtent protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_URIEXTENT__HPP
