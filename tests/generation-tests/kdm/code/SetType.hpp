
#ifndef EMF_CPP_KDM_CODE_SETTYPE__HPP
#define EMF_CPP_KDM_CODE_SETTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class SetType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef SetType_ptr ptr_type;
	
	SetType();
	virtual ~SetType();

	typedef ::kdm::core::Integer size_t;
	
	void setSize(size_t _size);
	size_t getSize() const;
	

	/*PROTECTED REGION ID(kdm::code::SetType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	size_t m_size;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::SetType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SETTYPE__HPP
