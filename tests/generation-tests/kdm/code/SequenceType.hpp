
#ifndef EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP
#define EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::SequenceType
class SequenceType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef SequenceType_ptr ptr_type;
	
	SequenceType();
	virtual ~SequenceType();

	typedef ::kdm::core::Integer size_t;

	
	void setSize(size_t _size);
	size_t getSize() const;


	size_t m_size;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP
