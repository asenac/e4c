
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

	typedef std::set < emof::Comment_ptr > ownedComment_t;
	typedef std::set < emof::Tag_ptr > tag_t;

	
	ownedComment_t getOwnedComment() const;
	tag_t getTag() const;


	std::set < std::unique_ptr < emof::Comment > > m_ownedComment;
	std::set < emof::Tag_ptr > m_tag;

		
protected:
	Element();

};

} // emof


#endif // EMF_CPP_EMOF_ELEMENT__HPP
