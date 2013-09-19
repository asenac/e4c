
#ifndef EMF_CPP_COMPANY_META_HPP
#define EMF_CPP_COMPANY_META_HPP

#include <e4c/definition.hpp>
#include <company/fwd.hpp>

#include <ecore/fwd.hpp>

namespace company
{



struct Employee__name_tag
{
	typedef Employee eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Department__employees_tag
{
	typedef Department eClass;
	typedef ::company::Employee eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Department__employees_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Department__manager_tag
{
	typedef Department eClass;
	typedef ::company::Employee eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Department__manager_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Department__number_tag
{
	typedef Department eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Company__name_tag
{
	typedef Company eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Company__departments_tag
{
	typedef Company eClass;
	typedef ::company::Department eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Company__departments_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // company


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::company::CompanyPackage >
{
	typedef boost::mpl::list< ::company::Employee,
	                          ::company::Department,
	                          ::company::Company > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::company::Employee >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::company::Employee__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::company::Employee__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::company::Employee >
{
	static const char * get()
	{
		return "Employee";
	}
};


template < >
struct name< ::company::Employee__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::company::Department >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::company::Department__employees_tag,
	                          ::company::Department__manager_tag,
	                          ::company::Department__number_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::company::Department__employees_tag,
	                          ::company::Department__manager_tag,
	                          ::company::Department__number_tag > eAllStructuralFeatures;
};

template < >
struct name< ::company::Department >
{
	static const char * get()
	{
		return "Department";
	}
};


template < >
struct name< ::company::Department__employees_tag >
{
	static const char * get()
	{
		return "employees";
	}
};


template < >
struct name< ::company::Department__manager_tag >
{
	static const char * get()
	{
		return "manager";
	}
};


template < >
struct name< ::company::Department__number_tag >
{
	static const char * get()
	{
		return "number";
	}
};


template < >
struct eclass< ::company::Company >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::company::Company__name_tag,
	                          ::company::Company__departments_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::company::Company__name_tag,
	                          ::company::Company__departments_tag > eAllStructuralFeatures;
};

template < >
struct name< ::company::Company >
{
	static const char * get()
	{
		return "Company";
	}
};


template < >
struct name< ::company::Company__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::company::Company__departments_tag >
{
	static const char * get()
	{
		return "departments";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_COMPANY_Meta_HPP
