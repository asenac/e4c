
#ifndef EMF_CPP_C_CSTRUCTURECONTENTS__HPP
#define EMF_CPP_C_CSTRUCTURECONTENTS__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CStructureContents : ::ecore::EObject
{
public:

	typedef CStructureContents_ptr ptr_type;
	
	CStructureContents();
	virtual ~CStructureContents();

	typedef C::CStructured_ptr sc_container_t;
	
	sc_container_t getSc_container() const;
	

	/*PROTECTED REGION ID(C::CStructureContents public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	C::CStructured_ptr m_sc_container;

	
	friend class ::C::CStructured;
	void setSc_container(sc_container_t sc_container_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CStructureContents protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSTRUCTURECONTENTS__HPP
