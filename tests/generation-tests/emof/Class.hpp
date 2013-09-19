
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

	typedef int isAbstract_t;
	typedef boost::ptr_set < emof::Property > ownedAttribute_t;
	typedef boost::ptr_set < emof::Operation > ownedOperation_t;
	typedef std::vector < emof::Class_ptr > superClass_t;

	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	// TODO
	// TODO
	// TODO

	
protected:

	isAbstract_t m_isAbstract;
	ownedAttribute_t m_ownedAttribute;
	ownedOperation_t m_ownedOperation;
	superClass_t m_superClass;

};

} // emof


#endif // EMF_CPP_EMOF_CLASS__HPP
