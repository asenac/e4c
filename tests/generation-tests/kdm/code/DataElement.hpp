
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
	typedef int ext_t;
	typedef int size_t;
	typedef boost::ptr_set < kdm::code::Datatype > codeElement_t;

	
	// TODO
	void setExt(ext_t _ext);
	ext_t getExt() const;
	void setSize(size_t _size);
	size_t getSize() const;
	// TODO

	
protected:

	type_t m_type;
	ext_t m_ext;
	size_t m_size;
	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATAELEMENT__HPP
