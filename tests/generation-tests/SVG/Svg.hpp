
#ifndef EMF_CPP_SVG_SVG__HPP
#define EMF_CPP_SVG_SVG__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/StructuralElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Svg
class Svg :  public virtual ::SVG::StructuralElement
{
public:

	typedef Svg_ptr ptr_type;
	
	Svg();
	virtual ~Svg();

	typedef std::vector < SVG::SvgFile_ptr > owner_SVG_t;
	typedef boost::ptr_vector < SVG::Element > children_t;
	typedef int namespace_t;
	typedef int version_t;
	typedef int baseProfile_t;

	
	// TODO
	// TODO
	void setNamespace(namespace_t _namespace);
	namespace_t getNamespace() const;
	void setVersion(version_t _version);
	version_t getVersion() const;
	void setBaseProfile(baseProfile_t _baseProfile);
	baseProfile_t getBaseProfile() const;

	
protected:

	owner_SVG_t m_owner_SVG;
	children_t m_children;
	namespace_t m_namespace;
	version_t m_version;
	baseProfile_t m_baseProfile;

};

} // SVG


#endif // EMF_CPP_SVG_SVG__HPP
