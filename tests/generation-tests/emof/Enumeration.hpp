
#ifndef EMF_CPP_EMOF_ENUMERATION__HPP
#define EMF_CPP_EMOF_ENUMERATION__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/DataType.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Enumeration :  public virtual ::emof::DataType
{
public:

	typedef Enumeration_ptr ptr_type;
	
	Enumeration();
	virtual ~Enumeration();

	typedef std::vector < emof::EnumerationLiteral_ptr > ownedLiteral_t;
	
	ownedLiteral_t getOwnedLiteral() const;
	void addOwnedLiteral(emof::EnumerationLiteral_ptr ownedLiteral_);
	void addAllOwnedLiteral(const ownedLiteral_t& ownedLiteral_);
	

	/*PROTECTED REGION ID(emof::Enumeration public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	std::vector < std::unique_ptr < emof::EnumerationLiteral > > m_ownedLiteral;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Enumeration protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_ENUMERATION__HPP
