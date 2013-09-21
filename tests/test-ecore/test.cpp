#include <ecore/include.hpp>
#include <cassert>
#include <iostream>
#include <e4c/select.hpp>

using namespace ecore;

int main()
{
    const EcorePackage_ptr _instance =
        EcorePackage::_instance();

    EClass_ptr cl = _instance->getEClass();

    auto references = e4c::select< EReference >(cl->getEAllStructuralFeatures());

    for (auto i = references.begin(); i != references.end(); ++i)
    {
        std::cout << (*i)->getName() << std::endl;
    }

    return 0;
}

