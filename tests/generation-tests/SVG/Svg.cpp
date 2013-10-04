
#include "Svg.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Svg include) START*/
/*PROTECTED REGION END*/

Svg::Svg() : 
	m_owner_SVG(),
    m_children(),
    m_namespace(),
    m_version(),
    m_baseProfile()
{
	/*PROTECTED REGION ID(Svg constructor) START*/
	/*PROTECTED REGION END*/
}

Svg::~Svg()
{
	/*PROTECTED REGION ID(Svg destructor) START*/
	/*PROTECTED REGION END*/
}

Svg::owner_SVG_t Svg::getOwner_SVG() const
{
	return e4c::returned(m_owner_SVG);
}

void Svg::addOwner_SVG(SVG::SvgFile_ptr owner_SVG_)
{
	if (e4c::contains(m_owner_SVG, owner_SVG_))
		return;
	m_owner_SVG.insert(owner_SVG_);
	owner_SVG_->setTag(this);
}

void Svg::addAllOwner_SVG(const owner_SVG_t& owner_SVG_)
{
	for (auto i = owner_SVG_.begin(); i != owner_SVG_.end(); i++)
		addOwner_SVG(*i);
}

Svg::children_t Svg::getChildren() const
{
	return e4c::returned(m_children);
}


void Svg::addChildren(SVG::Element_ptr children_)
{
	children_->setRoot(this);
	m_children.push_back(std::unique_ptr < SVG::Element >(children_));
}

void Svg::addAllChildren(const children_t& children_)
{
	for (auto i = children_.begin(); i != children_.end(); i++)
		addChildren(*i);
}

void Svg::setNamespace(namespace_t _namespace)
{
	m_namespace = _namespace;;
}

Svg::namespace_t Svg::getNamespace() const
{
	return m_namespace;
}

void Svg::setVersion(version_t _version)
{
	m_version = _version;;
}

Svg::version_t Svg::getVersion() const
{
	return m_version;
}

void Svg::setBaseProfile(baseProfile_t _baseProfile)
{
	m_baseProfile = _baseProfile;;
}

Svg::baseProfile_t Svg::getBaseProfile() const
{
	return m_baseProfile;
}



/*PROTECTED REGION ID(SVG::Svg implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Svg::eClassImpl() const
{
	return SVGPackage::_instance()->getSvg();
}
 
