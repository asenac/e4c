
#ifndef EMF_CPP_SVG_DIMENSION__HPP
#define EMF_CPP_SVG_DIMENSION__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Dimension : ::ecore::EObject
{
public:

    typedef Dimension_ptr ptr_type;

    Dimension();
    virtual ~Dimension();

    typedef ::PrimitiveTypes::Double width_t;
    typedef ::PrimitiveTypes::Double height_t;

    void setWidth(width_t _width);
    width_t getWidth() const;
    void setHeight(height_t _height);
    height_t getHeight() const;


    /*PROTECTED REGION ID(SVG::Dimension public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    width_t m_width;
    height_t m_height;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Dimension protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_DIMENSION__HPP
