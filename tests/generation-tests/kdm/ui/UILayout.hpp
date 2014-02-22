
#ifndef EMF_CPP_KDM_UI_UILAYOUT__HPP
#define EMF_CPP_KDM_UI_UILAYOUT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UILayout :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

    typedef UILayout_ptr ptr_type;

    UILayout();
    virtual ~UILayout();

    typedef kdm::ui::UIResource_ptr to_t;
    typedef kdm::ui::UIResource_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::ui::UILayout public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    kdm::ui::UIResource_ptr m_to;
    kdm::ui::UIResource_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UILayout protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UILAYOUT__HPP
