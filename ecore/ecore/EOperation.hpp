
#ifndef EMF_CPP_ECORE_EOPERATION__HPP
#define EMF_CPP_ECORE_EOPERATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EOperation :  public virtual ::ecore::ETypedElement
{
public:

	typedef EOperation_ptr ptr_type;
	
	EOperation();
	virtual ~EOperation();

	typedef ecore::EClass_ptr eContainingClass_t;
	typedef std::vector < ecore::ETypeParameter_ptr > eTypeParameters_t;
	typedef std::vector < ecore::EParameter_ptr > eParameters_t;
	typedef std::vector < ecore::EClassifier_ptr > eExceptions_t;
	typedef std::vector < ecore::EGenericType_ptr > eGenericExceptions_t;
	
	eContainingClass_t getEContainingClass() const;
	eTypeParameters_t getETypeParameters() const;
	void addETypeParameters(ecore::ETypeParameter_ptr eTypeParameters_);
	void addAllETypeParameters(const eTypeParameters_t& eTypeParameters_);
	eParameters_t getEParameters() const;
	void addEParameters(ecore::EParameter_ptr eParameters_);
	void addAllEParameters(const eParameters_t& eParameters_);
	eExceptions_t getEExceptions() const;
	void addEExceptions(ecore::EClassifier_ptr eExceptions_);
	void addAllEExceptions(const eExceptions_t& eExceptions_);
	eGenericExceptions_t getEGenericExceptions() const;
	void addEGenericExceptions(ecore::EGenericType_ptr eGenericExceptions_);
	void addAllEGenericExceptions(const eGenericExceptions_t& eGenericExceptions_);
	
	ecore::EInt getOperationID();
	ecore::EBoolean isOverrideOf(ecore::EOperation_ptr someOperation);

	/*PROTECTED REGION ID(ecore::EOperation public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	ecore::EClass_ptr m_eContainingClass;
	std::vector < std::unique_ptr < ecore::ETypeParameter > > m_eTypeParameters;
	std::vector < std::unique_ptr < ecore::EParameter > > m_eParameters;
	std::vector < ecore::EClassifier_ptr > m_eExceptions;
	std::vector < std::unique_ptr < ecore::EGenericType > > m_eGenericExceptions;

	
	friend class ::ecore::EClass;
	void setEContainingClass(eContainingClass_t eContainingClass_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EOperation protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EOPERATION__HPP
