#include <ecore/include.hpp>
#include <cassert>
#include <iostream>
#include <memory>
#include <cstring>

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
        // Assumes its ownership
        p.eClassifiers.push_back(cl.release());

        assert(e->ePackage == &p);
        
        ecore::EPackage p2;
        p.eClassifiers[0]->ePackage = &p2; 
        p.eClassifiers.clear();

        assert(p.eClassifiers.size() == 0);

        // e is still available
        assert(e->name == 2);
        assert(e->name == p2.eClassifiers[0]->name);
        std::cout << p2.eClassifiers[0]->name << std::endl; 
    }

    return 0;
}

