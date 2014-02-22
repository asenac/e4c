
#include "Image.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/ReferencedFile.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Image include) START*/
/*PROTECTED REGION END*/

Image::Image() :
    m_referee()
{
    /*PROTECTED REGION ID(Image constructor) START*/
    /*PROTECTED REGION END*/
}

Image::~Image()
{
    /*PROTECTED REGION ID(Image destructor) START*/
    /*PROTECTED REGION END*/
}

Image::referee_t Image::getReferee() const
{
    return e4c::returned(m_referee);
}

void Image::addReferee(SVG::ReferencedFile_ptr referee_)
{
    if (e4c::contains(m_referee, referee_))
        return;
    m_referee.insert(referee_);
    referee_->addReferer(this);
}

void Image::addAllReferee(const referee_t& referee_)
{
    for (auto i = referee_.begin(); i != referee_.end(); i++)
        addReferee(*i);
}



/*PROTECTED REGION ID(SVG::Image implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Image::eClassImpl() const
{
    return SVGPackage::_instance()->getImage();
}

