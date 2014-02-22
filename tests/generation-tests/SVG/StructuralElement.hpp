
#ifndef EMF_CPP_SVG_STRUCTURALELEMENT__HPP
#define EMF_CPP_SVG_STRUCTURALELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Element.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class StructuralElement :  public virtual ::SVG::Element
{
public:

    typedef StructuralElement_ptr ptr_type;

    virtual ~StructuralElement();




    /*PROTECTED REGION ID(SVG::StructuralElement public) START*/
    /*PROTECTED REGION END*/

protected:
    StructuralElement();

    friend class SVGPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::StructuralElement protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_STRUCTURALELEMENT__HPP
