
#ifndef EMF_CPP_WIDGETSMM_WINDOW__HPP
#define EMF_CPP_WIDGETSMM_WINDOW__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <widgetsmm/Widget.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


class Window :  public virtual ::widgetsmm::Widget
{
public:

    typedef Window_ptr ptr_type;

    Window();
    virtual ~Window();

    typedef ::ecore::EString title_t;
    typedef std::vector < widgetsmm::Widget_ptr > children_t;

    void setTitle(title_t _title);
    title_t getTitle() const;
    children_t getChildren() const;
    void addChildren(widgetsmm::Widget_ptr children_);
    void addAllChildren(const children_t& children_);


    /*PROTECTED REGION ID(widgetsmm::Window public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class WidgetsmmPackage;

    title_t m_title;
    std::vector < std::unique_ptr < widgetsmm::Widget > > m_children;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(widgetsmm::Window protected) START*/
    /*PROTECTED REGION END*/
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_WINDOW__HPP
