
#ifndef EMF_CPP_SVG_REFERENCEDFILE__HPP
#define EMF_CPP_SVG_REFERENCEDFILE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::ReferencedFile
class ReferencedFile
{
public:

	typedef ReferencedFile_ptr ptr_type;
	
	virtual ~ReferencedFile();

	typedef std::vector < SVG::Image_ptr > referer_t;
	typedef int name_t;

	
	// TODO
	void setName(name_t _name);
	name_t getName() const;

	
protected:
	ReferencedFile();

	referer_t m_referer;
	name_t m_name;

};

} // SVG


#endif // EMF_CPP_SVG_REFERENCEDFILE__HPP
