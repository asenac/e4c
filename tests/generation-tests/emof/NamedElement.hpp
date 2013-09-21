
#ifndef EMF_CPP_EMOF_NAMEDELEMENT__HPP
#define EMF_CPP_EMOF_NAMEDELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Element.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::NamedElement
class NamedElement :  public virtual ::emof::Element
{
public:

	typedef NamedElement_ptr ptr_type;
	
	virtual ~NamedElement();

	typedef ::emof::String name_t;

	
	void setName(name_t _name);
	name_t getName() const;


	name_t m_name;

		
protected:
	NamedElement();

};

} // emof


#endif // EMF_CPP_EMOF_NAMEDELEMENT__HPP
