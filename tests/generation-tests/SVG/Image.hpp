
#ifndef EMF_CPP_SVG_IMAGE__HPP
#define EMF_CPP_SVG_IMAGE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Image :  public virtual ::SVG::StructuralElement
{
public:

    typedef Image_ptr ptr_type;

    Image();
    virtual ~Image();

    typedef std::set < SVG::ReferencedFile_ptr > referee_t;

    referee_t getReferee() const;
    void addReferee(SVG::ReferencedFile_ptr referee_);
    void addAllReferee(const referee_t& referee_);


    /*PROTECTED REGION ID(SVG::Image public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    std::set < SVG::ReferencedFile_ptr > m_referee;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Image protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_IMAGE__HPP
