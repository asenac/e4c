
#ifndef EMF_CPP_KDM_DATA_DATAACTION__HPP
#define EMF_CPP_KDM_DATA_DATAACTION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::DataAction
class DataAction :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef DataAction_ptr ptr_type;
	
	DataAction();
	virtual ~DataAction();

	typedef int kind_t;
	typedef std::vector < kdm::action::ActionElement_ptr > implementation_t;
	typedef boost::ptr_set < kdm::data::DataEvent > dataElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	// TODO
	// TODO

	
protected:

	kind_t m_kind;
	implementation_t m_implementation;
	dataElement_t m_dataElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAACTION__HPP
