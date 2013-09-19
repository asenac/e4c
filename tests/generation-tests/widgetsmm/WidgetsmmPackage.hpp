#ifndef EMF_CPP_WIDGETSMM_PACKAGE_HPP
#define EMF_CPP_WIDGETSMM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <widgetsmm/fwd.hpp>

namespace widgetsmm
{


class WidgetsmmPackage : public ::ecore::EPackage
{
public:
    static const WidgetsmmPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Widget() const;
 	e4c::tag_t getTag_ComboBox() const;
 	e4c::tag_t getTag_Window() const;
 	e4c::tag_t getTag_Property() const;
 
 	// Structural features
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
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_PACKAGE_HPP
