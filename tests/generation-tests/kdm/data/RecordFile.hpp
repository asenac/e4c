
#ifndef EMF_CPP_KDM_DATA_RECORDFILE__HPP
#define EMF_CPP_KDM_DATA_RECORDFILE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class RecordFile :  public virtual ::kdm::data::ColumnSet
{
public:

	typedef RecordFile_ptr ptr_type;
	
	RecordFile();
	virtual ~RecordFile();

	
	

	/*PROTECTED REGION ID(kdm::data::RecordFile public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::RecordFile protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RECORDFILE__HPP
