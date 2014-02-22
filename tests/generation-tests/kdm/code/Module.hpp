
#ifndef EMF_CPP_KDM_CODE_MODULE__HPP
#define EMF_CPP_KDM_CODE_MODULE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Module :  public virtual ::kdm::code::CodeItem
{
public:

    typedef Module_ptr ptr_type;

    Module();
    virtual ~Module();

    typedef std::vector < kdm::code::AbstractCodeElement_ptr > codeElement_t;

    codeElement_t getCodeElement() const;
    void addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_);
    void addAllCodeElement(const codeElement_t& codeElement_);


    /*PROTECTED REGION ID(kdm::code::Module public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::vector < std::unique_ptr < kdm::code::AbstractCodeElement > > m_codeElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::Module protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MODULE__HPP
