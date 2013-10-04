
#ifndef EMF_CPP_C_CSTRUCTURED__HPP
#define EMF_CPP_C_CSTRUCTURED__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CClassifier.hpp>
#include <C/CStructureContents.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CStructured :  public virtual ::C::CClassifier,  public virtual ::C::CStructureContents
{
public:

	typedef CStructured_ptr ptr_type;
	
	CStructured();
	virtual ~CStructured();

	typedef std::set < C::CStructureContents_ptr > contains_t;
	
	contains_t getContains() const;
	void addContains(C::CStructureContents_ptr contains_);
	void addAllContains(const contains_t& contains_);
	

	/*PROTECTED REGION ID(C::CStructured public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	std::set < std::unique_ptr < C::CStructureContents > > m_contains;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CStructured protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSTRUCTURED__HPP
