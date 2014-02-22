
#ifndef EMF_CPP_SVG_ROTATE__HPP
#define EMF_CPP_SVG_ROTATE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Transform.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Rotate :  public virtual ::SVG::Transform
{
public:

    typedef Rotate_ptr ptr_type;

    Rotate();
    virtual ~Rotate();

    typedef ::PrimitiveTypes::Double angle_t;
    typedef ::PrimitiveTypes::Double cx_t;
    typedef ::PrimitiveTypes::Double cy_t;

    void setAngle(angle_t _angle);
    angle_t getAngle() const;
    void setCx(cx_t _cx);
    cx_t getCx() const;
    void setCy(cy_t _cy);
    cy_t getCy() const;


    /*PROTECTED REGION ID(SVG::Rotate public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    angle_t m_angle;
    cx_t m_cx;
    cy_t m_cy;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Rotate protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_ROTATE__HPP
