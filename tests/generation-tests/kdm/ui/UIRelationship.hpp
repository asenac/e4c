
#ifndef EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
#define EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIRelationship :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

    typedef UIRelationship_ptr ptr_type;

    UIRelationship();
    virtual ~UIRelationship();

    typedef kdm::core::KDMEntity_ptr to_t;
    typedef kdm::ui::AbstractUIElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::ui::UIRelationship public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    kdm::core::KDMEntity_ptr m_to;
    kdm::ui::AbstractUIElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRELATIONSHIP__HPP
