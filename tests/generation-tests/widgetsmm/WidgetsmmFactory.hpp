#ifndef EMF_CPP_WIDGETSMM_FACTORY_HPP
#define EMF_CPP_WIDGETSMM_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <widgetsmm/fwd.hpp>

namespace widgetsmm
{


class WidgetsmmFactory : public ::ecore::EFactory
{
public:

    static const WidgetsmmFactory_ptr _instance();

    Widget_ptr createWidget() const;
    ComboBox_ptr createComboBox() const;
    Window_ptr createWindow() const;
    Property_ptr createProperty() const;

protected:

    WidgetsmmFactory();
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_FACTORY_HPP
