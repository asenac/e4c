#ifndef EMF_CPP_WIDGETSMM_PACKAGE_HPP
#define EMF_CPP_WIDGETSMM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <widgetsmm/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace widgetsmm
{


class WidgetsmmPackage : public ::ecore::EPackage
{
public:
    static const WidgetsmmPackage_ptr _instance();

 	::ecore::EClass_ptr getWidget() const;
 	::ecore::EClass_ptr getComboBox() const;
 	::ecore::EClass_ptr getWindow() const;
 	::ecore::EClass_ptr getProperty() const;
 	
 	::ecore::EReference_ptr getWidget__parent() const;
 	::ecore::EReference_ptr getWidget__properties() const;
 	::ecore::EAttribute_ptr getWidget__name() const;
 	::ecore::EAttribute_ptr getWidget__type() const;
 	::ecore::EAttribute_ptr getComboBox__count() const;
 	::ecore::EAttribute_ptr getComboBox__currentIndex() const;
 	::ecore::EAttribute_ptr getWindow__title() const;
 	::ecore::EReference_ptr getWindow__children() const;
 	::ecore::EAttribute_ptr getProperty__name() const;
 	::ecore::EAttribute_ptr getProperty__value() const;

 	e4c::tag_t getTag_Widget() const;
 	e4c::tag_t getTag_ComboBox() const;
 	e4c::tag_t getTag_Window() const;
 	e4c::tag_t getTag_Property() const;
 
 	e4c::tag_t getTag_Widget__parent() const;
 	e4c::tag_t getTag_Widget__properties() const;
 	e4c::tag_t getTag_Widget__name() const;
 	e4c::tag_t getTag_Widget__type() const;
 	e4c::tag_t getTag_ComboBox__count() const;
 	e4c::tag_t getTag_ComboBox__currentIndex() const;
 	e4c::tag_t getTag_Window__title() const;
 	e4c::tag_t getTag_Window__children() const;
 	e4c::tag_t getTag_Property__name() const;
 	e4c::tag_t getTag_Property__value() const;

protected:
    WidgetsmmPackage();
    
 	::ecore::EClass_ptr m_Widget;
 	::ecore::EClass_ptr m_ComboBox;
 	::ecore::EClass_ptr m_Window;
 	::ecore::EClass_ptr m_Property;
 	::ecore::EReference_ptr m_Widget__parent;
 	::ecore::EReference_ptr m_Widget__properties;
 	::ecore::EAttribute_ptr m_Widget__name;
 	::ecore::EAttribute_ptr m_Widget__type;
 	::ecore::EAttribute_ptr m_ComboBox__count;
 	::ecore::EAttribute_ptr m_ComboBox__currentIndex;
 	::ecore::EAttribute_ptr m_Window__title;
 	::ecore::EReference_ptr m_Window__children;
 	::ecore::EAttribute_ptr m_Property__name;
 	::ecore::EAttribute_ptr m_Property__value;
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_PACKAGE_HPP
