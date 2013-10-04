
#include "ReferencedFile.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Image.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::ReferencedFile include) START*/
/*PROTECTED REGION END*/

ReferencedFile::ReferencedFile() : 
	m_referer(),
    m_name()
{
	/*PROTECTED REGION ID(ReferencedFile constructor) START*/
	/*PROTECTED REGION END*/
}

ReferencedFile::~ReferencedFile()
{
	/*PROTECTED REGION ID(ReferencedFile destructor) START*/
	/*PROTECTED REGION END*/
}

ReferencedFile::referer_t ReferencedFile::getReferer() const
{
	return e4c::returned(m_referer);
}

void ReferencedFile::addReferer(SVG::Image_ptr referer_)
{
	if (e4c::contains(m_referer, referer_))
		return;
	m_referer.insert(referer_);
	referer_->addReferee(this);
}

void ReferencedFile::addAllReferer(const referer_t& referer_)
{
	for (auto i = referer_.begin(); i != referer_.end(); i++)
		addReferer(*i);
}

void ReferencedFile::setName(name_t _name)
{
	m_name = _name;;
}

ReferencedFile::name_t ReferencedFile::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(SVG::ReferencedFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReferencedFile::eClassImpl() const
{
	return SVGPackage::_instance()->getReferencedFile();
}
 
