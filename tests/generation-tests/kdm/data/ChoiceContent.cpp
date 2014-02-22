
#include "ChoiceContent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ChoiceContent include) START*/
/*PROTECTED REGION END*/

ChoiceContent::ChoiceContent()
{
    /*PROTECTED REGION ID(ChoiceContent constructor) START*/
    /*PROTECTED REGION END*/
}

ChoiceContent::~ChoiceContent()
{
    /*PROTECTED REGION ID(ChoiceContent destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ChoiceContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ChoiceContent::eClassImpl() const
{
    return DataPackage::_instance()->getChoiceContent();
}

