
#ifndef EMF_CPP_MYDSL_IMPORT__HPP
#define EMF_CPP_MYDSL_IMPORT__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


class Import : ::ecore::EObject
{
public:

	typedef Import_ptr ptr_type;
	
	Import();
	virtual ~Import();

	typedef ::ecore::EString importURI_t;
	
	void setImportURI(importURI_t _importURI);
	importURI_t getImportURI() const;
	

	/*PROTECTED REGION ID(myDsl::Import public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MyDslPackage;

	importURI_t m_importURI;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(myDsl::Import protected) START*/
	/*PROTECTED REGION END*/
};

} // myDsl


#endif // EMF_CPP_MYDSL_IMPORT__HPP
