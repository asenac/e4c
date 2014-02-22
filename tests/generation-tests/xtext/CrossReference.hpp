
#ifndef EMF_CPP_XTEXT_CROSSREFERENCE__HPP
#define EMF_CPP_XTEXT_CROSSREFERENCE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class CrossReference :  public virtual ::xtext::AbstractElement
{
public:

    typedef CrossReference_ptr ptr_type;

    CrossReference();
    virtual ~CrossReference();

    typedef xtext::TypeRef_ptr type_t;
    typedef xtext::AbstractElement_ptr terminal_t;

    type_t getType() const;
    void setType(type_t type_);
    type_t releaseType();
    terminal_t getTerminal() const;
    void setTerminal(terminal_t terminal_);
    terminal_t releaseTerminal();


    /*PROTECTED REGION ID(xtext::CrossReference public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    std::unique_ptr < xtext::TypeRef > m_type;
    std::unique_ptr < xtext::AbstractElement > m_terminal;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::CrossReference protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_CROSSREFERENCE__HPP
