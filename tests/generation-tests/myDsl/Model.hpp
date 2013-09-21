
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

	typedef std::vector < myDsl::Import_ptr > imports_t;
	typedef std::vector < myDsl::Type_ptr > elements_t;

	
	imports_t getImports() const;
	elements_t getElements() const;


	std::vector < std::unique_ptr < myDsl::Import > > m_imports;
	std::vector < std::unique_ptr < myDsl::Type > > m_elements;

		
protected:

};

} // myDsl


#endif // EMF_CPP_MYDSL_MODEL__HPP
