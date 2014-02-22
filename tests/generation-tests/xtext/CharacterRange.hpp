
#ifndef EMF_CPP_XTEXT_CHARACTERRANGE__HPP
#define EMF_CPP_XTEXT_CHARACTERRANGE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class CharacterRange :  public virtual ::xtext::AbstractElement
{
public:

    typedef CharacterRange_ptr ptr_type;

    CharacterRange();
    virtual ~CharacterRange();

    typedef xtext::Keyword_ptr left_t;
    typedef xtext::Keyword_ptr right_t;

    left_t getLeft() const;
    void setLeft(left_t left_);
    left_t releaseLeft();
    right_t getRight() const;
    void setRight(right_t right_);
    right_t releaseRight();


    /*PROTECTED REGION ID(xtext::CharacterRange public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    std::unique_ptr < xtext::Keyword > m_left;
    std::unique_ptr < xtext::Keyword > m_right;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::CharacterRange protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_CHARACTERRANGE__HPP
