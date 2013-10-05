#ifndef EMF_CPP_ECORE_EENUM__HPP
#define EMF_CPP_ECORE_EENUM__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EDataType.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EEnum :  public virtual ::ecore::EDataType
{
public:

	typedef EEnum_ptr ptr_type;
	
	EEnum();
	virtual ~EEnum();

	typedef std::vector < ecore::EEnumLiteral_ptr > eLiterals_t;
	
	eLiterals_t getELiterals() const;
	void addELiterals(ecore::EEnumLiteral_ptr eLiterals_);
	void addAllELiterals(const eLiterals_t& eLiterals_);
	void removeELiterals(ecore::EEnumLiteral_ptr eLiterals_);
	void clearELiterals();
	
	ecore::EEnumLiteral_ptr getEEnumLiteral(ecore::EString name);
	ecore::EEnumLiteral_ptr getEEnumLiteral(ecore::EInt value);
	ecore::EEnumLiteral_ptr getEEnumLiteralByLiteral(ecore::EString literal);

	/*PROTECTED REGION ID(ecore::EEnum public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	std::vector < std::unique_ptr < ecore::EEnumLiteral > > m_eLiterals;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EEnum protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EENUM__HPP
