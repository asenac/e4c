
#ifndef EMF_CPP_EMOF_TYPE__HPP
#define EMF_CPP_EMOF_TYPE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Type
class Type :  public virtual ::emof::NamedElement
{
public:

	typedef Type_ptr ptr_type;
	
	virtual ~Type();

	typedef emof::Package_ptr package_t;

	
	// TODO

	
protected:
	Type();

	package_t m_package;

};

} // emof


#endif // EMF_CPP_EMOF_TYPE__HPP
