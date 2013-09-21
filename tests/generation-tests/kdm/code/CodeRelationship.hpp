
#ifndef EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP
#define EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::CodeRelationship
class CodeRelationship :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef CodeRelationship_ptr ptr_type;
	
	CodeRelationship();
	virtual ~CodeRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::code::CodeItem_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::code::CodeItem_ptr m_from;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODERELATIONSHIP__HPP
