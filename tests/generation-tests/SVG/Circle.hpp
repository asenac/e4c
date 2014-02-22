
#ifndef EMF_CPP_SVG_CIRCLE__HPP
#define EMF_CPP_SVG_CIRCLE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Circle :  public virtual ::SVG::Shape
{
public:

    typedef Circle_ptr ptr_type;

    Circle();
    virtual ~Circle();




    /*PROTECTED REGION ID(SVG::Circle public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Circle protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_CIRCLE__HPP
