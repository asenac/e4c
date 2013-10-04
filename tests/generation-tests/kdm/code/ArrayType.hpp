
#ifndef EMF_CPP_KDM_CODE_ARRAYTYPE__HPP
#define EMF_CPP_KDM_CODE_ARRAYTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ArrayType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef ArrayType_ptr ptr_type;
	
	ArrayType();
	virtual ~ArrayType();

	typedef ::kdm::core::Integer size_t;
	typedef kdm::code::IndexUnit_ptr indexUnit_t;
	
	void setSize(size_t _size);
	size_t getSize() const;
	indexUnit_t getIndexUnit() const;
	void setIndexUnit(indexUnit_t indexUnit_);
	indexUnit_t releaseIndexUnit();
	

	/*PROTECTED REGION ID(kdm::code::ArrayType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	size_t m_size;
	std::unique_ptr < kdm::code::IndexUnit > m_indexUnit;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ArrayType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ARRAYTYPE__HPP
