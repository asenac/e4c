
#ifndef EMF_CPP_ECORE_EFACTORY__HPP
#define EMF_CPP_ECORE_EFACTORY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EFactory
class EFactory :  public virtual ::ecore::EModelElement
{
public:

	typedef EFactory_ptr ptr_type;
	
	EFactory();
	virtual ~EFactory();

	typedef ecore::EPackage_ptr ePackage_t;

	
	// TODO

	
protected:

	ePackage_t m_ePackage;

};

} // ecore


#endif // EMF_CPP_ECORE_EFACTORY__HPP
