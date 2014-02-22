
#ifndef EMF_CPP_KDM_UI_READSUI__HPP
#define EMF_CPP_KDM_UI_READSUI__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class ReadsUI :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

    typedef ReadsUI_ptr ptr_type;

    ReadsUI();
    virtual ~ReadsUI();

    typedef kdm::ui::UIResource_ptr to_t;
    typedef kdm::action::ActionElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::ui::ReadsUI public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    kdm::ui::UIResource_ptr m_to;
    kdm::action::ActionElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::ReadsUI protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_READSUI__HPP
