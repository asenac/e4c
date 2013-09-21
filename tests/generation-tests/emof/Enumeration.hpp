
#ifndef EMF_CPP_EMOF_ENUMERATION__HPP
#define EMF_CPP_EMOF_ENUMERATION__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/DataType.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Enumeration
class Enumeration :  public virtual ::emof::DataType
{
public:

	typedef Enumeration_ptr ptr_type;
	
	Enumeration();
	virtual ~Enumeration();

	typedef std::vector < emof::EnumerationLiteral_ptr > ownedLiteral_t;

	
	ownedLiteral_t getOwnedLiteral() const;


	std::vector < std::unique_ptr < emof::EnumerationLiteral > > m_ownedLiteral;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_ENUMERATION__HPP
