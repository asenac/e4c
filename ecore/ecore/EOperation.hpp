
#ifndef EMF_CPP_ECORE_EOPERATION__HPP
#define EMF_CPP_ECORE_EOPERATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EOperation
class EOperation :  public virtual ::ecore::ETypedElement
{
public:

	typedef EOperation_ptr ptr_type;
	
	EOperation();
	virtual ~EOperation();

	typedef ecore::EClass_ptr eContainingClass_t;
	typedef boost::ptr_vector < ecore::ETypeParameter > eTypeParameters_t;
	typedef boost::ptr_vector < ecore::EParameter > eParameters_t;
	typedef std::set < ecore::EClassifier_ptr > eExceptions_t;
	typedef boost::ptr_vector < ecore::EGenericType > eGenericExceptions_t;

	
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	eContainingClass_t m_eContainingClass;
	eTypeParameters_t m_eTypeParameters;
	eParameters_t m_eParameters;
	eExceptions_t m_eExceptions;
	eGenericExceptions_t m_eGenericExceptions;

};

} // ecore


#endif // EMF_CPP_ECORE_EOPERATION__HPP
