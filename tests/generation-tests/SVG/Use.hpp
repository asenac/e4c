
#ifndef EMF_CPP_SVG_USE__HPP
#define EMF_CPP_SVG_USE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Use :  public virtual ::SVG::StructuralElement
{
public:

    typedef Use_ptr ptr_type;

    Use();
    virtual ~Use();

    typedef std::set < SVG::Element_ptr > use_t;

    use_t getUse() const;
    void addUse(SVG::Element_ptr use_);
    void addAllUse(const use_t& use_);


    /*PROTECTED REGION ID(SVG::Use public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    std::set < SVG::Element_ptr > m_use;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Use protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_USE__HPP
