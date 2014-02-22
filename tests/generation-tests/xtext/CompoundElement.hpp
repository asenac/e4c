
#ifndef EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP
#define EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class CompoundElement :  public virtual ::xtext::AbstractElement
{
public:

    typedef CompoundElement_ptr ptr_type;

    CompoundElement();
    virtual ~CompoundElement();

    typedef std::vector < xtext::AbstractElement_ptr > elements_t;

    elements_t getElements() const;
    void addElements(xtext::AbstractElement_ptr elements_);
    void addAllElements(const elements_t& elements_);


    /*PROTECTED REGION ID(xtext::CompoundElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    std::vector < std::unique_ptr < xtext::AbstractElement > > m_elements;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::CompoundElement protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP
