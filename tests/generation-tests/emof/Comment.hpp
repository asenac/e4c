
#ifndef EMF_CPP_EMOF_COMMENT__HPP
#define EMF_CPP_EMOF_COMMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Element.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Comment :  public virtual ::emof::Element
{
public:

	typedef Comment_ptr ptr_type;
	
	Comment();
	virtual ~Comment();

	typedef std::set < emof::NamedElement_ptr > annotatedElement_t;
	
	annotatedElement_t getAnnotatedElement() const;
	void addAnnotatedElement(emof::NamedElement_ptr annotatedElement_);
	void addAllAnnotatedElement(const annotatedElement_t& annotatedElement_);
	

	/*PROTECTED REGION ID(emof::Comment public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	std::set < emof::NamedElement_ptr > m_annotatedElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Comment protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_COMMENT__HPP
