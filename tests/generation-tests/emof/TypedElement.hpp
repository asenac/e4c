
#ifndef EMF_CPP_EMOF_TYPEDELEMENT__HPP
#define EMF_CPP_EMOF_TYPEDELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::TypedElement
class TypedElement :  public virtual ::emof::NamedElement
{
public:

	typedef TypedElement_ptr ptr_type;
	
	virtual ~TypedElement();

	typedef emof::Type_ptr type_t;

	
	type_t getType() const;


	emof::Type_ptr m_type;

		
protected:
	TypedElement();

};

} // emof


#endif // EMF_CPP_EMOF_TYPEDELEMENT__HPP
