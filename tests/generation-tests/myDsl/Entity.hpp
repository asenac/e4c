
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
	typedef std::vector < myDsl::Property_ptr > properties_t;

	
	extends_t getExtends() const;
	properties_t getProperties() const;


	myDsl::Entity_ptr m_extends;
	std::vector < std::unique_ptr < myDsl::Property > > m_properties;

		
protected:

};

} // myDsl


#endif // EMF_CPP_MYDSL_ENTITY__HPP
