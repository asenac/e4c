
#include "Report.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::Report include) START*/
/*PROTECTED REGION END*/

Report::Report()
{
	/*PROTECTED REGION ID(Report constructor) START*/
	/*PROTECTED REGION END*/
}

Report::~Report()
{
	/*PROTECTED REGION ID(Report destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::Report implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Report::eClassImpl() const
{
	return UiPackage::_instance()->getReport();
}
 
