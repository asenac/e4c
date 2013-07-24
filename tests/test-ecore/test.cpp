#include <ecore/include.hpp>
#include <cassert>
#include <iostream>
#include <memory>
#include <cstring>
#include <boost/shared_ptr.hpp>

int main()
{
    {
        ecore::EClass cl;

        cl.name = 1;
        int a = cl.name;

        boost::shared_ptr< ecore::EClass > ocl(new ecore::EClass());

        cl.eSuperTypes.push_back(ocl.get());

        std::cout << a << std::endl;
        std::cout << cl.eSuperTypes.name() << std::endl;
        std::cout << cl.eSuperTypes.tag() << std::endl;
        std::cout << cl.interface.name() << std::endl;

        assert(std::strcmp(cl.eSuperTypes.name(), "eSuperTypes") == 0);
        assert(std::strcmp(cl.interface.name(), "interface") == 0);

        std::cout << "Features:" << std::endl;
        e4c::eclass::structural_features_iterator it = cl._begin();
        for (; it != cl._end(); it++)
        {
            std::cout 
                << "    " 
                << (*it)->name() 
                << "\t\t"
                << (*it)->tag() 
                << std::endl;
        }
    }

    // Test
    {
        ecore::EPackage p;
        std::auto_ptr< ecore::EClass > cl(new ecore::EClass);
        ecore::EClass * e = cl.get();
        e->name = 2;

        // p assumes its ownership
        p.eClassifiers.push_back(cl.release());
        assert(e->ePackage == &p);
        assert(p.eClassifiers.size() == 1);
        assert(e == p.eClassifiers[0]); // no copies
        
        ecore::EPackage p2;
        p.eClassifiers[0]->ePackage = &p2; // the EClass instance is 
                                           // transparently moved from p to p2
        assert(p.eClassifiers.size() == 0);
        assert(p2.eClassifiers.size() == 1);

        // nothing happens
        p.eClassifiers.clear();
        assert(p.eClassifiers.size() == 0);

        // the EClass instance is still available since it's owned by p2
        assert(e == p2.eClassifiers[0]); // no copies
        assert(e->name == 2);
        assert(e->name == p2.eClassifiers[0]->name);

        // the EClass instance is deleted since it's owned by p2
    }

    return 0;
}

