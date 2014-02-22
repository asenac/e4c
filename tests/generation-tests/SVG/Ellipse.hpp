
#ifndef EMF_CPP_SVG_ELLIPSE__HPP
#define EMF_CPP_SVG_ELLIPSE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Ellipse :  public virtual ::SVG::Shape
{
public:

    typedef Ellipse_ptr ptr_type;

    Ellipse();
    virtual ~Ellipse();




    /*PROTECTED REGION ID(SVG::Ellipse public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Ellipse protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_ELLIPSE__HPP
