
#ifndef EMF_CPP_MYDSL_MODEL__HPP
#define EMF_CPP_MYDSL_MODEL__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


// myDsl::Model
class Model
{
public:

	typedef Model_ptr ptr_type;
	
	Model();
	virtual ~Model();

	typedef boost::ptr_vector < myDsl::Import > imports_t;
	typedef boost::ptr_vector < myDsl::Type > elements_t;

	
	// TODO
	// TODO

	
protected:

	imports_t m_imports;
	elements_t m_elements;

};

} // myDsl


#endif // EMF_CPP_MYDSL_MODEL__HPP
