
#ifndef EMF_CPP_MAKE_FILEDEP__HPP
#define EMF_CPP_MAKE_FILEDEP__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Dependency.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::FileDep
class FileDep :  public virtual ::Make::Dependency
{
public:

	typedef FileDep_ptr ptr_type;
	
	FileDep();
	virtual ~FileDep();

	typedef ::PrimitiveTypes::String name_t;

	
	void setName(name_t _name);
	name_t getName() const;


	name_t m_name;

		
protected:

};

} // Make


#endif // EMF_CPP_MAKE_FILEDEP__HPP
