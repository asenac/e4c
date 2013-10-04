
#include "SeqContent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::SeqContent include) START*/
/*PROTECTED REGION END*/

SeqContent::SeqContent()
{
	/*PROTECTED REGION ID(SeqContent constructor) START*/
	/*PROTECTED REGION END*/
}

SeqContent::~SeqContent()
{
	/*PROTECTED REGION ID(SeqContent destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::SeqContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SeqContent::eClassImpl() const
{
	return DataPackage::_instance()->getSeqContent();
}
 
