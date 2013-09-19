
#ifndef EMF_CPP_C_CSTRUCTURED__HPP
#define EMF_CPP_C_CSTRUCTURED__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CClassifier.hpp>
#include <C/CStructureContents.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CStructured
class CStructured :  public virtual ::C::CClassifier,  public virtual ::C::CStructureContents
{
public:

	typedef CStructured_ptr ptr_type;
	
	CStructured();
	virtual ~CStructured();

	typedef boost::ptr_set < C::CStructureContents > contains_t;

	
	// TODO

	
protected:

	contains_t m_contains;

};

} // C


#endif // EMF_CPP_C_CSTRUCTURED__HPP
