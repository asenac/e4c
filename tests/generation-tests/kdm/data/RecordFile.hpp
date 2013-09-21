
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


// kdm::data::RecordFile
class RecordFile :  public virtual ::kdm::data::ColumnSet
{
public:

	typedef RecordFile_ptr ptr_type;
	
	RecordFile();
	virtual ~RecordFile();

	
	
	

	
		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RECORDFILE__HPP
