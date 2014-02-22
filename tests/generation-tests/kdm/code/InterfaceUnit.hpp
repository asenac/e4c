
#ifndef EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
#define EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class InterfaceUnit :  public virtual ::kdm::code::Datatype
{
public:

    typedef InterfaceUnit_ptr ptr_type;

    InterfaceUnit();
    virtual ~InterfaceUnit();

    typedef std::vector < kdm::code::CodeItem_ptr > codeElement_t;

    codeElement_t getCodeElement() const;
    void addCodeElement(kdm::code::CodeItem_ptr codeElement_);
    void addAllCodeElement(const codeElement_t& codeElement_);


    /*PROTECTED REGION ID(kdm::code::InterfaceUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::vector < std::unique_ptr < kdm::code::CodeItem > > m_codeElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::InterfaceUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
