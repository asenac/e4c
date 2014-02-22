
#ifndef EMF_CPP_SVG_TEXTELEMENT__HPP
#define EMF_CPP_SVG_TEXTELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GraphicalElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class TextElement :  public virtual ::SVG::GraphicalElement
{
public:

    typedef TextElement_ptr ptr_type;

    virtual ~TextElement();

    typedef ::PrimitiveTypes::Double rotate_t;
    typedef ::PrimitiveTypes::String textLength_t;
    typedef ::PrimitiveTypes::String fontSize_t;

    void setRotate(rotate_t _rotate);
    rotate_t getRotate() const;
    void setTextLength(textLength_t _textLength);
    textLength_t getTextLength() const;
    void setFontSize(fontSize_t _fontSize);
    fontSize_t getFontSize() const;


    /*PROTECTED REGION ID(SVG::TextElement public) START*/
    /*PROTECTED REGION END*/

protected:
    TextElement();

    friend class SVGPackage;

    rotate_t m_rotate;
    textLength_t m_textLength;
    fontSize_t m_fontSize;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::TextElement protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_TEXTELEMENT__HPP
