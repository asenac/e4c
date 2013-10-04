
#include "SvgFile.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Svg.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::SvgFile include) START*/
/*PROTECTED REGION END*/

SvgFile::SvgFile() : 
	m_tag(),
    m_elements()
{
	/*PROTECTED REGION ID(SvgFile constructor) START*/
	/*PROTECTED REGION END*/
}

SvgFile::~SvgFile()
{
	/*PROTECTED REGION ID(SvgFile destructor) START*/
	/*PROTECTED REGION END*/
}

SvgFile::tag_t SvgFile::getTag() const
{
	return e4c::returned(m_tag);
}

void SvgFile::setTag(tag_t tag_)
{
	if (m_tag == tag_)
		return;
	if (m_tag)
		; // TODO remove me
	m_tag = tag_;
	if (m_tag)
		m_tag->addOwner_SVG(this);
}

SvgFile::elements_t SvgFile::getElements() const
{
	return e4c::returned(m_elements);
}

void SvgFile::addElements(SVG::Element_ptr elements_)
{
	if (e4c::contains(m_elements, elements_))
		return;
	m_elements.insert(elements_);
	elements_->addOwner(this);
}

void SvgFile::addAllElements(const elements_t& elements_)
{
	for (auto i = elements_.begin(); i != elements_.end(); i++)
		addElements(*i);
}



/*PROTECTED REGION ID(SVG::SvgFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SvgFile::eClassImpl() const
{
	return SVGPackage::_instance()->getSvgFile();
}
 
