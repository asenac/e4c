
#ifndef EMF_CPP_KDM_SOURCE_SOURCEREF__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEREF__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::SourceRef
class SourceRef :  public virtual ::kdm::core::Element
{
public:

	typedef SourceRef_ptr ptr_type;
	
	SourceRef();
	virtual ~SourceRef();

	typedef boost::ptr_set < kdm::source::SourceRegion > region_t;
	typedef int language_t;
	typedef int snippet_t;

	
	// TODO
	void setLanguage(language_t _language);
	language_t getLanguage() const;
	void setSnippet(snippet_t _snippet);
	snippet_t getSnippet() const;

	
protected:

	region_t m_region;
	language_t m_language;
	snippet_t m_snippet;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEREF__HPP
