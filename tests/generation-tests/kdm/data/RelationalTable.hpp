
#ifndef EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP
#define EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class RelationalTable :  public virtual ::kdm::data::ColumnSet
{
public:

	typedef RelationalTable_ptr ptr_type;
	
	RelationalTable();
	virtual ~RelationalTable();

	
	

	/*PROTECTED REGION ID(kdm::data::RelationalTable public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::RelationalTable protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALTABLE__HPP
