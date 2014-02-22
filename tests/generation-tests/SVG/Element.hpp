
#ifndef EMF_CPP_SVG_ELEMENT__HPP
#define EMF_CPP_SVG_ELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Element : ::ecore::EObject
{
public:

    typedef Element_ptr ptr_type;

    virtual ~Element();

    typedef std::set < SVG::SvgFile_ptr > owner_t;
    typedef std::set < SVG::Use_ptr > target_t;
    typedef std::set < SVG::Attribute_ptr > attribute_t;
    typedef SVG::Coordinates_ptr position_t;
    typedef SVG::Dimension_ptr size_t;
    typedef SVG::Svg_ptr root_t;
    typedef ::PrimitiveTypes::String fill_t;
    typedef ::PrimitiveTypes::String viewBox_t;
    typedef SVG::GroupingElement_ptr group_t;
    typedef ::PrimitiveTypes::String identifier_t;
    typedef SVG::Marker_ptr drawsMarker_t;

    owner_t getOwner() const;
    void addOwner(SVG::SvgFile_ptr owner_);
    void addAllOwner(const owner_t& owner_);
    target_t getTarget() const;
    void addTarget(SVG::Use_ptr target_);
    void addAllTarget(const target_t& target_);
    attribute_t getAttribute() const;
    void addAttribute(SVG::Attribute_ptr attribute_);
    void addAllAttribute(const attribute_t& attribute_);
    position_t getPosition() const;
    void setPosition(position_t position_);
    position_t releasePosition();
    size_t getSize() const;
    void setSize(size_t size_);
    size_t releaseSize();
    root_t getRoot() const;
    void setFill(fill_t _fill);
    fill_t getFill() const;
    void setViewBox(viewBox_t _viewBox);
    viewBox_t getViewBox() const;
    group_t getGroup() const;
    void setIdentifier(identifier_t _identifier);
    identifier_t getIdentifier() const;
    drawsMarker_t getDrawsMarker() const;


    /*PROTECTED REGION ID(SVG::Element public) START*/
    /*PROTECTED REGION END*/

protected:
    Element();

    friend class SVGPackage;

    std::set < SVG::SvgFile_ptr > m_owner;
    std::set < SVG::Use_ptr > m_target;
    std::set < SVG::Attribute_ptr > m_attribute;
    std::unique_ptr < SVG::Coordinates > m_position;
    std::unique_ptr < SVG::Dimension > m_size;
    SVG::Svg_ptr m_root;
    fill_t m_fill;
    viewBox_t m_viewBox;
    SVG::GroupingElement_ptr m_group;
    identifier_t m_identifier;
    SVG::Marker_ptr m_drawsMarker;


    friend class ::SVG::Svg;
    void setRoot(root_t root_);
    friend class ::SVG::GroupingElement;
    void setGroup(group_t group_);
    friend class ::SVG::Marker;
    void setDrawsMarker(drawsMarker_t drawsMarker_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Element protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_ELEMENT__HPP
