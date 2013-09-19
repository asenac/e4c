
#ifndef EMF_CPP_KDM_KDM_AUDIT__HPP
#define EMF_CPP_KDM_KDM_AUDIT__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::Audit
class Audit :  public virtual ::kdm::core::Element
{
public:

	typedef Audit_ptr ptr_type;
	
	Audit();
	virtual ~Audit();

	typedef int description_t;
	typedef int author_t;
	typedef int date_t;

	
	void setDescription(description_t _description);
	description_t getDescription() const;
	void setAuthor(author_t _author);
	author_t getAuthor() const;
	void setDate(date_t _date);
	date_t getDate() const;

	
protected:

	description_t m_description;
	author_t m_author;
	date_t m_date;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_AUDIT__HPP
