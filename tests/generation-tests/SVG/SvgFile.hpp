
#ifndef EMF_CPP_SVG_SVGFILE__HPP
#define EMF_CPP_SVG_SVGFILE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/ReferencedFile.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class SvgFile :  public virtual ::SVG::ReferencedFile
{
public:

    typedef SvgFile_ptr ptr_type;

    SvgFile();
    virtual ~SvgFile();

    typedef SVG::Svg_ptr tag_t;
    typedef std::set < SVG::Element_ptr > elements_t;

    tag_t getTag() const;
    void setTag(tag_t tag_);
    elements_t getElements() const;
    void addElements(SVG::Element_ptr elements_);
    void addAllElements(const elements_t& elements_);


    /*PROTECTED REGION ID(SVG::SvgFile public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    SVG::Svg_ptr m_tag;
    std::set < SVG::Element_ptr > m_elements;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::SvgFile protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_SVGFILE__HPP
