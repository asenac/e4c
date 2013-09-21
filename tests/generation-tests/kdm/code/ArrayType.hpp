
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


// kdm::code::ArrayType
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


	size_t m_size;
	std::unique_ptr < kdm::code::IndexUnit > m_indexUnit;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ARRAYTYPE__HPP
