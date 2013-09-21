
#ifndef EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP
#define EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::EnumerationLiteral
class EnumerationLiteral :  public virtual ::emof::NamedElement
{
public:

	typedef EnumerationLiteral_ptr ptr_type;
	
	EnumerationLiteral();
	virtual ~EnumerationLiteral();

	typedef emof::Enumeration_ptr enumeration_t;

	
	enumeration_t getEnumeration() const;


	emof::Enumeration_ptr m_enumeration;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_ENUMERATIONLITERAL__HPP
