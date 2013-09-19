
#ifndef EMF_CPP_MYDSL_ENTITY__HPP
#define EMF_CPP_MYDSL_ENTITY__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <myDsl/Type.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


// myDsl::Entity
class Entity :  public virtual ::myDsl::Type
{
public:

	typedef Entity_ptr ptr_type;
	
	Entity();
	virtual ~Entity();

	typedef myDsl::Entity_ptr extends_t;
	typedef boost::ptr_vector < myDsl::Property > properties_t;

	
	// TODO
	// TODO

	
protected:

	extends_t m_extends;
	properties_t m_properties;

};

} // myDsl


#endif // EMF_CPP_MYDSL_ENTITY__HPP
