
#ifndef EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP
#define EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::ReadsColumnSet
class ReadsColumnSet :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsColumnSet_ptr ptr_type;
	
	ReadsColumnSet();
	virtual ~ReadsColumnSet();

	typedef kdm::data::ColumnSet_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::data::ColumnSet_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP
