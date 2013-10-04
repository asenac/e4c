
#ifndef EMF_CPP_EMOF_CLASS__HPP
#define EMF_CPP_EMOF_CLASS__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Type.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Class :  public virtual ::emof::Type
{
public:

	typedef Class_ptr ptr_type;
	
	Class();
	virtual ~Class();

	typedef ::emof::Boolean isAbstract_t;
	typedef std::set < emof::Property_ptr > ownedAttribute_t;
	typedef std::set < emof::Operation_ptr > ownedOperation_t;
	typedef std::set < emof::Class_ptr > superClass_t;
	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	ownedAttribute_t getOwnedAttribute() const;
	void addOwnedAttribute(emof::Property_ptr ownedAttribute_);
	void addAllOwnedAttribute(const ownedAttribute_t& ownedAttribute_);
	ownedOperation_t getOwnedOperation() const;
	void addOwnedOperation(emof::Operation_ptr ownedOperation_);
	void addAllOwnedOperation(const ownedOperation_t& ownedOperation_);
	superClass_t getSuperClass() const;
	void addSuperClass(emof::Class_ptr superClass_);
	void addAllSuperClass(const superClass_t& superClass_);
	

	/*PROTECTED REGION ID(emof::Class public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	isAbstract_t m_isAbstract;
	std::set < std::unique_ptr < emof::Property > > m_ownedAttribute;
	std::set < std::unique_ptr < emof::Operation > > m_ownedOperation;
	std::set < emof::Class_ptr > m_superClass;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Class protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_CLASS__HPP
