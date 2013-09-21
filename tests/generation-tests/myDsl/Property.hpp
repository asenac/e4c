
#ifndef EMF_CPP_MYDSL_PROPERTY__HPP
#define EMF_CPP_MYDSL_PROPERTY__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


// myDsl::Property
class Property
{
public:

	typedef Property_ptr ptr_type;
	
	Property();
	virtual ~Property();

	typedef ::ecore::EString name_t;
	typedef myDsl::Type_ptr type_t;
	typedef ::ecore::EBoolean many_t;

	
	void setName(name_t _name);
	name_t getName() const;
	type_t getType() const;
	void setMany(many_t _many);
	many_t getMany() const;


	name_t m_name;
	myDsl::Type_ptr m_type;
	many_t m_many;

		
protected:

};

} // myDsl


#endif // EMF_CPP_MYDSL_PROPERTY__HPP
