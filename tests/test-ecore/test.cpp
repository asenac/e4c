#include <ecore/include.hpp>
#include <cassert>
#include <iostream>
#include <e4c/select.hpp>
#include <e4c/detail/holder.ipp>

using namespace ecore;

int main()
{
    const EcorePackage_ptr _instance =
        EcorePackage::_instance();

    EClass_ptr cl = _instance->getEClass();

    auto references = e4c::select< EReference >(cl->getEAllStructuralFeatures());

    for (auto i: references)
    {
        std::cout << i->getName() << std::endl;
    }

    e4c::holder h(e4c::create_holder(references));
    std::cout << h.is_valid() << std::endl;

    e4c::holder h2(e4c::create_holder(1));
    std::cout << h2.is_valid() << std::endl;

    std::function< e4c::holder(ecore::EObject_ptr) > get =
        [](ecore::EObject_ptr o)
        {
            EClass_ptr cl = dynamic_cast< EClass_ptr >(o);
            return e4c::create_holder(cl->getEAllStructuralFeatures());
        };

    return 0;
}

