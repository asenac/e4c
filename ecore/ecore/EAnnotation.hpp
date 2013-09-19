
#ifndef EMF_CPP_ECORE_EANNOTATION__HPP
#define EMF_CPP_ECORE_EANNOTATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EAnnotation
class EAnnotation :  public virtual ::ecore::EModelElement
{
public:

	typedef EAnnotation_ptr ptr_type;
	
	EAnnotation();
	virtual ~EAnnotation();

	typedef int source_t;
	typedef boost::ptr_vector < ecore::EStringToStringMapEntry > details_t;
	typedef ecore::EModelElement_ptr eModelElement_t;
	typedef boost::ptr_vector < ecore::EObject > contents_t;
	typedef std::set < ecore::EObject_ptr > references_t;

	
	void setSource(source_t _source);
	source_t getSource() const;
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	source_t m_source;
	details_t m_details;
	eModelElement_t m_eModelElement;
	contents_t m_contents;
	references_t m_references;

};

} // ecore


#endif // EMF_CPP_ECORE_EANNOTATION__HPP
