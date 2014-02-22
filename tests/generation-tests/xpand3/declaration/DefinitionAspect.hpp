
#ifndef EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


class DefinitionAspect :  public virtual ::xpand3::declaration::AbstractAspect
{
public:

    typedef DefinitionAspect_ptr ptr_type;

    DefinitionAspect();
    virtual ~DefinitionAspect();

    typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;

    body_t getBody() const;
    void addBody(xpand3::statement::AbstractStatement_ptr body_);
    void addAllBody(const body_t& body_);


    /*PROTECTED REGION ID(xpand3::declaration::DefinitionAspect public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DeclarationPackage;

    std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::declaration::DefinitionAspect protected) START*/
    /*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP
