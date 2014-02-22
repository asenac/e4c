
#ifndef EMF_CPP_SVG_SVG__HPP
#define EMF_CPP_SVG_SVG__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Svg :  public virtual ::SVG::StructuralElement
{
public:

    typedef Svg_ptr ptr_type;

    Svg();
    virtual ~Svg();

    typedef std::set < SVG::SvgFile_ptr > owner_SVG_t;
    typedef std::vector < SVG::Element_ptr > children_t;
    typedef ::PrimitiveTypes::String namespace_t;
    typedef ::PrimitiveTypes::String version_t;
    typedef ::PrimitiveTypes::String baseProfile_t;

    owner_SVG_t getOwner_SVG() const;
    void addOwner_SVG(SVG::SvgFile_ptr owner_SVG_);
    void addAllOwner_SVG(const owner_SVG_t& owner_SVG_);
    children_t getChildren() const;
    void addChildren(SVG::Element_ptr children_);
    void addAllChildren(const children_t& children_);
    void setNamespace(namespace_t _namespace);
    namespace_t getNamespace() const;
    void setVersion(version_t _version);
    version_t getVersion() const;
    void setBaseProfile(baseProfile_t _baseProfile);
    baseProfile_t getBaseProfile() const;


    /*PROTECTED REGION ID(SVG::Svg public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    std::set < SVG::SvgFile_ptr > m_owner_SVG;
    std::vector < std::unique_ptr < SVG::Element > > m_children;
    namespace_t m_namespace;
    version_t m_version;
    baseProfile_t m_baseProfile;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Svg protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_SVG__HPP
