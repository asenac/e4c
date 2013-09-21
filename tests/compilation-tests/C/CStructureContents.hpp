
#ifndef EMF_CPP_C_CSTRUCTURECONTENTS__HPP
#define EMF_CPP_C_CSTRUCTURECONTENTS__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CStructureContents
class CStructureContents
{
public:

	typedef CStructureContents_ptr ptr_type;
	
	CStructureContents();
	virtual ~CStructureContents();

	typedef C::CStructured_ptr sc_container_t;

	
	sc_container_t getSc_container() const;


	C::CStructured_ptr m_sc_container;

		
protected:

};

} // C


#endif // EMF_CPP_C_CSTRUCTURECONTENTS__HPP
