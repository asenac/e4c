
#ifndef EMF_CPP_MYDSL_ENTITY__HPP
#define EMF_CPP_MYDSL_ENTITY__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <myDsl/Type.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


class Entity :  public virtual ::myDsl::Type
{
public:

	typedef Entity_ptr ptr_type;
	
	Entity();
	virtual ~Entity();

	typedef myDsl::Entity_ptr extends_t;
	typedef std::vector < myDsl::Property_ptr > properties_t;
	
	extends_t getExtends() const;
	void setExtends(extends_t extends_);
	properties_t getProperties() const;
	void addProperties(myDsl::Property_ptr properties_);
	void addAllProperties(const properties_t& properties_);
	

	/*PROTECTED REGION ID(myDsl::Entity public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MyDslPackage;

	myDsl::Entity_ptr m_extends;
	std::vector < std::unique_ptr < myDsl::Property > > m_properties;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(myDsl::Entity protected) START*/
	/*PROTECTED REGION END*/
};

} // myDsl


#endif // EMF_CPP_MYDSL_ENTITY__HPP
