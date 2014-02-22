
#ifndef EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
#define EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class AbstractUIElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractUIElement_ptr ptr_type;

    virtual ~AbstractUIElement();

    typedef std::set < kdm::source::SourceRef_ptr > source_t;
    typedef std::set < kdm::ui::AbstractUIRelationship_ptr > UIRelation_t;
    typedef std::set < kdm::code::AbstractCodeElement_ptr > implementation_t;
    typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;

    source_t getSource() const;
    void addSource(kdm::source::SourceRef_ptr source_);
    void addAllSource(const source_t& source_);
    UIRelation_t getUIRelation() const;
    void addUIRelation(kdm::ui::AbstractUIRelationship_ptr UIRelation_);
    void addAllUIRelation(const UIRelation_t& UIRelation_);
    implementation_t getImplementation() const;
    void addImplementation(kdm::code::AbstractCodeElement_ptr implementation_);
    void addAllImplementation(const implementation_t& implementation_);
    abstraction_t getAbstraction() const;
    void addAbstraction(kdm::action::ActionElement_ptr abstraction_);
    void addAllAbstraction(const abstraction_t& abstraction_);


    /*PROTECTED REGION ID(kdm::ui::AbstractUIElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractUIElement();

    friend class UiPackage;

    std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
    std::set < std::unique_ptr < kdm::ui::AbstractUIRelationship > > m_UIRelation;
    std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;
    std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::AbstractUIElement protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIELEMENT__HPP
