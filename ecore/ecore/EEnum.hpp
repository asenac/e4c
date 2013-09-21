
#ifndef EMF_CPP_ECORE_EENUM__HPP
#define EMF_CPP_ECORE_EENUM__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EDataType.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EEnum :  public virtual ::ecore::EDataType
{
public:

	typedef EEnum_ptr ptr_type;
	
	EEnum();
	virtual ~EEnum();

	typedef std::vector < ecore::EEnumLiteral_ptr > eLiterals_t;

	
	eLiterals_t getELiterals() const;
	void addELiterals(ecore::EEnumLiteral_ptr eLiterals_);
	void addAllELiterals(const eLiterals_t& eLiterals_);

		
protected:

	std::vector < std::unique_ptr < ecore::EEnumLiteral > > m_eLiterals;

	
};

} // ecore


#endif // EMF_CPP_ECORE_EENUM__HPP
