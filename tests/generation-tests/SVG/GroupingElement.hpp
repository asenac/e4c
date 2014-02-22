
#ifndef EMF_CPP_SVG_GROUPINGELEMENT__HPP
#define EMF_CPP_SVG_GROUPINGELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class GroupingElement :  public virtual ::SVG::StructuralElement
{
public:

    typedef GroupingElement_ptr ptr_type;

    virtual ~GroupingElement();

    typedef std::vector < SVG::Element_ptr > groupContent_t;

    groupContent_t getGroupContent() const;
    void addGroupContent(SVG::Element_ptr groupContent_);
    void addAllGroupContent(const groupContent_t& groupContent_);


    /*PROTECTED REGION ID(SVG::GroupingElement public) START*/
    /*PROTECTED REGION END*/

protected:
    GroupingElement();

    friend class SVGPackage;

    std::vector < std::unique_ptr < SVG::Element > > m_groupContent;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::GroupingElement protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_GROUPINGELEMENT__HPP
