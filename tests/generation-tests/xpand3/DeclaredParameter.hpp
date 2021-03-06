
#ifndef EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP
#define EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


class DeclaredParameter :  public virtual ::xpand3::SyntaxElement
{
public:

    typedef DeclaredParameter_ptr ptr_type;

    DeclaredParameter();
    virtual ~DeclaredParameter();

    typedef xpand3::Identifier_ptr name_t;
    typedef xpand3::Identifier_ptr type_t;

    name_t getName() const;
    void setName(name_t name_);
    name_t releaseName();
    type_t getType() const;
    void setType(type_t type_);
    type_t releaseType();


    /*PROTECTED REGION ID(xpand3::DeclaredParameter public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class Xpand3Package;

    std::unique_ptr < xpand3::Identifier > m_name;
    std::unique_ptr < xpand3::Identifier > m_type;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::DeclaredParameter protected) START*/
    /*PROTECTED REGION END*/
};

} // xpand3


#endif // EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP
