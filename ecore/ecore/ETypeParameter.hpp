
#ifndef EMF_CPP_ECORE_ETYPEPARAMETER__HPP
#define EMF_CPP_ECORE_ETYPEPARAMETER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::ETypeParameter
class ETypeParameter :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypeParameter_ptr ptr_type;
	
	ETypeParameter();
	virtual ~ETypeParameter();

	typedef boost::ptr_vector < ecore::EGenericType > eBounds_t;

	
	// TODO

	
protected:

	eBounds_t m_eBounds;

};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEPARAMETER__HPP
