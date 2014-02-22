
#ifndef EMF_CPP_SVG_SHAPE__HPP
#define EMF_CPP_SVG_SHAPE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GraphicalElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Shape :  public virtual ::SVG::GraphicalElement
{
public:

    typedef Shape_ptr ptr_type;

    virtual ~Shape();




    /*PROTECTED REGION ID(SVG::Shape public) START*/
    /*PROTECTED REGION END*/

protected:
    Shape();

    friend class SVGPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Shape protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_SHAPE__HPP
