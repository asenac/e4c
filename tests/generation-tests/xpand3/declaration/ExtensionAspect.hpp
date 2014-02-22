
#ifndef EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


class ExtensionAspect :  public virtual ::xpand3::declaration::AbstractAspect
{
public:

    typedef ExtensionAspect_ptr ptr_type;

    ExtensionAspect();
    virtual ~ExtensionAspect();

    typedef xpand3::expression::AbstractExpression_ptr expression_t;

    expression_t getExpression() const;
    void setExpression(expression_t expression_);
    expression_t releaseExpression();


    /*PROTECTED REGION ID(xpand3::declaration::ExtensionAspect public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DeclarationPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_expression;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::declaration::ExtensionAspect protected) START*/
    /*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP
