
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
    void setType(type_t type_);
    void setExt(ext_t _ext);
    ext_t getExt() const;
    void setSize(size_t _size);
    size_t getSize() const;
    codeElement_t getCodeElement() const;
    void addCodeElement(kdm::code::Datatype_ptr codeElement_);
    void addAllCodeElement(const codeElement_t& codeElement_);


    /*PROTECTED REGION ID(kdm::code::DataElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    kdm::code::Datatype_ptr m_type;
    ext_t m_ext;
    size_t m_size;
    std::set < std::unique_ptr < kdm::code::Datatype > > m_codeElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::DataElement protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATAELEMENT__HPP
