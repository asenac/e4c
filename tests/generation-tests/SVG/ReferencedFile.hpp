
#ifndef EMF_CPP_SVG_REFERENCEDFILE__HPP
#define EMF_CPP_SVG_REFERENCEDFILE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class ReferencedFile : ::ecore::EObject
{
public:

    typedef ReferencedFile_ptr ptr_type;

    virtual ~ReferencedFile();

    typedef std::set < SVG::Image_ptr > referer_t;
    typedef ::PrimitiveTypes::String name_t;

    referer_t getReferer() const;
    void addReferer(SVG::Image_ptr referer_);
    void addAllReferer(const referer_t& referer_);
    void setName(name_t _name);
    name_t getName() const;


    /*PROTECTED REGION ID(SVG::ReferencedFile public) START*/
    /*PROTECTED REGION END*/

protected:
    ReferencedFile();

    friend class SVGPackage;

    std::set < SVG::Image_ptr > m_referer;
    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::ReferencedFile protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_REFERENCEDFILE__HPP
