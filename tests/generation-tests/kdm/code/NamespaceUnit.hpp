
#ifndef EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
#define EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class NamespaceUnit :  public virtual ::kdm::code::CodeItem
{
public:

    typedef NamespaceUnit_ptr ptr_type;

    NamespaceUnit();
    virtual ~NamespaceUnit();

    typedef std::set < kdm::code::CodeItem_ptr > groupedCode_t;

    groupedCode_t getGroupedCode() const;
    void addGroupedCode(kdm::code::CodeItem_ptr groupedCode_);
    void addAllGroupedCode(const groupedCode_t& groupedCode_);


    /*PROTECTED REGION ID(kdm::code::NamespaceUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    std::set < kdm::code::CodeItem_ptr > m_groupedCode;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::NamespaceUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
