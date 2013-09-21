
#ifndef EMF_CPP_KDM_CODE_DATAELEMENT__HPP
#define EMF_CPP_KDM_CODE_DATAELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ComputationalObject.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::DataElement
class DataElement :  public virtual ::kdm::code::ComputationalObject
{
public:

	typedef DataElement_ptr ptr_type;
	
	DataElement();
	virtual ~DataElement();

	typedef kdm::code::Datatype_ptr type_t;
	typedef ::kdm::core::String ext_t;
	typedef ::kdm::core::Integer size_t;
	typedef std::set < kdm::code::Datatype_ptr > codeElement_t;

	
	type_t getType() const;
	void setExt(ext_t _ext);
	ext_t getExt() const;
	void setSize(size_t _size);
	size_t getSize() const;
	codeElement_t getCodeElement() const;


	kdm::code::Datatype_ptr m_type;
	ext_t m_ext;
	size_t m_size;
	std::set < std::unique_ptr < kdm::code::Datatype > > m_codeElement;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATAELEMENT__HPP
