
#ifndef EMF_CPP_MYDSL_IMPORT__HPP
#define EMF_CPP_MYDSL_IMPORT__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


// myDsl::Import
class Import
{
public:

	typedef Import_ptr ptr_type;
	
	Import();
	virtual ~Import();

	typedef int importURI_t;

	
	void setImportURI(importURI_t _importURI);
	importURI_t getImportURI() const;

	
protected:

	importURI_t m_importURI;

};

} // myDsl


#endif // EMF_CPP_MYDSL_IMPORT__HPP
