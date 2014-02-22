
#ifndef EMF_CPP_SVG_POINT__HPP
#define EMF_CPP_SVG_POINT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Point :  public virtual ::SVG::Shape
{
public:

    typedef Point_ptr ptr_type;

    Point();
    virtual ~Point();




    /*PROTECTED REGION ID(SVG::Point public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Point protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_POINT__HPP
