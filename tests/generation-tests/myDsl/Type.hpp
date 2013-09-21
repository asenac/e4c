
#ifndef EMF_CPP_MYDSL_TYPE__HPP
#define EMF_CPP_MYDSL_TYPE__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


// myDsl::Type
class Type
{
public:

	typedef Type_ptr ptr_type;
	
	Type();
	virtual ~Type();

	typedef ::ecore::EString name_t;

	
	void setName(name_t _name);
	name_t getName() const;


	name_t m_name;

		
protected:

};

} // myDsl


#endif // EMF_CPP_MYDSL_TYPE__HPP
