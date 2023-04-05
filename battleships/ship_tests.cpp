#include "ship.hpp"
#include <boost/test/unit_test_suite.hpp>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(Ship_Tests)

BOOST_AUTO_TEST_CASE(Is_Sunk_Tests)
{
    Ship test_vessel(0, "Carrier");
    BOOST_TEST(test_vessel.is_sunk());
    Ship test_vessel_healthy(1, "Carrier");
    BOOST_TEST(!test_vessel_healthy.is_sunk());
    test_vessel_healthy.hit();
    BOOST_TEST(test_vessel_healthy.is_sunk());
}

BOOST_AUTO_TEST_SUITE_END()