
#include "RelationalTable.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::RelationalTable include) START*/
/*PROTECTED REGION END*/

RelationalTable::RelationalTable()
{
	/*PROTECTED REGION ID(RelationalTable constructor) START*/
	/*PROTECTED REGION END*/
}

RelationalTable::~RelationalTable()
{
	/*PROTECTED REGION ID(RelationalTable destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::RelationalTable implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RelationalTable::eClassImpl() const
{
	return DataPackage::_instance()->getRelationalTable();
}
 
