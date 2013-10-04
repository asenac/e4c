
#include "Image.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::Image include) START*/
/*PROTECTED REGION END*/

Image::Image()
{
	/*PROTECTED REGION ID(Image constructor) START*/
	/*PROTECTED REGION END*/
}

Image::~Image()
{
	/*PROTECTED REGION ID(Image destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::Image implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Image::eClassImpl() const
{
	return SourcePackage::_instance()->getImage();
}
 
