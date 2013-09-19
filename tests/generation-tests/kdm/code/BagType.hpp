
#ifndef EMF_CPP_KDM_CODE_BAGTYPE__HPP
#define EMF_CPP_KDM_CODE_BAGTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::BagType
class BagType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef BagType_ptr ptr_type;
	
	BagType();
	virtual ~BagType();

	typedef int size_t;

	
	void setSize(size_t _size);
	size_t getSize() const;

	
protected:

	size_t m_size;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_BAGTYPE__HPP
