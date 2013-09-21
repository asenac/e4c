
#ifndef EMF_CPP_ECORE_ENAMEDELEMENT__HPP
#define EMF_CPP_ECORE_ENAMEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class ENamedElement :  public virtual ::ecore::EModelElement
{
public:

	typedef ENamedElement_ptr ptr_type;
	
	virtual ~ENamedElement();

	typedef ::ecore::EString name_t;
	
	void setName(name_t _name);
	name_t getName() const;
	
		
protected:
	ENamedElement();

	friend class EcorePackage;

	name_t m_name;

	
};

} // ecore


#endif // EMF_CPP_ECORE_ENAMEDELEMENT__HPP
