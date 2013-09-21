
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

	typedef std::set < C::CStructureContents_ptr > contains_t;

	
	contains_t getContains() const;


	std::set < std::unique_ptr < C::CStructureContents > > m_contains;

		
protected:

};

} // C


#endif // EMF_CPP_C_CSTRUCTURED__HPP
