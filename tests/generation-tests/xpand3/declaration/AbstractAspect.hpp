
#ifndef EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


class AbstractAspect :  public virtual ::xpand3::declaration::AbstractDeclaration
{
public:

    typedef AbstractAspect_ptr ptr_type;

    virtual ~AbstractAspect();

    typedef xpand3::Identifier_ptr pointcut_t;
    typedef ::ecore::EBoolean wildparams_t;

    pointcut_t getPointcut() const;
    void setPointcut(pointcut_t pointcut_);
    pointcut_t releasePointcut();
    void setWildparams(wildparams_t _wildparams);
    wildparams_t getWildparams() const;


    /*PROTECTED REGION ID(xpand3::declaration::AbstractAspect public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractAspect();

    friend class DeclarationPackage;

    std::unique_ptr < xpand3::Identifier > m_pointcut;
    wildparams_t m_wildparams;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::declaration::AbstractAspect protected) START*/
    /*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP
