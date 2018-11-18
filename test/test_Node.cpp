#include "Node.h"
#include "gtest/gtest.h"

namespace {

	// The fixture for testing class Foo.
	class NodeTest : public ::testing::Test {
	protected:
		// You can remove any or all of the following functions if its body
		// is empty.

		NodeTest()
		{
			// You can do set-up work for each test here.
		}

		~NodeTest() override
		{
			// You can do clean-up work that doesn't throw exceptions here.
		}

		// If the constructor and destructor are not enough for setting up
		// and cleaning up each test, you can define the following methods:

		void SetUp() override
		{
			// Code here will be called immediately after the constructor (right
			// before each test).
		}

		void TearDown() override
		{
			// Code here will be called immediately after each test (right
			// before the destructor).
		}

		// Objects declared here can be used by all tests in the test case for Foo.
	};

	TEST_F(NodeTest, Smoke)
	{
		Node a("a");
		Node b("b");
		Node c("b");

		EXPECT_EQ((a.name.compare(b.name)), -1);
		EXPECT_EQ((c.name.compare(b.name)), 0);
	}

	// Tests that the Foo::Bar() method does Abc.
	TEST_F(NodeTest, MethodBarDoesAbc)
	{
		const std::string input_filepath = "this/package/testdata/myinputfile.dat";
		const std::string output_filepath = "this/package/testdata/myoutputfile.dat";
		Interface i;
		//EXPECT_EQ(f.Bar(input_filepath, output_filepath), 0);
	}

	// Tests that Foo does Xyz.
	TEST_F(NodeTest, DoesXyz)
	{
		// Exercises the Xyz feature of Foo.
	}

}  // namespace

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}