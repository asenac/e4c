
#ifndef EMF_CPP_EMOF_CLASS__HPP
#define EMF_CPP_EMOF_CLASS__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Type.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Class
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
	ownedOperation_t getOwnedOperation() const;
	superClass_t getSuperClass() const;


	isAbstract_t m_isAbstract;
	std::set < std::unique_ptr < emof::Property > > m_ownedAttribute;
	std::set < std::unique_ptr < emof::Operation > > m_ownedOperation;
	std::set < emof::Class_ptr > m_superClass;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_CLASS__HPP
