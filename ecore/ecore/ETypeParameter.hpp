#ifndef EMF_CPP_ECORE_ETYPEPARAMETER__HPP
#define EMF_CPP_ECORE_ETYPEPARAMETER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class ETypeParameter :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypeParameter_ptr ptr_type;
	
	ETypeParameter();
	virtual ~ETypeParameter();

	typedef std::vector < ecore::EGenericType_ptr > eBounds_t;
	
	eBounds_t getEBounds() const;
	void addEBounds(ecore::EGenericType_ptr eBounds_);
	void addAllEBounds(const eBounds_t& eBounds_);
	void removeEBounds(ecore::EGenericType_ptr eBounds_);
	void clearEBounds();
	

	/*PROTECTED REGION ID(ecore::ETypeParameter public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	std::vector < std::unique_ptr < ecore::EGenericType > > m_eBounds;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::ETypeParameter protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEPARAMETER__HPP
