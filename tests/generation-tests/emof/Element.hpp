
#ifndef EMF_CPP_EMOF_ELEMENT__HPP
#define EMF_CPP_EMOF_ELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Object.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Element
class Element :  public virtual ::emof::Object
{
public:

	typedef Element_ptr ptr_type;
	
	virtual ~Element();

	typedef boost::ptr_set < emof::Comment > ownedComment_t;
	typedef std::vector < emof::Tag_ptr > tag_t;

	
	// TODO
	// TODO

	
protected:
	Element();

	ownedComment_t m_ownedComment;
	tag_t m_tag;

};

} // emof


#endif // EMF_CPP_EMOF_ELEMENT__HPP
